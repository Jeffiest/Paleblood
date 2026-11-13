#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic objects for misc_tail_value_call_02276f40 (0x02276f40), for tools/verify.py run.

usage: tail_value_call_cases.py OUT_DIR

The thunk loads the 32-bit value at +0x14 and jumps to the library routine 0x02fc0b08 with the other argument
registers untouched; the stub of that routine returns the value it is given. Covers zero, the top bit, all bits
set, and a small value, each with other argument registers set.
"""
import json
import os
import struct
import sys

ADDRESS = '0x02276f40'
TAIL_ROUTINE = '0x02fc0b08'
VALUE_OFFSET = 0x14
MASK64 = (1 << 64) - 1


def case(cid, value, ret):
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:obj', 'rsi': '0x1111', 'rdx': '0x2222', 'rcx': '0x3333', 'r8': '0x4444', 'r9': '0x5555'},
            'buffers': {'obj': {'size': 0x20, 'bytes': 'cc' * 0x20}},
            'memory': [{'addr': f'buf:obj+{VALUE_OFFSET:#x}', 'bytes': struct.pack('<I', value).hex()}],
            'imports': [],
            'stubs': [{'address': TAIL_ROUTINE, 'argc': 6, 'ret': hex(ret & MASK64)}]}


CASES = [
    case('value_zero', 0, 0x55),
    case('value_high_bit', 0x80000000, 0x66),
    case('value_all_bits', 0xffffffff, MASK64),
    case('value_small', 0x1234, 0),
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
