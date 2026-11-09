#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic tree nodes for bb_misc_count_subtree_leaves (0x02b3d9b0): leaves with several non-zero
flags, empty and nested groups, a deep chain, and a group whose child count slot carries junk above
its 32-bit count.

usage: count_subtree_leaves_cases.py OUT_DIR
"""
import json
from pathlib import Path
import itertools
import struct
import sys

ADDRESS = '0x02b3d9b0'
MASK64 = (1 << 64) - 1
MASK32 = (1 << 32) - 1
NODE_SIZE = 0x28


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def leaf(flag=1):
    """A leaf node: its flag is non-zero."""
    return ('leaf', flag)


def group(*children, junk='00000000'):
    """A group node with the given children; junk fills the four bytes above its child count."""
    return ('group', list(children), junk)


def emit(tree, buffers, memory, counter):
    """Lay out one node as a buffer, and its child array and children as buffers, returning the
    node's buffer name."""
    idx = next(counter)
    name = f'node{idx}'
    buffers[name] = {'size': NODE_SIZE, 'bytes': '00' * NODE_SIZE}
    if tree[0] == 'leaf':
        memory.append({'addr': f'buf:{name}+0x0', 'bytes': u64(tree[1])})
        return name
    children, junk = tree[1], tree[2]
    memory.append({'addr': f'buf:{name}+0x0', 'bytes': u64(0)})
    child_names = [emit(child, buffers, memory, counter) for child in children]
    array = f'children{idx}'
    size = max(8 * len(children), 8)
    buffers[array] = {'size': size, 'bytes': '00' * size}
    for slot, child in enumerate(child_names):
        memory.append({'addr': f'buf:{array}+{8 * slot:#x}', 'pointer': child})
    memory.append({'addr': f'buf:{name}+0x18', 'pointer': array})
    memory.append({'addr': f'buf:{name}+0x20', 'bytes': u32(len(children)) + junk})
    return name


def case(cid, tree):
    """The root node is the only argument; the replacement and the original count its leaves."""
    buffers, memory = {}, []
    root = emit(tree, buffers, memory, itertools.count())
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': f'buf:{root}'}, 'buffers': buffers, 'memory': memory,
            'stubs': [], 'imports': []}


CASES = [
    case('single_leaf', leaf(1)),
    case('leaf_flag_all_ones', leaf(MASK64)),
    case('leaf_flag_high_bit', leaf(0x8000000000000000)),
    case('empty_group', group()),
    case('two_leaves', group(leaf(), leaf(7))),
    case('empty_group_then_leaf', group(group(), leaf())),
    case('nested_groups', group(group(leaf(), leaf(), leaf()), leaf())),
    case('deep_chain', group(group(group(leaf())))),
    case('junk_above_child_count', group(leaf(), leaf(), junk='ffffffff')),
    case('wide_group', group(*[leaf(i + 1) for i in range(5)])),
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
