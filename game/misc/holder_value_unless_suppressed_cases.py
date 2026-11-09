#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for the suppressed value read (0x0040d150): the flags' low byte with the top bit
set or clear, register bits above the byte, and a value that is zero or not."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040d150'
MASK64 = (1 << 64) - 1
HOLDER_SIZE = 0x18
INNER_SIZE = 0x28
VALUE_FIELD = 0x20
VALUE = 0x1122334455667788


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, flags, value=VALUE):
    """A holder whose inner record holds `value`, read with the flags argument in rsi."""
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i64',
        'args': {'rdi': 'buf:holder', 'rsi': hex(flags & MASK64)},
        'buffers': {
            'holder': {'size': HOLDER_SIZE, 'bytes': '6c' * HOLDER_SIZE},
            'inner': {'size': INNER_SIZE, 'bytes': '4e' * VALUE_FIELD + word(value)},
        },
        'memory': [{'addr': 'buf:holder+0x10', 'pointer': 'inner'}],
        'imports': [],
        'stubs': [],
    }


CASES = [
    case('flags_zero', 0x00),
    case('flags_below_top_bit', 0x7f),
    case('flags_top_bit_set', 0x80),
    case('flags_all_bits', 0xff),
    case('flags_bit6_only', 0x40),
    case('flags_low_byte_zero_upper_bits_set', 0xffffffffffffff00),
    case('flags_top_bit_with_upper_bits', 0xdeadbeef00000080),
    case('flags_top_bit_clear_upper_bits', 0xcafebabe0000007f),
    case('flags_zero_value', 0x00, value=0),
    case('flags_top_bit_zero_value', 0x80, value=0),
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
