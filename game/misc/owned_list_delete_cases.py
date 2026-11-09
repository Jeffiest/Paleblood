#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owned-list deletions for misc_owned_list_delete (0x02240de0).

usage: owned_list_delete_cases.py OUT_DIR

The object is 0x28 bytes; each node is 16 bytes with its next link at +8. Every node is handed to the
allocator lookup (a stub) and freed through that allocator's free slot at 0x70 (a stub). The thread's
allocator comes from thread-local storage, laid out as in the other loading fios cases, and its sized
free slot at 0x18 is a stub that returns a chosen result. Covers empty, one, two and three nodes, the
size tag's default, zero, ordinary and high values, the tag's low bits ignored, and returned results
that are zero, all ones and high-bit values.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02240de0'
ALLOCATOR_OF = '0x0247b720'
NODE_FREE = '0x00500b00'     # spare address in the node allocator's free slot; stubbed
SIZED_FREE = '0x00500b20'    # spare address in the thread allocator's sized free slot; stubbed
ALLOC = '0x00500b40'         # spare address in the thread allocator's allocate slot; unused
TLS_SLOT = -0x730
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
OBJECT_SIZE = 0x28
NODE_SIZE = 0x10
NEXT_OFFSET = 0x08
HEAD_OFFSET = 0x18
FREE_SLOT = 0x70
SIZED_FREE_SLOT = 0x18
ALLOCATOR_VTABLE_SIZE = 0x80


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


def case(cid, nodes=0, tag=0xffff0001, ret=0):
    """One deletion of a list of nodes, then the sized free of the object, whose result is ret."""
    buffers, memory, gs = thread_layout()
    buffers['list'] = {'size': OBJECT_SIZE,
                       'bytes': 'ee' * 8 + le(tag, 4) + '33' * 4 + '44' * 8 + '55' * 8 + 'cc' * 8}
    buffers['alloc'] = {'size': 16}
    buffers['alloc_vt'] = {'size': ALLOCATOR_VTABLE_SIZE}
    memory += [{'addr': 'buf:alloc+0', 'pointer': 'alloc_vt'},
               {'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': NODE_FREE}]
    if nodes:
        memory.append({'addr': f'buf:list+{HEAD_OFFSET:#x}', 'pointer': 'node0'})
    else:
        memory.append({'addr': f'buf:list+{HEAD_OFFSET:#x}', 'bytes': '00' * 8})
    for i in range(nodes):
        buffers[f'node{i}'] = {'size': NODE_SIZE, 'bytes': 'dd' * NODE_SIZE}
        if i + 1 < nodes:
            memory.append({'addr': f'buf:node{i}+{NEXT_OFFSET:#x}', 'pointer': f'node{i + 1}'})
        else:
            memory.append({'addr': f'buf:node{i}+{NEXT_OFFSET:#x}', 'bytes': '00' * 8})
    stubs = []
    for _ in range(nodes):
        stubs.append({'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:alloc'})
        stubs.append({'address': NODE_FREE, 'argc': 2})
    stubs.append({'address': SIZED_FREE, 'argc': 3, 'ret': hex(ret & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'gs': gs,
            'args': {'rdi': 'buf:list'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('empty_default_size'),
    case('one_node', nodes=1),
    case('two_nodes', nodes=2),
    case('three_nodes', nodes=3),
    case('size_tag_zero', tag=0x00000001),
    case('size_tag_0x20', tag=0x00200001),
    case('size_tag_high_bit', tag=0x80000001),
    case('size_tag_fffe', tag=0xfffe0001),
    case('kind_bits_ignored', tag=0xffff00ff, nodes=1),
    case('tag_low_word_all_ones', tag=0xffffffff, nodes=2),
    case('result_zero', nodes=2, ret=0),
    case('result_all_ones', nodes=1, ret=MASK64),
    case('result_high_bit', nodes=3, ret=1 << 63),
    case('result_low_word', tag=0x00200001, ret=MASK32),
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
