#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic trees for clear_pending_four_keys at 0x01398f50, for tools/verify.py run.

usage: clear_pending_four_keys_cases.py OUT_DIR

Each tree is written as nodes with left, root link, right, nil marker, signed key and pending
flag at the offsets the walk reads, and nil leaves end every search. Covers exact matches, absent
keys that clear the end node, empty trees, chains in both directions, duplicate keys, and negative
and maximal keys that test the signed compare.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01398f50'
NODE_SIZE = 0x28
LEFT, ROOT_LINK, RIGHT, IS_NIL, KEY, PENDING = 0x00, 0x08, 0x10, 0x19, 0x1c, 0x20
GARBAGE = {'rdi': 'buf:tree', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def node_bytes(key=0, nil=False, pending=1):
    """A node with its nil marker, key and pending flag; the link words are filled by pointers."""
    raw = bytearray(bytes([0xee]) * NODE_SIZE)
    for offset in (LEFT, RIGHT, ROOT_LINK):
        raw[offset:offset + 8] = bytes(8)
    raw[IS_NIL] = 1 if nil else 0
    raw[KEY:KEY + 4] = struct.pack('<i', key)
    raw[PENDING] = pending
    return raw.hex()


def build(shape):
    """Turn a nested (key, left, right) shape into node buffers and pointer writes; None is a nil leaf."""
    buffers = {'nil': {'size': NODE_SIZE, 'bytes': node_bytes(nil=True)}}
    memory = []
    counter = [0]

    def name_of(node):
        if node is None:
            return 'nil'
        key, left, right = node
        counter[0] += 1
        name = f'n{counter[0]}'
        buffers[name] = {'size': NODE_SIZE, 'bytes': node_bytes(key)}
        memory.append({'addr': f'buf:{name}+0x{LEFT:x}', 'pointer': name_of(left)})
        memory.append({'addr': f'buf:{name}+0x{RIGHT:x}', 'pointer': name_of(right)})
        return name

    root = name_of(shape)
    buffers['end'] = {'size': NODE_SIZE, 'bytes': node_bytes()}
    memory.append({'addr': f'buf:end+0x{ROOT_LINK:x}', 'pointer': root})
    return buffers, memory


def case(cid, shape, registers=None):
    """One call on the tree described by the shape; the header's end link points at the end node."""
    buffers, memory = build(shape)
    buffers['tree'] = {'size': 0x20, 'bytes': 'd4' * 0x20}
    memory.append({'addr': 'buf:tree+0x18', 'pointer': 'end'})
    args = dict(GARBAGE if registers is None else registers)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': []}


BALANCED = (1002, (1001, None, None), (1007, (1005, None, None), (1008, None, None)))
ALL_FOUR = (1002, (1000, None, (1001, None, None)), (1008, (1007, None, None), (1010, None, None)))
ABSENT = (1000, None, (1004, None, (1009, None, None)))

CASES = [
    case('balanced_tree_all_keys', BALANCED),
    case('all_four_keys_present', ALL_FOUR),
    case('absent_keys_clear_end', ABSENT),
    case('empty_tree_clears_end', None),
    case('single_matching_first_key', (0x3e9, None, None)),
    case('single_key_below_all', (0x3e0, None, None)),
    case('single_key_above_all', (0x3f5, None, None)),
    case('left_chain_descending', (0x3f0, (0x3ea, (0x3e9, None, None), None), None)),
    case('right_chain_ascending', (0x3e9, None, (0x3ea, None, (0x3ef, None, (0x3f0, None, None))))),
    case('duplicate_keys_on_path', (0x3ea, (0x3ea, None, None), (0x3ea, None, None))),
    case('negative_key_is_below', (-5, None, (0x3e9, None, None))),
    case('maximal_key_is_above', (0x7fffffff, (0x3f0, None, None), None)),
    case('minimal_key_on_path', (-0x80000000, (0x3f0, None, None), None)),
    case('matches_only_under_left_link', (0x3f0, (0x3e9, None, None), (0x3ef, None, None))),
    case('zero_registers', BALANCED, registers={**{k: '0x0' for k in GARBAGE}, 'rdi': 'buf:tree'}),
]


def main():
    """Write deterministic fixtures to the requested directory."""
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
