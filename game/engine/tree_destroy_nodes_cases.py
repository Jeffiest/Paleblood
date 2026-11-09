#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic ordered-map subtrees for the node destroy routine at 0x02b3bda0.

usage: tree_destroy_nodes_cases.py OUT_DIR

Each tree is laid out in buffers in the MSVC tree node format (left at +0, parent at +8, right at
+16, colour at +24, nil flag at +25). The nil head is a buffer whose links point at itself. The
owner's allocator has a vtable whose free slot (+0x70) is a scripted stub, so every freed node is
one recorded call. Covers an empty subtree, leaves, left chains, right subtrees, nodes with both
children and a balanced tree.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3bda0'
FREE_STUB = '0x00500700'
NODE_BYTES = 0x20
FREE_SLOT = 0x70


def emit(shape, names, memory, buffers):
    """Declare a buffer per node of the shape (None is the nil head) and write its links, children
    first so the root's name comes back; returns the buffer name of the subtree's root."""
    if shape is None:
        return 'nil'
    name = f'node{len(names)}'
    names.append(name)
    buffers[name] = {'size': NODE_BYTES}
    left = emit(shape[0], names, memory, buffers)
    right = emit(shape[1], names, memory, buffers)
    memory.append({'addr': f'buf:{name}+0', 'pointer': left})
    memory.append({'addr': f'buf:{name}+16', 'pointer': right})
    memory.append({'addr': f'buf:{name}+24', 'bytes': '0000'})
    return name


def case(cid, shape):
    """One destroy of the subtree whose root is the shape's node (or the nil head when it is None).
    The owner's allocator frees with the stub; one stub entry per real node, in call order."""
    buffers = {'owner': {'size': 0x20}, 'alloc': {'size': 0x10}, 'avt': {'size': 0x80},
               'nil': {'size': NODE_BYTES}}
    memory = [
        {'addr': 'buf:owner+24', 'pointer': 'alloc'},
        {'addr': 'buf:alloc+0', 'pointer': 'avt'},
        {'addr': f'buf:avt+{FREE_SLOT}', 'guest': FREE_STUB},
        {'addr': 'buf:nil+0', 'pointer': 'nil'},
        {'addr': 'buf:nil+8', 'pointer': 'nil'},
        {'addr': 'buf:nil+16', 'pointer': 'nil'},
        {'addr': 'buf:nil+24', 'bytes': '0101'},
    ]
    names = []
    root = emit(shape, names, memory, buffers)
    stubs = [{'address': FREE_STUB, 'argc': 2} for _ in names]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': f'buf:{root}'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


LEAF = (None, None)

CASES = [
    case('nil_head_frees_nothing', None),
    case('single_leaf', LEAF),
    case('left_chain_two', (LEAF, None)),
    case('left_chain_three', ((LEAF, None), None)),
    case('right_child_only', (None, LEAF)),
    case('right_chain_three', (None, (None, LEAF))),
    case('both_children', (LEAF, LEAF)),
    case('right_then_left_nested', ((None, LEAF), (LEAF, None))),
    case('balanced_seven', ((LEAF, LEAF), (LEAF, LEAF))),
    case('left_subtree_with_right_branch', (((None, LEAF), None), (None, (LEAF, None)))),
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
