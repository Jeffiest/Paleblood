#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic words for the counted assignment (0x01e8bed0): equal words, zero words, flagged words that name an
entry (matching and not), the top index, counts above, at and below the floor, a missing shared table (a fatal report
that returns, with flagless words only), and both words named at once. A spent entry releases its slot through the
stubbed routine at 0x01e86e60.

usage: assign_counted_word_01e8bed0_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e8bed0'
TABLE_GLOBAL = '0x0593e990'
RELEASE = '0x01e86e60'
NAME_FATAL = '0x024b55b0'     # the engine's fatal report; it returns in the harness
TABLE_SIZE = 0x88000
ENTRIES_OFFSET = 0x8008
ENTRY_SIZE = 0x08
FLAG = 0x800000

# The branch at 0x01e8bf47 (a flagged word is nonzero, so the zero test after the flag test is never taken) and the
# branch at 0x01e8bfc2 (the old word was tested nonzero before the table lookup, and nothing changes it).
UNREACHABLE = {
    '0x01e8bf47': ('taken', 'a flagged word is nonzero, so the zero test after the flag test cannot exit'),
    '0x01e8bfc2': ('taken', 'the old word was tested nonzero at 0x01e8bf68 and is not changed before this test'),
}


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def named_index(word):
    """The table index a word names, or None when it names none (the same test the routine makes)."""
    index = word & 0xffffff
    if index == 0xffffff:
        index = 0xffffffff
    if index & FLAG == 0:
        return None
    index &= 0xffff
    return None if index == 0xffff else index


def case(cid, dest, src, entries=(), table=True):
    """A destination holding dest and a source holding src; the shared table is set when table is true, with the
    given (index, key, count) entries. The routine returns the destination."""
    memory = []
    stubs = []
    by_index = {index: (key, count) for index, key, count in entries}
    if table:
        memory.append({'addr': TABLE_GLOBAL, 'pointer': 'table'})
        for index, key, count in entries:
            memory.append({'addr': f'buf:table+{ENTRIES_OFFSET + ENTRY_SIZE * index:#x}',
                           'bytes': le32(key) + le32(count)})
    changes = src != dest
    if changes and src != 0 and not table:
        stubs.append({'address': NAME_FATAL, 'argc': 6})
    if changes and dest != 0 and not table:
        stubs.append({'address': NAME_FATAL, 'argc': 6})
    if changes and dest != 0 and table:
        index = named_index(dest)
        if index is not None and index in by_index:
            key, count = by_index[index]
            if key == dest and count < 2:
                stubs.append({'address': RELEASE, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:dest', 'rsi': 'buf:src', 'r8': '0x0', 'r9': '0x0'},
            'buffers': {'dest': {'size': 4, 'bytes': le32(dest)}, 'src': {'size': 4, 'bytes': le32(src)},
                        'table': {'size': TABLE_SIZE}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('equal_words_unchanged', 0x00800005, 0x00800005, [(5, 0x00800005, 4)]),
    case('both_zero', 0x0, 0x0),
    case('clear_flagless_old', 0x00123456, 0x0),
    case('clear_old_names_no_entry', 0x00800005, 0x0),
    case('clear_old_count_above_floor', 0x00800005, 0x0, [(5, 0x00800005, 9)]),
    case('clear_old_count_at_floor', 0x00800005, 0x0, [(5, 0x00800005, 2)]),
    case('clear_old_count_below_floor_released', 0x00800005, 0x0, [(5, 0x00800005, 1)]),
    case('clear_old_count_negative_released', 0x00800005, 0x0, [(5, 0x00800005, -1)]),
    case('clear_old_key_differs', 0x00800005, 0x0, [(5, 0x00800006, 9)]),
    case('clear_old_index_all_ones', 0x0080ffff, 0x0),
    case('clear_old_low24_all_ones', 0xabffffff, 0x0),
    case('new_names_entry_counts_up', 0x0, 0x00800005, [(5, 0x00800005, 9)]),
    case('new_key_differs', 0x0, 0x00800005, [(5, 0x00800006, 9)]),
    case('new_flagless', 0x0, 0x00123456),
    case('new_index_all_ones', 0x0, 0x0080ffff),
    case('both_flagged_both_entries', 0x00800006, 0x00800005, [(5, 0x00800005, 4), (6, 0x00800006, 9)]),
    case('both_flagged_old_released', 0x00800006, 0x00800005, [(5, 0x00800005, 4), (6, 0x00800006, 1)]),
    case('table_missing_new_flagless', 0x0, 0x00123456, table=False),
    case('table_missing_old_flagless', 0x00123456, 0x0, table=False),
    case('table_missing_both_flagless', 0x00123456, 0x00654321, table=False),
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
