#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic item tables and request sources for bb_misc_query_each_table_item_kind1 (0x01e54d80).

usage: misc_query_each_table_item_kind1_cases.py OUT_DIR

The global table pointer leads to a count and an entries pointer. Entries are 0xd8 bytes apart and
each is passed with the query record (kind 1, flag 1, source value, index -1, record size 0x14).
Covers a null source, counts zero, negative and one to three, and the value's bit patterns.
"""
import json
import os
import struct
import sys

ADDRESS = '0x01e54d80'
QUERY = '0x016e5320'
# A missing table is reported by name, then the table is read again as null and its count is loaded.
UNREACHABLE = {'0x01e54ddb': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x01e54e01')}
ENTRY = 0xd8
ENTRIES_BYTES = ENTRY * 4
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, source=True, count=0, value=0x12345678):
    """One call: the query is built from the value and passed once per entry, in order."""
    buffers = {
        'request': {'size': 16},
        'source': {'size': 16, 'bytes': '00' * 8 + u32(value)},
        'table': {'size': 0x30, 'bytes': '00' * 0x20 + u32(count) + '00' * 4},
        'entries': {'size': ENTRIES_BYTES},
    }
    memory = [{'addr': 'buf:table+40', 'pointer': 'entries'},
              {'addr': '0x0593b0a0', 'pointer': 'table'}]
    if source:
        memory.append({'addr': 'buf:request+8', 'pointer': 'source'})
    stubs = []
    if source:
        for _ in range(max(count, 0)):
            stubs.append({'address': QUERY, 'argc': 2,
                          'argmem': [{'arg': 1, 'size': 20}]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:request'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('null_source_returns_at_once', source=False, count=2),
    case('count_zero_no_query', count=0),
    case('count_negative_no_query', count=-1),
    case('count_one_single_entry', count=1),
    case('count_three_in_order', count=3),
    case('value_high_bit', count=2, value=0x80000000),
    case('value_zero', count=1, value=0),
    case('value_all_ones', count=2, value=MASK32),
]


def main():
    """Write one JSON case per scenario into the output directory."""
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
