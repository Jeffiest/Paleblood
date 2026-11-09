#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic reference holders for bb_misc_ref_holder_add_child (0x00b69e20).

usage: ref_holder_add_child_cases.py OUT_DIR

A holder whose child list has room, is full, is empty with no capacity, or has capacity flag bits
set in the top of its capacity field. A full list is grown by the scripted list-grow call, which
moves the list to a new buffer.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00b69e20'
GROW = '0x00819100'
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, count=1, capacity=4, flag_bits=0):
    """A holder with count children in a list of capacity slots; the grow call moves the list."""
    stubs = []
    if count == (capacity & 0x3fffffff):
        stubs.append({'address': GROW, 'argc': 3,
                      'writes': [{'arg': 1, 'offset': 0, 'pointer': 'grown'}]})
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
        'args': {'rdi': 'buf:holder', 'rsi': 'buf:child'},
        'buffers': {'holder': {'size': 0x60, 'bytes': 'a5' * 0x60},
                    'children': {'size': 0x20, 'bytes': 'c3' * 0x20},
                    'grown': {'size': 0x40, 'bytes': '00' * 0x40},
                    'child': {'size': 8, 'bytes': '00' * 8}},
        'memory': [{'addr': 'buf:holder+0x40', 'pointer': 'children'},
                   {'addr': 'buf:holder+0x48', 'bytes': u32(count)},
                   {'addr': 'buf:holder+0x4c', 'bytes': u32(capacity | flag_bits)}],
        'imports': [], 'stubs': stubs,
    }


CASES = [
    case('room_left', count=1, capacity=4),
    case('empty_no_capacity_grows', count=0, capacity=0),
    case('full_list_grows', count=4, capacity=4),
    case('capacity_flags_full_grows', count=4, capacity=4, flag_bits=0x80000000),
    case('capacity_flags_room_left', count=2, capacity=4, flag_bits=0xc0000000),
    case('one_below_capacity', count=3, capacity=4, flag_bits=0x40000000),
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
