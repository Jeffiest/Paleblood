#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic dispatches for bb_misc_dispatch_by_kind (0x00be7010).

usage: dispatch_by_kind_cases.py OUT_DIR

The object's kind word at +0x18 selects a target: one forwards to 0x00be7720, zero to 0x00be7030, and
any other kind returns one without a call. Both targets receive the object and the four argument
registers unchanged, so every case compares all five argument slots and returns the target's result.
Kinds cover the two targets, one with each high bit set, and the all-ones word.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00be7010'
FIRST_TARGET = '0x00be7720'
SECOND_TARGET = '0x00be7030'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
ARGUMENT_SLOTS = [0, 1, 2, 3, 4]


def case(cid, kind, target=None, result=0, rsi=0x1111222233334444, rdx=0x5555666677778888,
         rcx=0x9999aaaabbbbcccc, r8=0xdddd0000eeee0001):
    """target: the stub's address, or None when no call happens; result is what the target returns."""
    stubs = []
    if target is not None:
        stubs.append({'address': target, 'argc': 5, 'argi': ARGUMENT_SLOTS,
                      'ret': hex(result & MASK64)})
    object_bytes = '00' * 0x18 + (kind & MASK32).to_bytes(4, 'little').hex() + '5a' * 4
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object', 'rsi': hex(rsi & MASK64), 'rdx': hex(rdx & MASK64),
                     'rcx': hex(rcx & MASK64), 'r8': hex(r8 & MASK64)},
            'buffers': {'object': {'size': 0x20, 'bytes': object_bytes}},
            'memory': [], 'imports': [], 'stubs': stubs}


CASES = [
    case('first_kind_forwards', kind=0x1, target=FIRST_TARGET, result=0x0123456789abcdef),
    case('first_kind_result_zero', kind=0x1, target=FIRST_TARGET, result=0),
    case('first_kind_result_high_bit', kind=0x1, target=FIRST_TARGET, result=1 << 63),
    case('second_kind_forwards', kind=0x0, target=SECOND_TARGET, result=0xfedcba9876543210),
    case('second_kind_result_one', kind=0x0, target=SECOND_TARGET, result=1),
    case('second_kind_all_argument_bits', kind=0x0, target=SECOND_TARGET, result=MASK64,
         rsi=MASK64, rdx=MASK64, rcx=MASK64, r8=MASK32),
    case('other_kind_returns_one', kind=0x2),
    case('other_kind_high_bit_returns_one', kind=0x80000001),
    case('all_ones_kind_returns_one', kind=MASK32),
]


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
