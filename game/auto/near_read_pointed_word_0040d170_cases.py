#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic reads of a word through a holder's pointer (a template: near_cases.py puts the two
offsets in place of the slot names and the function's address in place of the one below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

The holder's pointer leads to a source whose word is the result. Covers words of zero, all ones,
the top bit, and a word whose low bytes differ from its high bytes. Both objects reach past the
field that is read and are filled with other bytes, so a read from another place shows up.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040d170'
SOURCE_FIELD = NEAR_SLOT_0
WORD_FIELD = NEAR_SLOT_1
HOLDER_BYTES = SOURCE_FIELD + 0x20
SOURCE_BYTES = WORD_FIELD + 0x20
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
