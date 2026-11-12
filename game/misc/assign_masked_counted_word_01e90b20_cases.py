#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic words and objects for the masked assignment (0x01e90b20): a non-negative word and a negative word with
another tag take no value (nothing is assigned); a word tagged for the cursor handler (0x01e89070, stubbed) leaves a
cursor whose block either is missing, holds a value the mask does not share, or holds a value the mask shares (the
word is assigned, through the stubbed assignment at 0x01e8bed0).

usage: assign_masked_counted_word_01e90b20_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e90b20'
HANDLER = '0x01e89070'
ASSIGN = '0x01e8bed0'
OBJECT_SIZE = 0x10
MASK_OFFSET = 0x8
WORD_OFFSET = 0xc
BLOCK_SIZE = 0x40
BLOCK_VALUE_OFFSET = 0x1c
HANDLER_WORD = 0xc0000000     # tag four: the cursor handler's tag


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def is_handler_word(word):
    """True when the word is negative and its tag is the cursor handler's tag."""
    return word & 0x80000000 != 0 and (word >> 28) & 0x7 == 4


def case(cid, word, mask=0x80000000, handler_block=None):
    """An object with the mask and an old word, and a source word. When the word is tagged for the handler, the handler
    stub writes the cursor's block pointer: the block buffer holding handler_block at +0x1c, or no block when None."""
    stubs = []
    buffers = {'object': {'size': OBJECT_SIZE, 'bytes': '00' * OBJECT_SIZE},
               'source': {'size': 4, 'bytes': le32(word)},
               'block': {'size': BLOCK_SIZE}}
    memory = [{'addr': f'buf:object+{MASK_OFFSET:#x}', 'bytes': le32(mask)},
              {'addr': f'buf:object+{WORD_OFFSET:#x}', 'bytes': le32(0x00654321)}]
    if is_handler_word(word):
        if handler_block is None:
            writes = [{'arg': 0, 'offset': 0x8, 'bytes': '00' * 8}]
        else:
            memory.append({'addr': f'buf:block+{BLOCK_VALUE_OFFSET:#x}', 'bytes': le32(handler_block)})
            writes = [{'arg': 0, 'offset': 0x8, 'pointer': 'block'}]
        stubs.append({'address': HANDLER, 'argc': 6, 'argi': [1], 'ret': 0, 'writes': writes})
    if is_handler_word(word) and handler_block is not None and handler_block & mask:
        stubs.append({'address': ASSIGN, 'argc': 6, 'argi': [0, 1]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object', 'rsi': 'buf:source', 'r8': '0x0', 'r9': '0x0'},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('positive_word_takes_no_value', 0x00123456),
    case('negative_other_tag_takes_no_value', 0x90000000),
    case('negative_tag_above_handler_takes_no_value', 0xd0000000),
    case('handler_no_block', HANDLER_WORD, handler_block=None),
    case('handler_block_value_not_shared', HANDLER_WORD, mask=0x2, handler_block=0x1),
    case('handler_block_value_shared', HANDLER_WORD, mask=0x80000000, handler_block=0x80000001),
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
