#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic formatter calls for bb_misc_format_four_bytes (0x00414a70): an empty text and a text
of several lengths, a four-byte block of zeros, of ones and of distinct bytes, and a block whose
bytes are at the top of their range. Each call to the builder, the label append, the byte appends,
the release and the finish is a scripted stub, in call order.

usage: format_four_bytes_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00414a70'
BUILDER_INIT = '0x00457710'
LABEL_APPEND = '0x00457b70'
BYTE_APPEND = '0x0278daf0'
RELEASE_A = '0x0045a450'
FINISH = '0x00457870'
MASK64 = (1 << 64) - 1
TEXT_SIZE = 0x10
BLOCK_SIZE = 0x10


def case(cid, length, block, text=b'BBRM'):
    """One call: the text pointer, the length and the block pointer, with the callee stubs in call
    order."""
    buffers = {'text': {'size': TEXT_SIZE, 'bytes': text.ljust(TEXT_SIZE, b'\x00').hex()},
               'block': {'size': BLOCK_SIZE, 'bytes': bytes(block).ljust(BLOCK_SIZE, b'\x00').hex()}}
    stubs = [{'address': BUILDER_INIT, 'argc': 2},
             {'address': LABEL_APPEND, 'argc': 2}]
    stubs += [{'address': BYTE_APPEND, 'argc': 2} for _ in range(4)]
    stubs += [{'address': RELEASE_A, 'argc': 1}, {'address': FINISH, 'argc': 1}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:text', 'rsi': hex(length & MASK64), 'rdx': 'buf:block'},
            'buffers': buffers, 'memory': [], 'stubs': stubs, 'imports': []}


CASES = [
    case('empty_text_zero_block', length=0, block=[0, 0, 0, 0]),
    case('short_text_distinct_bytes', length=5, block=[1, 2, 3, 4]),
    case('long_text_all_ones', length=0x100, block=[0xff, 0xff, 0xff, 0xff]),
    case('top_length_high_bytes', length=MASK64, block=[0x80, 0x7f, 0x12, 0xfe]),
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
