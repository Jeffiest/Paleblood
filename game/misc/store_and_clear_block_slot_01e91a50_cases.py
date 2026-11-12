#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted word blocks for the store-and-clear (0x01e91a50): the slot's word is handed to the stubbed store
(0x01e8bae0) with the destination, then the stubbed zero-word assignment (0x01e8bed0) runs on the same word; the
destination is returned. Each slot word starts with a different value, the index is taken from the low 32 bits of
its register, and the destination's marker bytes must survive apart from the bytes the stub writes.

usage: store_and_clear_block_slot_01e91a50_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e91a50'
STORE = '0x01e8bae0'
ASSIGN = '0x01e8bed0'
BLOCK_SIZE = 0x60
SLOT_OFFSET = 0x10
SLOT_STRIDE = 0x10
WORD_IN_SLOT = 0xc
DEST_SIZE = 8
DEST_MARKER = 'cc' * DEST_SIZE
STORED_WORD = 'a1a2a3a4'
MASK64 = (1 << 64) - 1
PREFILL = 'ee' * BLOCK_SIZE


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, index=1, index_register=None, word=0x00123456, mask=0x80000000):
    """One store-and-clear: the slot at index holds a word and a mask, and the destination starts with marker bytes.
    The store stub writes the stored word into the destination; the assignment stub compares the word it is given."""
    register = index if index_register is None else index_register
    slot = SLOT_OFFSET + SLOT_STRIDE * index
    memory = [{'addr': f'buf:block+{slot + WORD_IN_SLOT:#x}', 'bytes': le32(word)},
              {'addr': f'buf:block+{slot + 0x8:#x}', 'bytes': le32(mask)}]
    stubs = [{'address': STORE, 'argc': 6, 'argi': [0, 1],
              'writes': [{'arg': 0, 'offset': 0, 'bytes': STORED_WORD}]},
             {'address': ASSIGN, 'argc': 6, 'argi': [0]}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:dest', 'rsi': 'buf:block', 'rdx': hex(register & MASK64),
                     'rcx': '0x0', 'r8': '0x0', 'r9': '0x0'},
            'buffers': {'dest': {'size': DEST_SIZE, 'bytes': DEST_MARKER},
                        'block': {'size': BLOCK_SIZE, 'bytes': PREFILL}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('slot_one_word_counted', index=1),
    case('slot_zero_word', index=2, word=0x0),
    case('slot_sign_bit_word', index=0, word=0x80000005),
    case('slot_last_index', index=4, word=0x00800005),
    case('slot_mask_zero_still_clears', index=3, word=0x00654321, mask=0x0),
    case('index_upper_bits_ignored', index=2, index_register=0x100000002, word=0x00000007),
    case('index_all_high_bits_slot_zero', index=0, index_register=0xffffffff00000000, word=0x00000009),
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
