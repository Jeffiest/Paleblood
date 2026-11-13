#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic element tables for bb_misc_build_element_table (0x0124faa0), for tools/verify.py run.

usage: build_element_table_cases.py OUT_DIR

The source object holds the element count at +0x54. The function resets the table (a stub), allocates the element
block (allocator slot 0x58, a stub), asks the source for each element's record count (0x025cedc0, a stub), allocates
one record buffer (slot 0x50, a stub) and has the source hand each element's records (0x025cedd0, a stub), which it
converts through two lookup tables in the executable's read-only data.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0124faa0'
RESET = '0x0124f960'
RECORD_COUNT = '0x025cedc0'
SOURCE_RECORDS = '0x025cedd0'
ALLOCATE_DEFAULT = '0x00400020'
ALLOCATE = '0x004000a0'
MASK64 = (1 << 64) - 1

# The branch at 0x0124faf4 (block allocation refused) leads on to stores through the null element array; the
# branch at 0x0124fb13 tests an element pointer that is the block plus 0x10; 0x0124fb41 tests the element count
# that the early return already excluded; 0x0124fbe6 tests it again; 0x0124fc3d tests a record pointer that was
# just stored from the non-null buffer.
UNREACHABLE = {
    '0x0124faf4': ('taken', 'a refused block is followed by stores through the null element array at 0x0124fb8d'),
    '0x0124fb13': ('taken', 'the element pointer is the block plus 0x10, so it is never null'),
    '0x0124fb41': ('fallthrough', 'the element count was tested non-zero at 0x0124fac5'),
    '0x0124fbe6': ('taken', 'the element count was tested non-zero at 0x0124fac5'),
    '0x0124fc3d': ('taken', 'the record pointer was stored from the non-null buffer tested at 0x0124fbd1'),
}


def u64(value):
    """Eight little-endian bytes of a value, as hex."""
    return struct.pack('<Q', value & MASK64).hex()


def u32(value):
    """Four little-endian bytes of a value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def ptr(address, target):
    """A memory entry that stores a buffer pointer."""
    return {'addr': f'buf:{address}', 'pointer': target}


def case(cid, counts, records_refused=False):
    """One build; counts lists each element's record count."""
    total = sum(counts) * 0x1c
    buffers = {'tbl': {'size': 0x60}, 'alloc': {'size': 0x10}, 'allocvt': {'size': 0x80},
               'desc': {'size': 0x10}, 'obj': {'size': 0x60}, 'block': {'size': 0x80, 'bytes': 'cc' * 0x80},
               'records': {'size': 0x100, 'bytes': 'dd' * 0x100}}
    memory = [ptr('tbl+0x40', 'alloc'), ptr('alloc+0x0', 'allocvt'),
              {'addr': 'buf:allocvt+0x50', 'guest': ALLOCATE_DEFAULT},
              {'addr': 'buf:allocvt+0x58', 'guest': ALLOCATE},
              ptr('desc+0x0', 'obj'), {'addr': 'buf:obj+0x54', 'bytes': u32(len(counts))}]
    stubs = [{'address': RESET, 'argc': 2}]
    if counts:
        stubs.append({'address': ALLOCATE, 'argc': 3, 'ret': 'buf:block'})
        for count in counts:
            stubs.append({'address': RECORD_COUNT, 'argc': 2, 'ret': hex(count)})
        if total:
            stubs.append({'address': ALLOCATE_DEFAULT, 'argc': 2, 'ret': '0x0' if records_refused else 'buf:records'})
            if not records_refused:
                for index, count in enumerate(counts):
                    source = bytes()
                    for record in range(count):
                        source += struct.pack('<5I', 0x1000 + index * 16 + record, 0x2000 + record,
                                              (index + record) % 3, (index * 2 + record) % 3, 0x3000 + record)
                    name = f'src{index}'
                    buffers[name] = {'size': 0x40, 'bytes': source.hex().ljust(0x80, '0')}
                    stubs.append({'address': SOURCE_RECORDS, 'argc': 3, 'ret': f'buf:{name}'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:tbl', 'rsi': 'buf:desc'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('no_elements_returns_true', []),
    case('one_element_one_record', [1]),
    case('one_element_two_records', [2]),
    case('two_elements', [2, 1]),
    case('empty_element_then_records', [0, 2]),
    case('all_elements_empty', [0, 0]),
    case('record_buffer_refused', [1, 2], records_refused=True),
]


def main():
    """Write deterministic synthetic tables to the requested directory."""
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
