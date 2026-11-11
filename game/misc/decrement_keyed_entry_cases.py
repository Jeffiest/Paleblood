#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic keyed tables for the keyed entry decrement (0x01e86e00): values that name no entry, keys that differ,
counts above, at, and below the floor (a negative count counts as below), and the entry at the top of the table.
The release it hands a spent slot to is the stubbed original at 0x01e86e60.

usage: decrement_keyed_entry_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e86e00'
RELEASE = '0x01e86e60'
RELEASE_RESULT = 0x55
TABLE_SIZE = 0x88000
ENTRIES_OFFSET = 0x8008
ENTRY_SIZE = 0x08

# The branch at 0x01e86e21 (a zero word has no flag bit, so the flag test before it exits first).
UNREACHABLE = {'0x01e86e21': ('taken', 'a zero word has no flag bit set, so the flag test before it exits first')}


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, word, entries=(), released=False):
    """A table with the given (index, key, count) entries set and the value the routine reads. When released is true
    the release at 0x01e86e60 is stubbed and returns its result."""
    memory = [{'addr': f'buf:table+{ENTRIES_OFFSET + ENTRY_SIZE * index:#x}', 'bytes': le32(key) + le32(count)}
              for index, key, count in entries]
    stubs = [{'address': RELEASE, 'argc': 2, 'ret': RELEASE_RESULT}] if released else []
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:table', 'rsi': 'buf:value'},
            'buffers': {'table': {'size': TABLE_SIZE},
                        'value': {'size': 4, 'bytes': le32(word)}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('flag_clear', 0x00123456),
    case('low24_all_ones', 0xabffffff),
    case('index_all_ones', 0x0080ffff),
    case('key_differs', 0x00800005, [(5, 0x00800006, 9)]),
    case('count_above_floor', 0x00800005, [(5, 0x00800005, 9)]),
    case('count_at_floor', 0x00800005, [(5, 0x00800005, 2)]),
    case('count_below_floor_released', 0x00800005, [(5, 0x00800005, 1)], released=True),
    case('count_negative_released', 0x00800005, [(5, 0x00800005, -1)], released=True),
    case('top_entry_counts_down', 0x0080fffe, [(0xfffe, 0x0080fffe, 5)]),
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
