#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pair appends for physics_list_append_pair (0x02241880).

usage: list_append_pair_cases.py OUT_DIR

The manager chain (manager, holder, world, body table) is laid out in memory as the original reads it;
each body's table entry links back to an owner instance, whose kind and parent object decide the pair.
The parents' readiness queries (slot 0x1a8) are stubs returning a chosen value, the node allocator's
allocate slot (0x58) is a stub returning a node or null, and the expected calls are scripted in call
order: the first query, the second query only when the first is not ready, then the allocation.
Covers absent references, absent links, owners and parents, wrong kinds, both readiness outcomes and
the wrong-state branch, a query result with only its high bits set, failed allocation, an empty and a
non-empty list, and body indices other than 0 and 1.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02241880'
MANAGER_GLOBAL = '0x0593d700'
ALLOCATOR_GLOBAL = '0x05940420'
QUERY_A = '0x00500c00'       # spare address in the first parent's query slot; stubbed
QUERY_B = '0x00500c10'       # spare address in the second parent's query slot; stubbed
ALLOC = '0x00500c20'         # spare address in the allocator's allocate slot; stubbed
NO_BODY = 0x7fffffff
READY_KIND = 2
READY_STATE = 2
BODY_STRIDE = 0x90
LINK_OFFSET = 0x88
QUERY_SLOT = 0x1a8
ALLOCATE_SLOT = 0x58
MASK64 = (1 << 64) - 1


def le(value, width):
    return (value & ((1 << (8 * width)) - 1)).to_bytes(width, 'little').hex()


