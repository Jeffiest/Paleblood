#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic objects for the counted word object fill (0x01e90c20): the source's fill slot (0x20, a scripted stub at
0x00400020) writes the mask first; then the shared counter table's three flags are checked: entry 6148 must be clear
(key and count), the low byte of entry 6149's key must be set and its next byte must be clear. A failed check is the
engine's fatal report (0x024b55b0, which returns) and the checks go on. The last fill writes the object's word.

usage: fill_counted_word_object_01e90c20_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e90c20'
FILL = '0x00400020'           # a real game entry the source's fill slot points at
FATAL = '0x024b55b0'
TABLE_GLOBAL = '0x0593e990'
FLAG_FILE = '0x04d3309c'
FLAG_MESSAGE = '0x04b388a8'
TABLE_SIZE = 0x88000
ENTRIES_OFFSET = 0x8008
ENTRY_SIZE = 0x08
CHECKED_OFFSET = ENTRIES_OFFSET + ENTRY_SIZE * 6148     # 0x14028
FLAG_OFFSET = ENTRIES_OFFSET + ENTRY_SIZE * 6149        # 0x14030
OBJECT_SIZE = 0x10
MASK_OFFSET = 0x8
WORD_OFFSET = 0xc
VTABLE_FILL_OFFSET = 0x20
MASK_VALUE = 0x80000001

UNREACHABLE = {
    '0x01e90c66': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x01e90c8d'),
}


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, checked_key=0, checked_count=0, flag_key=0x1):
    """An object with a word, a source whose fill slot writes MASK_VALUE, and a shared table with the checked entry
    and the flag key given. The fatal report is stubbed for each failed check, in call order."""
    fatal_lines = []
    if checked_key != 0 or checked_count != 0:
        fatal_lines.append(0x363)
    if (flag_key & 0xff) == 0:
        fatal_lines.append(0x364)
    if (flag_key >> 8) & 0xff != 0:
        fatal_lines.append(0x365)
    fill_first = {'address': FILL, 'argc': 3, 'argi': [0, 1, 2],
                  'writes': [{'arg': 1, 'offset': 0, 'bytes': le32(MASK_VALUE)}]}
    fill_second = {'address': FILL, 'argc': 3, 'argi': [0, 2]}
    stubs = [fill_first]
    for line in fatal_lines:
        stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 1, 2]})
    stubs.append(fill_second)
    memory = [{'addr': 'buf:source', 'pointer': 'vt'},
              {'addr': f'buf:vt+{VTABLE_FILL_OFFSET:#x}', 'guest': FILL},
              {'addr': TABLE_GLOBAL, 'pointer': 'table'},
              {'addr': f'buf:table+{CHECKED_OFFSET:#x}',
               'bytes': le32(checked_key) + le32(checked_count)},
              {'addr': f'buf:table+{FLAG_OFFSET:#x}', 'bytes': le32(flag_key)},
              {'addr': f'buf:object+{MASK_OFFSET:#x}', 'bytes': le32(0x0)},
              {'addr': f'buf:object+{WORD_OFFSET:#x}', 'bytes': le32(0x00800005)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:object', 'rsi': 'buf:source', 'r8': '0x0', 'r9': '0x0'},
            'buffers': {'object': {'size': OBJECT_SIZE}, 'source': {'size': 8},
                        'vt': {'size': 0x28}, 'table': {'size': TABLE_SIZE}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('all_checks_pass', 0, 0, 0x1),
    case('checked_key_set_fatal', 0x5, 0, 0x1),
    case('checked_count_set_fatal', 0, 0x2, 0x1),
    case('flag_low_byte_clear_fatal', 0, 0, 0x100),
    case('flag_high_byte_set_fatal', 0, 0, 0x101),
    case('every_check_fatal', 0x5, 0x2, 0x0),
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
