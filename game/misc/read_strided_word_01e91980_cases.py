#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic strided word table reads (0x01e91980): each index selects its entry's word, the word is stored into a
destination that is surrounded by marker bytes, and the destination address is returned. Index bits above the low 32
are ignored, and the words cover zero, sign bit, all ones and an ordinary value.

usage: read_strided_word_01e91980_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e91980'
ENTRY_COUNT = 4
HEADER_SIZE = 0x1c
ENTRY_SIZE = 16
TABLE_SIZE = HEADER_SIZE + ENTRY_COUNT * ENTRY_SIZE
MARKER = 'cc' * 4
WORDS = [0x00000000, 0x12345678, 0x80000000, 0xffffffff]


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def table_bytes(words):
    """A header of 0x1c filler bytes, then each entry: its word, then 12 filler bytes that the reads must not use."""
    body = ''.join(le32(word) + 'dd' * 12 for word in words)
    return '77' * HEADER_SIZE + body


def case(cid, index, words=WORDS, result_marker='00' * 4):
    """One read: the destination is the middle four bytes of a 12-byte buffer, so the marker bytes either side must
    survive, and the table buffer holds the words for each entry."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:out+4', 'rsi': 'buf:table', 'rdx': hex(index)},
            'buffers': {'out': {'size': 12, 'bytes': MARKER + result_marker + MARKER},
                        'table': {'size': TABLE_SIZE, 'bytes': table_bytes(words)}},
            'imports': [], 'stubs': []}


CASES = [
    case('entry_zero_word_zero', 0),
    case('entry_one_ordinary_word', 1),
    case('entry_two_sign_bit_word', 2),
    case('entry_three_all_ones_word', 3),
    case('index_upper_bits_ignored', 0x100000002),
    case('index_high_word_only_is_entry_zero', 0x100000000),
    case('index_all_low_bits_set_wraps_to_entry_three', 0xffffffff00000003),
    case('destination_prior_value_overwritten', 1, result_marker='ff' * 4),
    case('word_not_stored_from_padding', 2, words=[0x0, 0x0, 0x0badf00d, 0x0]),
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
