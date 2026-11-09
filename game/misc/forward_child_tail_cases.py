#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_forward_child_tail (0x0139bcb0), for tools/verify.py run.

usage: forward_child_tail_cases.py OUT_DIR

An owner without a child: nothing is called and the return register is left as the caller had it, so
those cases do not compare RAX. An owner with a child: the tail-called library function's result is
returned, for zero, one, all ones and a value with only the high bit set.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0139bcb0'
CHILD_TAIL = '0x01440fb0'
MASK64 = (1 << 64) - 1


def u64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, has_child=True, result=0x1122334455667788):
    """One call. The owner without a child returns with RAX unspecified (returns void), so RAX is not
    compared there; with a child the tail-called function scripts the result that is returned."""
    buffers = {'owner': {'size': 0x10}, 'child': {'size': 0x10}}
    memory = [{'addr': 'buf:owner+8', 'pointer': 'child'}] if has_child else [{'addr': 'buf:owner+8', 'bytes': u64(0)}]
    stubs = [{'address': CHILD_TAIL, 'argc': 1, 'ret': hex(result & MASK64)}] if has_child else []
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64' if has_child else 'void',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('owner_without_child_leaves_rax', has_child=False),
    case('child_result_zero', result=0),
    case('child_result_one', result=1),
    case('child_result_all_ones', result=MASK64),
    case('child_result_high_bit_only', result=1 << 63),
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
