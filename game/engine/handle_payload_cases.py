#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners for the engine handle payload lookup (0x00400e40): a cached payload set or null,
a zero handle, and a handle naming record 0, 1 or 2 of a page whose entries have flag bits set or
clear. Returned addresses are compared as they come back, nothing is read through them."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00400e40'
MASK64 = (1 << 64) - 1
OWNER_SIZE = 0x68
PAGE_SIZE = 0x1000
RECORD_BASE = 0x38
RECORD_SIZE = 0x38
TABLE_SLOTS = 0x28
SLOT_SIZE = 8
ENTRY_SIZE = 0x20
FLAGS_BYTE = 0x0b
ENTRY_COUNT = 3


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def page_memory():
    """The page points at its table, and each record number's slot points at that record's entry."""
    memory = [{'addr': 'buf:page+0x20', 'pointer': 'table'}]
    for k in range(ENTRY_COUNT):
        memory.append({'addr': f'buf:table+0x{TABLE_SLOTS + SLOT_SIZE * k:x}', 'pointer': f'entry{k}'})
    return memory


def page_buffers(flags, flagged_record):
    """Page, table and entries; only the flagged record's entry carries the flags byte."""
    table_size = TABLE_SLOTS + SLOT_SIZE * ENTRY_COUNT
    buffers = {'page': {'size': PAGE_SIZE, 'bytes': 'd4' * PAGE_SIZE},
               'table': {'size': table_size, 'bytes': '00' * table_size}}
    for k in range(ENTRY_COUNT):
        entry_flags = flags if k == flagged_record else 0x00
        pad = '5a' * (ENTRY_SIZE - FLAGS_BYTE - 1)
        buffers[f'entry{k}'] = {'size': ENTRY_SIZE, 'bytes': '5a' * FLAGS_BYTE + f'{entry_flags:02x}' + pad}
    return buffers


def case(cid, cached=False, record=None, flags=0x00):
    """One owner: a cached payload, or a handle to record `record` whose entry has `flags`."""
    memory = []
    if cached:
        memory.append({'addr': 'buf:owner+0x60', 'pointer': 'cached'})
    else:
        memory.append({'addr': 'buf:owner+0x60', 'bytes': word(0)})
    if record is None:
        memory.append({'addr': 'buf:owner+0x48', 'bytes': word(0)})
    else:
        memory.append({'addr': 'buf:owner+0x48', 'pointer': f'page+0x{RECORD_BASE + RECORD_SIZE * record:x}'})
    memory.extend(page_memory())
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': 'c3' * OWNER_SIZE},
               'cached': {'size': 0x40, 'bytes': '77' * 0x40}}
    buffers.update(page_buffers(flags, record if record is not None else -1))
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': []}


CASES = [
    case('cached_payload_returned', cached=True, record=0),
    case('cached_payload_ignores_entry_flags', cached=True, record=1, flags=0xff),
    case('cached_payload_without_handle', cached=True),
    case('zero_handle_gives_fallback'),
    case('record0_flags_clear', record=0, flags=0x00),
    case('record0_bit0_set', record=0, flags=0x01),
    case('record0_all_flags', record=0, flags=0xff),
    case('record1_flags_clear', record=1, flags=0x00),
    case('record2_bit1_set', record=2, flags=0x02),
    case('record2_bit7_set', record=2, flags=0x80),
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
