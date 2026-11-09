#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_plain_type_address (0x00be16a0).

usage: plain_type_address_cases.py OUT_DIR

The function takes no input and returns the address of a fixed static object, so there is one case.
"""
import json
import os
import sys

ADDRESS = '0x00be16a0'


def case(cid):
    """No arguments: the returned address is the only thing compared."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {},
            'buffers': {}, 'memory': [], 'imports': [], 'stubs': []}


CASES = [case('returns_static_object')]


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
