#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic text objects that are destroyed (a template: near_cases.py puts the three offsets of
the text's parts and the heap threshold in place of the slot names, and the addresses of the
function in place of the ones below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

Inline and heap texts at and around the heap threshold, with the library release routine scripted to
return zero, all ones and other values, which the destroy routine passes back. The heap text is freed
through the allocator's free slot, a stub that receives the allocator and the text. The object
reaches past the text and is filled with other bytes, so a read at another place shows up.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3e060'
FREE = '0x00400020'        # a real game function entry, stubbed as the allocator's free slot
RELEASE = '0x02fbe588'     # library routine the object is handed to, last
FREE_SLOT = 0x70
TEXT_FIELD = NEAR_SLOT_4
CAPACITY_FIELD = NEAR_SLOT_2
ALLOCATOR_FIELD = NEAR_SLOT_5
HEAP_THRESHOLD = NEAR_SLOT_3
LENGTH_FIELD = CAPACITY_FIELD - 8
OBJECT_SIZE = max(TEXT_FIELD, CAPACITY_FIELD, ALLOCATOR_FIELD) + 0x20
MASK64 = (1 << 64) - 1


def u64(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, capacity, length, release_ret, heap=False, fill='ee'):
    """A text object with the given capacity and length; a heap text points at a heap buffer the
    allocator frees, and the release routine returns release_ret."""
    buffers = {'text': {'size': OBJECT_SIZE, 'bytes': fill * OBJECT_SIZE},
               'alloc': {'size': 0x10}, 'alloc_vt': {'size': 0x80}}
    memory = [{'addr': f'buf:text+{LENGTH_FIELD:#x}', 'bytes': u64(length)},
              {'addr': f'buf:text+{CAPACITY_FIELD:#x}', 'bytes': u64(capacity)},
              {'addr': 'buf:alloc+0x0', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': FREE}]
    stubs = []
    if heap:
        buffers['heap'] = {'size': 0x40, 'bytes': '55' * 0x40}
        memory += [{'addr': f'buf:text+{TEXT_FIELD:#x}', 'pointer': 'heap'},
                   {'addr': f'buf:text+{ALLOCATOR_FIELD:#x}', 'pointer': 'alloc'}]
        stubs.append({'address': FREE, 'argc': 2, 'argi': [0, 1]})
    stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0], 'ret': hex(release_ret & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:text'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('inline_empty_release_zero', capacity=HEAP_THRESHOLD - 1, length=0, release_ret=0),
    case('inline_long_length_release_all_ones', capacity=HEAP_THRESHOLD - 1, length=0x21,
         release_ret=MASK64),
    case('inline_capacity_zero', capacity=0, length=MASK64, release_ret=3, fill='00'),
    case('heap_at_threshold_release_small', capacity=HEAP_THRESHOLD, length=3, release_ret=0x5,
         heap=True),
    case('heap_short_length', capacity=0x40, length=1, release_ret=0x2a, heap=True),
    case('heap_long_release_high_bit', capacity=0x40, length=0x21,
         release_ret=0x8000000000000000, heap=True),
    case('heap_capacity_top_bit', capacity=1 << 63, length=0x10, release_ret=0x77, heap=True),
    case('below_threshold_all_ones_fill', capacity=HEAP_THRESHOLD - 1, length=6, release_ret=0,
         fill='ff'),
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
