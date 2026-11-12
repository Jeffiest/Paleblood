#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_find_keyed_record (0x00418120), for tools/verify.py run.

usage: find_keyed_record_cases.py OUT_DIR

The table's block has a slot mask of 3 and eight slots of 0x20 bytes from +0x10: link (-2 empty, -1
end of chain), key at +8, flag at +0x10 and object at +0x18. A key's home slot is its hash masked
by the slot mask. A found slot gives its flag and object to the record, after releasing the record's
own object when it had not kept it and taking a reference to the slot's object when the flag is
clear. Keys 0x11, 0x21 and 0x31 share home slot 1; 0x12 has home slot 2.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00418120'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
ADD_REFERENCE = '0x0042e5c0'
RELEASE_REFERENCE = '0x0042e5d0'
CACHE_SIZE = 0x160
TABLE_OFFSET = 0x158
LEVEL_OFFSET = 0xe4
BLOCK_SIZE = 0x110
SLOTS = 8
SLOT_BASE = 0x10
SLOT_SIZE = 0x20
EMPTY = -2
END = -1
MASK = 3
KEY_A = 0x11     # home slot 1
KEY_B = 0x21     # home slot 1, not KEY_A
KEY_C = 0x31     # home slot 1, not KEY_A
KEY_OTHER = 0x12  # home slot 2

UNREACHABLE = {
    '0x004181b5': ('taken', 'a slot index in a chain is never negative: links are -1 or valid slots'),
    '0x004181c1': ('taken', 'the table block was tested non-null just before and nothing between changes it'),
}


def slot_bytes(key, link, flag):
    """One slot: link at 0, key at 8, flag at 0x10; the object at 0x18 is set by a pointer entry."""
    return (struct.pack('<q', link) + struct.pack('<I', key) + b'\x00' * 4
            + struct.pack('<I', flag) + b'\x00' * 4 + b'\x00' * 8)


def block_bytes(slots):
    """slots: index -> (key, link, flag). Unlisted slots are empty."""
    data = bytearray(BLOCK_SIZE)
    data[0:8] = struct.pack('<Q', 4)
    data[8:16] = struct.pack('<Q', MASK)
    for index in range(SLOTS):
        key, link, flag = slots.get(index, (0, EMPTY, 0))
        start = SLOT_BASE + index * SLOT_SIZE
        data[start:start + SLOT_SIZE] = slot_bytes(key, link, flag)
    return data.hex()


def case(cid, key, level, slots, table=True, record_kept=0, record_object=True, object_slots=(),
         addref=False, release=False):
    """One lookup. slots: index -> (key, link, flag). object_slots: slots whose object is objA.
    addref / release: whether the replacement reaches those calls (they are then stubbed)."""
    buffers = {'cache': {'size': CACHE_SIZE, 'bytes': '5a' * CACHE_SIZE},
               'block': {'size': BLOCK_SIZE, 'bytes': block_bytes(slots)},
               'record': {'size': 0x10, 'bytes': 'e0' * 0x10},
               'key': {'size': 4, 'bytes': struct.pack('<I', key).hex()},
               'objA': {'size': 0x20, 'bytes': '3b' * 0x20},
               'recobj': {'size': 0x20, 'bytes': '4c' * 0x20}}
    memory = [{'addr': 'buf:cache+' + str(LEVEL_OFFSET), 'bytes': struct.pack('<i', level).hex()}]
    if table:
        memory.append({'addr': 'buf:cache+' + str(TABLE_OFFSET), 'pointer': 'block'})
    else:
        memory.append({'addr': 'buf:cache+' + str(TABLE_OFFSET), 'bytes': '00' * 8})
    memory.append({'addr': 'buf:record+0', 'bytes': struct.pack('<I', record_kept).hex()})
    if record_object:
        memory.append({'addr': 'buf:record+8', 'pointer': 'recobj'})
    else:
        memory.append({'addr': 'buf:record+8', 'bytes': '00' * 8})
    for index in object_slots:
        memory.append({'addr': 'buf:block+' + str(SLOT_BASE + index * SLOT_SIZE + 0x18), 'pointer': 'objA'})
    stubs = []
    if level < 2:
        stubs.append({'address': LOCK, 'argc': 1, 'argi': [0]})
    if addref:
        stubs.append({'address': ADD_REFERENCE, 'argc': 1, 'argi': [0]})
    if release:
        stubs.append({'address': RELEASE_REFERENCE, 'argc': 1, 'argi': [0]})
    if level < 2:
        stubs.append({'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:cache', 'rsi': 'buf:record', 'rdx': 'buf:key'},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    # No table: nothing is looked up and the record is left alone.
    case('table_absent', key=KEY_A, level=5, slots={}, table=False, record_kept=0, record_object=True),
    # The home slot is empty.
    case('home_slot_empty', key=KEY_A, level=1, slots={}),
    # The home slot holds a key whose own home is another slot.
    case('home_slot_other_home', key=KEY_A, level=5, slots={1: (KEY_OTHER, END, 0)}),
    # The home slot holds the key, unflagged, with an object: a reference is taken and the record's
    # object is released.
    case('home_match_unflagged_with_object', key=KEY_A, level=1, slots={1: (KEY_A, END, 0)},
         object_slots=(1,), record_kept=0, record_object=True, addref=True, release=True),
    # The home slot holds the key, flagged: no reference is taken and the record keeps nothing.
    case('home_match_flagged', key=KEY_A, level=2, slots={1: (KEY_A, END, 1)}, object_slots=(1,),
         record_kept=0, record_object=False),
    # The home slot holds the key, unflagged, without an object, and the record had kept its object.
    case('home_match_no_object_record_kept', key=KEY_A, level=2, slots={1: (KEY_A, END, 0)},
         record_kept=1, record_object=True),
    # The record has no object of its own to release.
    case('home_match_record_without_object', key=KEY_A, level=1, slots={1: (KEY_A, END, 0)},
         object_slots=(1,), record_kept=0, record_object=False, addref=True),
    # The home slot holds another key of the same home, and the chain reaches the key further on.
    case('chain_reaches_key', key=KEY_A, level=5,
         slots={1: (KEY_B, 3, 0), 3: (KEY_A, END, 0)}, object_slots=(3,), addref=True, release=True),
    # The chain passes a slot of another home before the key.
    case('chain_skips_other_home', key=KEY_A, level=5,
         slots={1: (KEY_B, 2, 0), 2: (KEY_OTHER, 3, 0), 3: (KEY_A, END, 1)}, object_slots=(3,),
         record_object=True, release=True),
    # The chain ends without the key.
    case('chain_ends_without_key', key=KEY_A, level=1,
         slots={1: (KEY_B, 3, 0), 3: (KEY_C, END, 0)}),
    # The home slot's chain is just the one other key.
    case('single_other_key_ends', key=KEY_A, level=5, slots={1: (KEY_B, END, 0)}),
    # The chain's slot for the key lies beyond the block's mask: nothing is found.
    case('found_slot_beyond_mask', key=KEY_A, level=1,
         slots={1: (KEY_B, 5, 0), 5: (KEY_A, END, 0)}, object_slots=(5,)),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: find_keyed_record_cases.py OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
