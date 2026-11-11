#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_hand_off_two_arrays (0x00c24610), for tools/verify.py run.

usage: hand_off_two_arrays_cases.py OUT_DIR

The two arrays are on the stack: the source fill (0x00c24e60, stubbed) writes each array's storage,
length and capacity into the records it is given. Cases: neither array owned, either one owned, both,
a zero capacity (still freed, with size 0), a negative capacity that is not owned although its storage
is set, a large capacity whose shifted size stays in 32 bits, and zero lengths. The allocator object at
0x058018b0 has its free slot at 0x28 (a stub); the object (0x00cbe140) is a stub too. Nothing is returned.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00c24610'
FILL = '0x00c24e60'          # the source fill: stubbed (a real game entry)
HAND_OFF = '0x00cbe140'      # the hand-off to the object: stubbed (a real game entry)
FREE = '0x00400020'          # the allocator's sized free slot at 0x28: stubbed (a real game entry)
ALLOCATOR = '0x058018b0'
UNOWNED = 0x80000000
FREE_SLOT = 0x28


def u32(value):
    """A 32-bit little-endian word as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def fill_writes(arg, array):
    """The writes the fill makes into the array record at argument arg; array is (storage, length, capacity) or None."""
    if array is None:
        return [{'arg': arg, 'offset': 0, 'bytes': '00' * 8, 'size': 8},
                {'arg': arg, 'offset': 8, 'bytes': u32(0), 'size': 4},
                {'arg': arg, 'offset': 12, 'bytes': u32(UNOWNED), 'size': 4}]
    storage, length, capacity = array
    writes = [{'arg': arg, 'offset': 0, 'pointer': storage, 'size': 8},
              {'arg': arg, 'offset': 8, 'bytes': u32(length), 'size': 4},
              {'arg': arg, 'offset': 12, 'bytes': u32(capacity), 'size': 4}]
    return writes


def case(cid, first=None, second=None):
    """first, second: (storage buffer, length, capacity) for an owned array, or None for one not written."""
    buffers = {'self': {'size': 16}, 'source': {'size': 16},
               'a_data': {'size': 0x100}, 'b_data': {'size': 0x40},
               'alloc_vt': {'size': 0x30}}
    memory = [{'addr': ALLOCATOR, 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': FREE}]
    writes = fill_writes(2, first) + fill_writes(3, second)
    # One free per owned array (capacity not negative), in the order the original makes them: second, then first.
    frees = [array for array in (second, first) if array is not None and array[2] >= 0]
    stubs = [{'address': FILL, 'argc': 4, 'argi': [0, 1], 'writes': writes},
             {'address': HAND_OFF, 'argc': 3, 'argi': [0]}]
    stubs += [{'address': FREE, 'argc': 3} for _ in frees]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:self', 'rsi': 'buf:source'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('neither_owned'),
    case('first_owned', first=('a_data', 2, 4)),
    case('second_owned', second=('b_data', 1, 3)),
    case('both_owned', first=('a_data', 2, 4), second=('b_data', 1, 3)),
    case('owned_zero_capacity', first=('a_data', 0, 0), second=('b_data', 0, 0)),
    case('negative_capacity_not_owned', second=('b_data', 1, -5)),
    case('large_capacity_shift', first=('a_data', 0x0f, 0x0fffffff)),
    case('both_owned_zero_length', first=('a_data', 0, 1), second=('b_data', 0, 1)),
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
