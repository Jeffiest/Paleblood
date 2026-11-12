#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_second_entry_address_013ba210 (0x013ba210), for tools/verify.py run.

usage: second_entry_address_cases.py OUT_DIR

The function returns the second array's start plus the index (taken as 32 bits) scaled by the 1200-byte entry
stride; it reads nothing from the entries. Covers index zero, small indices, the top bit of the 32-bit index and
the all-ones index, which must not be sign-extended.
"""
import json
import os
import sys

ADDRESS = '0x013ba210'
HOLDER_BYTES = 0x20
ENTRY_BYTES = 0x1200
SECOND_OFFSET = 0x18


def case(cid, index):
    b = {'holder': {'size': HOLDER_BYTES, 'bytes': 'ee' * HOLDER_BYTES},
         'first': {'size': ENTRY_BYTES, 'bytes': '5a' * ENTRY_BYTES},
         'second': {'size': ENTRY_BYTES, 'bytes': '6b' * ENTRY_BYTES}}
    m = [{'addr': f'buf:holder+{SECOND_OFFSET:#x}', 'pointer': 'second'}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder', 'rsi': index}, 'buffers': b, 'memory': m, 'stubs': [], 'imports': []}


CASES = [
    case('index_zero', index=0),
    case('index_one', index=1),
    case('index_three', index=3),
    case('index_top_bit', index=0x80000000),
    case('index_all_ones', index=0xffffffff),
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
