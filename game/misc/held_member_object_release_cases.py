#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic held member objects for bb_misc_held_member_object_release (0x00be4440).

usage: held_member_object_release_cases.py OUT_DIR

No held item, an uncounted item, a counted item kept alive, a counted item dropped to zero and
destroyed, and a counted item whose low half wraps from zero. The four member destructions come
first, in order from the last member to the first, then the held item (when destroyed), then the tail.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00be4440'
DESTROY_MEMBER = '0x00836840'
DESTROY_ITEM = '0x00400300'
OBJECT_BYTES = 0x78
MASK32 = (1 << 32) - 1

# The compare-exchange retry in the held item's count needs another thread to change the word.
UNREACHABLE = {
    '0x00be44bd': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, held=False, word=0x0):
    """held: whether an item is held; word is its count word (low half references, high half flag)."""
    destroy_item = held and word >= 0x10000 and (word & 0xffff) == 1
    stubs = [{'address': DESTROY_MEMBER, 'argc': 1} for _ in range(4)]
    if destroy_item:
        stubs.append({'address': DESTROY_ITEM, 'argc': 1})
    stubs.append({'address': DESTROY_MEMBER, 'argc': 1})
    memory = [{'addr': 'buf:object+0x18', 'pointer': 'item'} if held
              else {'addr': 'buf:object+0x18', 'bytes': '00' * 8},
              {'addr': 'buf:item+0x8', 'bytes': u32(word)},
              {'addr': 'buf:ivt+0x20', 'guest': DESTROY_ITEM},
              {'addr': 'buf:item', 'pointer': 'ivt'}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:object'},
            'buffers': {'object': {'size': OBJECT_BYTES, 'bytes': 'a5' * OBJECT_BYTES},
                        'item': {'size': 0x10, 'bytes': '00' * 0x10},
                        'ivt': {'size': 0x40, 'bytes': '00' * 0x40}},
            'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('no_held_item'),
    case('uncounted_item_kept', held=True, word=0x0),
    case('counted_item_kept_alive', held=True, word=0x10002),
    case('counted_item_destroyed', held=True, word=0x10001),
    case('counted_low_half_wraps', held=True, word=0x10000),
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
