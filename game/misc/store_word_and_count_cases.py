#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic words for the store and count (0x01e8bb70): zero words, words that name no entry, a key that differs,
a key that matches (its count goes up), the top of the table, and a missing shared table, which is a fatal report
that returns before the flagless word is stored.

usage: store_word_and_count_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e8bb70'
TABLE_GLOBAL = '0x0593e990'
NAME_FATAL = '0x024b55b0'     # the engine's fatal report; it returns in the harness
TABLE_SIZE = 0x88000
ENTRIES_OFFSET = 0x8008
ENTRY_SIZE = 0x08

# The branch at 0x01e8bbd7 (a flagged word is nonzero, so the zero test after the flag test is never taken).
UNREACHABLE = {'0x01e8bbd7': ('taken', 'a word with the flag bit set is nonzero, so the zero test cannot exit')}


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, word, entries=(), table=True):
    """A destination and a word; the shared table is set when table is true, with the given (index, key, count)
    entries. The routine returns the word."""
    memory = []
    stubs = []
    if table:
        memory.append({'addr': TABLE_GLOBAL, 'pointer': 'table'})
        for index, key, count in entries:
            memory.append({'addr': f'buf:table+{ENTRIES_OFFSET + ENTRY_SIZE * index:#x}',
                           'bytes': le32(key) + le32(count)})
    else:
        stubs.append({'address': NAME_FATAL, 'argc': 4})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:dest', 'rsi': 'buf:word'},
            'buffers': {'dest': {'size': 4}, 'word': {'size': 4, 'bytes': le32(word)},
                        'table': {'size': TABLE_SIZE}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('zero_word', 0x0),
    case('flag_clear', 0x00123456),
    case('low24_all_ones', 0xabffffff),
    case('index_all_ones', 0x0080ffff),
    case('key_differs', 0x00800005, [(5, 0x00800006, 9)]),
    case('key_matches_counts', 0x00800005, [(5, 0x00800005, 9)]),
    case('top_entry_matches', 0x0080fffe, [(0xfffe, 0x0080fffe, 0)]),
    case('table_missing_flag_clear', 0x00123456, table=False),
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
