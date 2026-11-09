#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic dual held member objects for bb_misc_dual_held_member_object_release (0x00be6e90).

usage: dual_held_member_object_release_cases.py OUT_DIR

Each of the two held items is absent, uncounted, counted and kept alive, counted and destroyed, or
counted with a low half that wraps from zero. The member destructions come in call order: the member at
0x48, the second held item (at 0x38) when destroyed, the member at 0x30, the first held item (at 0x20)
when destroyed, then the member at 0x10.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00be6e90'
DESTROY_MEMBER = '0x00836840'
DESTROY_ITEM = '0x00400300'
OBJECT_BYTES = 0x58
ITEM_BYTES = 0x10
MASK32 = (1 << 32) - 1

# The compare-exchange retry in each held item's count needs another thread to change the word.
UNREACHABLE = {
    '0x00be6eed': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
    '0x00be6f3d': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def item_bytes(word):
    """A held item: its word at +8, the rest zero (the vtable is written by the memory entries)."""
    return '00' * 8 + u32(word) + '00' * (ITEM_BYTES - 12)


def destroys_item(word):
    return word is not None and word >= 0x10000 and (word & 0xffff) == 1


def case(cid, first=None, second=None):
    """first and second: the count word of the held item at 0x20 and at 0x38, or None for no item."""
    stubs = [{'address': DESTROY_MEMBER, 'argc': 1}]
    if destroys_item(second):
        stubs.append({'address': DESTROY_ITEM, 'argc': 1})
    stubs.append({'address': DESTROY_MEMBER, 'argc': 1})
    if destroys_item(first):
        stubs.append({'address': DESTROY_ITEM, 'argc': 1})
    stubs.append({'address': DESTROY_MEMBER, 'argc': 1})
    memory = []
    buffers = {'object': {'size': OBJECT_BYTES, 'bytes': 'a5' * OBJECT_BYTES},
               'ivt': {'size': 0x40, 'bytes': '00' * 0x40}}
    for name, slot, word in (('first', 0x20, first), ('second', 0x38, second)):
        if word is None:
            memory.append({'addr': f'buf:object+{slot:#x}', 'bytes': '00' * 8})
        else:
            memory.append({'addr': f'buf:object+{slot:#x}', 'pointer': name})
            memory.append({'addr': f'buf:{name}', 'pointer': 'ivt'})
            buffers[name] = {'size': ITEM_BYTES, 'bytes': item_bytes(word)}
    memory.append({'addr': 'buf:ivt+0x20', 'guest': DESTROY_ITEM})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:object'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('no_held_items'),
    case('first_uncounted', first=0x0),
    case('second_uncounted', second=0x0),
    case('first_counted_kept', first=0x10002),
    case('second_counted_kept', second=0x10002),
    case('second_destroyed_first_absent', second=0x10001),
    case('first_destroyed_second_absent', first=0x10001),
    case('both_destroyed', first=0x10001, second=0x10001),
    case('low_half_wraps_both', first=0x10000, second=0x10000),
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
