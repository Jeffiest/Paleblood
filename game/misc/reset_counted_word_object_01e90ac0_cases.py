#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted word objects for the reset (0x01e90ac0): the virtual table is set, then the assignment of the
zero word (0x01e8bed0, stubbed) and the entry decrement (0x01e8bc00, stubbed) run on the word. The object's word is
set by the stubbed assignment, so each case differs only in the word and mask bytes the object holds before the call.

usage: reset_counted_word_object_01e90ac0_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e90ac0'
ASSIGN = '0x01e8bed0'
DECREMENT = '0x01e8bc00'
OBJECT_SIZE = 0x10
MASK_OFFSET = 0x8
WORD_OFFSET = 0xc


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, word, mask=0x80000000):
    """An object holding a word and a mask before the reset; the stubs compare the word slot they are given."""
    stubs = [{'address': ASSIGN, 'argc': 6, 'argi': [0]},
             {'address': DECREMENT, 'argc': 6, 'argi': [0]}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:object', 'r8': '0x0', 'r9': '0x0'},
            'buffers': {'object': {'size': OBJECT_SIZE, 'bytes': '00' * OBJECT_SIZE}},
            'memory': [{'addr': f'buf:object+{MASK_OFFSET:#x}', 'bytes': le32(mask)},
                       {'addr': f'buf:object+{WORD_OFFSET:#x}', 'bytes': le32(word)}],
            'stubs': stubs, 'imports': []}


CASES = [
    case('word_zero', 0x0),
    case('word_counted', 0x00800005),
    case('word_flagless', 0x00123456, mask=0x0),
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
