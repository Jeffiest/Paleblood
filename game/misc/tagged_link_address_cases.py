#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic tagged links for bb_misc_tagged_link_address (0x00bdd630): the flag bit clear or set,
upper bits, all bits and zero, each read from the link's field at +0x10.

usage: tagged_link_address_cases.py OUT_DIR
"""
import json
import os
import struct
import sys

ADDRESS = '0x00bdd630'
MASK64 = (1 << 64) - 1
VALUES = [0x0, 0x1, 0x2, 0x1234567898badcfe, 0x1234567898badcff, 0xfffffffffffffffe, MASK64,
          0x8000000000000001]


def case(cid, value):
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': 'buf:link'},
            'buffers': {'link': {'size': 0x18, 'bytes': 'a5' * 0x10 + struct.pack('<Q', value).hex()}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [case(f'value_{index}_{value:016x}', value) for index, value in enumerate(VALUES)]


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
