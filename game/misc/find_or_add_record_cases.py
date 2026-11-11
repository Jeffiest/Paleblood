#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_find_or_add_record (0x00cb1090), for tools/verify.py run.

usage: find_or_add_record_cases.py OUT_DIR

Key index 1 throughout. Cases: the key already has a record (returned, nothing added); a new record
with no growth and no values; a new record when the records array is full (its growth stub moves the
data); values appended from the key's row; values appended when the values array must grow (the
capacity doubles or reaches the count); a negative extra count, which lowers the value count and copies
nothing. The growth functions (0x00819100, 0x00819040) are stubs that move the data to a new buffer.
The function returns a record address in RAX.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00cb1090'
GROW_RECORDS = '0x00819100'     # the records growth: stubbed (a real game entry)
GROW_VALUES = '0x00819040'      # the value array reservation: stubbed (a real game entry)
LIST_TAG = '0x058018b0'
KEY = 1
RECORD_BYTES = 0x14
RECORD_CAPACITY_MASK = 0x3fffffff
RECORDS_SIZE = RECORD_BYTES * 8


def i32(*values):
    """Little-endian 32-bit values as hex."""
    return struct.pack(f'<{len(values)}i', *values).hex()


def u32(value):
    """One little-endian 32-bit word as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, slot_value, records_count, records_capacity, extra, values_count=0, values_capacity=8,
         records_grow=False, values_grow=False):
    """slot_value: the key's index-table entry (-1 for none); extra: the stack argument, the count of values."""
    buffers = {'source': {'size': RECORD_BYTES * 4, 'bytes': 'c5' * (RECORD_BYTES * 4)},
               'records': {'size': 16}, 'records_data': {'size': RECORDS_SIZE},
               'records_new': {'size': RECORDS_SIZE * 2, 'bytes': '7e' * (RECORDS_SIZE * 2)},
               'slots': {'size': 16, 'bytes': i32(-1, slot_value, -1, -1)},
               'slots_ref': {'size': 8},
               'rows': {'size': 0x80, 'bytes': i32(*range(32))},
               'values': {'size': 16},
               'values_data': {'size': 0x40, 'bytes': i32(*range(100, 116))},
               'values_new': {'size': 0x100, 'bytes': '6d' * 0x100}}
    memory = [{'addr': 'buf:records+0', 'pointer': 'records_data'},
              {'addr': 'buf:records+8', 'bytes': u32(records_count)},
              {'addr': 'buf:records+12', 'bytes': u32(records_capacity)},
              {'addr': 'buf:slots_ref+0', 'pointer': 'slots'},
              {'addr': 'buf:values+0', 'pointer': 'values_data'},
              {'addr': 'buf:values+8', 'bytes': u32(values_count)},
              {'addr': 'buf:values+12', 'bytes': u32(values_capacity)}]
    stubs = []
    if records_grow:
        stubs.append({'address': GROW_RECORDS, 'argc': 3, 'argi': [0, 1, 2],
                      'writes': [{'arg': 1, 'offset': 0, 'pointer': 'records_new', 'size': 8}]})
    if values_grow:
        new_capacity = max(values_capacity * 2, values_count + extra)
        stubs.append({'address': GROW_VALUES, 'argc': 4, 'argi': [0, 1, 2, 3],
                      'writes': [{'arg': 1, 'offset': 0, 'pointer': 'values_new', 'size': 8},
                                 {'arg': 1, 'offset': 12, 'bytes': u32(new_capacity), 'size': 4}]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:source', 'rsi': 'buf:records', 'rdx': 'buf:rows', 'rcx': 'buf:values',
                     'r8': 'buf:slots_ref', 'r9': KEY},
            'stack': [extra],
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('existing_record_returned', slot_value=0, records_count=2, records_capacity=4, extra=2,
         values_count=1),
    case('new_record_no_values', slot_value=-1, records_count=1, records_capacity=4, extra=0),
    case('new_record_records_grow', slot_value=-1, records_count=4, records_capacity=4, extra=0,
         records_grow=True),
    case('new_record_values_appended', slot_value=-1, records_count=1, records_capacity=4, extra=2,
         values_count=1, values_capacity=8),
    case('new_record_values_grow_double', slot_value=-1, records_count=1, records_capacity=4, extra=3,
         values_count=2, values_capacity=3, values_grow=True),
    case('new_record_values_grow_to_count', slot_value=-1, records_count=1, records_capacity=4, extra=5,
         values_count=1, values_capacity=2, values_grow=True),
    case('new_record_negative_extra', slot_value=-1, records_count=1, records_capacity=4, extra=-1,
         values_count=2, values_capacity=4),
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
