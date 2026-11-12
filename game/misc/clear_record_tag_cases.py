#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners for misc_clear_record_tag_02265c60 (0x02265c60), for tools/verify.py run.

usage: clear_record_tag_cases.py OUT_DIR

The owner is 0x80 bytes with a tag word at +0x78. Covers a nonzero tag, a tag already zero, the top bit,
all bits set, and a fill pattern around the tag. Nothing is returned: the original never writes RAX.
"""
import json
import os
import struct
import sys

ADDRESS = '0x02265c60'
TAG_OFFSET = 0x78
OWNER_SIZE = 0x80


def case(cid, tag, fill='aa'):
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner'},
            'buffers': {'owner': {'size': OWNER_SIZE, 'bytes': fill * OWNER_SIZE}},
            'memory': [{'addr': f'buf:owner+{TAG_OFFSET:#x}', 'bytes': struct.pack('<I', tag & 0xffffffff).hex()}],
            'imports': [], 'stubs': []}


CASES = [
    case('nonzero_tag', 0x1234),
    case('tag_already_zero', 0),
    case('tag_top_bit', 0x80000000),
    case('tag_all_bits', 0xffffffff, fill='ff'),
    case('fill_zero_tag_seven', 7, fill='00'),
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
