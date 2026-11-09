#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_register_plain_type (0x00be16b0).

usage: register_plain_type_cases.py OUT_DIR

The function takes no input and makes one registration call, stubbed with its fourteen arguments
(six registers, then eight stack words; the dword stack slots compare their low half only).
"""
import json
import os
import sys

ADDRESS = '0x00be16b0'
REGISTER = '0x0081e9b0'
REGISTER_FULL = [0, 1, 2, 3, 4, 5, 6, 8, 10, 11]
REGISTER_DWORD = [7, 9, 12, 13]


def case(cid):
    stubs = [{'address': REGISTER, 'argc': 14, 'argi': REGISTER_FULL, 'argu32': REGISTER_DWORD}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {},
            'buffers': {}, 'memory': [], 'imports': [], 'stubs': stubs}


CASES = [case('registers_plain_type')]


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
