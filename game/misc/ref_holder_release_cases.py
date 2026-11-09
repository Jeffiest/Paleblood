#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic reference holders for bb_misc_ref_holder_release (0x00b69ae0).

usage: ref_holder_release_cases.py OUT_DIR

Held lists with the item absent (empty list), last, first and in the middle; holders with no and two
children; items with branches and leaves; counted items counted down, down to zero (destroyed), at
a low half of zero that wraps, and below the counted threshold.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00b69ae0'
NOTIFY_0X18 = '0x004001c0'
NOTIFY_REMOVE = '0x004001e0'
DESTROY = '0x00400200'
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, held=('item',), word=0x0, children=0, branches=()):
    """held: the held list in order, 'item' for the released item and 'other...' for the rest."""
    memory = [{'addr': 'buf:holder+0x10', 'pointer': 'held'},
              {'addr': 'buf:holder+0x18', 'bytes': u32(len(held))},
              {'addr': 'buf:holder+0x1c', 'bytes': u32(4)},
              {'addr': 'buf:holder+0x40', 'pointer': 'children'},
              {'addr': 'buf:holder+0x48', 'bytes': u32(children)},
              {'addr': 'buf:item+0x8', 'bytes': u32(word)},
              {'addr': 'buf:item+0x20', 'pointer': 'branches'},
              {'addr': 'buf:item+0x28', 'bytes': u32(len(branches))},
              {'addr': 'buf:item', 'pointer': 'ivt'},
              {'addr': 'buf:ivt+0x20', 'guest': DESTROY},
              {'addr': 'buf:cvt+0x18', 'guest': NOTIFY_0X18},
              {'addr': 'buf:cvt+0x28', 'guest': NOTIFY_REMOVE}]
    buffers = {'holder': {'size': 0x60, 'bytes': 'a5' * 0x60},
               'held': {'size': 0x40, 'bytes': '5a' * 0x40},
               'children': {'size': max(8 * children, 8), 'bytes': '00' * max(8 * children, 8)},
               'item': {'size': 0x30, 'bytes': '00' * 0x30},
               'ivt': {'size': 0x40, 'bytes': '00' * 0x40},
               'cvt': {'size': 0x40, 'bytes': '00' * 0x40},
               'branches': {'size': max(8 * len(branches), 8), 'bytes': '00' * max(8 * len(branches), 8)}}
    for index, name in enumerate(held):
        memory.append({'addr': f'buf:held+{8 * index:#x}', 'pointer': name})
        if name != 'item':
            buffers[name] = {'size': 0x10, 'bytes': '00' * 0x10}
    for index in range(children):
        buffers[f'child{index}'] = {'size': 8, 'bytes': '00' * 8}
        memory += [{'addr': f'buf:children+{8 * index:#x}', 'pointer': f'child{index}'},
                   {'addr': f'buf:child{index}', 'pointer': 'cvt'}]
    stubs = [{'address': NOTIFY_0X18, 'argc': 2} for _ in range(children)]
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
            stubs += [{'address': NOTIFY_REMOVE, 'argc': 2} for _ in range(children)]
    if word >= 0x10000 and (word & 0xffff) == 1:
        stubs.append({'address': DESTROY, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder', 'rsi': 'buf:item'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


# A compare-exchange retry needs another thread to change the word between the read and the exchange.
UNREACHABLE = {
    '0x00b69c2d': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}

CASES = [
    case('not_held_empty_list', held=(), word=0x0, children=1),
    case('held_last_removed', held=('other0', 'item'), word=0x0, children=2),
    case('held_first_swaps_last', held=('item', 'other0', 'other1'), word=0x0, children=1),
    case('held_middle_moves_last', held=('other0', 'item', 'other1'), word=0x0, children=0),
    case('branches_leaves_children', held=('item',), word=0x0, children=2, branches=(2, 1)),
    case('empty_branch_skipped', held=('item',), word=0x0, children=1, branches=(0, 1)),
    case('counted_decrements_only', held=('item',), word=0x10002, children=1),
    case('counted_to_zero_destroyed', held=('item',), word=0x10001, children=0),
    case('low_half_zero_wraps', held=('item',), word=0x10000, children=1),
    case('below_threshold_untouched', held=('item',), word=0xffff, children=0, branches=(1,)),
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
