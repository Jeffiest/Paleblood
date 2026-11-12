#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_rebalance_cluster_centers (0x00f6b990).

usage: rebalance_cluster_centers_cases.py OUT_DIR

The cluster set holds a count (+0x1c), a total (+0x24), the points per cluster (+0x28) and the centers
(+0x70). Each case gives the per-row cluster sums (x, y, z, points), split between the rows, and the
memset of the working totals (0x02fbe688) is a stub that writes zeros into them. Cases cover no and
negative cluster counts, no rows, equal and unequal point counts, a fold of the smallest into the
largest, a split of the largest below, at and above its threshold, points whose low half is zero but
whose full value is not, negative points, large sums that round when turned into floats, and the full
sixteen clusters.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00f6b990'
MEMSET = '0x02fbe688'
SET_SIZE = 0x70 + 16 * 16
CLUSTER_BYTES = 0x20
ROW_BYTES = 0x200


def floats(values):
    """Little-endian bytes of single floats."""
    return b''.join(struct.pack('<f', v) for v in values)


def case(cid, clusters, rows=2, count=None, scale=(1.5, 0.5, 2.0, 1.25), offset=(0.25, -1.0, 3.0, 0.5)):
    """clusters: totals (x, y, z, points) per cluster, shared out over the rows by halves."""
    if count is None:
        count = len(clusters)
    set_bytes = bytearray(b'\x5a' * SET_SIZE)
    set_bytes[0x1c:0x20] = struct.pack('<i', count)
    row_bytes = bytearray(b'\xc7' * (ROW_BYTES * max(rows, 1)))
    for row in range(rows):
        for index in range(16):
            start = row * ROW_BYTES + index * CLUSTER_BYTES
            row_bytes[start:start + CLUSTER_BYTES] = b'\x00' * CLUSTER_BYTES
    for index, total in enumerate(clusters):
        first = [value // 2 for value in total]
        rest = [value - part for value, part in zip(total, first)]
        parts = [first, rest] + [[0, 0, 0, 0]] * max(0, rows - 2)
        for row in range(rows):
            start = row * ROW_BYTES + index * CLUSTER_BYTES
            row_bytes[start:start + CLUSTER_BYTES] = struct.pack('<4q', *parts[row])
    transform = bytearray(b'\x3c' * 0x40)
    transform[0:16] = floats(offset)
    transform[0x30:0x40] = floats(scale)
    memset_bytes = 0 if count <= 0 else CLUSTER_BYTES * count
    stubs = []
    if count > 0:
        stubs.append({'address': MEMSET, 'argc': 3,
                      'writes': [{'arg': 0, 'offset': 0, 'bytes': '00' * memset_bytes}]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:set', 'rsi': 'buf:rows', 'rdx': hex(rows), 'rcx': 'buf:transform'},
            'buffers': {'set': {'size': SET_SIZE, 'bytes': set_bytes.hex()},
                        'rows': {'size': len(row_bytes), 'bytes': row_bytes.hex()},
                        'transform': {'size': 0x40, 'bytes': transform.hex()}},
            'memory': [], 'imports': [], 'stubs': stubs}


def many(points):
    """Clusters with distinct sums for the given point counts."""
    return [(1000 * (index + 1) - 17, -300 * index + 5, 77 * index * index, count)
            for index, count in enumerate(points)]


CASES = [
    case('no_clusters', [], rows=2, count=0),
    case('negative_cluster_count', many([4, 5]), rows=1, count=-2),
    case('one_cluster_no_rows', many([5]), rows=0),
    case('one_cluster_one_row', many([5]), rows=1),
    case('one_cluster_equal_to_wanted', many([9]), rows=2),
    case('two_rows_split_largest', many([100, 40, 0, 9])),
    case('fold_smallest_into_largest', many([1, 1, 1, 1])),
    case('fold_ties_prefer_lowest', many([2, 7, 2, 7, 2])),
    case('below_threshold_no_split', many([14, 0, 0, 14])),
    case('at_threshold_split', many([15, 0, 0, 15])),
    case('above_threshold_split_odd', many([0, 31, 0, 0, 20, 0])),
    case('filled_equals_wanted', many([10, 10, 10, 0])),
    case('all_empty', many([0, 0, 0])),
    case('low_half_zero_points', [(4, 5, 6, 1 << 32), (7, 8, 9, 3)]),
    case('negative_points', [(40, 50, 60, -5), (7, 8, 9, 8), (1, 2, 3, 0)]),
    case('large_sums_round', [((1 << 62) + 1, -(1 << 61) - 3, (1 << 53) + 1, 7), (3, 3, 3, 30)]),
    case('negative_sums', [(-5000, -6000, -7000, 25), (0, 0, 0, 25)]),
    case('sixteen_clusters', many([3, 0, 40, 5, 0, 6, 7, 0, 90, 1, 1, 20, 0, 0, 4, 30])),
    case('sixteen_all_filled_fold', many([1] * 16)),
    case('three_rows', many([60, 0, 5, 0]), rows=3),
    case('one_row_only', many([60, 0, 5, 0]), rows=1),
    case('cluster_count_larger_than_data', many([8, 8]), rows=2, count=3),
    case('wanted_capped_by_cluster_count', many([200, 100]), rows=2),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
