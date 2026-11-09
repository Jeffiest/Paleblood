#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic tagged-object deletions for misc_sized_delete_02242bb0 (0x02242bb0).

usage: sized_delete_02242bb0_cases.py OUT_DIR

The release step (0x00f2e050) is a stub that receives the object. The thread's allocator comes from
thread-local storage, laid out as in the other fios and owned-list cases, and its sized free slot at 0x18
is a stub returning a chosen result. Covers the default size tag (0x130), ordinary, zero, high and
0xfffe sizes, the tag's low bits ignored, and results of zero, all ones and high bit.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02242bb0'
RELEASE = '0x00f2e050'
SIZED_FREE = '0x00500b20'    # spare address in the thread allocator's sized free slot; stubbed
ALLOC = '0x00500b40'         # spare address in the thread allocator's allocate slot; unused
TLS_SLOT = -0x730
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
OBJECT_SIZE = 0x40
ALLOCATOR_VTABLE_SIZE = 0x80
SIZED_FREE_SLOT = 0x18


def le(value, width):
    return (value & ((1 << (8 * width)) - 1)).to_bytes(width, 'little').hex()


def thread_layout():
    """The thread pointer's TLS slot holds the holder, whose allocator field is the thread allocator."""
    below = -TLS_SLOT
    buffers = {'tls': {'size': below + 8}, 'holder': {'size': 0x60}, 'talloc': {'size': 0x10},
               'talloc_vt': {'size': ALLOCATOR_VTABLE_SIZE}}
    memory = [{'addr': '0x057e40f8', 'bytes': struct.pack('<q', TLS_SLOT).hex()},
              {'addr': f'buf:tls+{below}', 'pointer': f'tls+{below}'},
              {'addr': 'buf:tls+0', 'pointer': 'holder'},
              {'addr': 'buf:holder+88', 'pointer': 'talloc'},
              {'addr': 'buf:talloc+0', 'pointer': 'talloc_vt'},
              {'addr': 'buf:talloc_vt+16', 'guest': ALLOC},
              {'addr': f'buf:talloc_vt+{SIZED_FREE_SLOT:#x}', 'guest': SIZED_FREE}]
    return buffers, memory, f'buf:tls+{below}'


def case(cid, tag=0xffff0000, result=0):
    """One deletion: the release stub runs first, then the sized free of the object with the tag's size."""
    buffers, memory, gs = thread_layout()
    buffers['obj'] = {'size': OBJECT_SIZE, 'bytes': 'ee' * 8 + le(tag, 4) + '33' * 4 + '44' * (OBJECT_SIZE - 16)}
    stubs = [{'address': RELEASE, 'argc': 1},
             {'address': SIZED_FREE, 'argc': 3, 'ret': hex(result & MASK64)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'gs': gs,
            'args': {'rdi': 'buf:obj'}, 'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('default_size_tag'),
    case('size_tag_0x28', tag=0x00280001),
    case('size_tag_zero', tag=0x00000001),
    case('size_tag_high_bit', tag=0x80000001),
    case('size_tag_fffe', tag=0xfffe0001),
    case('kind_bits_ignored', tag=0xffff00ff),
    case('result_zero', tag=0x00280001, result=0),
    case('result_all_ones', result=MASK64),
    case('result_high_bit', tag=0x00100001, result=1 << 63),
    case('result_low_word', tag=0x00280001, result=MASK32),
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
