#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners, targets and chains for misc_level_bucket_plus_chain_bytes (0x018e01e0).

usage: level_bucket_plus_chain_bytes_cases.py OUT_DIR

The owner's parent (+0x10) holds the target (+0x290); the target holds a 32-bit level (+0x48) and a
default list (+0x670). A null list argument is replaced by the target's list. The list's first node
is at +0x8; each node has flags (+0x1c), a value (+0x48) whose byte at +0x142 is summed, and a next
node (+0x58). Covers every level threshold on both sides, a null parent, target, list or value, the
skip flags, several nodes, and a list argument that differs from the target's list.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018e01e0'
SKIP_MASK = 0x800c0003
MASK64 = (1 << 64) - 1


def u32(value):
    """Encode a 32-bit value."""
    return struct.pack('<I', value & 0xffffffff).hex()


def u64(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, level=12, nodes=(), parent=True, target=True, target_list=True, arg_list=True):
    """nodes: (flags, value byte or None) per node, in chain order. The owner, parent, target and lists are built."""
    buffers = {'owner': {'size': 0x18}, 'parent': {'size': 0x298}, 'target': {'size': 0x678},
               'tlist': {'size': 0x10}, 'alist': {'size': 0x10}}
    memory = [{'addr': 'buf:owner+16', 'pointer': 'parent' if parent else None}]
    memory = [m for m in memory if m['pointer'] is not None] or [{'addr': 'buf:owner+16', 'bytes': u64(0)}]
    if parent:
        memory.append({'addr': 'buf:parent+656', 'pointer': 'target' if target else None} if target
                      else {'addr': 'buf:parent+656', 'bytes': u64(0)})
    if target:
        memory += [{'addr': 'buf:target+72', 'bytes': u32(level)},
                   {'addr': 'buf:target+1648', 'pointer': 'tlist' if target_list else None}
                   if target_list else {'addr': 'buf:target+1648', 'bytes': u64(0)}]
    head = 'node0' if nodes else None
    for name in ('tlist', 'alist'):
        memory.append({'addr': f'buf:{name}+8', 'pointer': head} if head else {'addr': f'buf:{name}+8', 'bytes': u64(0)})
    for i, (flags, value) in enumerate(nodes):
        node = f'node{i}'
        buffers[node] = {'size': 0x60}
        memory.append({'addr': f'buf:{node}+28', 'bytes': u32(flags)})
        if value is None:
            memory.append({'addr': f'buf:{node}+72', 'bytes': u64(0)})
        else:
            buffers[f'val{i}'] = {'size': 0x150, 'bytes': '00' * 0x150}
            memory.append({'addr': f'buf:{node}+72', 'pointer': f'val{i}'})
            memory.append({'addr': f'buf:val{i}+322', 'bytes': f'{value & 0xff:02x}'})
        nxt = f'node{i + 1}' if i + 1 < len(nodes) else None
        memory.append({'addr': f'buf:{node}+88', 'pointer': nxt} if nxt else {'addr': f'buf:{node}+88', 'bytes': u64(0)})
    if arg_list:
        rsi = 'buf:alist'
    else:
        rsi = '0x0'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:owner', 'rsi': rsi},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': []}


ONE = [(0, 5)]
MIXED = [(0, 5), (SKIP_MASK, 200), (0x4, 7), (0, None), (0x8000000, 9)]
LEVELS = [-1, 0, 9, 10, 11, 12, 13, 14, 15, 16, 18, 19, 22, 23, 27, 28, 33, 34, 40, 41, 49, 50, 0x7fffffff]
CASES = [case(f'level_{level & 0xffffffff:08x}', level=level, nodes=ONE) for level in LEVELS]
CASES += [
    case('empty_list_arg_given', level=30, nodes=[]),
    case('empty_list_both_null', level=30, nodes=[], arg_list=False, target_list=False),
    case('null_arg_uses_target_list', level=45, nodes=MIXED, arg_list=False),
    case('null_arg_target_list_null', level=45, nodes=MIXED, arg_list=False, target_list=False),
    case('mixed_chain_given_list', level=20, nodes=MIXED),
    case('skip_flags_only', level=41, nodes=[(SKIP_MASK, 255), (0x800c0001, 3), (0x2, 4)]),
    case('null_value_counts_nothing', level=49, nodes=[(0, None), (0, 1)]),
    case('byte_sum_wraps_in_range', level=60, nodes=[(0, 255), (0, 255), (0, 255)]),
    case('parent_null', parent=False, nodes=ONE),
    case('target_null', target=False, nodes=ONE),
    case('negative_level_with_chain', level=-50, nodes=MIXED),
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
