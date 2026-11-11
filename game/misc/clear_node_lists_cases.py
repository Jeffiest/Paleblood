#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners with two node lists (0x02254830): empty lists, null entries, nodes in either or both lists,
several nodes per list, and free results with the top bit set or zero. Each non-null node is destroyed through its
vtable's slot 8 and freed through the allocator's slot 0x70, and every call is stubbed in call order. A case where no
node is freed has no call that leaves RAX, so it sets 'returns' to void.

usage: clear_node_lists_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02254830'
ALLOCATOR_OF = '0x0247b720'
DESTROY = '0x00400020'        # a real game function entry, stubbed as the node's destroy slot
FREE = '0x004000a0'           # a real game function entry, stubbed as the allocator's free slot
OWNER_SIZE = 0x48
NODE_SLOT_DESTROY = 0x8
ALLOCATOR_FREE_SLOT = 0x70
ALLOCATOR_VTABLE_SIZE = 0x80
MASK64 = (1 << 64) - 1


def case(cid, first=(), second=(), fill='ee'):
    """One owner. Each list holds None for a null entry, or the value the node's free returns. The lists are
    stored in their own buffers, the owner points at their begin and end, and each non-null node points at a
    shared vtable whose destroy slot and the allocator's free slot are stubbed."""
    lists = {'a': list(first), 'b': list(second)}
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': fill * OWNER_SIZE},
               'alloc': {'size': 0x10}, 'alloc_vt': {'size': ALLOCATOR_VTABLE_SIZE},
               'node_vt': {'size': 0x10}}
    memory = [{'addr': 'buf:alloc+0x0', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{ALLOCATOR_FREE_SLOT:#x}', 'guest': FREE},
              {'addr': f'buf:node_vt+{NODE_SLOT_DESTROY:#x}', 'guest': DESTROY}]
    stubs = []
    frees = []
    owner_slots = {}
    for name, entries in lists.items():
        size = max(1, len(entries)) * 8
        buffers[f'list_{name}'] = {'size': size}
        for index, value in enumerate(entries):
            slot = f'buf:list_{name}+{index * 8:#x}'
            if value is None:
                memory.append({'addr': slot, 'bytes': '00' * 8})
                continue
            node = f'node_{name}{index}'
            buffers[node] = {'size': 8}
            memory.append({'addr': slot, 'pointer': node})
            memory.append({'addr': f'buf:{node}+0x0', 'pointer': 'node_vt'})
            stubs.append({'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:alloc'})
            stubs.append({'address': DESTROY, 'argc': 1})
            stubs.append({'address': FREE, 'argc': 2, 'ret': hex(value & MASK64)})
            frees.append(value)
        end = f'list_{name}' if not entries else f'list_{name}+{len(entries) * 8:#x}'
        owner_slots[name] = (f'list_{name}', end)
    begin_a, end_a = owner_slots['a']
    begin_b, end_b = owner_slots['b']
    memory.append({'addr': f'buf:owner+0x10', 'pointer': begin_a})
    memory.append({'addr': f'buf:owner+0x18', 'pointer': end_a})
    memory.append({'addr': f'buf:owner+0x38', 'pointer': begin_b})
    memory.append({'addr': f'buf:owner+0x40', 'pointer': end_b})
    returns = 'i64' if frees else 'void'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns,
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('both_lists_empty'),
    case('first_list_null_only', first=[None]),
    case('second_list_null_only', second=[None, None]),
    case('single_node_first_list', first=[0x1234]),
    case('single_node_second_list', second=[0x5678]),
    case('nulls_around_node', first=[None, 0x11, None], second=[None]),
    case('two_nodes_last_result_wins', first=[0x21, 0x22], second=[0x23]),
    case('second_list_after_first_null', first=[0x31], second=[None, 0x32]),
    case('null_last_keeps_previous_result', first=[0x41, None], second=[0x42, None]),
    case('result_top_bit', first=[1 << 63]),
    case('result_zero', first=[0]),
    case('result_all_ones', first=[MASK64]),
    case('result_high_word_only', second=[0x100000000]),
    case('many_nodes', first=[0x51, 0x52, 0x53, 0x54, 0x55], second=[0x56, 0x57, 0x58]),
    case('nodes_with_nulls_between', first=[None, 0x61, None, 0x62], second=[None, 0x63, None]),
    case('owner_fill_untouched', fill='5a', first=[0x71], second=[0x72]),
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
    sys.exit(main())
