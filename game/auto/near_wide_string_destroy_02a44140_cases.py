#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic objects whose wide string is emptied (a template: near_cases.py puts the four offsets
of the string's parts in place of the slot names and the function's address in place of the one
below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

Inline strings of several lengths, heap strings whose capacity is at, below and far above the heap
threshold (including the top bit, which the unsigned compare sees as large), and a free that writes
to the fields the function stores afterwards. The heap text is freed through the allocator's free
slot, a stub that receives the allocator and the text. The object reaches past the string and is
filled with other bytes, so a read or store at another place shows up.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02a44140'
FREE = '0x00400020'        # a real game function entry, stubbed as the allocator's free slot
FREE_SLOT = 0x70
TEXT_FIELD = NEAR_SLOT_2
LENGTH_FIELD = NEAR_SLOT_8
CAPACITY_FIELD = NEAR_SLOT_0
ALLOCATOR_FIELD = NEAR_SLOT_3
OBJECT_SIZE = max(TEXT_FIELD, LENGTH_FIELD, CAPACITY_FIELD, ALLOCATOR_FIELD) + 0x20
HEAP_THRESHOLD = 8
MASK64 = (1 << 64) - 1


def u64(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, capacity, length, heap=False, inline_bytes='aa', free_writes=False, fill='ee'):
    """An object whose string has the given capacity and length. A heap string points at a heap
    buffer that the allocator frees; an inline string holds inline_bytes in its first characters."""
    buffers = {'object': {'size': OBJECT_SIZE, 'bytes': fill * OBJECT_SIZE},
               'alloc': {'size': 0x10}, 'alloc_vt': {'size': 0x80}}
    memory = [{'addr': f'buf:object+{LENGTH_FIELD:#x}', 'bytes': u64(length)},
              {'addr': f'buf:object+{CAPACITY_FIELD:#x}', 'bytes': u64(capacity)},
              {'addr': 'buf:alloc+0x0', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': FREE}]
    stubs = []
    if heap:
        buffers['heap'] = {'size': 0x40, 'bytes': '55' * 0x40}
        memory += [{'addr': f'buf:object+{TEXT_FIELD:#x}', 'pointer': 'heap'},
                   {'addr': f'buf:object+{ALLOCATOR_FIELD:#x}', 'pointer': 'alloc'}]
        free = {'address': FREE, 'argc': 2, 'argi': [0, 1]}
        if free_writes:
            free['writes'] = [{'arg': 1, 'offset': 0, 'bytes': '123456789abc'}]
        stubs.append(free)
    else:
        memory.append({'addr': f'buf:object+{TEXT_FIELD:#x}', 'bytes': inline_bytes * 8})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:object'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('inline_empty', capacity=7, length=0),
    case('inline_full', capacity=7, length=7),
    case('inline_long_length_not_freed', capacity=7, length=0x21, inline_bytes='ff'),
    case('inline_capacity_zero', capacity=0, length=MASK64),
    case('heap_at_threshold', capacity=HEAP_THRESHOLD, length=3, heap=True),
    case('heap_short_length', capacity=0x40, length=1, heap=True),
    case('heap_long', capacity=0x40, length=0x21, heap=True),
    case('heap_capacity_top_bit', capacity=1 << 63, length=0x10, heap=True),
    case('heap_capacity_all_ones', capacity=MASK64, length=0x10, heap=True, fill='00'),
    case('heap_free_writes_survive', capacity=9, length=9, heap=True, free_writes=True),
    case('capacity_just_below_threshold', capacity=HEAP_THRESHOLD - 1, length=6, fill='ff'),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
