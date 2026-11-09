#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic entry references for bb_misc_entry_ref_accept (0x00b70260).

usage: entry_ref_accept_cases.py OUT_DIR

Entries that are too big or not, with limited objects above or at the limited level, in either list;
references that name children (negative indices skipped) or visit all children; children that accept
or refuse the entry; and the one-time flag clear (initialised by the init call, or left clear).
"""
import json
import os
import struct
import sys

ADDRESS = '0x00b70260'
INIT = '0x00b703c0'
FLAG = '0x058435a0'
CHECK = '0x00400240'
MASK32 = (1 << 32) - 1


def i32(v):
    return struct.pack('<i', v).hex()


def case(cid, size=0x20, first=(), second=(), indices=None, children=(), flag=1, init_sets=False):
    """first, second: (kind, level) of each object in the two lists. indices: the child indices the
    reference names (None for all children). children: the check result of each child."""
    stubs = []
    if flag == 0:
        stub = {'address': INIT, 'argc': 1}
        if init_sets:
            stub['writes'] = [{'arg': 0, 'bytes': '01'}]
        stubs.append(stub)
    buffers = {'ref': {'size': 0x40, 'bytes': '00' * 0x40},
               'table': {'size': 0x40, 'bytes': '00' * 0x40},
               'entries': {'size': 8, 'bytes': '00' * 8},
               'entry': {'size': 0x140, 'bytes': '00' * 0x140},
               'owner': {'size': 0xc8, 'bytes': '00' * 0xc8},
               'children': {'size': max(8 * len(children), 8), 'bytes': '00' * max(8 * len(children), 8)},
               'cvt': {'size': 0x40, 'bytes': '00' * 0x40},
               'first': {'size': max(8 * len(first), 8), 'bytes': '00' * max(8 * len(first), 8)},
               'second': {'size': max(8 * len(second), 8), 'bytes': '00' * max(8 * len(second), 8)},
               'indices': {'size': max(4 * (len(indices) if indices else 0), 4),
                           'bytes': ''.join(i32(v) for v in (indices or ())) or '00' * 4},
               'flag_byte': {'size': 8, 'bytes': '00' * 8}}
    memory = [{'addr': 'buf:ref+0x1c', 'bytes': i32(0)},
              {'addr': 'buf:ref+0x28', 'pointer': 'indices'},
              {'addr': 'buf:ref+0x30', 'bytes': i32(0 if indices is None else len(indices))},
              {'addr': 'buf:table+0x20', 'pointer': 'entries'},
              {'addr': 'buf:entries', 'pointer': 'entry'},
              {'addr': 'buf:entry+0x10', 'pointer': 'owner'},
              {'addr': 'buf:entry+0x20', 'bytes': i32(size)},
              {'addr': 'buf:entry+0xd0', 'pointer': 'first'},
              {'addr': 'buf:entry+0xd8', 'bytes': i32(len(first))},
              {'addr': 'buf:entry+0xe0', 'pointer': 'second'},
              {'addr': 'buf:entry+0xe8', 'bytes': i32(len(second))},
              {'addr': 'buf:owner+0xb8', 'pointer': 'children'},
              {'addr': 'buf:owner+0xc0', 'bytes': i32(len(children))},
              {'addr': 'buf:cvt+0x30', 'guest': CHECK},
              {'addr': FLAG, 'bytes': f'{flag & 0xff:02x}'}]
    for name, objects in (('first', first), ('second', second)):
        for index, (kind, level) in enumerate(objects):
            buffers[f'{name}_obj{index}'] = {'size': 0x90, 'bytes': '00' * 0x90}
            buffers[f'{name}_info{index}'] = {'size': 0x20, 'bytes': '00' * 0x20}
            memory += [{'addr': f'buf:{name}+{8 * index:#x}', 'pointer': f'{name}_obj{index}'},
                       {'addr': f'buf:{name}_obj{index}+0x88', 'pointer': f'{name}_info{index}'},
                       {'addr': f'buf:{name}_info{index}+0xc', 'bytes': i32(kind)},
                       {'addr': f'buf:{name}_info{index}+0x10', 'bytes': struct.pack('<H', level & 0xffff).hex()}]
    for index in range(len(children)):
        buffers[f'child{index}'] = {'size': 8, 'bytes': '00' * 8}
        memory += [{'addr': f'buf:children+{8 * index:#x}', 'pointer': f'child{index}'},
                   {'addr': f'buf:child{index}', 'pointer': 'cvt'}]
    visited = range(len(children)) if indices is None else [i for i in indices if i >= 0]
    for index in visited:
        stubs.append({'address': CHECK, 'argc': 2, 'ret': hex(int(children[index]) & MASK32)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:ref', 'rsi': 'buf:table'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('entry_too_big', size=0x401, children=(1,)),
    case('first_limited_object_refused', first=((0x5, 0x21),), children=(1,)),
    case('second_limited_object_refused', second=((0x5, 0x21),), children=(1,)),
    case('limited_level_at_limit_accepted', first=((0x5, 0x20), (0x1, 0x40)), children=(1,), indices=[0]),
    case('named_children_accept', children=(1, 1), indices=[0, 1]),
    case('named_child_refuses', children=(0, 1), indices=[0, 1]),
    case('negative_index_skipped', children=(1, 1), indices=[-1, 1]),
    case('all_children_accept', children=(1, 1), indices=None),
    case('all_children_first_refuses', children=(0, 1), indices=None),
    case('no_children_all_accepted', children=(), indices=None),
    case('lists_with_other_kinds', first=((0x1, 0x40), (0x1, 0x10)), second=((0x2, 0x0), (0x1, 0x80)), children=(1,), indices=None),
    case('second_limited_at_limit', second=((0x5, 0x20),), children=(1,), indices=None),
    case('second_limited_above_refused', second=((0x1, 0x0), (0x5, 0x21)), children=(1,), indices=None),
    case('flag_clear_initialised', flag=0, init_sets=True, children=(1,), indices=None),
    case('flag_clear_stays_refused', flag=0, init_sets=False, children=(1,), indices=None),
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
