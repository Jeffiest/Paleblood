#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic forwards from a record to an object's slot at +0x90 (address 0x01888ba0).

usage: forward_record_to_slot_90_cases.py OUT_DIR

The record's value at +0x18 is the second argument and the 32-bit mode behind its pointer at +0x20 is
the third. The object (second argument) has a vtable whose slot at +0x90 is a stub, and the stub's result
is returned unchanged. Covers zero, ordinary, sign-bit and all-ones values, modes with the upper word
set in the mode's source, and results of zero, all-ones and high-bit values.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01888ba0'
HANDLER = '0x00400300'
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, value, mode, handled=0x1234):
    """One forward. The slot stub receives the object, the value and the mode, and returns handled."""
    buffers = {
        'record': {'size': 0x28, 'bytes': '5a' * 0x28},
        'mode': {'size': 4, 'bytes': struct.pack('<I', mode & 0xffffffff).hex()},
        'object': {'size': 8},
        'vtable': {'size': 0x98},
    }
    memory = [
        {'addr': 'buf:record+0x18', 'bytes': word(value)},
        {'addr': 'buf:record+0x20', 'pointer': 'mode'},
        {'addr': 'buf:object', 'pointer': 'vtable'},
        {'addr': 'buf:vtable+0x90', 'guest': HANDLER},
    ]
    stubs = [{'address': HANDLER, 'argc': 3, 'argi': [0, 1, 2], 'ret': hex(handled & MASK64)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:record', 'rsi': 'buf:object'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('value_zero_mode_zero', 0, 0, handled=0),
    case('value_ordinary_mode_one', 0x55, 1, handled=0x1234),
    case('value_sign_bit_mode_all_ones', 1 << 63, 0xffffffff, handled=0x8000000000000001),
    case('value_all_ones_mode_high_bit', MASK64, 0x80000000, handled=MASK64),
    case('value_upper_word_mode_ordinary', 0xfeedface00000001, 0x7f, handled=0x99),
    case('mode_low_word_only_is_passed', 0x0000000100000000, 0x12345678, handled=0x77),
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
