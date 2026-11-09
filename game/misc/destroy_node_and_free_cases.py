#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic heap objects for bb_misc_destroy_node_and_free (0x02b3dfd0): a null node, and nodes
whose vtable destroy slot and whose allocator's free slot are scripted stubs. The node's contents
are varied so the destroy routine sees different bytes.

usage: destroy_node_and_free_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3dfd0'
ALLOCATOR_OF = '0x0247b720'
DESTROY = '0x004000a0'     # a real game function entry, stubbed as the node's destroy slot
FREE = '0x00400020'        # a real game function entry, stubbed as the allocator's free slot
DESTROY_SLOT = 0x08
FREE_SLOT = 0x70
NODE_SIZE = 0x18
ALLOCATOR_VTABLE_SIZE = 0x80


def case(cid, present=True, contents='dd'):
    """A null node, or a node with a vtable whose destroy slot is scripted; the allocator lookup
    returns an allocator whose free slot is scripted. The routine returns nothing."""
    buffers = {'node': {'size': NODE_SIZE, 'bytes': contents * NODE_SIZE},
               'node_vt': {'size': 0x10},
               'alloc': {'size': 0x10},
               'alloc_vt': {'size': ALLOCATOR_VTABLE_SIZE}}
    memory = [{'addr': 'buf:node+0x0', 'pointer': 'node_vt'},
              {'addr': f'buf:node_vt+{DESTROY_SLOT:#x}', 'guest': DESTROY},
              {'addr': 'buf:alloc+0x0', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': FREE}]
    stubs = []
    if present:
        stubs = [{'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:alloc'},
                 {'address': DESTROY, 'argc': 1},
                 {'address': FREE, 'argc': 2}]
    args = {'rdi': 'buf:node' if present else '0x0'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': args, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('null_node', present=False),
    case('node_with_ordinary_contents'),
    case('node_with_zero_contents', contents='00'),
    case('node_with_all_ones_contents', contents='ff'),
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
