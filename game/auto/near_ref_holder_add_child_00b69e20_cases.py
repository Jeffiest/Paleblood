#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for a function that appends to a list the holder keeps (a template:
near_cases.py puts the list's three offsets in place of the slot names and the addresses of the
function in place of the ones below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

A holder whose list has room, is full, is empty with no capacity, or has capacity flag bits set in
the top of its capacity field. A full list is grown by the scripted list-grow call, which moves the
list to a new buffer. The holder reaches past the list's fields and is filled with other bytes.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00b69e20'
GROW = '0x00819100'
ELEMENTS_FIELD = NEAR_SLOT_3
COUNT_FIELD = NEAR_SLOT_0
CAPACITY_FIELD = NEAR_SLOT_2
HOLDER_BYTES = max(ELEMENTS_FIELD, COUNT_FIELD, CAPACITY_FIELD) + 0x20
CAPACITY_MASK = 0x3fffffff
MASK32 = (1 << 32) - 1


def u32(value):
    """Encode a complete four-byte value."""
    return struct.pack('<I', value & MASK32).hex()


def case(cid, count=1, capacity=4, flag_bits=0):
    """A holder with count elements in a list of capacity slots; the grow call moves the list."""
    stubs = []
    if count == (capacity & CAPACITY_MASK):
        stubs.append({'address': GROW, 'argc': 3,
                      'writes': [{'arg': 1, 'offset': 0, 'pointer': 'grown'}]})
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
        'args': {'rdi': 'buf:holder', 'rsi': 'buf:child'},
        'buffers': {'holder': {'size': HOLDER_BYTES, 'bytes': 'a5' * HOLDER_BYTES},
                    'children': {'size': 0x20, 'bytes': 'c3' * 0x20},
                    'grown': {'size': 0x40, 'bytes': '00' * 0x40},
                    'child': {'size': 8, 'bytes': '00' * 8}},
        'memory': [{'addr': f'buf:holder+{ELEMENTS_FIELD:#x}', 'pointer': 'children'},
                   {'addr': f'buf:holder+{COUNT_FIELD:#x}', 'bytes': u32(count)},
                   {'addr': f'buf:holder+{CAPACITY_FIELD:#x}', 'bytes': u32(capacity | flag_bits)}],
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
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
