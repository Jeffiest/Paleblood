#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic chain destructions for misc_destroy_chain_node (0x026f3bb0), for tools/verify.py run.

usage: destroy_chain_node_cases.py OUT_DIR

A node is 0x50 bytes: the next link at +0x00, the left child at +0x10, the nil flag at +0x19, the buffer at
+0x28, the capacity at +0x40 and the buffer allocator at +0x48. The owner's node allocator is at +0x18. The
original destroys each node's left child by calling this routine again (a stub here), frees the buffer
through the buffer allocator's free slot when the capacity is eight or more, resets the node, and frees the
node through the node allocator's free slot. Both free slots are stubs. Covers a nil start, a single node
with and without a buffer, a nil-flagged left child, and chains of one to three nodes.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x026f3bb0'
FREE_NODE = '0x00400020'      # the node allocator's free slot; stubbed (a real game entry)
FREE_BUFFER = '0x004000a0'    # the buffer allocator's free slot; stubbed (a real game entry)
FREE_SLOT = 0x70
NODE_SIZE = 0x50
MIN_BUFFERED = 0x8
MASK64 = (1 << 64) - 1


def node_buffer(name, nxt, left, capacity, nil=False):
    """A node buffer with its link, left child, nil flag, capacity and buffer pointers."""
    data = bytearray(NODE_SIZE)
    data[0x19] = 1 if nil else 0
    data[0x40:0x48] = struct.pack('<Q', capacity & MASK64)
    buffers = {name: {'size': NODE_SIZE, 'bytes': data.hex()}}
    memory = []
    if not nil:
        memory.append({'addr': f'buf:{name}+0x00', 'pointer': nxt})
        memory.append({'addr': f'buf:{name}+0x10', 'pointer': left})
        memory.append({'addr': f'buf:{name}+0x28', 'pointer': f'data_{name}' if capacity >= MIN_BUFFERED
                       else 'dummy'})
        memory.append({'addr': f'buf:{name}+0x48', 'pointer': 'buf_alloc'})
    return buffers, memory


def case(cid, chain, left_of_first=False):
    """chain: (name, next, capacity) per node in order; the last node's next is the nil sentinel.

    The first node's left child is a plain node when left_of_first is set, else the sentinel."""
    buffers = {
        'tree': {'size': 0x20},
        'node_alloc': {'size': 0x10}, 'node_alloc_vt': {'size': 0x78},
        'buf_alloc': {'size': 0x10}, 'buf_alloc_vt': {'size': 0x78},
        'dummy': {'size': 0x40},
    }
    memory = [
        {'addr': 'buf:tree+0x18', 'pointer': 'node_alloc'},
        {'addr': 'buf:node_alloc+0', 'pointer': 'node_alloc_vt'},
        {'addr': f'buf:node_alloc_vt+{FREE_SLOT:#x}', 'guest': FREE_NODE},
        {'addr': 'buf:buf_alloc+0', 'pointer': 'buf_alloc_vt'},
        {'addr': f'buf:buf_alloc_vt+{FREE_SLOT:#x}', 'guest': FREE_BUFFER},
    ]
    nil_buffers, _ = node_buffer('nil', 'nil', 'nil', 0, nil=True)
    buffers.update(nil_buffers)
    left_buffers, _ = node_buffer('lnil', 'nil', 'nil', 0, nil=True)
    buffers.update(left_buffers)
    stubs = []
    for index, (name, nxt, capacity) in enumerate(chain):
        node, node_memory = node_buffer(name, nxt, 'lnil' if (index == 0 and left_of_first) else 'nil', capacity)
        buffers.update(node)
        memory.extend(node_memory)
        if capacity >= MIN_BUFFERED:
            buffers[f'data_{name}'] = {'size': 0x40}
    for name, _, capacity in chain:
        if capacity >= MIN_BUFFERED:
            stubs.append({'address': FREE_BUFFER, 'argc': 2})
        stubs.append({'address': FREE_NODE, 'argc': 2})
    start = chain[0][0] if chain else 'nil'
    if not chain:
        stubs = []
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:tree', 'rsi': f'buf:{start}'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('nil_start', []),
    case('single_small_capacity', [('n0', 'nil', 0x7)]),
    case('single_buffered', [('n0', 'nil', 0x8)]),
    case('single_large_capacity_nil_left', [('n0', 'nil', 0x40)], left_of_first=True),
    case('chain_two_nodes', [('n0', 'n1', 0x7), ('n1', 'nil', 0x40)]),
    case('chain_three_nodes', [('n0', 'n1', 0x8), ('n1', 'n2', 0x7), ('n2', 'nil', 0x9)]),
]


def main():
    """Write deterministic synthetic chains to the requested directory."""
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
