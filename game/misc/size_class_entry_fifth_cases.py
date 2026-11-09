#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic sizes for misc_size_class_entry_fifth (0x026f1db0): sizes at each class boundary, and the
entry the fifth table holds for the class each size falls in.

usage: size_class_entry_fifth_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026f1db0'
TABLE_OFFSET = 0x3f0
HOLDER_SIZE = 0x418
ENTRY_COUNT = 5
ENTRY_BYTES = 8
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
UPPER_GARBAGE = 0xdead << 32


def case(cid, size, rsi=None):
    """One lookup: the fifth table holds a distinct entry for each size class, and the call returns the
    entry of the class the size falls in. The size is passed in the low word of the second argument; the
    upper word of that register is left as garbage when rsi is given."""
    entries = b''.join(((0x1000 + slot) & MASK64).to_bytes(ENTRY_BYTES, 'little')
                       for slot in range(ENTRY_COUNT))
    argument = size & MASK32 if rsi is None else rsi & MASK64
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder', 'rsi': hex(argument)},
            'buffers': {'holder': {'size': HOLDER_SIZE}},
            'memory': [{'addr': 'buf:holder+%d' % TABLE_OFFSET, 'bytes': entries.hex()}],
            'stubs': [],
            'imports': []}


CASES = [
    case('size_zero', 0),
    case('size_one', 1),
    case('size_two_last_of_first', 2),
    case('size_three_first_of_second', 3),
    case('size_four_last_of_second', 4),
    case('size_five_first_of_third', 5),
    case('size_sixteen_last_of_third', 16),
    case('size_seventeen_first_of_fourth', 17),
    case('size_sixty_four_last_of_fourth', 64),
    case('size_sixty_five_fifth', 65),
    case('size_all_ones', MASK32),
    case('upper_word_ignored', 3, rsi=UPPER_GARBAGE | 3),
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
