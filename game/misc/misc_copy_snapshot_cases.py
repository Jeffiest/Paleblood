#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic source objects and snapshots for bb_misc_copy_snapshot (0x00cc7f30).

usage: misc_copy_snapshot_cases.py OUT_DIR

The copy has no branches. Each case fills the two words and the scale of the source with different
bit patterns and leaves marker bytes on both sides of the snapshot, so every byte written is compared.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00cc7f30'
SOURCE_SIZE = 0x94
SNAPSHOT_OFFSET = 0x10
COPY_BUFFER = 0x40


def case(cid, words, scale, snapshot_bytes='a5' * 0x18):
    source = bytearray(b'\xc3' * SOURCE_SIZE)
    source[0x10:0x20] = struct.pack('<QQ', *words)
    source[0x90:0x94] = struct.pack('<f', scale)
    copy_bytes = bytearray(b'\xa5' * COPY_BUFFER)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:source', 'rsi': f'buf:copy+{SNAPSHOT_OFFSET:#x}'},
            'buffers': {'source': {'size': SOURCE_SIZE, 'bytes': bytes(source).hex()},
                        'copy': {'size': COPY_BUFFER, 'bytes': bytes(copy_bytes).hex()}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('copies_words_and_scale', words=(0x1122334455667788, 0x99aabbccddeeff00), scale=1.5),
    case('copies_zero_words_negative_scale', words=(0, 0), scale=-2.5),
    case('copies_all_ones_words', words=(0xffffffffffffffff, 0xffffffffffffffff), scale=0.0),
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
