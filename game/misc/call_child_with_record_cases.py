#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_call_child_with_record (0x0139bc30), for tools/verify.py run.

usage: call_child_with_record_cases.py OUT_DIR

An owner without a child (nothing is called), and an owner with a child for several argument sets: zero,
all ones, the high bit alone, distinct values in each slot that the record must keep in order. The
record's 32 bytes are compared through the stub's pointer argument. The function returns nothing.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0139bc30'
GUARD = '0x057e3be0'
CHILD_CALL = '0x01441230'
MASK64 = (1 << 64) - 1
RECORD_BYTES = 32


def u64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, has_child=True, second=0x1111111111111111, third=0x2222222222222222, fourth=0x3333333333333333,
         fifth=0x4444444444444444, guard=0x0123456789abcdef):
    """One call: the owner's child is set or null; the record the library call receives holds the third,
    fifth and fourth arguments and zero, compared through the stub's pointer argument."""
    buffers = {'guard': {'size': 8, 'bytes': u64(guard)}, 'owner': {'size': 0x10}, 'child': {'size': 0x10}}
    memory = [{'addr': GUARD, 'pointer': 'guard'}]
    memory.append({'addr': 'buf:owner+8', 'pointer': 'child'} if has_child
                  else {'addr': 'buf:owner+8', 'bytes': u64(0)})
    stubs = []
    if has_child:
        stubs.append({'address': CHILD_CALL, 'argc': 3, 'argi': [0, 1], 'argmem': [{'arg': 2, 'size': RECORD_BYTES}]})
    args = {'rdi': 'buf:owner', 'rsi': hex(second & MASK64), 'rdx': hex(third & MASK64),
            'rcx': hex(fourth & MASK64), 'r8': hex(fifth & MASK64)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('owner_without_child', has_child=False),
    case('child_distinct_arguments'),
    case('child_zero_arguments', second=0, third=0, fourth=0, fifth=0),
    case('child_all_ones_arguments', second=MASK64, third=MASK64, fourth=MASK64, fifth=MASK64),
    case('child_high_bits_only', second=1 << 63, third=1 << 63, fourth=1 << 63, fifth=1 << 63),
    case('child_fifth_and_fourth_differ', third=0xaa, fourth=0xbb, fifth=0xcc),
    case('guard_zero', guard=0, has_child=False),
    case('guard_all_ones_with_child', guard=MASK64),
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
