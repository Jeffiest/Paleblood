#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic word moves for 0x01e8bcb0: equal words (nothing happens), an empty stored word, a stored word that names
no entry, a key that differs, a count above and at the floor, a spent count that releases its slot, and a missing
shared table (a fatal report that returns). The source word moves into the stored word and the source is cleared.

usage: move_word_release_old_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e8bcb0'
TABLE_GLOBAL = '0x0593e990'
RELEASE = '0x01e86e60'
NAME_FATAL = '0x024b55b0'     # the engine's fatal report; it returns in the harness
TABLE_SIZE = 0x88000
ENTRIES_OFFSET = 0x8008
ENTRY_SIZE = 0x08

# The branch at 0x01e8bd29 (a flagged word is nonzero, so the zero test after the flag test is never taken).
UNREACHABLE = {'0x01e8bd29': ('taken', 'a word with the flag bit set is nonzero, so the zero test cannot exit')}


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, stored, source, entries=(), table=True):
    """A stored word and a source word, with the shared table (when present) holding the given (index, key, count)
    entries. The release is stubbed; the routine returns the stored word's address."""
    memory = [{'addr': 'buf:stored+0x0', 'bytes': le32(stored)},
              {'addr': 'buf:source+0x0', 'bytes': le32(source)}]
    stubs = []
    if table:
        memory.append({'addr': TABLE_GLOBAL, 'pointer': 'table'})
        for index, key, count in entries:
            memory.append({'addr': f'buf:table+{ENTRIES_OFFSET + ENTRY_SIZE * index:#x}',
                           'bytes': le32(key) + le32(count)})
    elif stored != 0:
        stubs.append({'address': NAME_FATAL, 'argc': 6})
    if table and entries and entries[0][1] == stored and entries[0][2] < 2 and (stored & 0x800000):
        stubs.append({'address': RELEASE, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:stored', 'rsi': 'buf:source', 'r8': '0x0', 'r9': '0x0'},
            'buffers': {'stored': {'size': 4}, 'source': {'size': 4}, 'table': {'size': TABLE_SIZE}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('equal_words', 0x00800005, 0x00800005),
    case('stored_empty', 0x0, 0x00800005),
    case('stored_flag_clear', 0x00123456, 0x00800005),
    case('stored_table_missing', 0x00123456, 0x00800005, table=False),
    case('stored_index_all_ones', 0x0080ffff, 0x00800005),
    case('key_differs', 0x00800005, 0x00800007, [(5, 0x00800006, 9)]),
    case('count_above_floor', 0x00800005, 0x00800007, [(5, 0x00800005, 9)]),
    case('count_at_floor', 0x00800005, 0x00800007, [(5, 0x00800005, 2)]),
    case('count_spent_released', 0x00800005, 0x00800007, [(5, 0x00800005, 1)]),
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
