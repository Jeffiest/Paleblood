#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic records for bb_misc_copy_slot_record (0x00cd4580).

usage: misc_copy_slot_record_cases.py OUT_DIR

The copy has no branches. Each case fills the source's two halves, qword and byte with different bit
patterns and leaves marker bytes around the target block, so every byte written is compared.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00cd4580'
SOURCE_SIZE = 0x20
TARGET_SIZE = 0x40


def case(cid, low, high, qword, byte):
    source = bytearray(b'\x3c' * SOURCE_SIZE)
    source[0x00:0x08] = struct.pack('<Q', low)
    source[0x08:0x10] = struct.pack('<Q', high)
    source[0x10:0x18] = struct.pack('<Q', qword)
    source[0x18] = byte
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:target', 'rsi': 'buf:source'},
            'buffers': {'target': {'size': TARGET_SIZE, 'bytes': 'a5' * TARGET_SIZE},
                        'source': {'size': SOURCE_SIZE, 'bytes': bytes(source).hex()}},
            'memory': [], 'imports': [], 'stubs': []}


UNREACHABLE = {}

CASES = [
    case('copies_all_fields', low=0x1122334455667788, high=0x99aabbccddeeff00,
         qword=0x0123456789abcdef, byte=0x5e),
    case('copies_zero_and_ones', low=0, high=0xffffffffffffffff, qword=0, byte=0xff),
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
