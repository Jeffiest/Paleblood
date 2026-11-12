#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted word blocks for the reset (0x01e91880): the block's virtual table is set, then each of the five
objects, from the last slot to the first, gets the counted word virtual table and two stubbed calls on its word: the
zero-word assignment (0x01e8bed0) and the entry decrement (0x01e8bc00). The block's kind and object masks are not
written, so each case starts from different bytes there and the whole block is compared afterwards.

usage: reset_counted_word_block_01e91880_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e91880'
ASSIGN = '0x01e8bed0'
DECREMENT = '0x01e8bc00'
BLOCK_SIZE = 0x60
SLOT_COUNT = 5
SLOT_OFFSET = 0x10
SLOT_STRIDE = 0x10
WORD_OFFSET = 0xc
PREFILL_GARBAGE = 'ee' * BLOCK_SIZE
PREFILL_ZERO = '00' * BLOCK_SIZE
PREFILL_MIXED = 'a5' * BLOCK_SIZE


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def stubs_for_slots():
    """Two stubbed calls per slot in the original's order: the last slot first, the assignment then the decrement;
    each stub compares the word slot it is given."""
    stubs = []
    for index in reversed(range(SLOT_COUNT)):
        stubs.append({'address': ASSIGN, 'argc': 6, 'argi': [0]})
        stubs.append({'address': DECREMENT, 'argc': 6, 'argi': [0]})
    return stubs


def case(cid, prefill=PREFILL_GARBAGE):
    """One reset of a block that starts with the given bytes; the whole block is compared afterwards."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:block', 'rdx': '0x0', 'rcx': '0x0', 'r8': '0x0', 'r9': '0x0'},
            'buffers': {'block': {'size': BLOCK_SIZE, 'bytes': prefill}},
            'imports': [], 'stubs': stubs_for_slots()}


CASES = [
    case('block_from_garbage'),
    case('block_from_zero_bytes', prefill=PREFILL_ZERO),
    case('block_from_mixed_bytes', prefill=PREFILL_MIXED),
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
