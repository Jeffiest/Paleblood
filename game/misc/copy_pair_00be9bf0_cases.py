#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pair tables for bb_misc_copy_pair_00be9bf0 (0x00be9bf0).

usage: copy_pair_00be9bf0_cases.py OUT_DIR

Tables of four 16-byte records, with the count and index at the edges: the first and last valid
index, one past the end, an empty table (its unsigned count minus one accepts index zero), a single
record, and large indices. The output is pre-filled, so a failing call that wrote it would show. The
out-of-range cases stub the four report calls in their call order.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00be9bf0'
INIT_BUILDER = '0x00819350'
APPEND = '0x00825170'
REPORT = '0x00819800'
DESTROY_BUILDER = '0x00819460'
RECORD_COUNT = 4
RECORDS_OFFSET = 0x40
COUNT_OFFSET = 0x48
TABLE_BYTES = 0x50
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def records_bytes():
    """Four 16-byte records, distinct in both halves."""
    out = b''
    for k in range(RECORD_COUNT):
        out += struct.pack('<Q', (0x7000 + k * 0x20 + 1) & MASK64) + struct.pack('<Q', 0x1000 + k * 0x11)
    return out.hex()


def case(cid, count, index):
    """count: the table's record count; index: the record asked for."""
    valid = index <= ((count - 1) & MASK32)
    memory = [{'addr': f'buf:table+{hex(RECORDS_OFFSET)}', 'pointer': 'records'},
              {'addr': f'buf:table+{hex(COUNT_OFFSET)}', 'bytes': u32(count)}]
    stubs = []
    if not valid:
        stubs = [{'address': INIT_BUILDER, 'argc': 3},
                 {'address': APPEND, 'argc': 2},
                 {'address': REPORT, 'argc': 4},
                 {'address': DESTROY_BUILDER, 'argc': 1}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:table', 'rsi': hex(index & MASK32), 'rdx': 'buf:output'},
            'buffers': {'table': {'size': TABLE_BYTES, 'bytes': '00' * TABLE_BYTES},
                        'records': {'size': 16 * RECORD_COUNT, 'bytes': records_bytes()},
                        'output': {'size': 16, 'bytes': 'a5' * 16}},
            'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('first_record', count=3, index=0),
    case('last_record', count=3, index=2),
    case('one_past_the_end', count=3, index=3),
    case('single_record', count=1, index=0),
    case('single_record_past_the_end', count=1, index=1),
    case('empty_table_accepts_zero', count=0, index=0),
    case('index_all_high_bits', count=3, index=0xffffffff),
    case('signed_high_index_past_the_end', count=2, index=0x7fffffff),
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
