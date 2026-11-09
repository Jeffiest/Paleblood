#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic linked objects for bb_misc_linked_object_free (0x00bdd4e0).

usage: linked_object_free_cases.py OUT_DIR

No held item, an uncounted item, a counted item kept alive, a counted item dropped to zero and
destroyed, a counted item whose low half wraps from zero, and the block size from the count word's
high half (the default marker and an explicit size). The thread's block record is found through the
thread pointer (gs), and its releaser's release slot is a stub that returns a fixed value.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00bdd4e0'
DESTROY_MEMBER = '0x00836840'
DESTROY_ITEM = '0x00400300'
RELEASE_TARGET = '0x00400020'
RELEASE_RESULT = '0x123456789abcdef0'
THREAD_OFFSET_SLOT = '0x057e40f8'
VTABLE = '0x0566d970'
TLS_BELOW = 0x20
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, held=False, word=0x0, item_word=0x0):
    """held: whether the object holds an item; word: the object's count word; item_word: the item's."""
    stubs = [{'address': DESTROY_MEMBER, 'argc': 1}, {'address': DESTROY_MEMBER, 'argc': 1}]
    if held and item_word >= 0x10000 and (item_word & 0xffff) == 1:
        stubs.append({'address': DESTROY_ITEM, 'argc': 1})
    stubs.append({'address': DESTROY_MEMBER, 'argc': 1})
    stubs.append({'address': RELEASE_TARGET, 'argc': 3, 'ret': RELEASE_RESULT})
    memory = [
        {'addr': 'buf:object+0x18', 'pointer': 'item'} if held else {'addr': 'buf:object+0x18', 'bytes': '00' * 8},
        {'addr': 'buf:object+0x8', 'bytes': u32(word)},
        {'addr': 'buf:item+0x8', 'bytes': u32(item_word)},
        {'addr': 'buf:item', 'pointer': 'ivt'},
        {'addr': 'buf:ivt+0x20', 'guest': DESTROY_ITEM},
        {'addr': f'buf:tls+{0}', 'pointer': 'block'},
        {'addr': 'buf:tls+0x20', 'pointer': f'tls+{TLS_BELOW}'},
        {'addr': THREAD_OFFSET_SLOT, 'bytes': struct.pack('<q', -TLS_BELOW).hex()},
        {'addr': 'buf:block+0x58', 'pointer': 'releaser'},
        {'addr': 'buf:releaser', 'pointer': 'release_vt'},
        {'addr': 'buf:release_vt+0x18', 'guest': RELEASE_TARGET},
    ]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': 'buf:object'},
            'buffers': {'object': {'size': 0x48, 'bytes': 'a5' * 0x48},
                        'item': {'size': 0x10, 'bytes': '00' * 0x10},
                        'ivt': {'size': 0x40, 'bytes': '00' * 0x40},
                        'tls': {'size': TLS_BELOW + 8, 'bytes': '00' * (TLS_BELOW + 8)},
                        'block': {'size': 0x60, 'bytes': '00' * 0x60},
                        'releaser': {'size': 8, 'bytes': '00' * 8},
                        'release_vt': {'size': 0x20, 'bytes': '00' * 0x20}},
            'gs': f'buf:tls+{TLS_BELOW}',
            'memory': memory, 'imports': [], 'stubs': stubs}


# A compare-exchange retry needs another thread to change the word between the read and the exchange.
UNREACHABLE = {
    '0x00bdd53d': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}

CASES = [
    case('no_held_item'),
    case('default_block_size', word=0xffff0001),
    case('explicit_block_size', word=0x00400001),
    case('uncounted_item_kept', held=True, item_word=0x0),
    case('below_threshold_untouched', held=True, item_word=0xffff),
    case('counted_item_kept_alive', held=True, item_word=0x10002),
    case('counted_item_destroyed', held=True, item_word=0x10001),
    case('counted_low_half_wraps', held=True, item_word=0x10000),
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
