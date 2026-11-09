#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_record_link_address (0x00be44f0).

usage: record_link_address_cases.py OUT_DIR

The function loads the 64-bit word at +0x10 and clears only its low bit. The cases cover the flag
bit set and clear, the second bit set (it must survive), the high word set, the whole word set, and
zero. The record's neighbouring bytes are filled with another pattern so a wider read would show.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00be44f0'
MASK64 = (1 << 64) - 1
RECORD_BYTES = 0x18
LINK_OFFSET = 0x10


def record(link):
    """The record: filler before the link, then the 64-bit link at +0x10 that ends the record."""
    return ('11' * LINK_OFFSET) + struct.pack('<Q', link & MASK64).hex()


def case(cid, link):
    """One call on a record whose tagged link is link."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': 'buf:record'},
            'buffers': {'record': {'size': RECORD_BYTES, 'bytes': record(link)}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('flag_set_cleared', 0x0000000000401001),
    case('flag_clear_unchanged', 0x0000000000401000),
    case('second_bit_survives', 0x0000000000401003),
    case('high_word_survives', 0x8000000012345679),
    case('all_ones_clears_only_bit_zero', MASK64),
    case('zero_link', 0),
    case('only_flag_bit', 0x1),
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
