#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for bb_misc_lookup_second_list_address (0x00be30f0).

usage: lookup_second_list_address_cases.py OUT_DIR

The function only adds 0x80 to its argument and returns it, so a table in a buffer and a null
argument (the sum is still taken) are enough.
"""
import json
import os
import sys

ADDRESS = '0x00be30f0'


def case(cid, table):
    """table: the argument, a buffer name or a literal address."""
    buffers = {'table': {'size': 0x90, 'bytes': 'a5' * 0x90}} if table == 'buf:table' else {}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': table},
            'buffers': buffers, 'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('table_buffer', 'buf:table'),
    case('null_table', '0x0'),
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
