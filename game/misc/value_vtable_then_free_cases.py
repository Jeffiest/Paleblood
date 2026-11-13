#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic objects for misc_value_vtable_then_free_02276d70 (0x02276d70), for tools/verify.py run.

usage: value_vtable_then_free_cases.py OUT_DIR

The thunk stores its vtable address point, passes the 32-bit value at +0xc to the library routine 0x02fc0af8 and
then frees the object through 0x02fbe588, returning the free's result. Covers a zero value, a nonzero value and
all bits set.
"""
import json
import os
import struct
import sys

ADDRESS = '0x02276d70'
TAKE_VALUE = '0x02fc0af8'
FREE_BLOCK = '0x02fbe588'
VALUE_OFFSET = 0xc
MASK64 = (1 << 64) - 1


def case(cid, value, ret):
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:obj'},
            'buffers': {'obj': {'size': 0x20, 'bytes': 'cc' * 0x20}},
            'memory': [{'addr': f'buf:obj+{VALUE_OFFSET:#x}', 'bytes': struct.pack('<I', value).hex()}],
            'imports': [],
            'stubs': [{'address': TAKE_VALUE, 'argc': 1},
                      {'address': FREE_BLOCK, 'argc': 1, 'ret': hex(ret & MASK64)}]}


CASES = [
    case('value_zero', 0, 0x99),
    case('value_nonzero', 0x7f, 0),
    case('value_all_bits', 0xffffffff, MASK64),
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
