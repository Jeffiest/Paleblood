#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic copies for misc_copy_word_triple (0x026fc750), for tools/verify.py run.

usage: copy_word_triple_cases.py OUT_DIR

The original copies three 32-bit words from the source at RSI into the target at RDI (+0x08, +0x0c, +0x10),
reading each source word with a 32-bit load, and leaves the last word it read in RAX, zero-extended.
The target buffer is filled with a marker so any write outside the three words shows up in the comparison.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026fc750'
TARGET_SIZE = 0x18
MARKER = 'a5' * TARGET_SIZE


def words_hex(*words):
    """Little-endian hex bytes of 32-bit words, in the order given."""
    return ''.join(int(word & 0xffffffff).to_bytes(4, 'little').hex() for word in words)


def case(cid, first, second, third):
    """One copy of three source words into a marked target."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:target', 'rsi': 'buf:source'},
            'buffers': {'target': {'size': TARGET_SIZE, 'bytes': MARKER},
                        'source': {'size': 0xc, 'bytes': words_hex(first, second, third)}},
            'memory': [],
            'imports': [],
            'stubs': []}


CASES = [
    case('words_zero', 0, 0, 0),
    case('words_ordinary', 0x12345678, 0x9abcdef0, 0x0badf00d),
    case('words_high_bit_last', 0x00000001, 0x00000002, 0x80000000),
    case('words_all_ones', 0xffffffff, 0xffffffff, 0xffffffff),
]


def main():
    """Write deterministic synthetic copies to the requested directory."""
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
