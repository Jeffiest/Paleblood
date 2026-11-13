#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic dual member objects for misc_destroy_pair_object at 0x00d47e00, for tools/verify.py run.

usage: destroy_pair_object_cases.py OUT_DIR

The destructor stores the derived vtable (guest 0x0567e460), then releases the item at 0x90 when it is set and
counted (its word at 0x08 has a high half of at least one): the low half drops by one, and when that reaches zero
the item's destroy slot (vtable offset 0x20) is called. It clears the word at 0x90, destroys the second member at
0x88 through 0x00836840, and tail-jumps to the base destructor at 0x00d4f900, whose result is the function's.
The destroy slot and the base destructor are stubbed; the decrement's compare-exchange retry is declared unreachable.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00d47e00'
DESTROY_MEMBER = '0x00836840'
BASE_DESTROY = '0x00d4f900'
ITEM_DESTROY = '0x00400300'
OBJECT_SIZE = 0x98
ITEM_SIZE = 0x40
BASE_RESULT = '0x5151'
GARBAGE = {'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff', 'rcx': '0x8080808080808080',
           'r8': '0x0123456789abcdef', 'r9': '0x7f7f7f7f7f7f7f7f'}

# The retry of the compare-exchange in the decrement only happens when another thread changes the word first.
UNREACHABLE = {
    '0x00d47e5d': ('taken', 'compare-exchange retry: no other thread can change the value'),
}


def case(cid, held_word=None, registers=None):
    """One destruction. held_word is the item's refcount word, or None when the object holds no item."""
    obj = bytearray(b'\xa5' * OBJECT_SIZE)
    buffers = {}
    memory = []
    if held_word is None:
        memory.append({'addr': 'buf:object+0x90', 'bytes': '00' * 8})
    else:
        item = bytearray(b'\xb2' * ITEM_SIZE)
        struct.pack_into('<I', item, 0x8, held_word & 0xffffffff)
        buffers['held'] = {'size': ITEM_SIZE, 'bytes': item.hex()}
        buffers['held_vt'] = {'size': 0x40, 'bytes': '00' * 0x40}
        memory += [{'addr': 'buf:object+0x90', 'pointer': 'held'},
                   {'addr': 'buf:held', 'pointer': 'held_vt'},
                   {'addr': 'buf:held_vt+0x20', 'guest': ITEM_DESTROY}]
    buffers['object'] = {'size': OBJECT_SIZE, 'bytes': obj.hex()}
    args = {'rdi': 'buf:object'}
    args.update(GARBAGE if registers is None else registers)
    stubs = [{'address': DESTROY_MEMBER, 'argc': 1, 'argi': [0]},
             {'address': BASE_DESTROY, 'argc': 1, 'argi': [0], 'ret': BASE_RESULT}]
    if held_word is not None and held_word >= 0x10000 and (held_word & 0xffff) == 1:
        stubs.insert(0, {'address': ITEM_DESTROY, 'argc': 1, 'argi': [0]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('no_held_item'),
    case('uncounted_item_kept', held_word=0x0001),
    case('below_threshold_word_kept', held_word=0xffff),
    case('counted_item_kept_alive', held_word=0x10002),
    case('counted_item_destroyed', held_word=0x10001),
    case('counted_low_half_wraps_kept', held_word=0x10000),
    case('zero_registers', held_word=0x10001, registers={k: '0x0' for k in GARBAGE}),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
