#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_name_pair_first_text_013b95b0 (0x013b95b0), for tools/verify.py run.

usage: name_pair_first_text_cases.py OUT_DIR

The function returns the first name's characters: the inline buffer while the capacity is below 8, the heap
pointer from 8 up (the capacity is compared unsigned, so the top bit counts as large). Each case gives the
first name a capacity, a length and a heap pointer; the second name is filled with other bytes so a wrong
offset shows up in the result.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013b95b0'
OBJECT_BYTES = 0x88
# First name: the heap pointer at +0x18, the capacity at +0x30 (the name is at +0x10).
HEAP_OFFSET = 0x18
CAPACITY_OFFSET = 0x30
LENGTH_OFFSET = 0x28


def u64(v):
    return struct.pack('<Q', v & (2 ** 64 - 1)).hex()


def case(cid, capacity, length, heap_name=True):
    b = {'object': {'size': OBJECT_BYTES, 'bytes': 'ee' * OBJECT_BYTES},
         'heap': {'size': 0x40, 'bytes': '55' * 0x40}}
    m = [{'addr': f'buf:object+{LENGTH_OFFSET:#x}', 'bytes': u64(length)},
         {'addr': f'buf:object+{CAPACITY_OFFSET:#x}', 'bytes': u64(capacity)}]
    if heap_name:
        m.append({'addr': f'buf:object+{HEAP_OFFSET:#x}', 'pointer': 'heap'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object'}, 'buffers': b, 'memory': m, 'stubs': [], 'imports': []}


CASES = [
    case('inline_empty', capacity=7, length=0, heap_name=False),
    case('inline_full', capacity=7, length=7, heap_name=False),
    case('capacity_just_below_heap', capacity=7, length=3),
    case('heap_at_threshold', capacity=8, length=3),
    case('heap_long', capacity=0x40, length=0x21),
    case('heap_capacity_top_bit', capacity=1 << 63, length=0x10),
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
