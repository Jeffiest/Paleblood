#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for bb_misc_tail_call_kind_013b55d0 (013b55d0), for tools/verify.py run.

usage: tail_call_kind_013b55d0_cases.py OUT_DIR

The original sets its kind argument and jumps to the routine at 01391c60 (a stub here), passing the other argument
registers through, so the routine's result is the original's result. Covers each argument register passed through,
and results with the upper bits set and clear.
"""
import json
import os
import sys

ADDRESS = '0x013b55d0'
TARGET = '0x01391c60'


def case(cid, first, third, fourth, fifth, sixth, result):
    stubs = [{'address': TARGET, 'argc': 6, 'argi': [0, 1, 2, 3, 4, 5], 'ret': result}]
    args = {'rdi': first, 'rsi': 0x7777, 'rdx': third, 'rcx': fourth, 'r8': fifth, 'r9': sixth}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': {}, 'memory': [], 'stubs': stubs, 'imports': []}


CASES = [
    case('plain_result_zero', 0x1, 0x3, 0x4, 0x5, 0x6, 0x0),
    case('result_high_bits_set', 0x1, 0x3, 0x4, 0x5, 0x6, 0x8000000000000001),
    case('arguments_high_bits', 0xfedcba9876543210, 0xffffffffffffffff, 0x8000000000000000, 0x123456789abcdef0,
         0xffffffff, 0xfedcba9876543210),
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
