#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners for misc_teardown_owner_02264260 (0x02264260), for tools/verify.py run.

usage: teardown_owner_cases.py OUT_DIR

Each owner has an optional object (+0x28), a second list with a sentinel at +0x38 whose nodes may hold
objects, a single pointer at +0x58 released through the releaser at +0x70, and a first list with a sentinel
at +0x10. Every allocator, destroy and release call is stubbed in call order. Covers an empty owner, each
object, nodes with and without objects, the report path, the release path, and free results with the top
bit set, zero and all ones.
"""
import json
import os
import struct
import sys

ADDRESS = '0x02264260'
ALLOCATOR_OF = '0x0247b720'
REPORT = '0x013a3260'
DESTROY = '0x00400020'
FREE = '0x004000a0'
RELEASE = '0x00400300'
HOLDER_GLOBAL = '0x058b3570'
OWNER_SIZE = 0x80
ALLOC_VT_SIZE = 0x80
MASK64 = (1 << 64) - 1


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, obj28=False, list38=(), list10=0, single=False, report=False, final=0, fill='ee', rewrite=False):
    """list38: one bool per node of the second list, true when the node holds an object.
    list10: the number of nodes in the first list. final: the value the last free returns."""
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': fill * OWNER_SIZE},
               'alloc_vt': {'size': ALLOC_VT_SIZE}, 'alloc_obj': {'size': 0x10},
               'alloc20': {'size': 0x10}, 'alloc48': {'size': 0x10},
               'obj_vt': {'size': 0x10}, 'obj28': {'size': 0x10},
               'holder': {'size': 0x20}, 'single': {'size': 0x10},
               'rel_vt': {'size': ALLOC_VT_SIZE}, 'rel': {'size': 0x10},
               'sent10': {'size': 0x18}, 'sent38': {'size': 0x80}}
    memory = [{'addr': f'buf:alloc_vt+0x70', 'guest': FREE},
              {'addr': 'buf:obj_vt+0x8', 'guest': DESTROY},
              {'addr': 'buf:rel_vt+0x70', 'guest': RELEASE},
              {'addr': 'buf:rel+0x0', 'pointer': 'rel_vt'},
              {'addr': 'buf:obj28+0x0', 'pointer': 'obj_vt'},
              {'addr': 'buf:alloc_obj+0x0', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc20+0x0', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc48+0x0', 'pointer': 'alloc_vt'}]
    stubs = []

    def call(address, argc, **extra):
        stubs.append({'address': address, 'argc': argc, **extra})

    def chain(sentinel, names):
        ring = [sentinel] + names + [sentinel]
        for before, after in zip(ring, ring[1:]):
            memory.append({'addr': f'buf:{before}+0x0', 'pointer': after})
            memory.append({'addr': f'buf:{after}+0x8', 'pointer': before})

    # The object at +0x28.
    if obj28:
        memory.append({'addr': 'buf:owner+0x28', 'pointer': 'obj28'})
    else:
        memory.append({'addr': 'buf:owner+0x28', 'bytes': '00' * 8})

    # The second list: nodes n38_i, each with an object o38_i or none.
    names38 = []
    for index, has_object in enumerate(list38):
        node = f'n38_{index}'
        names38.append(node)
        buffers[node] = {'size': 0x18}
        if has_object:
            buffers[f'o38_{index}'] = {'size': 0x10}
            memory.append({'addr': f'buf:o38_{index}+0x0', 'pointer': 'obj_vt'})
            memory.append({'addr': f'buf:{node}+0x10', 'pointer': f'o38_{index}'})
        else:
            memory.append({'addr': f'buf:{node}+0x10', 'bytes': '00' * 8})
    chain('sent38', names38)
    memory.append({'addr': 'buf:owner+0x38', 'pointer': 'sent38'})
    memory.append({'addr': 'buf:owner+0x40', 'bytes': word(len(names38))})
    memory.append({'addr': 'buf:owner+0x48', 'pointer': 'alloc48'})

    # The single pointer at +0x58, the releaser at +0x70, and the two words the teardown clears.
    if single:
        memory.append({'addr': 'buf:owner+0x58', 'pointer': 'single'})
    else:
        memory.append({'addr': 'buf:owner+0x58', 'bytes': '00' * 8})
    memory.append({'addr': 'buf:owner+0x60', 'bytes': word(0xc0ffee)})
    memory.append({'addr': 'buf:owner+0x68', 'bytes': word(0x77)})
    release_writes = None
    if rewrite:
        # The releaser is the second list's own sentinel, whose slot 0x70 is the release stub: the release
        # call writes a first node into the sentinel, so the list is walked again with two nodes in it.
        memory.append({'addr': 'buf:owner+0x70', 'pointer': 'sent38'})
        memory.append({'addr': 'buf:sent38+0x70', 'guest': RELEASE})
        buffers['n_a'] = {'size': 0x18}
        buffers['n_b'] = {'size': 0x18}
        memory.append({'addr': 'buf:n_a+0x0', 'pointer': 'n_b'})
        memory.append({'addr': 'buf:n_a+0x10', 'bytes': '00' * 8})
        memory.append({'addr': 'buf:n_b+0x0', 'pointer': 'sent38'})
        memory.append({'addr': 'buf:n_b+0x10', 'bytes': '00' * 8})
        release_writes = [{'arg': 0, 'offset': 0, 'pointer': 'n_a'}]
    else:
        memory.append({'addr': 'buf:owner+0x70', 'pointer': 'rel'})

    # The first list: nodes n10_i with no object.
    names10 = []
    for index in range(list10):
        node = f'n10_{index}'
        names10.append(node)
        buffers[node] = {'size': 0x18}
    chain('sent10', names10)
    memory.append({'addr': 'buf:owner+0x10', 'pointer': 'sent10'})
    memory.append({'addr': 'buf:owner+0x18', 'bytes': word(len(names10))})
    memory.append({'addr': 'buf:owner+0x20', 'pointer': 'alloc20'})

    # The report global: the holder when the report runs, otherwise null.
    if report:
        memory.append({'addr': HOLDER_GLOBAL, 'pointer': 'holder'})
    else:
        memory.append({'addr': HOLDER_GLOBAL, 'bytes': '00' * 8})

    # The stubs in call order: the object at +0x28, the second list's objects, its nodes, the report, the
    # release, the second list's sentinel, the first list's nodes, then the sentinel whose free is the result.
    if obj28:
        call(ALLOCATOR_OF, 1, ret='buf:alloc_obj')
        call(DESTROY, 1)
        call(FREE, 2)
    for has_object in list38:
        if has_object:
            call(ALLOCATOR_OF, 1, ret='buf:alloc_obj')
            call(DESTROY, 1)
            call(FREE, 2)
    for _ in names38:
        call(FREE, 2)
    if report:
        call(REPORT, 4)
    if single:
        call(RELEASE, 2, **({'writes': release_writes} if release_writes else {}))
    if rewrite:
        call(FREE, 2)
        call(FREE, 2)
    call(FREE, 2)
    for _ in names10:
        call(FREE, 2)
    call(FREE, 2, ret=hex(final & MASK64))

    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('empty_owner'),
    case('object_only', obj28=True),
    case('second_list_nodes_without_objects', list38=[False, False]),
    case('second_list_objects_mixed', list38=[True, False, True]),
    case('first_list_nodes', list10=2, final=0x1234),
    case('single_without_report', single=True),
    case('report_without_single', report=True),
    case('report_and_single', report=True, single=True, list38=[True]),
    case('all_parts', obj28=True, list38=[True, False], list10=1, single=True, report=True, final=MASK64),
    case('final_result_zero', list10=1, final=0),
    case('final_result_top_bit', final=1 << 63),
    case('final_result_high_word', list10=3, final=0x100000000),
    case('fill_pattern', fill='5a', obj28=True, list38=[True], list10=3, single=True, final=0x1122334455667788),
    case('release_relinks_second_list', single=True, rewrite=True, final=0x55),
]


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
