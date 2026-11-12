#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted word blocks and source words for the slot assignment (0x01e91990): a non-negative word or one
with another tag takes no value; a word tagged for the cursor handler (0x01e89070, stubbed) leaves a cursor whose
block either is missing, holds a value the slot's mask does not share, or holds a value the mask shares (the word is
assigned through the stubbed assignment at 0x01e8bed0, which receives the value and the mask). The slot is chosen by
the index register, whose upper bits are ignored.

usage: assign_block_slot_word_01e91990_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e91990'
HANDLER = '0x01e89070'
ASSIGN = '0x01e8bed0'
BLOCK_SIZE = 0x60
SLOT_OFFSET = 0x10
SLOT_STRIDE = 0x10
MASK_IN_SLOT = 0x8
WORD_IN_SLOT = 0xc
CURSOR_BLOCK_SIZE = 0x40
CURSOR_VALUE_OFFSET = 0x1c
HANDLER_WORD = 0xc0000000     # tag four: the cursor handler's tag
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
PREFILL = 'ee' * BLOCK_SIZE


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & MASK32).hex()


def is_handler_word(word):
    """True when the word is negative and its tag is the cursor handler's tag."""
    return word & 0x80000000 != 0 and (word >> 28) & 0x7 == 4


def case(cid, word, index=1, index_register=None, mask=0x80000000, handler_block=None):
    """A block whose slot at index holds a mask and a word, and a source word. When the word is tagged for the handler,
    the handler stub writes the cursor's block pointer: a block holding handler_block at +0x1c, or no block when None.
    The assignment is stubbed and compares the destination, the source, the value and the mask."""
    register = index if index_register is None else index_register
    slot = SLOT_OFFSET + SLOT_STRIDE * index
    memory = [{'addr': f'buf:block+{slot + MASK_IN_SLOT:#x}', 'bytes': le32(mask)},
              {'addr': f'buf:block+{slot + WORD_IN_SLOT:#x}', 'bytes': le32(0x00654321)}]
    buffers = {'block': {'size': BLOCK_SIZE, 'bytes': PREFILL},
               'source': {'size': 4, 'bytes': le32(word)},
               'cursor_block': {'size': CURSOR_BLOCK_SIZE, 'bytes': '00' * CURSOR_BLOCK_SIZE}}
    stubs = []
    if is_handler_word(word):
        if handler_block is None:
            writes = [{'arg': 0, 'offset': 0x8, 'bytes': '00' * 8}]
        else:
            memory.append({'addr': f'buf:cursor_block+{CURSOR_VALUE_OFFSET:#x}', 'bytes': le32(handler_block)})
            writes = [{'arg': 0, 'offset': 0x8, 'pointer': 'cursor_block'}]
        stubs.append({'address': HANDLER, 'argc': 6, 'argi': [1], 'ret': 0, 'writes': writes})
    value = handler_block if (is_handler_word(word) and handler_block is not None) else 0
    if value & mask:
        stubs.append({'address': ASSIGN, 'argc': 6, 'argi': [0, 1, 2, 3]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:block', 'rsi': hex(register & MASK64), 'rdx': 'buf:source',
                     'r8': '0x0', 'r9': '0x0'},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('positive_word_takes_no_value', 0x00123456),
    case('negative_other_tag_takes_no_value', 0x90000000),
    case('negative_tag_above_handler_takes_no_value', 0xd0000000),
    case('handler_no_block', HANDLER_WORD, handler_block=None),
    case('handler_block_value_not_shared', HANDLER_WORD, mask=0x2, handler_block=0x1),
    case('handler_block_value_shared', HANDLER_WORD, mask=0x80000000, handler_block=0x80000001),
    case('handler_shared_low_bit', HANDLER_WORD, mask=0x1, handler_block=0x80000001),
    case('index_zero_slot', HANDLER_WORD, index=0, mask=0x80000000, handler_block=0x80000000),
    case('index_last_slot', HANDLER_WORD, index=4, mask=0x80000000, handler_block=0x80000000),
    case('index_upper_bits_ignored', HANDLER_WORD, index=2, index_register=0x100000002,
         mask=0x80000000, handler_block=0x80000000),
    case('index_all_high_bits_positive_word', 0x00123456, index=3, index_register=0xffffffff00000003),
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
