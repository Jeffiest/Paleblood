#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic words for the cursor start (0x01e8d380): a non-negative word, negative words with each tag (zero, three,
four, five, seven) and the handler's tag, which is stubbed at 0x01e89070 and returns what the stub gives.

usage: start_word_cursor_01e8d380_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e8d380'
HANDLER = '0x01e89070'
CURSOR_SIZE = 0x18
NEVER_SET = 0xdeadbeef        # the cursor's fields before the call, so every write shows


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, word, handler_ret=None):
    """A cursor holding garbage and a word; when the word's tag is the handler's, the handler stub returns handler_ret."""
    stubs = []
    if handler_ret is not None:
        stubs.append({'address': HANDLER, 'argc': 2, 'ret': handler_ret})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:cursor', 'rsi': 'buf:word'},
            'buffers': {'cursor': {'size': CURSOR_SIZE, 'bytes': le32(NEVER_SET) * (CURSOR_SIZE // 4)},
                        'word': {'size': 4, 'bytes': le32(word)}},
            'memory': [], 'stubs': stubs, 'imports': []}


CASES = [
    case('positive_word', 0x00123456),
    case('positive_top_bit_clear', 0x7fffffff),
    case('zero_word', 0x0),
    case('negative_tag_zero', 0x80000001),
    case('negative_tag_three', 0xb0000000),
    case('negative_tag_five', 0xd0000000),
    case('negative_tag_seven', 0xf0000000),
    case('negative_handler_tag_returns_handler', 0xc0000abc, handler_ret=0x1234),
    case('negative_handler_tag_returns_zero', 0xc0000000, handler_ret=0x0),
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
