#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted-item lists for bb_misc_remove_counted_item (0x00cc8090).

usage: misc_remove_counted_item_cases.py OUT_DIR

Removal of an item found first, last, or not at all; a null item that matches a null slot; counted
items whose count is kept, reaches zero on the search's release, or reaches zero when the removed slot
is released; and lists with and without a pass-on target. The item's destroy slot goes through a real
entry at 0x00400020, and the pass-on target (0x00cd64f0) is stubbed.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00cc8090'
PASS_ON = '0x00cd64f0'
DESTROY = '0x00400020'
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, slots, item=None, item_word=0x0, target=False, capacity=8):
    """slots lists the array: 'item' is the item being removed, 'other' a different item, None a null
    slot. item=None passes a null item. item_word is the word of the item (and of the other items)."""
    count = len(slots)
    memory = [{'addr': 'buf:list+0xa8', 'pointer': 'items'},
              {'addr': 'buf:list+0xb0', 'bytes': u32(count)},
              {'addr': 'buf:list+0xb4', 'bytes': u32(capacity)}]
    if target:
        memory.append({'addr': 'buf:list+0x48', 'pointer': 'target'})
    for index, slot in enumerate(slots):
        if slot == 'item':
            memory.append({'addr': f'buf:items+{8 * index:#x}', 'pointer': 'item'})
        elif slot == 'other':
            memory.append({'addr': f'buf:items+{8 * index:#x}', 'pointer': 'other'})
    for name in ('item', 'other'):
        memory += [{'addr': f'buf:{name}+0x0', 'pointer': 'vt'},
                   {'addr': f'buf:{name}+0x8', 'bytes': u32(item_word)}]
    memory.append({'addr': 'buf:vt+0x20', 'guest': DESTROY})
    stubs = []
    if target and item is not None and 'item' in slots:
        stubs.append({'address': PASS_ON, 'argc': 2})
    if item is not None and item_word >= 0x10000 and (item_word & 0xffff) <= 1:
        stubs.append({'address': DESTROY, 'argc': 1})
    buffers = {'list': {'size': 0xb8, 'bytes': '00' * 0xb8},
               'items': {'size': 8 * (capacity + 1), 'bytes': '00' * (8 * (capacity + 1))},
               'target': {'size': 0x10, 'bytes': '00' * 0x10},
               'item': {'size': 0x20, 'bytes': '00' * 0x20},
               'other': {'size': 0x20, 'bytes': '00' * 0x20},
               'vt': {'size': 0x40, 'bytes': '00' * 0x40}}
    args = {'rdi': 'buf:list', 'rsi': 'buf:item' if item is not None else 0}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


# The compare-exchange retry loops only repeat when another thread changes the word between the
# read and the exchange, which a single-threaded run cannot do.
UNREACHABLE = {
    '0x00cc80d9': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
    '0x00cc814d': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
    '0x00cc81bf': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}

CASES = [
    case('null_item_absent_keeps_list', slots=['other'], item=None, item_word=0x0),
    case('null_item_found_null_slot_moves_last', slots=['other', None, 'other'], item=None),
    case('counted_absent_retained_then_released', slots=['other'], item='none', item_word=0x10005),
    case('uncounted_first_with_target_moves_last', slots=['item', 'other', 'other'], item='item',
         item_word=0x0, target=True),
    case('uncounted_last_no_move', slots=['other', 'item'], item='item', item_word=0x0),
    case('counted_kept_with_target', slots=['item', 'other'], item='item', item_word=0x10005,
         target=True),
    case('counted_last_reference_destroyed_on_removal', slots=['other', 'item'], item='item',
         item_word=0x10001),
    case('counted_zero_destroyed_on_search_release', slots=['item', 'other'], item='item',
         item_word=0x10000, target=True),
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
