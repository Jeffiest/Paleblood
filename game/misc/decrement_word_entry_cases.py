#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic words for the entry decrement (0x01e8bc00): zero words, a missing shared table (a fatal report that
returns), words that name no entry, a key that differs, a count above, at and below the floor, and a negative count.
A spent entry releases its slot through the stubbed routine at 0x01e86e60.

usage: decrement_word_entry_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e8bc00'
TABLE_GLOBAL = '0x0593e990'
RELEASE = '0x01e86e60'
NAME_FATAL = '0x024b55b0'     # the engine's fatal report; it returns in the harness
TABLE_SIZE = 0x88000
ENTRIES_OFFSET = 0x8008
ENTRY_SIZE = 0x08

# The branch at 0x01e8bc68 (a flagged word is nonzero, so the zero test after the flag test is never taken).
UNREACHABLE = {'0x01e8bc68': ('taken', 'a word with the flag bit set is nonzero, so the zero test cannot exit')}


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, word, entries=(), table=True):
    """A word slot and the shared table with the given (index, key, count) entries; the table may be missing. The
    release is stubbed; the routine returns nothing."""
    memory = [{'addr': f'buf:slot+0x0', 'bytes': le32(word)}]
    stubs = []
    if table:
        memory.append({'addr': TABLE_GLOBAL, 'pointer': 'table'})
        for index, key, count in entries:
            memory.append({'addr': f'buf:table+{ENTRIES_OFFSET + ENTRY_SIZE * index:#x}',
                           'bytes': le32(key) + le32(count)})
    else:
        stubs.append({'address': NAME_FATAL, 'argc': 6})
    if entries and entries[0][2] < 2 and table and entries[0][1] == word:
        stubs.append({'address': RELEASE, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:slot', 'r8': '0x0', 'r9': '0x0'},
            'buffers': {'slot': {'size': 4}, 'table': {'size': TABLE_SIZE}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('zero_word', 0x0),
    case('table_missing_flag_clear', 0x00123456, table=False),
    case('flag_clear', 0x00123456),
    case('index_all_ones', 0x0080ffff),
    case('key_differs', 0x00800005, [(5, 0x00800006, 9)]),
    case('count_above_floor', 0x00800005, [(5, 0x00800005, 9)]),
    case('count_at_floor', 0x00800005, [(5, 0x00800005, 2)]),
    case('count_below_floor_released', 0x00800005, [(5, 0x00800005, 1)]),
    case('count_negative_released', 0x00800005, [(5, 0x00800005, -1)]),
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
