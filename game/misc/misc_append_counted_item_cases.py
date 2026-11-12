#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted-item lists for bb_misc_append_counted_item (0x00cc7f50).

usage: misc_append_counted_item_cases.py OUT_DIR

Items that are counted or not, a null item, lists with room and full lists that grow, a release that
leaves no references (the item is destroyed), and lists with and without a pass-on target.
The grow call (0x00819100), the item's destroy slot (through a real entry at 0x00400020) and the
target (0x00cd6290) are stubbed.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00cc7f50'
GROW = '0x00819100'
DESTROY = '0x00400020'
PASS_ON = '0x00cd6290'
MASK32 = (1 << 32) - 1
CAPACITY_FLAGS = 0xc0000000


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def u64(v):
    return struct.pack('<Q', v).hex()


def case(cid, item=True, word=0x10001, count=1, capacity=4, target=False, flag_bits=0):
    """A list holding count items (pointers to a fixed dummy item). A full list (count == capacity)
    makes the append grow; the grow call moves the array to a new buffer."""
    full = count == (capacity & 0x3fffffff)
    memory = [{'addr': 'buf:list+0xa8', 'pointer': 'items'},
              {'addr': 'buf:list+0xb0', 'bytes': u32(count)},
              {'addr': 'buf:list+0xb4', 'bytes': u32(capacity | flag_bits)}]
    if target:
        memory.append({'addr': 'buf:list+0x48', 'pointer': 'target'})
    if item:
        memory += [{'addr': 'buf:item+0x0', 'pointer': 'vt'},
                   {'addr': 'buf:item+0x8', 'bytes': u32(word)}]
    memory.append({'addr': 'buf:vt+0x20', 'guest': DESTROY})
    stubs = []
    if full:
        stubs.append({'address': GROW, 'argc': 3,
                      'writes': [{'arg': 1, 'offset': 0, 'pointer': 'grown'}]})
    if item and word >= 0x10000 and (word & 0xffff) == 0xffff:
        stubs.append({'address': DESTROY, 'argc': 1})
    if target:
        stubs.append({'address': PASS_ON, 'argc': 2, 'ret': 0x1234})
    buffers = {'list': {'size': 0xb8, 'bytes': '00' * 0xb8},
               'items': {'size': 8 * (capacity + 1), 'bytes': '00' * (8 * (capacity + 1))},
               'grown': {'size': 8 * (capacity + 1), 'bytes': '00' * (8 * (capacity + 1))},
               'target': {'size': 0x10, 'bytes': '00' * 0x10},
               'item': {'size': 0x20, 'bytes': '00' * 0x20},
               'vt': {'size': 0x40, 'bytes': '00' * 0x40}}
    if not item:
        memory = [m for m in memory if not m.get('addr', '').startswith('buf:item')]
    args = {'rdi': 'buf:list', 'rsi': 'buf:item' if item else 0}
    returns = 'i64' if target else 'void'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns, 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


# The compare-exchange retry loops only repeat when another thread changes the word between the
# read and the exchange, which a single-threaded run cannot do.
UNREACHABLE = {
    '0x00cc7f99': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
    '0x00cc8009': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
    '0x00cc803d': ('taken', 'compare-exchange retry needs another thread to change the word between read and exchange'),
}

CASES = [
    case('null_item_no_target', item=False, count=1, capacity=4, target=False),
    case('null_item_full_grows_with_target', item=False, count=4, capacity=4, target=True),
    case('uncounted_item_no_target', word=0x0, count=1, capacity=4, target=False),
    case('uncounted_low_word_with_target', word=0xffff, count=2, capacity=4, target=True),
    case('counted_item_kept_no_target', word=0x10005, count=1, capacity=4, target=False),
    case('counted_item_full_grows_with_target', word=0x10005, count=4, capacity=4, target=True),
    case('counted_last_reference_destroyed', word=0x1ffff, count=0, capacity=4, target=False),
    case('counted_flag_bits_no_grow', word=0x20002, count=2, capacity=4, target=True,
         flag_bits=CAPACITY_FLAGS),
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
