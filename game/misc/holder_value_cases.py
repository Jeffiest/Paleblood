#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for the holder value read (0x0040d170): the inner record's value at +0x20 across
zero, one, all-ones, high-bit and pattern values."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040d170'
MASK64 = (1 << 64) - 1
HOLDER_SIZE = 0x18
INNER_SIZE = 0x28
VALUE_FIELD = 0x20


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, value):
    """A holder whose inner record holds `value` at +0x20; the rest of the record is filler."""
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i64',
        'args': {'rdi': 'buf:holder'},
        'buffers': {
            'holder': {'size': HOLDER_SIZE, 'bytes': '6c' * HOLDER_SIZE},
            'inner': {'size': INNER_SIZE, 'bytes': '4e' * VALUE_FIELD + word(value)},
        },
        'memory': [{'addr': 'buf:holder+0x10', 'pointer': 'inner'}],
        'imports': [],
        'stubs': [],
    }


CASES = [
    case('value_zero', 0),
    case('value_one', 1),
    case('value_pattern', 0x1122334455667788),
    case('value_high_bit', 1 << 63),
    case('value_all_ones', MASK64),
    case('value_low_word_only', 0x00000000ffffffff),
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
