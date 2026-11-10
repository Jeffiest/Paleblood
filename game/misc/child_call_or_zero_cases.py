#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_child_call_or_zero (0x0139bc90), for tools/verify.py run.

usage: child_call_or_zero_cases.py OUT_DIR

An owner without a child (no call, zero returned), and a child whose library call returns zero, one,
all ones and a value with only the high bit set. The second argument is passed on to the library call
and compared there as a 32-bit value.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0139bc90'
CHILD_CALL = '0x01441280'
MASK64 = (1 << 64) - 1


def u64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, has_child=True, result=0x1122334455667788, second=0x12345678):
    """One call: the owner's child pointer is set or null; the library call receives the child and the
    second argument, and scripts its result."""
    buffers = {'owner': {'size': 0x10}, 'child': {'size': 0x10}}
    memory = [{'addr': 'buf:owner+8', 'pointer': 'child'}] if has_child else [{'addr': 'buf:owner+8', 'bytes': u64(0)}]
    stubs = []
    if has_child:
        stubs.append({'address': CHILD_CALL, 'argc': 2, 'argi': [0], 'argu32': [1], 'ret': hex(result & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner', 'rsi': hex(second & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('owner_without_child_returns_zero', has_child=False),
    case('child_result_zero', result=0),
    case('child_result_one', result=1),
    case('child_result_all_ones', result=MASK64),
    case('child_result_high_bit_only', result=1 << 63),
    case('second_zero', second=0),
    case('second_all_ones', second=0xffffffff),
    case('second_high_bit_without_child', has_child=False, second=0x80000000),
]


def main():
    """Write one JSON case per call shape to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for fixture in CASES:
        with open(os.path.join(sys.argv[1], fixture['id'] + '.json'), 'w') as stream:
            json.dump(fixture, stream, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
