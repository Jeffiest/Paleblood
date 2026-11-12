#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cursors and sources for the block fill (0x01e8d3c0): a cursor without a block (nothing is written), a
source without a kind object (no flags), kind bytes with each flag bit alone and both, and entries present and absent
in every position. The routine returns the block.

usage: fill_word_cursor_block_01e8d3c0_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e8d3c0'
CURSOR_SIZE = 0x18
BLOCK_SIZE = 0x40
SOURCE_SIZE = 0x80
KIND_SIZE = 0x90
KIND_BITS_OFFSET = 0x8c
SOURCE_VALUE_OFFSET = 0x10
ENTRIES_OFFSET = 0x18
ENTRY_SIZE = 0x10
BLOCK_FLAGS_OFFSET = 0x18
BLOCK_VALUE_OFFSET = 0x1c
BLOCK_ITEMS_OFFSET = 0x20
NO_ITEM = 0xffffffff
SOURCE_VALUE = 0xabc


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, present, kind_bits=None, block=True):
    """A cursor with a block (when block is true) filled from a source with the given presence of its six entries; the
    source's kind object holds kind_bits, or there is no kind object when kind_bits is None."""
    memory = []
    if block:
        memory.append({'addr': 'buf:cursor+0x8', 'pointer': 'block'})
    memory.append({'addr': f'buf:source+{SOURCE_VALUE_OFFSET:#x}', 'bytes': le32(SOURCE_VALUE)})
    if kind_bits is not None:
        memory.append({'addr': f'buf:source+0x8', 'pointer': 'kind'})
        memory.append({'addr': f'buf:kind+{KIND_BITS_OFFSET:#x}', 'bytes': f'{kind_bits:02x}'})
    for index, here in enumerate(present):
        base = ENTRIES_OFFSET + ENTRY_SIZE * index
        memory.append({'addr': f'buf:source+{base:#x}', 'bytes': le32(0x100 + index)})
        if here:
            memory.append({'addr': f'buf:source+{base + 0x8:#x}', 'pointer': f'item{index}'})
    buffers = {'cursor': {'size': CURSOR_SIZE}, 'source': {'size': SOURCE_SIZE},
               'kind': {'size': KIND_SIZE}, 'block': {'size': BLOCK_SIZE}}
    for index in range(len(present)):
        buffers[f'item{index}'] = {'size': 8}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:cursor', 'rsi': 'buf:source'},
            'buffers': buffers, 'memory': memory, 'stubs': [], 'imports': []}


ALL = [True] * 6
NONE = [False] * 6
MIXED_A = [True, False, True, False, True, False]
MIXED_B = [False, True, False, True, False, True]

CASES = [
    case('no_block_nothing_written', ALL, kind_bits=0x3, block=False),
    case('no_kind_all_absent', NONE),
    case('no_kind_all_present', ALL),
    case('kind_bits_zero_mixed', MIXED_A, kind_bits=0x00),
    case('kind_bits_low_only', MIXED_B, kind_bits=0x01),
    case('kind_bits_high_only', MIXED_A, kind_bits=0x02),
    case('kind_bits_both_set', ALL, kind_bits=0x03),
    case('kind_bits_high_noise_clear', MIXED_B, kind_bits=0xfc),
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
