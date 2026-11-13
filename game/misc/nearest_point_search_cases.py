#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_nearest_point_search (0x00f6bcb0).

usage: nearest_point_search_cases.py OUT_DIR

The point set holds a count at +0x1c and its points from +0x70, four floats each; the search keeps the
squared distance (x, y, z only) of each of four lanes and takes the index of the nearest. Cases put the
nearest point at every lane and group, use equal distances, a w lane that must be ignored, NaN
coordinates, negative coordinates, and counts of 0 to 4 (no loop), 5, 8 and 9 (one and two passes).
"""
import json
import math
from pathlib import Path
import random
import struct
import sys

ADDRESS = '0x00f6bcb0'
POINT_BASE = 0x70
MAX_POINTS = 24


def floats(values):
    """Little-endian bytes of single floats."""
    return b''.join(struct.pack('<f', v) for v in values)


def case(cid, count, points, position=(1.0, 2.0, 3.0, 9.0)):
    """points: a list of (x, y, z, w); the set buffer holds MAX_POINTS of them."""
    data = bytearray(b'\xa5' * (POINT_BASE + 16 * MAX_POINTS))
    data[0x1c:0x20] = struct.pack('<i', count)
    for index in range(MAX_POINTS):
        value = points[index] if index < len(points) else (7.0 + index, 8.0, 9.0, 0.0)
        data[POINT_BASE + 16 * index:POINT_BASE + 16 * index + 16] = floats(value)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:set', 'rsi': 'buf:position', 'rdx': 'buf:out'},
            'buffers': {'set': {'size': len(data), 'bytes': data.hex()},
                        'position': {'size': 16, 'bytes': floats(position).hex()},
                        'out': {'size': 16, 'bytes': 'c3' * 16}},
            'memory': [], 'imports': [], 'stubs': []}


def spread(nearest, count, offset=0.0):
    """Points far from the position (1, 2, 3) except the nearest one."""
    points = []
    for index in range(MAX_POINTS):
        far = 5.0 + index * 0.5 + offset
        points.append((far, far, far, 100.0 + index))
    points[nearest] = (1.5, 2.5, 3.5, -4.0)
    return points


CASES = []
for count in (0, 1, 3, 4):
    CASES.append(case(f'count_{count}', count, spread(count - 1 if count else 0, count)))
CASES.append(case('count_4_nearest_lane_2', 4, spread(2, 4)))
CASES.append(case('count_5_nearest_group_1', 5, spread(4, 5)))
CASES.append(case('count_5_nearest_group_0', 5, spread(1, 5)))
CASES.append(case('count_8_nearest_last', 8, spread(7, 8)))
CASES.append(case('count_8_nearest_lane_1_group_1', 8, spread(5, 8)))
CASES.append(case('count_9_nearest_ninth', 9, spread(8, 9)))
CASES.append(case('count_9_nearest_first', 9, spread(0, 9)))
CASES.append(case('count_12_nearest_group_2', 12, spread(10, 12)))
CASES.append(case('count_13_nearest_lane_3', 13, spread(11, 13)))
CASES.append(case('count_16_nearest_group_3', 16, spread(14, 16)))
CASES.append(case('count_6_beyond_count_is_read', 6, spread(7, 6)))
tie = [(2.0, 2.0, 3.0, 0.0)] * MAX_POINTS
CASES.append(case('all_equal_8', 8, tie))
CASES.append(case('all_equal_5', 5, tie))
CASES.append(case('all_equal_13', 13, tie))
CASES.append(case('negative_count', -3, spread(2, 4)))
random.seed(7)
for number in range(4):
    pts = [tuple(random.uniform(-4.0, 6.0) for _ in range(4)) for _ in range(MAX_POINTS)]
    CASES.append(case(f'random_{number}', 5 + number * 3, pts, position=(0.5, -1.0, 2.0, 5.0)))
nan = float('nan')
nan_points = spread(3, 9)
nan_points[1] = (nan, 0.0, 0.0, 0.0)
nan_points[6] = (0.0, nan, 0.0, 0.0)
CASES.append(case('nan_points', 9, nan_points))
CASES.append(case('nan_position', 9, spread(2, 9), position=(nan, 0.0, 0.0, 0.0)))
w_points = spread(2, 9)
w_points = [(x, y, z, 1.0e30) for x, y, z, _ in w_points]
CASES.append(case('w_lane_ignored', 9, w_points, position=(1.0, 2.0, 3.0, -1.0e30)))
CASES.append(case('infinite_points', 9, [(math.inf, 0.0, 0.0, 0.0)] * 3 + spread(5, 9)[3:]))


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
