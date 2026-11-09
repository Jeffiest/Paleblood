#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic reference holders for bb_misc_ref_holder_detach (0x00b69d40).

usage: ref_holder_detach_cases.py OUT_DIR

Attached lists with the item absent, last, first and in the middle; holders with no and two children
told about the detach; items whose counted word is below the threshold, counted above one, counted
down to zero (destroyed), and counted with a low half of zero that wraps.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00b69d40'
NOTIFY_REMOVE = '0x00400190'
DESTROY = '0x004001a0'
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, attached=('other0',), word=0x0, children=0):
    """attached: the attached list in order, with 'item' for the detached item and 'other...' for
    the rest. The item's count word is word; children each get one remove notification."""
    memory = [{'addr': 'buf:holder+0x20', 'pointer': 'attached'},
              {'addr': 'buf:holder+0x28', 'bytes': u32(len(attached))},
              {'addr': 'buf:holder+0x2c', 'bytes': u32(4)},
              {'addr': 'buf:holder+0x40', 'pointer': 'children'},
              {'addr': 'buf:holder+0x48', 'bytes': u32(children)},
              {'addr': 'buf:item+0x8', 'bytes': u32(word)},
              {'addr': 'buf:ivt+0x20', 'guest': DESTROY},
              {'addr': 'buf:item', 'pointer': 'ivt'}]
    names = sorted({name for name in attached if name != 'item'})
    for name in names:
        memory.append({'addr': f'buf:{name}', 'bytes': '00' * 0x10})
    for index, name in enumerate(attached):
        memory.append({'addr': f'buf:attached+{8 * index:#x}', 'pointer': name})
    for index in range(children):
        memory += [{'addr': f'buf:children+{8 * index:#x}', 'pointer': f'child{index}'},
                   {'addr': f'buf:child{index}', 'pointer': 'cvt'}]
    memory.append({'addr': 'buf:cvt+0x28', 'guest': NOTIFY_REMOVE})
    found = 'item' in attached
    stubs = []
    if found:
        for _ in range(children):
            stubs.append({'address': NOTIFY_REMOVE, 'argc': 2})
        if word >= 0x10000 and (word & 0xffff) == 1:
            stubs.append({'address': DESTROY, 'argc': 1})
    buffers = {'holder': {'size': 0x60, 'bytes': 'a5' * 0x60},
               'attached': {'size': 0x40, 'bytes': '5a' * 0x40},
               'item': {'size': 0x10, 'bytes': '00' * 0x10},
               'ivt': {'size': 0x40, 'bytes': '00' * 0x40},
               'cvt': {'size': 0x40, 'bytes': '00' * 0x40},
               'children': {'size': max(8 * children, 8), 'bytes': '00' * max(8 * children, 8)}}
    for name in names:
        buffers[name] = {'size': 0x10, 'bytes': '00' * 0x10}
    for index in range(children):
        buffers[f'child{index}'] = {'size': 8, 'bytes': '00' * 8}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder', 'rsi': 'buf:item'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


# The removal index is found below the count, so its sign test never takes its branch; a compare-exchange
# retry needs another thread to change the word between the read and the exchange.
UNREACHABLE = {
    '0x00b69d7d': ('taken', 'the index of a found item is never negative'),
    '0x00b69ded': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}

CASES = [
    case('item_not_attached', attached=('other0',), word=0x10001, children=2),
    case('item_last_no_count', attached=('other0', 'item'), word=0x0, children=2),
    case('item_first_swaps_last', attached=('item', 'other0', 'other1'), word=0x0, children=1),
    case('item_middle_moves_last', attached=('other0', 'item', 'other1'), word=0x0, children=0),
    case('counted_decrements_only', attached=('item',), word=0x10002, children=1),
    case('counted_to_zero_destroyed', attached=('item',), word=0x10001, children=1),
    case('low_half_zero_wraps', attached=('item',), word=0x10000, children=0),
    case('below_threshold_untouched', attached=('item',), word=0xffff, children=2),
    case('empty_attached_list_not_found', attached=(), word=0x10001, children=1),
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
