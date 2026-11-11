#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cursor allocations for bb_misc_pool_cursor_allocate (0x00414be0): a direct request at
and above the threshold, granted or refused, with an empty or non-empty chain; a request the cursor
serves with room to spare or exactly the room left; a request that needs a new region, granted or
refused, with an empty or non-empty chain; and a zero-size request. The allocate slot (0x50) is a
scripted stub.

usage: pool_cursor_allocate_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00414be0'
ALLOCATE = '0x00400020'         # a real game entry the allocator's allocate slot points at
MASK64 = (1 << 64) - 1
CHAIN_SIZE = 0x20
REGION_SIZE = 0x2000
BLOCK_SIZE = 0x2000
OLD_HEAD_SIZE = 0x18
DIRECT_THRESHOLD = 0xff9
REGION_BLOCK = 0x1ff8
LINK_SIZE = 8


def quad(value):
    """An 8-byte little-endian value as hex."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, size, granted, remaining=0, cursor_in_region=True, head=False):
    """One allocation. granted says whether the allocator returns a block; remaining is the room
    left in the cursor region; cursor_in_region says the cursor points into the region; head says
    the chain already has a head node."""
    buffers = {'chain': {'size': CHAIN_SIZE, 'bytes': 'a5' * CHAIN_SIZE},
               'allocator': {'size': 8},
               'alloc_vt': {'size': 0x78},
               'block': {'size': BLOCK_SIZE, 'bytes': '5a' * BLOCK_SIZE},
               'region': {'size': REGION_SIZE, 'bytes': 'ee' * REGION_SIZE}}
    memory = [{'addr': 'buf:allocator', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc_vt+80', 'guest': ALLOCATE},
              {'addr': 'buf:chain+24', 'pointer': 'allocator'},
              {'addr': 'buf:chain+8', 'bytes': quad(remaining)}]
    if cursor_in_region:
        memory.append({'addr': 'buf:chain+0', 'pointer': 'region'})
    else:
        memory.append({'addr': 'buf:chain+0', 'bytes': '00' * 8})
    if head:
        buffers['old_head'] = {'size': OLD_HEAD_SIZE, 'bytes': '3c' * OLD_HEAD_SIZE}
        memory.append({'addr': 'buf:chain+16', 'pointer': 'old_head'})
        memory.append({'addr': 'buf:old_head+0', 'bytes': '00' * 8})
    else:
        memory.append({'addr': 'buf:chain+16', 'bytes': '00' * 8})
    ret ='buf:block' if granted else 0
    stubs = [{'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': ret}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:chain', 'rsi': hex(size & MASK64)},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('direct_granted_with_head', size=0x1000, granted=True, head=True),
    case('direct_granted_empty_chain', size=DIRECT_THRESHOLD, granted=True),
    case('direct_refused', size=0x2000, granted=False, head=True),
    case('cursor_fits_with_room', size=0x20, granted=True, remaining=0x100),
    case('cursor_fits_exact_room', size=0x40, granted=True, remaining=0x40),
    case('cursor_zero_size', size=0, granted=True, remaining=0x10),
    case('region_refused', size=0x40, granted=False, remaining=0x10),
    case('region_granted_with_head', size=0x40, granted=True, remaining=0x10, head=True),
    case('region_granted_empty_no_room', size=0x40, granted=True, remaining=0, cursor_in_region=False),
    case('region_granted_just_below_threshold', size=DIRECT_THRESHOLD - 1, granted=True, remaining=0),
]


def main():
    """Write deterministic synthetic input for the cases above."""
    if len(sys.argv) != 2:
        print(__doc__)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
