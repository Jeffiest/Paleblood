#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic tree nodes for bb_misc_find_leaf_index (0x02b3d920): targets at the root, first, middle
and last leaves, targets outside the tree, nested groups, empty groups, and leaf counts whose
upper 32 bits must be dropped. The leaf count routine (0x02b3d9b0) is a scripted stub, and the
script works out how many times the search calls it so the stub queue matches the calls.

usage: find_leaf_index_cases.py OUT_DIR
"""
import json
from pathlib import Path
import itertools
import struct
import sys

ADDRESS = '0x02b3d920'
COUNT = '0x02b3d9b0'
MASK64 = (1 << 64) - 1
MASK32 = (1 << 32) - 1
NODE_SIZE = 0x28
NOT_FOUND = -1


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def i32(v):
    """The 32-bit signed value of v, as the search's result is read."""
    v &= MASK32
    return v - (1 << 32) if v >= (1 << 31) else v


def leaf(flag=1):
    """A leaf node: its flag is non-zero."""
    return ('leaf', flag)


def group(*children, junk='00000000'):
    """A group node holding the given children; junk fills the bytes above its child count."""
    return ('group', list(children), junk)


def emit(tree, nodes, buffers, memory, counter):
    """Lay out one node, and its children, as buffers; nodes records each node's shape by buffer
    name, so the expected search can be worked out."""
    idx = next(counter)
    name = f'node{idx}'
    buffers[name] = {'size': NODE_SIZE, 'bytes': '00' * NODE_SIZE}
    if tree[0] == 'leaf':
        memory.append({'addr': f'buf:{name}+0x0', 'bytes': u64(tree[1])})
        nodes[name] = ('leaf', None, None)
        return name
    children, junk = tree[1], tree[2]
    memory.append({'addr': f'buf:{name}+0x0', 'bytes': u64(0)})
    child_names = [emit(child, nodes, buffers, memory, counter) for child in children]
    nodes[name] = ('group', child_names, junk)
    array = f'children{idx}'
    size = max(8 * len(children), 8)
    buffers[array] = {'size': size, 'bytes': '00' * size}
    for slot, child in enumerate(child_names):
        memory.append({'addr': f'buf:{array}+{8 * slot:#x}', 'pointer': child})
    memory.append({'addr': f'buf:{name}+0x18', 'pointer': array})
    memory.append({'addr': f'buf:{name}+0x20', 'bytes': u32(len(children)) + junk})
    return name


def search(nodes, name, target, count_value, calls):
    """Mirror of the search: returns the 32-bit result and appends one entry to calls for each
    leaf-count call made."""
    shape = nodes[name]
    if shape[0] == 'leaf':
        return 0 if name == target else NOT_FOUND
    before = 0
    for child in shape[1]:
        found = search(nodes, child, target, count_value, calls)
        if found != NOT_FOUND:
            return i32(found + before)
        calls.append(child)
        before = i32(before + count_value)
    return NOT_FOUND


def case(cid, tree, target_pick, count_value=3):
    """target_pick(names) names the target buffer: a tree node, or 'outside' for a node that is not
    in the tree. Every leaf-count call returns count_value, and the stub queue holds one entry per
    call the search makes."""
    buffers = {'outside': {'size': NODE_SIZE, 'bytes': '00' * NODE_SIZE}}
    memory, nodes = [], {}
    root = emit(tree, nodes, buffers, memory, itertools.count())
    target = target_pick(nodes, root)
    calls = []
    search(nodes, root, target, count_value, calls)
    stubs = [{'address': COUNT, 'argc': 1, 'ret': hex(count_value & MASK64)} for _ in calls]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': f'buf:{root}', 'rsi': f'buf:{target}'},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


def outside(nodes, root):
    """The target is not in the tree."""
    return 'outside'


def node_at(position):
    """The target is the leaf at this position in creation order (the first leaf is position zero)."""
    def pick(nodes, root):
        leaves = [name for name in nodes if nodes[name][0] == 'leaf']
        leaves.sort(key=lambda n: int(n[4:]))
        return leaves[position]
    return pick


def root_node(nodes, root):
    """The target is the root node itself."""
    return root


CASES = [
    case('root_leaf_is_target', leaf(1), root_node),
    case('root_leaf_not_target', leaf(1), outside),
    case('leaf_flag_all_ones_target', leaf(0xffffffffffffffff), root_node),
    case('empty_group_outside', group(), outside),
    case('first_child_target', group(leaf(), leaf()), node_at(0)),
    case('second_child_target', group(leaf(), leaf()), node_at(1)),
    case('last_of_wide_group', group(leaf(), leaf(), leaf(), leaf(), leaf()), node_at(4)),
    case('nested_target_inside_inner', group(group(leaf(), leaf()), leaf()), node_at(1)),
    case('nested_target_in_outer_tail', group(group(leaf(), leaf()), leaf()), node_at(2)),
    case('nested_outside', group(group(leaf(), leaf()), leaf()), outside),
    case('empty_group_before_target', group(group(), leaf()), node_at(0)),
    case('junk_above_child_count', group(leaf(), leaf(), junk='ffffffff'), node_at(1)),
    case('count_upper_bits_dropped', group(leaf(), leaf()), node_at(1), count_value=0x100000005),
    case('count_top_bit_wraps', group(leaf(), leaf(), leaf()), node_at(2),
         count_value=0xffffffff80000000),
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
