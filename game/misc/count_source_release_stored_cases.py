#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic word pairs for 0x01e8bd80: equal words, an empty stored word, a source word that matches and counts up,
a source key that differs, a source index of all ones, a stored word whose count is lowered, a stored word whose count
is spent and releases its slot, a stored word whose key differs or whose flag is clear, and a missing shared table
(two fatal reports that return, with flagless words so that nothing is read through the missing table).

usage: count_source_release_stored_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e8bd80'
TABLE_GLOBAL = '0x0593e990'
RELEASE = '0x01e86e60'
NAME_FATAL = '0x024b55b0'     # the engine's fatal report; it returns in the harness
TABLE_SIZE = 0x88000
ENTRIES_OFFSET = 0x8008
ENTRY_SIZE = 0x08

# The branch at 0x01e8bdf7 (the source is nonzero by then, so its zero test cannot exit) and the one at 0x01e8be72
# (the stored word is nonzero by then, so its zero test cannot exit).
UNREACHABLE = {
    '0x01e8bdf7': ('taken', 'the source word is nonzero on this path, so its zero test cannot exit'),
    '0x01e8be72': ('taken', 'the stored word is nonzero on this path, so its zero test cannot exit'),
}


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, stored, source, entries=(), table=True, released=False):
    """A stored word and a source word, with the shared table (when present) holding the given (index, key, count)
    entries. A missing table is reported once for a nonzero source and once for a nonzero stored word. The release is
    stubbed when released is true. The routine returns the stored word's address."""
    memory = [{'addr': 'buf:stored+0x0', 'bytes': le32(stored)},
              {'addr': 'buf:source+0x0', 'bytes': le32(source)}]
    stubs = []
    if table:
        memory.append({'addr': TABLE_GLOBAL, 'pointer': 'table'})
        for index, key, count in entries:
            memory.append({'addr': f'buf:table+{ENTRIES_OFFSET + ENTRY_SIZE * index:#x}',
                           'bytes': le32(key) + le32(count)})
    else:
        stubs += [{'address': NAME_FATAL, 'argc': 6} for _ in range(int(source != 0) + int(stored != 0))]
    if released:
        stubs.append({'address': RELEASE, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:stored', 'rsi': 'buf:source', 'r8': '0x0', 'r9': '0x0'},
            'buffers': {'stored': {'size': 4}, 'source': {'size': 4}, 'table': {'size': TABLE_SIZE}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('equal_words', 0x00800005, 0x00800005),
    case('equal_zero_words', 0x0, 0x0),
    case('stored_flag_clear_source_empty', 0x00123456, 0x0),
    case('stored_empty_source_missing_table', 0x0, 0x00123456, table=False),
    case('both_missing_table', 0x00123457, 0x00123456, table=False),
    case('source_matches_counts_up', 0x0, 0x00800005, [(5, 0x00800005, 9)]),
    case('source_key_differs', 0x0, 0x00800005, [(5, 0x00800006, 9)]),
    case('source_index_all_ones', 0x0, 0x0080ffff),
    case('stored_count_lowered', 0x00800007, 0x00800005,
         [(7, 0x00800007, 9), (5, 0x00800006, 0)]),
    case('stored_spent_released', 0x00800007, 0x00800005, [(7, 0x00800007, 1)], released=True),
    case('stored_flag_clear', 0x00123456, 0x00800005, [(5, 0x00800006, 0)]),
    case('stored_index_all_ones', 0x0080ffff, 0x00800005),
    case('stored_key_differs', 0x00800007, 0x00800005, [(7, 0x00800008, 4)]),
    case('both_entries_match', 0x00800007, 0x00800005, [(5, 0x00800005, 9), (7, 0x00800007, 9)]),
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