def build(cid, a=0, b=1, link_a=True, link_b=True, owner_a=True, owner_b=True, kind_a=READY_KIND,
          kind_b=READY_KIND, parent_a=True, parent_b=True, query_a=1, state_a=READY_STATE, query_b=1,
          state_b=READY_STATE, alloc=True, existing=False):
    """a and b are body indices (None for no body); existing puts one node on the list already."""
    buffers = {}
    memory = []
    stubs = []

    # The chain the original walks from the physics manager global to the body table.
    buffers['manager'] = {'size': 0x30}
    buffers['holder'] = {'size': 0x10}
    buffers['world'] = {'size': 0x28}
    memory += [{'addr': MANAGER_GLOBAL, 'pointer': 'manager'},
               {'addr': f'buf:manager+{0x28:#x}', 'pointer': 'holder'},
               {'addr': f'buf:holder+{0x8:#x}', 'pointer': 'world'},
               {'addr': f'buf:world+{0x20:#x}', 'pointer': 'bodies'}]
    indices = [x for x in (a, b) if x is not None]
    entries = max(indices) + 1 if indices else 1
    buffers['bodies'] = {'size': BODY_STRIDE * entries, 'bytes': '00' * (BODY_STRIDE * entries)}

    def link_for(index, present, name, owner_present):
        if index is None or not present:
            return
        memory.append({'addr': f'buf:bodies+{index * BODY_STRIDE + LINK_OFFSET:#x}', 'pointer': name})
        buffers[name] = {'size': 0x10, 'bytes': '00' * 0x10}
        if owner_present:
            memory.append({'addr': f'buf:{name}+0', 'pointer': name.replace('link', 'inst')})

    link_for(a, link_a, 'link_a', owner_a)
    link_for(b, link_b, 'link_b', owner_b)

    def instance(name, kind, parent_present, parent_name):
        buffers[name] = {'size': 0x20, 'bytes': 'aa' * 8 + le(kind, 2) + 'bb' * 6 + '00' * 8 + 'cc' * 8}
        if parent_present:
            memory.append({'addr': f'buf:{name}+{0x10:#x}', 'pointer': parent_name})

    if a is not None and link_a and owner_a:
        instance('inst_a', kind_a, parent_a, 'par_a')
    if b is not None and link_b and owner_b:
        instance('inst_b', kind_b, parent_b, 'par_b')

    def parent(name, state, query_stub, vtable_name):
        buffers[name] = {'size': 0x80, 'bytes': 'dd' * 0x78 + le(state, 4) + 'dd' * 4}
        memory.append({'addr': f'buf:{name}+0', 'pointer': vtable_name})
        buffers[vtable_name] = {'size': QUERY_SLOT + 8}
        memory.append({'addr': f'buf:{vtable_name}+{QUERY_SLOT:#x}', 'guest': query_stub})

    if parent_a:
        parent('par_a', state_a, QUERY_A, 'pvt_a')
    if parent_b:
        parent('par_b', state_b, QUERY_B, 'pvt_b')

    # The two body references and the list the pair is appended to.
    for name, index in (('ref_a', a), ('ref_b', b)):
        value = NO_BODY if index is None else index
        buffers[name] = {'size': 0x38, 'bytes': '11' * 0x30 + le(value, 4) + '22' * 4}
    buffers['list'] = {'size': 0x28, 'bytes': 'ee' * 0x28}
    if existing:
        buffers['prev'] = {'size': 0x10, 'bytes': '77' * 0x10}
        memory.append({'addr': f'buf:list+{0x18:#x}', 'pointer': 'prev'})
        memory.append({'addr': f'buf:list+{0x20:#x}', 'pointer': 'prev'})
    else:
        memory.append({'addr': f'buf:list+{0x18:#x}', 'bytes': '00' * 8})
        memory.append({'addr': f'buf:list+{0x20:#x}', 'bytes': '00' * 8})

    buffers['allocator'] = {'size': 0x10}
    buffers['alloc_vt'] = {'size': ALLOCATE_SLOT + 8}
    buffers['node'] = {'size': 0x10, 'bytes': 'ee' * 0x10}
    memory += [{'addr': ALLOCATOR_GLOBAL, 'pointer': 'allocator'},
               {'addr': 'buf:allocator+0', 'pointer': 'alloc_vt'},
               {'addr': f'buf:alloc_vt+{ALLOCATE_SLOT:#x}', 'guest': ALLOC}]

    # The calls the original makes, in order, decided from the inputs.
    if a is not None and b is not None and link_a and owner_a and link_b and owner_b:
        first_parent = parent_a if (kind_a == READY_KIND and parent_a) else False
        if kind_b == READY_KIND and first_parent and parent_b:
            stubs.append({'address': QUERY_A, 'argc': 1, 'ret': hex(query_a & MASK64)})
            proceed = (query_a & 0xff) != 0 and state_a == READY_STATE
            if not proceed:
                stubs.append({'address': QUERY_B, 'argc': 1, 'ret': hex(query_b & MASK64)})
                proceed = (query_b & 0xff) != 0 and state_b == READY_STATE
            if proceed:
                stubs.append({'address': ALLOC, 'argc': 3, 'ret': 'buf:node' if alloc else '0x0'})

    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:list', 'rsi': 'buf:ref_a', 'rdx': 'buf:ref_b'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    build('ready_first_empty_list'),
    build('first_not_ready_second_ready', query_a=0),
    build('first_wrong_state_second_ready', state_a=1),
    build('first_query_high_bits_only', query_a=0x100),
    build('second_ready_wrong_state_rejected', query_a=0, state_b=1),
    build('both_not_ready', query_a=0, query_b=0),
    build('second_query_high_bits_only', query_a=0, query_b=0x100),
    build('second_ready_after_first_fails', query_a=0, query_b=1, state_b=2),
    build('allocation_fails', alloc=False),
    build('allocation_fails_second_path', query_a=0, alloc=False),
    build('existing_list_tail_linked', existing=True),
    build('existing_list_second_path', existing=True, query_a=0),
    build('first_reference_absent', a=None),
    build('second_reference_absent', b=None),
    build('first_link_null', link_a=False),
    build('second_link_null', link_b=False),
    build('first_owner_null', owner_a=False),
    build('second_owner_null', owner_b=False),
    build('first_kind_not_ready', kind_a=1),
    build('second_kind_not_ready', kind_b=3),
    build('first_parent_null', parent_a=False),
    build('second_parent_null', parent_b=False),
    build('bodies_at_other_indices', a=3, b=0, existing=True),
    build('bodies_reversed_indices', a=2, b=5),
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
