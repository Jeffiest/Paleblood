#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic linked objects for bb_misc_linked_object_init (0x00bdd420).

usage: linked_object_init_cases.py OUT_DIR

No held item, an uncounted item, a counted item whose count goes up, and a counted item whose low
half wraps from 0xffff to 0. The member initialisers are scripted as stubs.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00bdd420'
INIT_TAIL = '0x00836630'
FILL = '0x00836640'
INIT_NAMED = '0x00836890'
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def case(cid, item=None, word=0x0):
    """item: None for no held item, otherwise a reference item whose count word is word."""
    stubs = [{'address': INIT_TAIL, 'argc': 1},
             {'address': FILL, 'argc': 2},
             {'address': FILL, 'argc': 2},
             {'address': INIT_NAMED, 'argc': 2}]
    memory = [{'addr': 'buf:item+0x8', 'bytes': u32(word)},
              {'addr': 'buf:item', 'pointer': 'ivt'}]
    args = {'rdi': 'buf:object', 'rsi': 'buf:item' if item else '0x0'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': {'object': {'size': 0x48, 'bytes': 'a5' * 0x48},
                        'item': {'size': 0x10, 'bytes': '00' * 0x10},
                        'ivt': {'size': 0x40, 'bytes': '00' * 0x40}},
            'memory': memory, 'imports': [], 'stubs': stubs}


# A compare-exchange retry needs another thread to change the word between the read and the exchange.
UNREACHABLE = {
    '0x00bdd489': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}

CASES = [
    case('no_held_item'),
    case('uncounted_item', item=True, word=0x0),
    case('counted_item_increments', item=True, word=0x10001),
    case('counted_low_half_wraps', item=True, word=0x1ffff),
    case('below_threshold_untouched', item=True, word=0xffff),
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
