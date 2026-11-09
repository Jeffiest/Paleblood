#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic reference holders for bb_misc_ref_holder_hold (0x00b69990).

usage: ref_holder_hold_cases.py OUT_DIR

Items that are counted or not, with counts that wrap in the low half; held lists with room or full;
branches with leaves, empty branches, and no branches; holders with no and two children.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00b69990'
GROW = '0x00819100'
NOTIFY_0X10 = '0x004001c0'
NOTIFY_ADD = '0x004001e0'
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, word=0x0, held=0, held_capacity=4, children=0, branches=()):
    """branches: the leaf count of each branch of the item, in order."""
    memory = [{'addr': 'buf:holder+0x10', 'pointer': 'held'},
              {'addr': 'buf:holder+0x18', 'bytes': u32(held)},
              {'addr': 'buf:holder+0x1c', 'bytes': u32(held_capacity)},
              {'addr': 'buf:holder+0x40', 'pointer': 'children'},
              {'addr': 'buf:holder+0x48', 'bytes': u32(children)},
              {'addr': 'buf:holder+0x4c', 'bytes': u32(4)},
              {'addr': 'buf:item+0x8', 'bytes': u32(word)},
              {'addr': 'buf:item+0x20', 'pointer': 'branches'},
              {'addr': 'buf:item+0x28', 'bytes': u32(len(branches))},
              {'addr': 'buf:cvt+0x10', 'guest': NOTIFY_0X10},
              {'addr': 'buf:cvt+0x20', 'guest': NOTIFY_ADD}]
    buffers = {'holder': {'size': 0x60, 'bytes': 'a5' * 0x60},
               'held': {'size': 0x40, 'bytes': '5a' * 0x40},
               'grown_held': {'size': 0x40, 'bytes': '00' * 0x40},
               'children': {'size': max(8 * children, 8), 'bytes': '00' * max(8 * children, 8)},
               'item': {'size': 0x30, 'bytes': '00' * 0x30},
               'branches': {'size': max(8 * len(branches), 8), 'bytes': '00' * max(8 * len(branches), 8)},
               'cvt': {'size': 0x40, 'bytes': '00' * 0x40}}
    for index in range(children):
        buffers[f'child{index}'] = {'size': 8, 'bytes': '00' * 8}
        memory += [{'addr': f'buf:children+{8 * index:#x}', 'pointer': f'child{index}'},
                   {'addr': f'buf:child{index}', 'pointer': 'cvt'}]
    stubs = []
    if held == (held_capacity & 0x3fffffff):
        stubs.append({'address': GROW, 'argc': 3,
                      'writes': [{'arg': 1, 'offset': 0, 'pointer': 'grown_held'}]})
    for index, leaf_count in enumerate(branches):
        buffers[f'branch{index}'] = {'size': 0xe0, 'bytes': '00' * 0xe0}
        buffers[f'leaves{index}'] = {'size': max(8 * leaf_count, 8), 'bytes': '00' * max(8 * leaf_count, 8)}
        memory += [{'addr': f'buf:branches+{8 * index:#x}', 'pointer': f'branch{index}'},
                   {'addr': f'buf:branch{index}+0xd0', 'pointer': f'leaves{index}'},
                   {'addr': f'buf:branch{index}+0xd8', 'bytes': u32(leaf_count)}]
        for leaf in range(leaf_count):
            buffers[f'leaf{index}_{leaf}'] = {'size': 8, 'bytes': '00' * 8}
            memory.append({'addr': f'buf:leaves{index}+{8 * leaf:#x}', 'pointer': f'leaf{index}_{leaf}'})
        for _ in range(leaf_count):
            for _ in range(children):
                stubs.append({'address': NOTIFY_ADD, 'argc': 2})
    for _ in range(children):
        stubs.append({'address': NOTIFY_0X10, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder', 'rsi': 'buf:item'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


# A compare-exchange retry needs another thread to change the word between the read and the exchange.
UNREACHABLE = {
    '0x00b699d9': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}

CASES = [
    case('plain_uncounted_appends', word=0x0, held=0, children=0),
    case('counted_increments_notifies', word=0x10001, held=1, children=2),
    case('held_full_grows', word=0x0, held=4, held_capacity=4, children=1),
    case('branches_leaves_children', word=0x0, held=2, children=2, branches=(2, 1)),
    case('empty_branch_with_children', word=0x10000, children=1, branches=(0,)),
    case('low_half_wraps_counted', word=0x1ffff, held=3, children=1),
    case('below_threshold_no_count', word=0xffff, children=0, branches=(1,)),
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
