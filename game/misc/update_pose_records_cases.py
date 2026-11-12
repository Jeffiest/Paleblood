#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_update_pose_records (0x00f24590).

usage: update_pose_records_cases.py OUT_DIR

The function resets the pool's record count, measures the source's direction vector (x, y, z lanes;
the w lane must be ignored) and adds five records through two stubbed fillers and a stubbed pool add.
Each case gives a direction and a scale; the measured length reaches the filler as a float argument
and so is compared bit for bit, including the zero result for a non-positive squared length.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00f24590'
FILL = '0x00f28900'
ADD = '0x00f247b0'
GUARD = '0x057e3be0'
SOURCE_BYTES = 0x5c0
DIRECTION = 0x5b0
SCALE = 0x3c0
POOL_BYTES = 0x40
KIND_COUNT = 5


def floats(*values):
    """Little-endian bytes of single floats."""
    return b''.join(struct.pack('<f', v) for v in values)


def case(cid, direction, scale=1.5, count=0x55555555):
    """direction: four floats at +0x5b0; scale: the float at +0x3c0; count: the pool's prior record count."""
    source = bytearray([0xa5]) * SOURCE_BYTES
    source[DIRECTION:DIRECTION + 16] = floats(*direction)
    source[SCALE:SCALE + 4] = floats(scale)
    pool = bytearray([0x5a]) * POOL_BYTES
    pool[0x30:0x34] = struct.pack('<I', count)
    fill = {'address': FILL, 'argc': 2, 'argi': [], 'argu32': [1], 'argf32': [0, 1]}
    add = {'address': ADD, 'argc': 2, 'argi': [0]}
    stubs = []
    for _ in range(KIND_COUNT):
        stubs += [dict(fill), dict(fill), dict(add)]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:pool', 'rsi': 'buf:source'},
            'buffers': {'guard': {'size': 8, 'bytes': 'c3' * 8},
                        'pool': {'size': POOL_BYTES, 'bytes': pool.hex()},
                        'source': {'size': SOURCE_BYTES, 'bytes': source.hex()}},
            'memory': [{'addr': GUARD, 'pointer': 'guard'}], 'imports': [], 'stubs': stubs}


CASES = [
    case('zero_direction', (0.0, 0.0, 0.0, 9.0)),
    case('unit_x', (1.0, 0.0, 0.0, 0.0)),
    case('three_four_five', (3.0, 4.0, 0.0, 100.0), scale=2.0),
    case('all_axes', (1.0, 2.0, 3.0, 0.0)),
    case('negative_axes', (-1.5, 2.5, -3.5, -7.0), scale=-0.25),
    case('w_lane_ignored', (0.25, 0.5, 0.75, 1.0e30)),
    case('large_values', (1.0e18, -2.0e18, 3.0e18, 0.0)),
    case('tiny_values', (1.0e-30, 2.0e-30, 3.0e-30, 0.0)),
    case('denormal_values', (1.0e-40, 0.0, 0.0, 0.0)),
    case('nan_lane', (float('nan'), 1.0, 1.0, 1.0)),
    case('infinite_lane', (float('inf'), 1.0, 1.0, 1.0)),
    case('count_already_zero', (2.0, 0.0, 0.0, 0.0), count=0),
]


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
