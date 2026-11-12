#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic table lookups for bb_misc_entry_address_0120 (0x0270ffd0): the first, a later and the last
32-bit indices, and upper register bits that the zero extension must ignore.

usage: entry_address_0120_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0270ffd0'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def case(cid, index_register):
    """One call: the returned address is the object plus 0x120 plus the zero-extended index times 0x38."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object', 'rsi': hex(index_register & MASK64)},
            'buffers': {'object': {'size': 0x10, 'bytes': 'a5' * 0x10}},
            'imports': [], 'stubs': []}


CASES = [
    case('index_zero', 0),
    case('index_one', 1),
    case('index_later', 0x2a),
    case('index_all_ones_is_largest_unsigned', MASK32),
    case('index_high_bit_stays_positive', 0x80000000),
    case('upper_register_bits_ignored', 0xfffffff000000003),
    case('upper_register_bits_all_set', MASK64),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    destination = Path(sys.argv[1])
    destination.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (destination / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {destination}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
