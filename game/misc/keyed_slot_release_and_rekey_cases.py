#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot caches for the keyed slot release and rekey (0x01e86e60): words that name no slot, empty and
occupied slots, old keys with and without a slot index, a generation wrap, the largest slot, and a ring that wraps.

usage: keyed_slot_release_and_rekey_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e86e60'
CACHE_SIZE = 0x14010
SLOT_POINTERS = 0x8
SLOT_ENTRIES = 0x8008
ENTRY_SIZE = 0x08
RING_POSITION = 0x1400c
ALLOCATOR_OF = '0x0247b720'
ALLOCATOR_VTABLE_SIZE = 0x80
FREE_SLOT = 0x70
FREE = '0x00400020'        # a real game function entry: the allocator's free slot
DESTROY = '0x004000a0'     # a real game function entry: the object's destroy slot

# The branch at 0x01e86e94 (a zero word has no flag bit, so the flag test before it exits first).
UNREACHABLE = {'0x01e86e94': ('taken', 'a zero word has no flag bit set, so the flag test before it exits first')}


def le32(value):
    """The four little-endian bytes of a 32-bit value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, word, object_slot=None, entries=(), ring=0):
    """A cache with an optional object in one slot, the given (slot, key, count) entries, and a ring position. The
    routine returns nothing."""
    buffers = {'cache': {'size': CACHE_SIZE}}
    memory = [{'addr': f'buf:cache+{RING_POSITION:#x}', 'bytes': le32(ring)}]
    stubs = []
    for slot, key, count in entries:
        memory.append({'addr': f'buf:cache+{SLOT_ENTRIES + ENTRY_SIZE * slot:#x}', 'bytes': le32(key) + le32(count)})
    if object_slot is not None:
        buffers['obj'] = {'size': 8}
        buffers['obj_vt'] = {'size': 8}
        buffers['alloc'] = {'size': 8}
        buffers['alloc_vt'] = {'size': ALLOCATOR_VTABLE_SIZE}
        memory += [{'addr': f'buf:cache+{SLOT_POINTERS + 8 * object_slot:#x}', 'pointer': 'obj'},
                   {'addr': 'buf:obj+0x0', 'pointer': 'obj_vt'},
                   {'addr': 'buf:obj_vt+0x0', 'guest': DESTROY},
                   {'addr': 'buf:alloc+0x0', 'pointer': 'alloc_vt'},
                   {'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': FREE}]
        stubs = [{'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:alloc'},
                 {'address': DESTROY, 'argc': 1},
                 {'address': FREE, 'argc': 2}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:cache', 'rsi': word},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('flag_clear', 0x00123456),
    case('index_above_table', 0x00801000),
    case('index_all_ones', 0x0080ffff),
    case('low24_all_ones', 0xabffffff),
    case('empty_slot_old_key_clear', 0x00800005, entries=[(5, 0x00000003, 2)]),
    case('empty_slot_old_key_index_all_ones', 0x00800005, entries=[(5, 0x0080ffff, 2)]),
    case('empty_slot_old_key_low24_all_ones', 0x00800005, entries=[(5, 0xffffff, 1)]),
    case('object_released_old_key_index', 0x00800005, object_slot=5, entries=[(5, 0x00800007, 4)]),
    case('object_released_generation_wraps', 0x00800003, object_slot=3, entries=[(3, 0x00ff0003, 0)]),
    case('largest_slot_largest_old_index', 0x00800fff, object_slot=0xfff, entries=[(0xfff, 0x0080fffe, 1)]),
    case('slot_zero_no_old_key', 0x00800000),
    case('ring_wraps', 0x00800010, ring=0xfff),
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
