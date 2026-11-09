#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic sizes and multipliers for misc_scaled_size_class_entry (0x026f1d00): products at each class
bound, one above the limit, and a product that wraps past 32 bits.

usage: scaled_size_class_entry_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026f1d00'
TABLE_OFFSET = 0x388
HOLDER_SIZE = 0x418
ENTRY_COUNT = 8
ENTRY_BYTES = 8
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def case(cid, size, multiplier):
    """One lookup: the scaled table holds a distinct entry for each class, and the call returns the entry
    of the class that size times multiplier (in 32 bits) falls in, or zero above the limit."""
    entries = b''.join(((0x2000 + slot) & MASK64).to_bytes(ENTRY_BYTES, 'little')
                       for slot in range(ENTRY_COUNT))
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder', 'rsi': hex(size & MASK32), 'rdx': hex(multiplier & MASK32)},
            'buffers': {'holder': {'size': HOLDER_SIZE}},
            'memory': [{'addr': 'buf:holder+%d' % TABLE_OFFSET, 'bytes': entries.hex()}],
            'stubs': [],
            'imports': []}


CASES = [
    case('product_zero', 0, 1),
    case('product_two', 2, 1),
    case('product_three_first_bound', 3, 1),
    case('product_four', 4, 1),
    case('product_five_second_bound', 5, 1),
    case('product_sixteen', 0x10, 1),
    case('product_seventeen', 0x11, 1),
    case('product_sixty_four', 0x40, 1),
    case('product_sixty_five', 0x41, 1),
    case('product_one_twenty_eight', 0x80, 1),
    case('product_one_twenty_nine', 0x81, 1),
    case('product_two_fifty_six', 0x100, 1),
    case('product_two_fifty_seven', 0x101, 1),
    case('product_five_twelve_eleven', 0x200, 1),
    case('product_five_thirteen_last_class', 0x201, 1),
    case('product_at_limit_by_multiply', 0x40, 0x10),
    case('product_above_limit', 0x401, 1),
    case('product_wraps_to_zero', 0x10000, 0x10000),
    case('product_scaled_small_size', 2, 0x3),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
