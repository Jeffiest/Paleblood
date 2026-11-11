#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_replace_holder_and_hand_off (0x00c24320), for tools/verify.py run.

usage: replace_holder_and_hand_off_cases.py OUT_DIR

An object (0xb8 bytes) whose holder at +0xb0 is replaced by a new reference item. Counts: the new item
counted or not (incremented when counted), the old item absent, counted with a last reference (destroyed),
counted with two references, counted with a zero low half (wraps), or not counted; the same item as old
and new; and the arrays built from the item's branches, owned or not. The destroy slot (0x20) of an item
is a stub, the fill (0x00c24e60), the hand-off (0x00cbe140) are stubs, and the allocator frees are stubs.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00c24320'
FILL = '0x00c24e60'          # the array fill: stubbed (a real game entry)
HAND_OFF = '0x00cbe140'      # the hand-off to the object: stubbed (a real game entry)
DESTROY = '0x004000a0'       # a reference item's destroy slot at 0x20: stubbed (a real game entry)
FREE = '0x00400020'          # the allocator's sized free slot at 0x28: stubbed (a real game entry)
ALLOCATOR = '0x058018b0'
UNOWNED = 0x80000000
HOLDER_OFFSET = 0xb0
OBJECT_SIZE = 0xb8
FREE_SLOT = 0x28
DESTROY_SLOT = 0x20

UNREACHABLE = {
    '0x00c24347': ('taken', 'null new item: the branches field at +0x20 of the null item is read and faults'),
    '0x00c24379': ('taken', 'compare-exchange retry: no other thread can change the count word'),
    '0x00c243bd': ('taken', 'compare-exchange retry: no other thread can change the count word'),
}


def u32(value):
    """A 32-bit little-endian word as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def refitem(name, count):
    """A reference item buffer with its vtable (destroy at 0x20), its count word and its branches."""
    buffers = {name: {'size': 0x40}, name + '_vt': {'size': 0x28}}
    memory = [{'addr': f'buf:{name}+0', 'pointer': name + '_vt'},
              {'addr': f'buf:{name}+8', 'bytes': u32(count)},
              {'addr': f'buf:{name}+32', 'pointer': 'branches'},
              {'addr': f'buf:{name}_vt+{DESTROY_SLOT:#x}', 'guest': DESTROY}]
    return buffers, memory


def fill_writes(arg, array):
    """The writes the fill makes into the array record at argument arg; array is (storage, length, capacity) or None."""
    if array is None:
        return [{'arg': arg, 'offset': 0, 'bytes': '00' * 8, 'size': 8},
                {'arg': arg, 'offset': 8, 'bytes': u32(0), 'size': 4},
                {'arg': arg, 'offset': 12, 'bytes': u32(UNOWNED), 'size': 4}]
    storage, length, capacity = array
    return [{'arg': arg, 'offset': 0, 'pointer': storage, 'size': 8},
            {'arg': arg, 'offset': 8, 'bytes': u32(length), 'size': 4},
            {'arg': arg, 'offset': 12, 'bytes': u32(capacity), 'size': 4}]


def case(cid, new=0x5, old=None, same=False, first=None, second=None):
    """new: the new item's count word; old: the old item's count word, or None for no old item;
    same: the old item is the new item; first and second: owned arrays (storage, length, capacity)."""
    buffers = {'obj': {'size': OBJECT_SIZE, 'bytes': 'a5' * HOLDER_OFFSET + '00' * (OBJECT_SIZE - HOLDER_OFFSET)},
               'branches': {'size': 0x10}, 'a_data': {'size': 0x100}, 'b_data': {'size': 0x40},
               'alloc_vt': {'size': 0x30}}
    memory = [{'addr': ALLOCATOR, 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': FREE}]
    new_buffers, new_memory = refitem('new', new)
    buffers.update(new_buffers)
    memory += new_memory
    destroyed = False
    if same:
        memory.append({'addr': f'buf:obj+{HOLDER_OFFSET}', 'pointer': 'new'})
        destroyed = (new & 0xffff) == 0 and new >= 0x10000
    elif old is not None:
        old_buffers, old_memory = refitem('old', old)
        buffers.update(old_buffers)
        memory += old_memory
        memory.append({'addr': f'buf:obj+{HOLDER_OFFSET}', 'pointer': 'old'})
        destroyed = old >= 0x10000 and (old & 0xffff) == 1
    else:
        memory.append({'addr': f'buf:obj+{HOLDER_OFFSET}', 'bytes': '00' * 8})
    writes = fill_writes(2, first) + fill_writes(3, second)
    frees = [array for array in (second, first) if array is not None and array[2] >= 0]
    stubs = [{'address': FILL, 'argc': 4, 'argi': [0, 1], 'writes': writes},
             {'address': HAND_OFF, 'argc': 3, 'argi': [0]}]
    stubs += [{'address': FREE, 'argc': 3} for _ in frees]
    if destroyed:
        stubs.insert(0, {'address': DESTROY, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:obj', 'rsi': 'buf:new'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('no_old_new_uncounted', new=0x5),
    case('no_old_new_counted', new=0x10002),
    case('old_last_reference_destroyed', new=0x10002, old=0x10001),
    case('old_two_references_kept', new=0x10000, old=0x10002),
    case('old_zero_low_wraps', new=0x5, old=0x10000),
    case('old_not_counted_skipped', new=0x10001, old=0x7),
    case('same_item_one_reference', new=0x10001, same=True),
    case('same_item_zero_low_destroyed', new=0x10000, same=True),
    case('both_arrays_owned', new=0x10001, old=0x10001, first=('a_data', 2, 4), second=('b_data', 1, 3)),
    case('first_array_owned_only', new=0x5, first=('a_data', 1, 2)),
    case('second_negative_not_owned', new=0x5, second=('b_data', 1, -5)),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
