#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic objects for the counted word move (0x01e90bc0): the object's word is stored in the destination through
the stubbed store (0x01e8bae0), then the stubbed assignment (0x01e8bed0) clears the object's word. The routine returns
the destination. Two words show that the object's word is passed through, not interpreted here.

usage: move_counted_word_01e90bc0_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e90bc0'
STORE = '0x01e8bae0'
ASSIGN = '0x01e8bed0'
OBJECT_SIZE = 0x10
WORD_OFFSET = 0xc


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, word):
    """A destination and an object holding word; the stubs compare the pointers they are given."""
    stubs = [{'address': STORE, 'argc': 6, 'argi': [0, 1], 'ret': word},
             {'address': ASSIGN, 'argc': 6, 'argi': [0]}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:dest', 'rsi': 'buf:object', 'r8': '0x0', 'r9': '0x0'},
            'buffers': {'dest': {'size': 4, 'bytes': le32(0xdeadbeef)},
                        'object': {'size': OBJECT_SIZE, 'bytes': '00' * OBJECT_SIZE}},
            'memory': [{'addr': f'buf:object+{WORD_OFFSET:#x}', 'bytes': le32(word)}],
            'stubs': stubs, 'imports': []}


CASES = [
    case('word_zero', 0x0),
    case('word_counted', 0x00800005),
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
