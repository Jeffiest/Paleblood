#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic held member objects built by bb_misc_held_member_object_init (0x00be42e0).

usage: held_member_object_init_cases.py OUT_DIR

No held item, an uncounted item, a counted item, a counted item whose low half wraps from 0xffff,
and a counted item whose flag bits and high word must survive the increment. The object starts as
garbage, so every field the constructor sets, and the bytes it must leave alone, are visible.
The member calls are stubbed in call order: the tail member first, then four fills, then the named
tail initialisation.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00be42e0'
INIT_TAIL = '0x00836630'
FILL = '0x00836640'
INIT_NAMED = '0x00836890'
OBJECT_BYTES = 0x78
MASK32 = (1 << 32) - 1

# The compare-exchange retry in the held item's count needs another thread to change the word.
UNREACHABLE = {
    '0x00be4349': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, held=False, word=0x0):
    """held: whether an item is passed; word is its count word (low half references, high half flag)."""
    stubs = [{'address': INIT_TAIL, 'argc': 1}]
    stubs += [{'address': FILL, 'argc': 2} for _ in range(4)]
    stubs.append({'address': INIT_NAMED, 'argc': 2})
    memory = [{'addr': 'buf:item+0x8', 'bytes': u32(word)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:object', 'rsi': 'buf:item' if held else '0x0'},
            'buffers': {'object': {'size': OBJECT_BYTES, 'bytes': 'a5' * OBJECT_BYTES},
                        'item': {'size': 0x10, 'bytes': '00' * 0x10}},
            'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('no_held_item'),
    case('uncounted_item', held=True, word=0x0),
    case('counted_item', held=True, word=0x10001),
    case('counted_at_threshold_is_counted', held=True, word=0x10000),
    case('counted_low_half_wraps', held=True, word=0x1ffff),
    case('counted_flag_and_high_word_survive', held=True, word=0xabcd0005),
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
