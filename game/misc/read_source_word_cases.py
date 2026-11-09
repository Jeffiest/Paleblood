#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic word reads for misc_read_source_word (0x0040d170).

The holder's pointer at 0x10 leads to a source whose word at 0x20 is the result. Covers words of
zero, all ones, the top bit, and a word whose low bytes differ from its high bytes.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040d170'
HOLDER_BYTES = 0x18
SOURCE_BYTES = 0x28
SOURCE_FIELD = 0x10
WORD_FIELD = 0x20
MASK64 = (1 << 64) - 1


def case(cid, word):
    """One read of the source word."""
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:holder'},
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
    case('word_ordinary', 0x1122334455667788),
    case('word_zero', 0),
    case('word_all_ones', MASK64),
    case('word_top_bit', 1 << 63),
    case('word_high_word_only', 0xabcd00000000),
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
