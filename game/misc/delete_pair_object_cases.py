#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic dual member objects for misc_delete_pair_object at 0x00d47d30, for tools/verify.py run.

usage: delete_pair_object_cases.py OUT_DIR

The deleter stores the derived vtable (guest 0x0567e460), releases the item at 0x90 as the destructor does (the
item's destroy slot at vtable offset 0x20 runs when its count reaches zero), clears the word at 0x90, destroys the
second member at 0x88 through 0x00836840, runs the base destructor at 0x00d4f900, and then hands the object to the
thread's releaser: the release slot (vtable offset 0x18) gets the releaser, the object and a size. The size is the
high half of the word at 0x08 unless that half is the 0xffff marker, which means 0x98. The releaser's result is
returned. The compare-exchange retry of the decrement is declared unreachable.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00d47d30'
DESTROY_MEMBER = '0x00836840'
BASE_DESTROY = '0x00d4f900'
ITEM_DESTROY = '0x00400300'
RELEASE_TARGET = '0x00400020'
RELEASE_RESULT = '0x123456789abcdef0'
THREAD_OFFSET_SLOT = '0x057e40f8'
OBJECT_SIZE = 0x98
ITEM_SIZE = 0x40
TLS_BELOW = 0x20
GARBAGE = {'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff', 'rcx': '0x8080808080808080',
           'r8': '0x0123456789abcdef', 'r9': '0x7f7f7f7f7f7f7f7f'}

# The retry of the compare-exchange in the decrement only happens when another thread changes the word first.
UNREACHABLE = {
    '0x00d47d8d': ('taken', 'compare-exchange retry: no other thread can change the value'),
}


def case(cid, held_word=None, size_word=0xffff0000, registers=None):
    """One delete. held_word is the item's refcount word, or None for no item; size_word is the object's word at 0x08."""
    obj = bytearray(b'\xa5' * OBJECT_SIZE)
    struct.pack_into('<I', obj, 0x08, size_word & 0xffffffff)
    buffers = {'object': {'size': OBJECT_SIZE, 'bytes': obj.hex()},
               'tls': {'size': TLS_BELOW + 8, 'bytes': '00' * (TLS_BELOW + 8)},
               'block': {'size': 0x60, 'bytes': '00' * 0x60},
               'releaser': {'size': 8, 'bytes': '00' * 8},
               'release_vt': {'size': 0x20, 'bytes': '00' * 0x20}}
    memory = [
        {'addr': 'buf:tls+0', 'pointer': 'block'},
        {'addr': f'buf:tls+{TLS_BELOW}', 'pointer': f'tls+{TLS_BELOW}'},
        {'addr': THREAD_OFFSET_SLOT, 'bytes': struct.pack('<q', -TLS_BELOW).hex()},
        {'addr': 'buf:block+0x58', 'pointer': 'releaser'},
        {'addr': 'buf:releaser', 'pointer': 'release_vt'},
        {'addr': 'buf:release_vt+0x18', 'guest': RELEASE_TARGET},
    ]
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
    args = {'rdi': 'buf:object'}
    args.update(GARBAGE if registers is None else registers)
    stubs = [{'address': DESTROY_MEMBER, 'argc': 1, 'argi': [0]},
             {'address': BASE_DESTROY, 'argc': 1, 'argi': [0]},
             {'address': RELEASE_TARGET, 'argc': 3, 'argi': [0, 1, 2], 'ret': RELEASE_RESULT}]
    if held_word is not None and held_word >= 0x10000 and (held_word & 0xffff) == 1:
        stubs.insert(0, {'address': ITEM_DESTROY, 'argc': 1, 'argi': [0]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs,
            'gs': f'buf:tls+{TLS_BELOW}'}


CASES = [
    case('no_held_default_size'),
    case('explicit_size_released', size_word=0x00480000),
    case('uncounted_item_kept', held_word=0x0001),
    case('counted_item_kept_alive', held_word=0x10002),
    case('counted_item_destroyed', held_word=0x10001),
    case('counted_low_half_wraps_kept', held_word=0x10000, size_word=0x00200000),
    case('zero_registers_default_size', held_word=0x10001, registers={k: '0x0' for k in GARBAGE}),
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
