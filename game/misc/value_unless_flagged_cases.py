#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic word lookups for misc_value_unless_flagged (0x0040d150).

The holder's pointer at 0x10 leads to a source whose word at 0x20 is the result. Covers the flags byte
with and without bit 0x80, its upper bits (which the lookup must ignore), and words of zero, all ones
and the top bit.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040d150'
HOLDER_BYTES = 0x18
SOURCE_BYTES = 0x28
SOURCE_FIELD = 0x10
WORD_FIELD = 0x20
MASK64 = (1 << 64) - 1


def case(cid, flags=0, word=0x1122334455667788):
    """One lookup with the given flags argument and the source word."""
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:holder', 'rsi': hex(flags)},
        'buffers': {
            'holder': {'size': HOLDER_BYTES, 'bytes': 'a5' * HOLDER_BYTES},
            'source': {'size': SOURCE_BYTES, 'bytes': 'b6' * SOURCE_BYTES},
        },
        'memory': [
            {'addr': f'buf:holder+{SOURCE_FIELD:#x}', 'pointer': 'source'},
            {'addr': f'buf:source+{WORD_FIELD:#x}', 'bytes': struct.pack('<Q', word & MASK64).hex()},
        ],
        'imports': [],
        'stubs': [],
    }


CASES = [
    case('flags_clear', flags=0x00),
    case('flags_suppress_bit', flags=0x80),
    case('flags_low_seven_bits', flags=0x7f),
    case('flags_all_bits', flags=0xff),
    case('flags_upper_bits_clear_low_byte', flags=0x100),
    case('flags_upper_bits_with_suppress', flags=0x180),
    case('word_zero', word=0),
    case('word_all_ones', word=MASK64),
    case('word_top_bit', word=1 << 63),
    case('word_suppressed_zero', flags=0x80, word=MASK64),
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
