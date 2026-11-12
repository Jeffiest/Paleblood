#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners, lookups and chains for misc_level_chain_minus_lookups (0x018e02c0).

usage: level_chain_minus_lookups_cases.py OUT_DIR

The owner has its parent at +0x10 and twelve 8-byte entries from +0x18 whose low dwords are passed to
the lookup 0x023210e0, one call each in order. The lookup writes an IndexLookupResult: the entry it found
at +0x8 (null for none), whose weight byte at +0x1d is subtracted from the total. The parent's target
(+0x290) gives a level (+0x48) and a default list (+0x670); a null list argument uses that list. Each
node's flags (+0x1c), value (+0x48, byte at +0x142) and next (+0x58) are as in the chain functions.
Covers every level threshold, a missing parent, target or list, the skip flags, matched and unmatched
lookups, weight totals and a wrapped result.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018e02c0'
LOOKUP = '0x023210e0'
SKIP_MASK = 0x800c0003
ENTRY_COUNT = 12
MASK64 = (1 << 64) - 1


def u32(value):
    """Encode a 32-bit value."""
    return struct.pack('<I', value & 0xffffffff).hex()


def u64(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, level=12, nodes=(), matches=None, values=None, parent=True, target=True,
         target_list=True, arg_list=True):
    """matches: a weight per entry for the lookup to find, or None; values: the entries' low dwords."""
    if matches is None:
        matches = [(k * 7 + 1) & 0xff if k % 3 else None for k in range(ENTRY_COUNT)]
    if values is None:
        values = [0x10 + k * 3 for k in range(ENTRY_COUNT)]
    owner = bytearray(0x78)
    for k, value in enumerate(values):
        owner[0x18 + k * 8:0x18 + k * 8 + 4] = struct.pack('<I', value & 0xffffffff)
    buffers = {'owner': {'size': 0x78, 'bytes': owner.hex()},
               'parent': {'size': 0x298}, 'target': {'size': 0x678},
               'tlist': {'size': 0x10}, 'alist': {'size': 0x10}}
    memory = [{'addr': 'buf:owner+16', 'pointer': 'parent'} if parent
              else {'addr': 'buf:owner+16', 'bytes': u64(0)}]
    if parent:
        memory.append({'addr': 'buf:parent+656', 'pointer': 'target'} if target
                      else {'addr': 'buf:parent+656', 'bytes': u64(0)})
    if target:
        memory.append({'addr': 'buf:target+72', 'bytes': u32(level)})
        memory.append({'addr': 'buf:target+1648', 'pointer': 'tlist'} if target_list
                      else {'addr': 'buf:target+1648', 'bytes': u64(0)})
    head = 'node0' if nodes else None
    for name in ('tlist', 'alist'):
        memory.append({'addr': f'buf:{name}+8', 'pointer': head} if head
                      else {'addr': f'buf:{name}+8', 'bytes': u64(0)})
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
        memory.append({'addr': f'buf:{node}+88', 'pointer': nxt} if nxt
                      else {'addr': f'buf:{node}+88', 'bytes': u64(0)})
    stubs = []
    for k, weight in enumerate(matches):
        write = {'arg': 0, 'offset': 8, 'size': 8}
        if weight is None:
            write['bytes'] = u64(0)
        else:
            buffers[f'match{k}'] = {'size': 0x1e, 'bytes': '00' * 0x1d + f'{weight & 0xff:02x}'}
            write['pointer'] = f'match{k}'
        stubs.append({'address': LOOKUP, 'argc': 2, 'argi': [1], 'writes': [write]})
    rsi = 'buf:alist' if arg_list else '0x0'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:owner', 'rsi': rsi},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


ONE = [(0, 5)]
MIXED = [(0, 5), (SKIP_MASK, 200), (0x4, 7), (0, None), (0x8000000, 9)]
LEVELS = [-1, 0, 9, 10, 11, 12, 13, 14, 15, 16, 18, 19, 22, 23, 27, 28, 33, 34, 40, 41, 49, 50, 0x7fffffff]
CASES = [case(f'level_{level & 0xffffffff:08x}', level=level, nodes=ONE) for level in LEVELS]
CASES += [
    case('no_lookup_matches', matches=[None] * ENTRY_COUNT, nodes=MIXED, level=20),
    case('every_lookup_matches', matches=[255] * ENTRY_COUNT, nodes=MIXED, level=20),
    case('weights_wrap_negative', matches=[200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211],
         nodes=[], level=5),
    case('negative_entry_values', values=[0x80000000 + k for k in range(ENTRY_COUNT)], matches=[1] * ENTRY_COUNT,
         nodes=MIXED, level=45),
    case('upper_value_bits_ignored_by_lookup', values=[0xffffffff00000000 | k for k in range(ENTRY_COUNT)],
         matches=[2] * ENTRY_COUNT, nodes=MIXED, level=30),
    case('parent_null', parent=False, matches=[9] * ENTRY_COUNT, nodes=MIXED),
    case('target_null', target=False, matches=[9] * ENTRY_COUNT, nodes=MIXED),
    case('null_arg_uses_target_list', arg_list=False, level=45, nodes=MIXED),
    case('null_arg_target_list_null', arg_list=False, target_list=False, level=45, nodes=MIXED),
    case('skip_flags_only', level=41, nodes=[(SKIP_MASK, 255), (0x800c0001, 3), (0x2, 4)]),
    case('empty_chain_given_list', level=30, nodes=[]),
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
