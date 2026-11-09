#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic item tables, request sources and packed bytes for bb_misc_query_each_table_item_kind3_packed (0x01e54e60).

usage: misc_query_each_table_item_kind3_packed_cases.py OUT_DIR

The global table pointer leads to a count and an entries pointer. Entries are 0xd8 bytes apart and
each is passed with a 0x18-byte query record: kind 3, flag 1, source value, index -1, record size
0x18, and the packed byte at 0x14 (the second argument shifted left one bit, ORed with the first).
Covers a null source, counts zero, one and two, the bit patterns of the packed byte, and register
bits above the low byte, which the function ignores.
"""
import json
import os
import struct
import sys

ADDRESS = '0x01e54e60'
QUERY = '0x016e5320'
# A missing table is reported by name, then the table is read again as null and its count is loaded.
UNREACHABLE = {'0x01e54ec3': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x01e54ee9')}
ENTRY = 0xd8
ENTRIES_BYTES = ENTRY * 4
MASK32 = (1 << 32) - 1
RECORD_COMPARED = 0x15


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, source=True, count=1, value=0x12345678, first=0x00, second=0x00, rsi_high=0, rdx_high=0):
    """One call: the packed byte is the second byte shifted left one bit, ORed with the first byte."""
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
                          'argmem': [{'arg': 1, 'size': RECORD_COMPARED}]})
    args = {'rdi': 'buf:request', 'rsi': hex(rsi_high | first), 'rdx': hex(rdx_high | second)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': args, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('null_source_returns_at_once', source=False, count=2),
    case('count_zero_no_query', count=0),
    case('count_negative_no_query', count=-1),
    case('count_one_single_entry', count=1, first=0x01, second=0x02),
    case('count_two_in_order', count=2, first=0x03, second=0x04),
    case('packed_zero', count=1),
    case('packed_all_ones', count=1, first=0xff, second=0xff),
    case('second_high_bit_shifted_out', count=1, first=0x00, second=0x80),
    case('first_high_bit_kept', count=1, first=0x80, second=0x00),
    case('upper_register_bits_ignored', count=2, first=0x05, second=0x06,
         rsi_high=0x1234560000, rdx_high=0xabcdef0000),
    case('value_high_bit', count=1, first=0x07, second=0x09, value=0x80000000),
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
