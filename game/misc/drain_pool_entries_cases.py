#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pool lists for misc_drain_pool_entries (0x01e52cc0): an empty list, entries kept or
dropped by the test's return byte (only its low byte decides), mixed lists, and kept entries whose
kind word keeps its other bits. Dropped entries are destroyed and freed through their allocator."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e52cc0'
ALLOCATOR_OF = '0x0247b720'
RETAINED_SLOT = '0x00400040'
DESTROY_SLOT = '0x00400080'
FREE_SLOT = '0x004000c0'
POOL_SIZE = 0x2b0
ENTRY_SIZE = 0x30
MASK64 = (1 << 64) - 1


def u32(value):
    """Four bytes of a 32-bit value, little endian."""
    return struct.pack('<I', value & 0xffffffff).hex()


def u16(value):
    """Two bytes of a 16-bit value, little endian."""
    return struct.pack('<H', value & 0xffff).hex()


def case(cid, entries=()):
    """A holder whose pool list holds `entries` as (kind, retained-return), in list order."""
    buffers = {'holder': {'size': 0x10, 'bytes': '00' * 0x10},
               'pool': {'size': POOL_SIZE, 'bytes': 'dd' * POOL_SIZE},
               'alloc': {'size': 8, 'bytes': '00' * 8},
               'alloc_vt': {'size': 0x78, 'bytes': '00' * 0x78}}
    memory = [{'addr': 'buf:holder+8', 'pointer': 'pool'},
              {'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc_vt+112', 'guest': FREE_SLOT}]
    memory.append({'addr': 'buf:pool+680', 'pointer': 'e0'} if entries else
                  {'addr': 'buf:pool+680', 'bytes': '00' * 8})
    stubs = []
    for i, (kind, retained) in enumerate(entries):
        name = f'e{i}'
        vt = f'vt{i}'
        buffers[name] = {'size': ENTRY_SIZE, 'bytes': 'cc' * ENTRY_SIZE}
        buffers[vt] = {'size': 0x28, 'bytes': '00' * 0x28}
        next_name = f'e{i + 1}' if i + 1 < len(entries) else None
        memory += [
            {'addr': f'buf:{name}', 'pointer': vt},
            {'addr': f'buf:{vt}', 'guest': DESTROY_SLOT},
            {'addr': f'buf:{vt}+24', 'guest': RETAINED_SLOT},
            {'addr': f'buf:{name}+8', 'bytes': u32(0xfeed0000 + i)},
            {'addr': f'buf:{name}+12', 'bytes': u16(kind)},
            {'addr': f'buf:{name}+16', 'pointer': next_name} if next_name
            else {'addr': f'buf:{name}+16', 'bytes': '00' * 8},
        ]
        stubs.append({'address': RETAINED_SLOT, 'argc': 1, 'ret': hex(retained)})
        if not retained & 0xff:
            stubs.append({'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:alloc'})
            stubs.append({'address': DESTROY_SLOT, 'argc': 1})
            stubs.append({'address': FREE_SLOT, 'argc': 2})
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': {'rdi': 'buf:holder'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('empty_list'),
    case('one_kept', [(0x0001, 0x1)]),
    case('one_dropped', [(0x0001, 0x0)]),
    case('return_low_byte_zero_is_dropped', [(0x0001, 0x100)]),
    case('return_low_byte_one_with_high_bits_kept', [(0x0001, 0x101)]),
    case('two_kept_keep_order_reversed', [(0x0001, 0x1), (0x0002, 0x1)]),
    case('two_dropped', [(0x0001, 0x0), (0x0002, 0x0)]),
    case('mixed_keep_drop_keep', [(0x0001, 0x1), (0x0002, 0x0), (0x0003, 0x1)]),
    case('kept_kind_high_bit_already_set', [(0x8000, 0x1)]),
    case('kept_kind_low_bits_preserved', [(0x00ff, 0x1)]),
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
