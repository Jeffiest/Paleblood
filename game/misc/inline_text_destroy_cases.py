#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic text objects for bb_misc_inline_text_destroy (0x02b3e060): inline and heap texts at
and around the heap threshold, with the library release routine (0x02fbe588) scripted to return
zero, all ones and a small value, which the destroy routine passes back.

usage: inline_text_destroy_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3e060'
FREE = '0x00400020'        # a real game function entry, stubbed as the allocator's free slot
RELEASE = '0x02fbe588'     # library routine the object is handed to, last
FREE_SLOT = 0x70
MASK64 = (1 << 64) - 1
OBJECT_SIZE = 0x40
HEAP_THRESHOLD = 8


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, capacity, length, release_ret, heap=False):
    """A text object with the given capacity and length; a heap text points at a heap buffer the
    allocator frees, and the release routine returns release_ret."""
    buffers = {'text': {'size': OBJECT_SIZE, 'bytes': 'ee' * 0x18 + 'aa' * 0x10 + 'ee' * 0x18},
               'alloc': {'size': 0x10},
               'alloc_vt': {'size': 0x80}}
    memory = [{'addr': 'buf:text+0x38', 'pointer': 'alloc'},
              {'addr': 'buf:text+0x28', 'bytes': u64(length)},
              {'addr': 'buf:text+0x30', 'bytes': u64(capacity)},
              {'addr': 'buf:alloc+0x0', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': FREE}]
    stubs = []
    if heap:
        buffers['heap'] = {'size': 0x40, 'bytes': '55' * 0x40}
        memory.append({'addr': 'buf:text+0x18', 'pointer': 'heap'})
        stubs.append({'address': FREE, 'argc': 2})
    stubs.append({'address': RELEASE, 'argc': 1, 'ret': hex(release_ret & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:text'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('inline_empty_release_zero', capacity=7, length=0, release_ret=0),
    case('inline_full_release_all_ones', capacity=7, length=7, release_ret=MASK64),
    case('heap_at_threshold_release_small', capacity=HEAP_THRESHOLD, length=3,
         release_ret=0x5, heap=True),
    case('heap_long_release_high_bit', capacity=0x40, length=0x21,
         release_ret=0x8000000000000000, heap=True),
    case('heap_capacity_top_bit', capacity=1 << 63, length=0x10, release_ret=0x77, heap=True),
    case('below_threshold_release_zero', capacity=HEAP_THRESHOLD - 1, length=6, release_ret=0),
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
