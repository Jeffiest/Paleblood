#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic formatter calls for bb_misc_format_eight_words (0x00414920): an empty text and a
text of several lengths, a record of zero, of ones and of distinct words, and a length at the top
of its range. Each call to the builder, the label append, the word appends, the finish and the
release is a scripted stub, in call order.

usage: format_eight_words_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00414920'
BUILDER_INIT = '0x00457710'
LABEL_APPEND = '0x00457b70'
WORD_APPEND = '0x0278dbe0'
RELEASE_A = '0x0045a450'
FINISH = '0x00457870'
MASK64 = (1 << 64) - 1
TEXT_SIZE = 0x10
RECORD_SIZE = 0x20

# The word appends follow this order of record offsets.
WORD_ORDER = [0x00, 0x10, 0x04, 0x14, 0x08, 0x18, 0x0c, 0x1c]


def words(values):
    """Eight four-byte little-endian words as hex."""
    return b''.join(struct.pack('<I', v & 0xffffffff) for v in values).hex()


def case(cid, length, record, text=b'BBRM'):
    """One call: the text pointer, the length and the record pointer, with the callee stubs in
    call order."""
    buffers = {'text': {'size': TEXT_SIZE, 'bytes': text.ljust(TEXT_SIZE, b'\x00').hex()},
               'record': {'size': RECORD_SIZE, 'bytes': words(record) + '00' * (RECORD_SIZE - 32)}}
    stubs = [{'address': BUILDER_INIT, 'argc': 2},
             {'address': LABEL_APPEND, 'argc': 2}]
    stubs += [{'address': WORD_APPEND, 'argc': 2} for _ in WORD_ORDER]
    stubs += [{'address': RELEASE_A, 'argc': 1}, {'address': FINISH, 'argc': 1}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:text', 'rsi': hex(length & MASK64), 'rdx': 'buf:record'},
            'buffers': buffers, 'memory': [], 'stubs': stubs, 'imports': []}


CASES = [
    case('empty_text_zero_record', length=0, record=[0] * 8),
    case('short_text_distinct_words', length=5, record=[1, 2, 3, 4, 5, 6, 7, 8]),
    case('long_text_all_ones', length=0x100, record=[0xffffffff] * 8),
    case('top_length_high_words', length=MASK64, record=[0x80000000, 0x7fffffff, 0x12345678, 0x9abcdef0,
                                                          0, 0xffff, 0x10000, 0xfffe]),
]


def main():
    """Write deterministic synthetic input for the cases above."""
    if len(sys.argv) != 2:
        print(__doc__)
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
