#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_release_tracked_object (0x02716770), for tools/verify.py run.

usage: release_tracked_object_cases.py OUT_DIR

The record's state word at +0x8 decides everything: when it is clear the function returns at once,
leaving the record and the object alone; when it is set, the object's release slot (vtable +0x70,
pointing at a stub) is called with the object, and the words at +0x18, +0x10 and +0x8 are cleared.
The function returns nothing (its only callers are through pointers and read no RAX), so every case
sets 'returns': 'void'.
"""
import json
import os
import sys

ADDRESS = '0x02716770'
RELEASE = '0x00400020'
RECORD_SIZE = 0x28
OBJECT_VT_SIZE = 0x78
RELEASE_SLOT = 0x70


def u64(value):
    return (value & ((1 << 64) - 1)).to_bytes(8, 'little').hex()


def case(cid, state, first=0x1111222233334444, second=0x5555666677778888):
    """One call on a record holding the given words and an object whose release slot is stubbed."""
    memory = [
        {'addr': f'buf:record+{0x8}', 'bytes': u64(state)},
        {'addr': f'buf:record+{0x10}', 'bytes': u64(first)},
        {'addr': f'buf:record+{0x18}', 'bytes': u64(second)},
        {'addr': f'buf:record+{0x20}', 'pointer': 'object'},
        {'addr': 'buf:object', 'pointer': 'object_vt'},
        {'addr': f'buf:object_vt+{RELEASE_SLOT}', 'guest': RELEASE},
    ]
    stubs = [{'address': RELEASE, 'argc': 1, 'argi': [0]}] if state != 0 else []
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:record'},
            'buffers': {'record': {'size': RECORD_SIZE}, 'object': {'size': 16},
                        'object_vt': {'size': OBJECT_VT_SIZE}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('clear_state_keeps_words', state=0),
    case('clear_state_zero_words', state=0, first=0, second=0),
    case('set_state_releases_and_clears', state=1),
    case('set_state_zero_words', state=1, first=0, second=0),
    case('set_state_all_ones', state=0xffffffffffffffff, first=0xffffffffffffffff, second=0xffffffffffffffff),
    case('set_state_high_bit', state=0x8000000000000000),
]


def main():
    """Write one JSON case per record shape to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for fixture in CASES:
        with open(os.path.join(sys.argv[1], fixture['id'] + '.json'), 'w') as stream:
            json.dump(fixture, stream, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
