#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pair matches for misc_pair_matches_02242b40 (0x02242b40).

usage: pair_matches_02242b40_cases.py OUT_DIR

The same predicate as misc_pair_matches_022429e0: keys at 0x18 and 0x20, a pair of two words, and
only a pair size of 0x10 can match. Covers matches, mismatches in either word, zero keys, wrong sizes,
and a size whose high bits are set.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02242b40'
MASK64 = (1 << 64) - 1


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, key1=0x1111, key2=0x2222, first=0x1111, second=0x2222, size=0x10):
    """One match of a pair against the owner's keys; size is passed as the 64-bit register."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:owner', 'rsi': 'buf:pair', 'rdx': hex(size & MASK64)},
            'buffers': {'owner': {'size': 0x28, 'bytes': '77' * 0x28}, 'pair': {'size': 0x10}},
            'memory': [{'addr': 'buf:owner+24', 'bytes': word(key1)},
                       {'addr': 'buf:owner+32', 'bytes': word(key2)},
                       {'addr': 'buf:pair+0', 'bytes': word(first)},
                       {'addr': 'buf:pair+8', 'bytes': word(second)}],
            'imports': [], 'stubs': []}


CASES = [
    case('both_words_match'),
    case('first_word_differs', first=0x1112),
    case('second_word_differs', second=0x2223),
    case('zero_first_and_zero_key', key1=0, first=0, second=0x9999),
    case('zero_first_nonzero_key', first=0),
    case('zero_first_second_ignored', key1=0, first=0, second=0x2222),
    case('first_matches_second_differs_nonzero', second=0),
    case('size_eight_never_matches'),
    case('size_zero_never_matches', size=0),
    case('size_twenty_never_matches', size=0x20),
    case('size_negative_never_matches', size=-16),
    case('size_high_bits_ignored', size=0x100000010),
    case('keys_all_ones_match', key1=(1 << 64) - 1, key2=0, first=(1 << 64) - 1, second=0),
    case('high_bit_words_match', key1=1 << 63, key2=1 << 62, first=1 << 63, second=1 << 62),
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
