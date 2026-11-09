#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owned-list destructions for misc_owned_list_destroy (0x02240e80).

usage: owned_list_destroy_cases.py OUT_DIR

The object is 0x28 bytes; each node is 16 bytes with its next link at +8. Every node is handed to
the allocator lookup (a stub returning one allocator object) and then freed through that allocator's
free slot at 0x70 (a stub). Covers an empty list, one node, two and three nodes, a null link (end of
list), and a list head that is already null with the tag and argument bytes left alone.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02240e80'
ALLOCATOR_OF = '0x0247b720'
NODE_FREE = '0x00500b00'        # spare address in the allocator's free slot; stubbed
OBJECT_SIZE = 0x28
NODE_SIZE = 0x10
NEXT_OFFSET = 0x08
HEAD_OFFSET = 0x18
FREE_SLOT = 0x70
ALLOCATOR_VTABLE_SIZE = 0x80


def case(cid, nodes=0, tag=0xffff0001, argument='44'):
    """One destruction of a list of nodes; the object's other bytes must be left as they are."""
    buffers = {'list': {'size': OBJECT_SIZE,
                        'bytes': 'ee' * 8 + f'{tag:08x}' + 'aa' * 4 + argument * 8 + 'cc' * 16}}
    buffers['alloc'] = {'size': 16}
    buffers['alloc_vt'] = {'size': ALLOCATOR_VTABLE_SIZE}
    memory = [{'addr': 'buf:alloc+0', 'pointer': 'alloc_vt'},
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
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:list'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('empty_list'),
    case('one_node', nodes=1),
    case('two_nodes', nodes=2),
    case('three_nodes', nodes=3),
    case('empty_tag_and_argument_kept', tag=0x00200001, argument='66'),
    case('three_nodes_tag_zero', nodes=3, tag=0),
    case('two_nodes_argument_all_ones', nodes=2, argument='ff'),
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
