#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic two-base objects for bb_misc_delete_dual_base_secondary (0x00cd41c0).

usage: misc_delete_dual_base_secondary_cases.py OUT_DIR

The routine is entered with the secondary base pointer, 0x10 into the object. The cases match the
deleting release through the primary base: no held item, an uncounted item, counted items kept,
destroyed, and a counted item whose low half wraps. The thread's block record is found through the thread
pointer (gs), and the releaser's release slot is a stub that returns a fixed value.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00cd41c0'
DESTROY_ITEM = '0x00400300'
RELEASE_TARGET = '0x00400020'
RELEASE_RESULT = '0x123456789abcdef0'
THREAD_OFFSET_SLOT = '0x057e40f8'
TLS_BELOW = 0x20
SECONDARY = 0x10
OBJECT_SIZE = 0x28
ITEM_SIZE = 0x10
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, held=False, size_word=0x0, item_word=0x0):
    """held: whether the object holds an item; size_word: the object's word at 0x08; item_word: the item's."""
    stubs = []
    if held and item_word >= 0x10000 and (item_word & 0xffff) == 1:
        stubs.append({'address': DESTROY_ITEM, 'argc': 1})
    stubs.append({'address': RELEASE_TARGET, 'argc': 3, 'ret': RELEASE_RESULT})
    memory = [
        {'addr': 'buf:object+0x20', 'pointer': 'item'} if held else {'addr': 'buf:object+0x20', 'bytes': '00' * 8},
        {'addr': 'buf:object+0x8', 'bytes': u32(size_word)},
        {'addr': 'buf:item+0x8', 'bytes': u32(item_word)},
        {'addr': 'buf:item', 'pointer': 'ivt'},
        {'addr': 'buf:ivt+0x20', 'guest': DESTROY_ITEM},
        {'addr': 'buf:tls+0x0', 'pointer': 'block'},
        {'addr': 'buf:tls+0x20', 'pointer': f'tls+{TLS_BELOW}'},
        {'addr': THREAD_OFFSET_SLOT, 'bytes': struct.pack('<q', -TLS_BELOW).hex()},
        {'addr': 'buf:block+0x58', 'pointer': 'releaser'},
        {'addr': 'buf:releaser', 'pointer': 'release_vt'},
        {'addr': 'buf:release_vt+0x18', 'guest': RELEASE_TARGET},
    ]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': f'buf:object+{SECONDARY:#x}'},
            'buffers': {'object': {'size': OBJECT_SIZE, 'bytes': 'a5' * OBJECT_SIZE},
                        'item': {'size': ITEM_SIZE, 'bytes': '00' * ITEM_SIZE},
                        'ivt': {'size': 0x40, 'bytes': '00' * 0x40},
                        'tls': {'size': TLS_BELOW + 8, 'bytes': '00' * (TLS_BELOW + 8)},
                        'block': {'size': 0x60, 'bytes': '00' * 0x60},
                        'releaser': {'size': 8, 'bytes': '00' * 8},
                        'release_vt': {'size': 0x20, 'bytes': '00' * 0x20}},
            'gs': f'buf:tls+{TLS_BELOW}',
            'memory': memory, 'imports': [], 'stubs': stubs}


# A compare-exchange retry needs another thread to change the word between the read and the exchange.
UNREACHABLE = {
    '0x00cd421d': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}

CASES = [
    case('no_held_default_size', size_word=0xffff0001),
    case('no_held_explicit_size', size_word=0x00500000),
    case('uncounted_item_kept', held=True, size_word=0xffff0001, item_word=0x0),
    case('counted_item_kept', held=True, size_word=0xffff0001, item_word=0x10002),
    case('counted_item_destroyed', held=True, size_word=0xffff0001, item_word=0x10001),
    case('counted_low_half_wraps', held=True, size_word=0x00500000, item_word=0x10000),
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
