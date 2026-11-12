#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic forwarding pair objects for bb_misc_setup_member_then_forward (0x00cd4390).

usage: misc_setup_member_then_forward_cases.py OUT_DIR

The routine has no branches: it prepares the object for the id, stores the id in the sub-object, and
returns the member initialisation's result. The object's marker bytes are compared; the stubs of the
three callees are scripted with the id (both the object and the id are passed to the first).
"""
import json
import os
import sys

ADDRESS = '0x00cd4390'
PREPARE = '0x0085d9e0'
STORE_ID = '0x00c299e0'
INIT_MEMBER = '0x00836630'
OBJECT_SIZE = 0x278


def case(cid, ident, init_result):
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object', 'rsi': ident},
            'buffers': {'object': {'size': OBJECT_SIZE, 'bytes': 'a5' * OBJECT_SIZE}},
            'memory': [], 'imports': [],
            'stubs': [{'address': PREPARE, 'argc': 2},
                      {'address': STORE_ID, 'argc': 2},
                      {'address': INIT_MEMBER, 'argc': 1, 'ret': init_result}]}


UNREACHABLE = {}

CASES = [
    case('stores_nonzero_id', ident=0x2a, init_result=0x1122334455667788),
    case('stores_zero_id', ident=0, init_result=0),
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
