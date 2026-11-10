#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners whose child is handed to a function, with zero returned for no child (a
template: near_cases.py puts the child's offset in place of the slot name and the addresses of the
function in place of the ones below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

An owner without a child (no call, zero returned), and a child whose call returns zero, one, all ones
and a value with only the high bit set. The second argument is passed on to the call and compared
there as a 32-bit value. The owner reaches past the child pointer and is filled with other bytes.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0139bc90'
CHILD_CALL = '0x01441280'
CHILD_FIELD = NEAR_SLOT_0
OWNER_BYTES = CHILD_FIELD + 0x20
MASK64 = (1 << 64) - 1


def u64(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, has_child=True, result=0x1122334455667788, second=0x12345678):
    """One call: the owner's child pointer is set or null; the call receives the child and the
    second argument, and scripts its result."""
    buffers = {'owner': {'size': OWNER_BYTES, 'bytes': 'a5' * OWNER_BYTES}, 'child': {'size': 0x10}}
    at = f'buf:owner+{CHILD_FIELD:#x}'
    memory = [{'addr': at, 'pointer': 'child'}] if has_child else [{'addr': at, 'bytes': u64(0)}]
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
