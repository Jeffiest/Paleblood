#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic configuration records for misc_init_config_defaults at 0x00cec3e0, for tools/verify.py run.

usage: init_config_defaults_cases.py OUT_DIR

The function calls the routine at 0x00836630 with the record's tail word (offset 0x38), which stores a zero
word there, then writes the defaults: kind 3, enabled 1, option 0, count 20, two cleared links, scales of
0.1 as single-precision floats, limits 2, 2, 4 and 100000, and a cleared flag at 0x30. Bytes 0x03 and 0x31
onwards are padding that must not change. The original never writes RAX, so the cases compare no return
value. The routine's stub writes its zero word through the pointer it is given.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00cec3e0'
ROUTINE = '0x00836630'
RECORD_SIZE = 0x40
TAIL = 0x38
GARBAGE_REGISTERS = {'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
                     'rcx': '0x8080808080808080', 'r8': '0x0123456789abcdef', 'r9': '0x7f7f7f7f7f7f7f7f'}


def case(cid, fill_hex, registers=None, tail_fill=None):
    """One call on a record filled with fill_hex; the routine's stub clears the tail word it is given."""
    args = {'rdi': 'buf:record'}
    args.update(GARBAGE_REGISTERS if registers is None else registers)
    fill = bytearray(bytes.fromhex(fill_hex))
    if tail_fill is not None:
        fill[TAIL:TAIL + 8] = bytes.fromhex(tail_fill)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': args,
            'buffers': {'record': {'size': RECORD_SIZE, 'bytes': fill.hex()}},
            'memory': [], 'imports': [],
            'stubs': [{'address': ROUTINE, 'argc': 1, 'argi': [0],
                       'writes': [{'arg': 0, 'offset': 0, 'bytes': '00' * 8}]}]}


CASES = [
    case('all_ones_record', 'ff' * RECORD_SIZE),
    case('all_zero_record', '00' * RECORD_SIZE),
    case('byte_pattern_record', '5a' * RECORD_SIZE),
    case('tail_word_nonzero_cleared', 'ff' * RECORD_SIZE, tail_fill='0102030405060708'),
    case('tail_word_high_bits_cleared', '00' * RECORD_SIZE, tail_fill='ffffffffffffffff'),
    case('padding_bytes_untouched', 'c3' * RECORD_SIZE),
    case('zero_registers', 'ff' * RECORD_SIZE,
         registers={'rsi': '0x0', 'rdx': '0x0', 'rcx': '0x0', 'r8': '0x0', 'r9': '0x0'}),
    case('upper_bits_of_registers_ignored', '7e' * RECORD_SIZE,
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
