#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners whose child is handed to a function by a tail call (a template: near_cases.py
puts the child's offset in place of the slot name and the addresses of the function in place of the
ones below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

An owner without a child: nothing is called. An owner with a child: the function is tail-called with
the child. The owner reaches past the child pointer and its other bytes are zero, all ones or mixed.
The function returns nothing, so the return register is not compared.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0139bcb0'
CHILD_TAIL = '0x01440fb0'
CHILD_FIELD = NEAR_SLOT_0
OWNER_BYTES = CHILD_FIELD + 0x20
MASK64 = (1 << 64) - 1


def u64(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, has_child=True, fill='00'):
    """One call. The owner holds a child or a null pointer; its other bytes are the fill."""
    buffers = {'owner': {'size': OWNER_BYTES, 'bytes': fill * OWNER_BYTES}, 'child': {'size': 0x10}}
    at = f'buf:owner+{CHILD_FIELD:#x}'
    memory = [{'addr': at, 'pointer': 'child'}] if has_child else [{'addr': at, 'bytes': u64(0)}]
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
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
