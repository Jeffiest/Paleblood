#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_child_call_with_flag (0x0139bc10), for tools/verify.py run.

usage: child_call_with_flag_cases.py OUT_DIR

An owner without a child (the call is skipped and zero returned), and a child with flag bytes of zero,
one and all ones, with garbage in the upper flag bits and in the unread second argument. The library
call's result is returned as it is, including values with the high bit set.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0139bc10'
CHILD_CALL = '0x01441160'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def u64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, has_child=True, flag_register=0x1, result=0x1122334455667788, second=0x1111111111111111):
    """One call: the owner's child pointer is set or null, the library call scripts its result, and the
    flag register's upper bits are garbage that the callee must not see."""
    buffers = {'owner': {'size': 0x10}, 'child': {'size': 0x10}}
    memory = [{'addr': 'buf:owner+8', 'pointer': 'child'}] if has_child else [{'addr': 'buf:owner+8', 'bytes': u64(0)}]
    stubs = []
    if has_child:
        stubs.append({'address': CHILD_CALL, 'argc': 3, 'argi': [0], 'argu8': [2], 'ret': hex(result & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner', 'rsi': hex(second & MASK64), 'rdx': hex(flag_register & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('owner_without_child_returns_zero', has_child=False),
    case('flag_zero', flag_register=0x0),
    case('flag_one', flag_register=0x1),
    case('flag_all_ones_low_byte', flag_register=0xff),
    case('flag_garbage_upper_bits', flag_register=0xdeadbeef00000001),
    case('flag_garbage_upper_bits_zero_low', flag_register=0xdeadbeef00000000),
    case('result_zero', result=0),
    case('result_all_ones', result=MASK64),
    case('result_high_bit_only', result=1 << 63),
    case('second_argument_zero', second=0),
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
