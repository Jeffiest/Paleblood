#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic block-object builds for misc_build_block_object_02244030 (0x02244030), for tools/verify.py run.

usage: build_block_object_02244030_cases.py OUT_DIR

The flag heap (global 0x05940408) is a buffer whose vtable slots allocate (0x58) and allocate_default (0x50)
are stubs returning the table or the block buffer. The table's base constructor and the member constructor are
stubs; the member constructor's record is a stack local, compared through its argument. The block buffer's
header holds the two entry counts (+6 and +8) that the entry ranges are computed from; the copy into it is a
stub, so the header is what the case writes. Covers an allocation failure, a member result that is not the
table, no source, a zero size, a copy with ordinary, zero and large counts, and a one-byte copy.
A member result of null with a failed allocation is not a case: the original would store through null there.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02244030'
FLAG_HEAP = '0x05940408'
SECOND_ALLOC = '0x05940420'
ALLOCATE = '0x00400020'          # heap vtable slot 0x58 (allocate); stubbed real entry
ALLOCATE_DEFAULT = '0x004000a0'  # heap vtable slot 0x50 (allocate_default); stubbed real entry
BASE_CONSTRUCT = '0x01384700'
MEMBER_CONSTRUCT = '0x013e6a70'
COPY = '0x02a1a1b0'
OWNER_SIZE = 0x70
TABLE_SIZE = 0x98
BLOCK_SIZE = 0x40
MASK64 = (1 << 64) - 1


def case(cid, alloc_ok=True, member='table', source=True, size=0x40, first=2, second=3):
    """One build; member names the buffer the member constructor returns (table or other)."""
    buffers = {'self': {'size': OWNER_SIZE, 'bytes': 'ee' * OWNER_SIZE},
               'table': {'size': TABLE_SIZE, 'bytes': 'ee' * TABLE_SIZE},
               'heap': {'size': 0x10}, 'heap_vt': {'size': 0x78}, 'second': {'size': 0x10},
               'other': {'size': 0x10}, 'source': {'size': BLOCK_SIZE, 'bytes': '5e' * BLOCK_SIZE},
               'block': {'size': BLOCK_SIZE,
                         'bytes': ('cc' * 6) + struct.pack('<HH', first, second).hex() + 'dd' * (BLOCK_SIZE - 10)}}
    memory = [{'addr': FLAG_HEAP, 'pointer': 'heap'}, {'addr': SECOND_ALLOC, 'pointer': 'second'},
              {'addr': 'buf:heap+0', 'pointer': 'heap_vt'},
              {'addr': 'buf:heap_vt+0x50', 'guest': ALLOCATE_DEFAULT},
              {'addr': 'buf:heap_vt+0x58', 'guest': ALLOCATE}]
    ret_alloc = 'buf:table' if alloc_ok else '0x0'
    stubs = [{'address': ALLOCATE, 'argc': 3, 'ret': ret_alloc}]
    if alloc_ok:
        stubs.append({'address': BASE_CONSTRUCT, 'argc': 2, 'argi': [0], 'argmem': [{'arg': 1, 'size': 16}]})
    stubs.append({'address': MEMBER_CONSTRUCT, 'argc': 3, 'argi': [0, 2],
                  'argmem': [{'arg': 1, 'size': 13}], 'ret': f'buf:{member}'})
    bound_table = alloc_ok and member == 'table'
    if bound_table and source and size:
        stubs.append({'address': ALLOCATE_DEFAULT, 'argc': 2, 'ret': 'buf:block'})
        stubs.append({'address': COPY, 'argc': 3})
    rdx = 'buf:source' if source else '0x0'
    args = {'rdi': 'buf:self', 'rsi': '0x7777', 'rdx': rdx, 'rcx': hex(size & MASK64)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('allocation_fails_member_other', alloc_ok=False, member='other'),
    case('member_returns_other_table_built', member='other'),
    case('bound_table_no_source', source=False),
    case('bound_table_zero_size', size=0),
    case('copy_ordinary_counts'),
    case('copy_zero_counts', size=0x10, first=0, second=0),
    case('copy_large_counts', size=0x20, first=0xfff0, second=0x0102),
    case('copy_one_byte', size=1, first=1, second=1),
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
