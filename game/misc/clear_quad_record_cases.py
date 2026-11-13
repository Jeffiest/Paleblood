#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic four-word records for misc_clear_quad_record at 0x00cec450, for tools/verify.py run.

usage: clear_quad_record_cases.py OUT_DIR

The function writes zero to the four 64-bit words at offsets 0x00, 0x08, 0x10 and 0x18 of the record
and returns nothing: the original never writes RAX, so every case compares no return value. The record
is the whole 32 bytes; the function has no branches, so the cases vary the contents of the words and the
caller's other registers to show that they are ignored and that nothing outside the record changes.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00cec450'
RECORD_SIZE = 0x20
GARBAGE_REGISTERS = {'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
                     'rcx': '0x8080808080808080', 'r8': '0x0123456789abcdef', 'r9': '0x7f7f7f7f7f7f7f7f'}


def case(cid, fill_hex, registers=None):
    """One clear of a record whose bytes are fill_hex (32 bytes as hex); the other registers hold garbage."""
    args = {'rdi': 'buf:record'}
    args.update(GARBAGE_REGISTERS if registers is None else registers)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': args,
            'buffers': {'record': {'size': RECORD_SIZE, 'bytes': fill_hex}},
            'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('all_ones_words_cleared', 'ff' * RECORD_SIZE),
    case('already_zero_stays_zero', '00' * RECORD_SIZE),
    case('byte_pattern_words_cleared', '5a' * RECORD_SIZE),
    case('each_word_distinct_cleared',
         '0100000000000000' '0200000000000000' '0300000000000000' '0400000000000000'),
    case('high_bit_words_cleared', '0000000000000080' * 4),
    case('zero_registers', 'ff' * RECORD_SIZE, registers={'rsi': '0x0', 'rdx': '0x0', 'rcx': '0x0',
                                                          'r8': '0x0', 'r9': '0x0'}),
    case('upper_bits_of_registers_ignored', 'c3' * RECORD_SIZE,
         registers={'rsi': '0xdeadbeef00000000', 'rdx': '0x00000001ffffffff', 'rcx': '0x0',
                    'r8': '0xffffffffffffffff', 'r9': '0x8000000000000000'}),
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
