#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic lookup tables for bb_misc_lookup_second_word (0x00be3200).

usage: lookup_second_word_cases.py OUT_DIR

Tables of four entries, with the count and index at the edges: the first and last valid index, one
past the end, an empty table (its unsigned count minus one accepts index zero), a single entry, and
a large index. Out-of-range cases stub the four report calls in their call order.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00be3200'
INIT_BUILDER = '0x00819350'
APPEND = '0x00825170'
REPORT = '0x00819800'
DESTROY_BUILDER = '0x00819460'
ENTRY_COUNT = 4
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def entries_bytes():
    """Four 16-byte entries: a tagged link, then the word at +8 (distinct per entry)."""
    out = b''
    for k in range(ENTRY_COUNT):
        out += struct.pack('<Q', 0x7000 + k * 0x20 + 1) + struct.pack('<I', 0x1000 + k * 0x11) + bytes(4)
    return out.hex()


def case(cid, count, index):
    """count: the table's first count; index: the entry asked for."""
    valid = index <= ((count - 1) & MASK32)
    memory = [{'addr': 'buf:table+0x80', 'pointer': 'second'},
              {'addr': 'buf:table+0x88', 'bytes': u32(count)}]
    stubs = []
    if not valid:
        stubs = [{'address': INIT_BUILDER, 'argc': 3},
                 {'address': APPEND, 'argc': 2},
                 {'address': REPORT, 'argc': 4},
                 {'address': DESTROY_BUILDER, 'argc': 1}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:table', 'rsi': hex(index & MASK32)},
            'buffers': {'table': {'size': 0x90, 'bytes': '00' * 0x90},
                        'second': {'size': 16 * ENTRY_COUNT, 'bytes': entries_bytes()},
                        'builder': {'size': 0x18, 'bytes': '00' * 0x18}},
            'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('first_entry', count=3, index=0),
    case('last_entry', count=3, index=2),
    case('one_past_the_end', count=3, index=3),
    case('single_entry', count=1, index=0),
    case('single_entry_past_the_end', count=1, index=1),
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
