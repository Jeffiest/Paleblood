#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic linked objects for bb_misc_linked_object_release (0x00bdd5a0).

usage: linked_object_release_cases.py OUT_DIR

No held item, a counted item dropped but kept alive, a counted item dropped to zero and destroyed, an
uncounted item, and a counted item whose low half wraps from zero.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00bdd5a0'
DESTROY_MEMBER = '0x00836840'
DESTROY_ITEM = '0x00400300'
VTABLE = '0x0566d970'
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, held=None, word=0x0):
    """held: None for no item, otherwise the counted word of the held item is word."""
    stubs = [{'address': DESTROY_MEMBER, 'argc': 1}, {'address': DESTROY_MEMBER, 'argc': 1}]
    memory = [{'addr': 'buf:object+0x18', 'pointer': 'item'} if held else {'addr': 'buf:object+0x18', 'bytes': '00' * 8},
              {'addr': 'buf:item+0x8', 'bytes': u32(word)},
              {'addr': 'buf:ivt+0x20', 'guest': DESTROY_ITEM},
              {'addr': 'buf:item', 'pointer': 'ivt'}]
    if held and word >= 0x10000 and (word & 0xffff) == 1:
        stubs.append({'address': DESTROY_ITEM, 'argc': 1})
    stubs.append({'address': DESTROY_MEMBER, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:object'},
            'buffers': {'object': {'size': 0x48, 'bytes': 'a5' * 0x48},
                        'item': {'size': 0x10, 'bytes': '00' * 0x10},
                        'ivt': {'size': 0x40, 'bytes': '00' * 0x40}},
            'memory': memory, 'imports': [], 'stubs': stubs}


# A compare-exchange retry needs another thread to change the word between the read and the exchange.
UNREACHABLE = {
    '0x00bdd5fd': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}

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
