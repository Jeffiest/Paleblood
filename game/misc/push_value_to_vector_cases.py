#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic appends of one value to an owner's vector (address 0x02b3a370).

usage: push_value_to_vector_cases.py OUT_DIR

The owner's vector at +0xd8 is passed to the push routine (0x02b3a3c0), a stub that receives the
vector and a pointer to the value, which must hold the 64-bit value. Covers zero, a single low
bit, the sign bit, all bits and a mixed pattern.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3a370'
PUSH_ROUTINE = '0x02b3a3c0'
OWNER_BYTES = 0x168
MASK64 = (1 << 64) - 1


def case(cid, value):
    """One append: the routine gets the owner's vector and the value, and nothing else is stored."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': hex(value & MASK64)},
            'buffers': {'owner': {'size': OWNER_BYTES, 'bytes': '6b' * OWNER_BYTES}},
            'imports': [],
            'stubs': [{'address': PUSH_ROUTINE, 'argc': 2, 'argi': [0],
                       'argmem': [{'arg': 1, 'size': 8}]}]}


CASES = [
    case('push_zero', 0),
    case('push_low_bit', 1),
    case('push_sign_bit', 1 << 63),
    case('push_all_bits', MASK64),
    case('push_mixed_pattern', 0x0123456789abcdef),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
