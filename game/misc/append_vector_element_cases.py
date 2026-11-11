#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic appends for bb_misc_append_vector_element (0x01895250).

usage: append_vector_element_cases.py OUT_DIR

The vector holds 0xd8-byte elements. The reserve call (0x02b26330) is a scripted stub that moves the storage
to a new block and writes the vector's begin, end and capacity; the construct call (0x010832c0) is a stub that
only receives its destination and source. Covers an append with room, an append to a full vector (growth from
an empty vector included), an element stored in the vector itself with and without growth, an element before
the first stored one, and the null end pointers the original tests.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01895250'
RESERVE = '0x02b26330'
CONSTRUCT = '0x010832c0'
ELEMENT = 0xd8
STORAGE = 0x800
MAX_ELEMENTS = 0x012f684bda12f684


def grown(count):
    """The capacity the growth policy picks for a vector holding count elements."""
    half = count >> 1
    needed = count + 1
    value = count + half if (MAX_ELEMENTS - half) >= count else 0
    return max(value, needed)


def case(cid, end, capacity, value, reserve=False, new_count=None, begin_offset=0,
         end_null=False, reserve_end_null=False):
    """end and capacity: element counts from the start of the storage (begin_offset bytes in); value: 'outside'
    for a separate element, 'below' for the element before the first stored one, or an element index inside
    the storage. reserve: the vector is full and the reserve stub moves the storage to a new block holding
    new_count elements. end_null: the end pointer starts null. reserve_end_null: the reserve stub leaves it null."""
    buffers = {'vector': {'size': 0x20},
               'stored': {'size': STORAGE, 'bytes': 'e5' * STORAGE},
               'value': {'size': ELEMENT, 'bytes': 'a1' * ELEMENT}}
    if capacity == 0 and begin_offset == 0:
        memory = [{'addr': f'buf:vector+{offset}', 'bytes': '00' * 8} for offset in (8, 16, 24)]
    else:
        memory = [{'addr': 'buf:vector+8', 'pointer': f'stored+{begin_offset}'},
                  {'addr': 'buf:vector+24', 'pointer': f'stored+{begin_offset + ELEMENT * capacity}'}]
        if end_null:
            memory.append({'addr': 'buf:vector+16', 'bytes': '00' * 8})
        else:
            memory.append({'addr': 'buf:vector+16', 'pointer': f'stored+{begin_offset + ELEMENT * end}'})
    if value == 'outside':
        source = 'buf:value'
    elif value == 'below':
        source = 'buf:stored+0'
    else:
        source = f'buf:stored+{begin_offset + ELEMENT * value}'
    stubs = []
    if reserve:
        buffers['newblock'] = {'size': ELEMENT * new_count, 'bytes': 'b2' * ELEMENT * new_count}
        end_write = ({'arg': 0, 'offset': 16, 'bytes': '00' * 8} if reserve_end_null else
                     {'arg': 0, 'offset': 16, 'pointer': f'newblock+{ELEMENT * end}'})
        writes = [{'arg': 0, 'offset': 8, 'pointer': 'newblock'}, end_write,
                  {'arg': 0, 'offset': 24, 'pointer': f'newblock+{ELEMENT * new_count}'}]
        stubs.append({'address': RESERVE, 'argc': 2, 'argi': [0, 1], 'writes': writes})
    stubs.append({'address': CONSTRUCT, 'argc': 2, 'argi': [0, 1]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:vector', 'rsi': source},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('append_with_room', end=1, capacity=4, value='outside'),
    case('append_full_grows', end=3, capacity=3, value='outside', reserve=True, new_count=grown(3)),
    case('append_from_empty_grows', end=0, capacity=0, value='outside', reserve=True, new_count=grown(0)),
    case('append_stored_element_with_room', end=3, capacity=4, value=1),
    case('append_stored_element_full_grows', end=3, capacity=3, value=1, reserve=True, new_count=grown(3)),
    case('append_element_before_first_stored', end=2, capacity=4, value='below', begin_offset=0x100),
    case('append_null_end_with_capacity', end=0, capacity=2, value='outside', end_null=True),
    case('append_stored_full_reserve_end_null', end=2, capacity=2, value=0, reserve=True,
         new_count=grown(2), reserve_end_null=True),
    case('append_first_stored_full_grows', end=3, capacity=3, value=0, reserve=True, new_count=grown(3)),
    case('append_end_position_full_grows', end=3, capacity=3, value=3, reserve=True, new_count=grown(3)),
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
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
