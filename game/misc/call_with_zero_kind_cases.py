#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_call_with_zero_kind_013b50f0 (0x013b50f0), for tools/verify.py run.

usage: call_with_zero_kind_cases.py OUT_DIR

The original is a tail call: the second argument register is set to zero and the others pass through to the
shared routine (0x01391c60), a stub here, whose result is the original's result. Covers the pass-through of
each argument register and results with the upper bits set and clear.
"""
import json
import os
import sys

ADDRESS = '0x013b50f0'
TARGET = '0x01391c60'


def case(cid, first=0x1, third=0x3, fourth=0x4, fifth=0x5, sixth=0x6, result=0x0):
    stubs = [{'address': TARGET, 'argc': 6, 'argi': [0, 1, 2, 3, 4, 5], 'ret': result}]
    args = {'rdi': first, 'rsi': 0x7777, 'rdx': third, 'rcx': fourth, 'r8': fifth, 'r9': sixth}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': {}, 'memory': [], 'stubs': stubs, 'imports': []}


CASES = [
    case('plain_result_zero'),
    case('result_low_byte_set', result=0x1),
    case('result_high_bits_set', result=0x8000000000000001),
    case('arguments_high_bits', first=0xfedcba9876543210, third=0xffffffffffffffff, fourth=0x8000000000000000,
         fifth=0x123456789abcdef0, sixth=0xffffffff, result=0xfedcba9876543210),
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
