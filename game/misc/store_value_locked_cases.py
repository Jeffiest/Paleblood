#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_store_value_locked (0x004194b0), for tools/verify.py run.

usage: store_value_locked_cases.py OUT_DIR

The object's lock is taken (0x02fbe598), the value is handed by address to the store routine (0x02790920)
together with the store sub-object, and the lock is released by the tail call (0x02fbe5a8), whose result is
the function's result. The store routine is stubbed, so the cases compare its arguments only.
"""
import json
import os
import sys

ADDRESS = '0x004194b0'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
STORE = '0x02790920'
OBJECT_SIZE = 0x48
MASK64 = (1 << 64) - 1


def case(cid, value, unlock_result):
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object', 'rsi': hex(value & MASK64)},
            'buffers': {'object': {'size': OBJECT_SIZE, 'bytes': 'c3' * OBJECT_SIZE}},
            'memory': [],
            'stubs': [{'address': LOCK, 'argc': 1, 'argi': [0]},
                      {'address': STORE, 'argc': 2, 'argi': [0], 'ret': 0},
                      {'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': hex(unlock_result)}],
            'imports': []}


CASES = [
    case('stores_zero_value', value=0, unlock_result=0),
    case('stores_small_value_unlock_result', value=0x2a, unlock_result=0x9),
    case('stores_high_bits_value', value=0xfedcba9876543210, unlock_result=0x3),
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
