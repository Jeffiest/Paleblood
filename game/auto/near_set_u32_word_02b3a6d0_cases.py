#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic stores of one 32-bit value into an owner's word (a template: near_cases.py puts the
word's offset in place of the slot name and the function's address in place of the one below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

Covers zero, a single low bit, the sign bit, all bits, and register bits above the low 32 that
the store must ignore. The rest of the owner, which reaches past the word, is filled with a
different byte so that any stray write shows up.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3a6d0'
WORD_FIELD = NEAR_SLOT_0
OWNER_BYTES = WORD_FIELD + 0x20
MASK64 = (1 << 64) - 1


def case(cid, value):
    """One store: the owner receives the low 32 bits of the value and nothing else changes."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': hex(value & MASK64)},
            'buffers': {'owner': {'size': OWNER_BYTES, 'bytes': '3c' * OWNER_BYTES}},
            'imports': [], 'stubs': []}


CASES = [
    case('store_zero', 0),
    case('store_low_bit', 1),
    case('store_sign_bit', 1 << 31),
    case('store_all_low_bits', 0xffffffff),
    case('store_mixed_pattern', 0x11223344),
    case('upper_register_bits_ignored', 0xffffffff00000005),
    case('upper_register_bits_only', 0x8000000000000000),
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
