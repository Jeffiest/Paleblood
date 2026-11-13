#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic text objects for misc_init_scratch_text_02265a80 (0x02265a80), for tools/verify.py run.

usage: init_scratch_text_cases.py OUT_DIR

The record filler (0x016e6cf0) is a stub that writes the record's block pointer, capacity, allocator and flag
into the stack record it is given. The copy (0x02a38fa0) is a stub. The record's block is freed through its
allocator's slot 0x70 only when its capacity is eight bytes or more. Covers small and heap-held capacities
at and around the threshold, the top bit of the capacity, and both flag values.
"""
import json
import os
import struct
import sys

ADDRESS = '0x02265a80'
FILL_RECORD = '0x016e6cf0'
COPY_TEXT = '0x02a38fa0'
FREE = '0x004000a0'
OBJECT_SIZE = 0x40
ALLOC_VT_SIZE = 0x80
MASK64 = (1 << 64) - 1
HEAP_THRESHOLD = 8


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, capacity, flag):
    buffers = {'obj': {'size': OBJECT_SIZE, 'bytes': 'cd' * OBJECT_SIZE},
               'data': {'size': 0x40}, 'alloc': {'size': 0x10}, 'alloc_vt': {'size': ALLOC_VT_SIZE}}
    memory = [{'addr': 'buf:alloc+0x0', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+0x70', 'guest': FREE}]
    stubs = [{'address': FILL_RECORD, 'argc': 4,
              'writes': [{'arg': 0, 'offset': 0x08, 'pointer': 'data'},
                         {'arg': 0, 'offset': 0x20, 'bytes': word(capacity)},
                         {'arg': 0, 'offset': 0x28, 'pointer': 'alloc'},
                         {'arg': 0, 'offset': 0x30, 'bytes': f'{flag:02x}'}]},
             {'address': COPY_TEXT, 'argc': 4}]
    if capacity >= HEAP_THRESHOLD:
        stubs.append({'address': FREE, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:obj'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('capacity_zero', 0, 0),
    case('capacity_seven_flag_set', 7, 1),
    case('capacity_eight_frees_block', 8, 0),
    case('capacity_large_frees_block', 0x40, 1),
    case('capacity_top_bit_frees_block', 1 << 63, 0),
    case('capacity_one_small', 1, 1),
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
