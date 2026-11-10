#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_forward_child_tail (0x0139bcb0), for tools/verify.py run.

usage: forward_child_tail_cases.py OUT_DIR

An owner without a child: nothing is called. An owner with a child: the library function is tail-called
with the child. The owner's other bytes are zero, all ones or mixed. The function returns nothing, so the
return register is not compared.
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


def case(cid, has_child=True, fill='00'):
    """One call. The owner holds a child or a null pointer; its other bytes are the fill."""
    buffers = {'owner': {'size': 0x10, 'bytes': fill * 0x10}, 'child': {'size': 0x10}}
    memory = [{'addr': 'buf:owner+8', 'pointer': 'child'}] if has_child else [{'addr': 'buf:owner+8', 'bytes': u64(0)}]
    stubs = [{'address': CHILD_TAIL, 'argc': 1}] if has_child else []
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('owner_without_child', has_child=False),
    case('owner_without_child_all_ones_bytes', has_child=False, fill='ff'),
    case('owner_with_child'),
    case('owner_with_child_all_ones_bytes', fill='ff'),
    case('owner_with_child_mixed_bytes', fill='a5'),
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
