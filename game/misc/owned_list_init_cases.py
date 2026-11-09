#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owned-list constructions for misc_owned_list_init (0x02240db0).

usage: owned_list_init_cases.py OUT_DIR

The object is 0x28 bytes. The constructor has no branches and no calls: it writes the size tag, the
vtable address, the argument and clears the word at 0x20 and the head. Covers zero, all-ones, high
bit and upper-word arguments, and an object whose bytes start out as zero or as garbage (the tag's
low bits, the bytes at 0x0c..0x0f and the padding must all be left as the original leaves them).
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02240db0'
MASK64 = (1 << 64) - 1
OBJECT_SIZE = 0x28


def case(cid, argument=0x1234, fill='ee'):
    """One construction of an object whose bytes all start as fill."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:list', 'rsi': hex(argument & MASK64)},
            'buffers': {'list': {'size': OBJECT_SIZE, 'bytes': fill * OBJECT_SIZE}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('ordinary_argument'),
    case('zero_argument', argument=0),
    case('all_ones_argument', argument=MASK64),
    case('high_bit_argument', argument=1 << 63),
    case('upper_word_argument', argument=0x100000000),
    case('low_word_all_ones', argument=0xffffffff),
    case('zero_filled_object', argument=0x55, fill='00'),
    case('all_ones_filled_object', argument=0x66, fill='ff'),
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
