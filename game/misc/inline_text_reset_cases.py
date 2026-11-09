#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic text objects for bb_misc_inline_text_reset (0x02b3e010): inline texts of several
lengths, heap texts whose capacity is at, below and far above the heap threshold (including the top
bit, which the unsigned compare sees as large), and inline areas whose upper bytes must survive.
The heap storage is freed through the allocator's free slot, a stub.

usage: inline_text_reset_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3e010'
FREE = '0x00400020'        # a real game function entry, stubbed as the allocator's free slot
FREE_SLOT = 0x70
MASK64 = (1 << 64) - 1
OBJECT_SIZE = 0x40
HEAP_THRESHOLD = 8


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, capacity, length, heap=False, inline_bytes='aa'):
    """A text object whose capacity and length are given. A heap text points at a heap buffer that
    the allocator frees; an inline text holds inline_bytes in its inline area."""
    buffers = {'text': {'size': OBJECT_SIZE, 'bytes': 'ee' * OBJECT_SIZE},
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
    else:
        buffers['text']['bytes'] = 'ee' * 0x18 + inline_bytes * 0x10 + 'ee' * 0x18
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:text'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('inline_empty', capacity=7, length=0),
    case('inline_full', capacity=7, length=7),
    case('inline_with_high_bytes', capacity=7, length=5, inline_bytes='ff'),
    case('heap_at_threshold', capacity=HEAP_THRESHOLD, length=3, heap=True),
    case('heap_long', capacity=0x40, length=0x21, heap=True),
    case('heap_capacity_top_bit', capacity=1 << 63, length=0x10, heap=True),
    case('heap_capacity_just_below_threshold', capacity=HEAP_THRESHOLD - 1, length=6),
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
