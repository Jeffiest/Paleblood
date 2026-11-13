#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_build_name_table_01b1ef80 (0x01b1ef80), for tools/verify.py run.

usage: build_name_table_01b1ef80_cases.py OUT_DIR

The function allocates a 0xb8-byte table through the allocator held at 0x05940420 (a virtual call through
slot 0x58), starts its three names with the shared allocator at 0x05940670 (fetched through 0x02fa2b10 when
the slot is empty; its info slot at +0x20 fills a flag byte that must have bit 0x20 or the fatal report
0x024b55b0 is called), then assigns the empty text to each name through 0x02a2a720. Covers a failed
allocation, a shared allocator that is present and one that is fetched, and a failing info check for each of
the three names.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01b1ef80'
TABLE_ALLOCATOR = 0x05940420
NAME_ALLOCATOR = 0x05940670
ALLOCATE = '0x00400020'      # slot 0x58 of the table allocator; stubbed real entry
INFO = '0x004000a0'          # slot 0x20 of the shared allocator; stubbed real entry
FETCH = '0x02fa2b10'
SHARED_OBJECT = 0x05acebd0   # image scratch next to nothing this function touches, so the info stub can clear the slot
FATAL = '0x024b55b0'
ASSIGN = '0x02a2a720'
EMPTY_TEXT = 0x04dd85f0
TABLE_SIZE = 0xb8
MASK64 = (1 << 64) - 1


def u64(value):
    """Eight little-endian bytes of a value, as hex."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, allocated=True, shared=True, flags=(0x20, 0x20, 0x20), clears=()):
    """One call; the stubs answer in call order. flags gives the info byte for each of the three names; clears
    lists the names after whose info call the shared allocator slot is emptied, so the next name fetches it again."""
    buffers = {'handle': {'size': 0x20, 'bytes': 'dd' * 0x20},
               'table': {'size': TABLE_SIZE + 0x10, 'bytes': 'ee' * (TABLE_SIZE + 0x10)},
               'table_alloc': {'size': 0x10}, 'table_vt': {'size': 0x60},
               'shared_vt': {'size': 0x28}}
    memory = [{'addr': hex(TABLE_ALLOCATOR), 'pointer': 'table_alloc'},
              {'addr': 'buf:table_alloc', 'pointer': 'table_vt'},
              {'addr': 'buf:table_vt+0x58', 'guest': ALLOCATE},
              {'addr': hex(SHARED_OBJECT), 'pointer': 'shared_vt'},
              {'addr': 'buf:shared_vt+0x20', 'guest': INFO}]
    if shared:
        memory.append({'addr': hex(NAME_ALLOCATOR), 'guest': hex(SHARED_OBJECT)})
    else:
        memory.append({'addr': hex(NAME_ALLOCATOR), 'bytes': u64(0)})
    stubs = [{'address': ALLOCATE, 'argc': 3, 'ret': 'buf:table' if allocated else '0x0'}]
    if allocated:
        fetched = shared
        for index, flag in enumerate(flags):
            if not fetched:
                stubs.append({'address': FETCH, 'argc': 0, 'ret': f'guest:{SHARED_OBJECT:#x}'})
            writes = [{'arg': 0, 'bytes': f'{flag:02x}' + '7e' * 7}]
            fetched = index not in clears
            if not fetched:
                writes.append({'arg': 1, 'offset': NAME_ALLOCATOR - SHARED_OBJECT, 'bytes': u64(0)})
            stubs.append({'address': INFO, 'argc': 3, 'writes': writes})
            if not flag & 0x20:
                stubs.append({'address': FATAL, 'argc': 3})
    for _ in range(3):
        stubs.append({'address': ASSIGN, 'argc': 3})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:handle'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('allocation_fails', allocated=False),
    case('shared_present_valid'),
    case('shared_fetched_valid', shared=False),
    case('first_info_invalid', flags=(0x00, 0x20, 0x20)),
    case('second_info_invalid', flags=(0x20, 0x1f, 0x20)),
    case('third_info_invalid', flags=(0x20, 0x20, 0xdf)),
    case('slot_cleared_after_first', clears=(0,)),
    case('slot_cleared_after_first_and_second', clears=(0, 1)),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
