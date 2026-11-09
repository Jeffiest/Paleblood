#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic stores of one 64-bit value into an owner's word at +0x148 (address 0x02b3a6b0).

usage: set_value_word_148_cases.py OUT_DIR

Covers zero, a single low bit, the sign bit, all bits and a mixed pattern, with the rest of the
owner filled with a different byte so that any stray write shows up.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3a6b0'
OWNER_BYTES = 0x160
MASK64 = (1 << 64) - 1


def case(cid, value):
    """One store: the owner receives the value and nothing else changes."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': hex(value & MASK64)},
            'buffers': {'owner': {'size': OWNER_BYTES, 'bytes': '5a' * OWNER_BYTES}},
            'imports': [], 'stubs': []}


CASES = [
    case('store_zero', 0),
    case('store_low_bit', 1),
    case('store_sign_bit', 1 << 63),
    case('store_all_bits', MASK64),
    case('store_mixed_pattern', 0x8877665544332211),
    case('store_upper_word_only', 0xffffffff00000000),
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
