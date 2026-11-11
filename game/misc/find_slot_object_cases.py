#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot tables for the slot object lookup (0x01e86fa0): words that name no slot, empty slots, keys that
differ in one place, a key that matches in the low word and differs in its upper bits, and the first, last and
largest slots the lookup reaches.

usage: find_slot_object_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e86fa0'
TABLE_SIZE = 0x80000
SLOT_POINTERS = 0x8
OBJECT_SIZE = 0x10
OBJECT_KEY = 0x08

# The branch at 0x01e86fc1 (a zero word has no flag bit, so the flag test before it exits first).
UNREACHABLE = {'0x01e86fc1': ('taken', 'a zero word has no flag bit set, so the flag test before it exits first')}


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, word, slot=None, key=None):
    """A table with an object in the given slot whose key is the given value, and the word the routine reads. The
    routine returns the object or null."""
    memory = []
    buffers = {'table': {'size': TABLE_SIZE}, 'word': {'size': 4, 'bytes': le32(word)}}
    if slot is not None:
        buffers['obj'] = {'size': OBJECT_SIZE}
        memory.append({'addr': f'buf:table+{SLOT_POINTERS + 8 * slot:#x}', 'pointer': 'obj'})
        memory.append({'addr': f'buf:obj+{OBJECT_KEY:#x}', 'bytes': le32(key)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:table', 'rsi': 'buf:word'},
            'buffers': buffers, 'memory': memory, 'stubs': [], 'imports': []}


CASES = [
    case('flag_clear', 0x00123456),
    case('index_all_ones', 0x0080ffff),
    case('low24_all_ones_no_slot', 0xabffffff),
    case('slot_empty', 0x00800005),
    case('key_differs', 0x00800005, slot=5, key=0x00800006),
    case('key_matches', 0x00800005, slot=5, key=0x00800005),
    case('key_differs_in_upper_bits', 0x7f800005, slot=5, key=0x00800005),
    case('largest_cache_slot_matches', 0x00800fff, slot=0xfff, key=0x00800fff),
    case('largest_lookup_slot_matches', 0x0080fffe, slot=0xfffe, key=0x0080fffe),
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
