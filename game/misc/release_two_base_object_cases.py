#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic releases for bb_misc_release_two_base_object (0x00414f20): a flagged member whose count
is negative, zero, one or above one, or absent; a slot object present or absent; and the scratch
service's release at the end. The member release (0x0045a4c0), the slot's slot 0x18 and the
scratch release (slot 0x68) are scripted stubs.

usage: release_two_base_object_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00414f20'
MEMBER_RELEASE = '0x0045a4c0'
SLOT_FUNCTION = '0x00400020'        # a real game entry the slot object's slot 0x18 points at
SCRATCH_RELEASE = '0x00400300'      # a real game entry the scratch service's slot 0x68 points at
SCRATCH_GLOBAL = '0x057e7320'
MASK64 = (1 << 64) - 1
OBJECT_SIZE = 0x48
MEMBER_SIZE = 0xf0
SCRATCH_RETURN = 0x5566778899
SLOT_RETURN = 0x1357


def member_bytes(count):
    """A flagged member: its signed count at 0xe4 and its flag clear at 0xec."""
    data = bytearray(MEMBER_SIZE)
    data[0xe4:0xe8] = struct.pack('<i', count)
    return data.hex()


def case(cid, count=None, slot=True, value=0x77):
    """One release. count None means no member; slot says whether the object has a slot object."""
    buffers = {'object': {'size': OBJECT_SIZE, 'bytes': 'ab' * OBJECT_SIZE},
               'scratch': {'size': 8},
               'scratch_vt': {'size': 0x78},
               'slot_obj': {'size': 8},
               'slot_vt': {'size': 0x20}}
    memory = [{'addr': SCRATCH_GLOBAL, 'pointer': 'scratch'},
              {'addr': 'buf:scratch', 'pointer': 'scratch_vt'},
              {'addr': 'buf:scratch_vt+104', 'guest': SCRATCH_RELEASE},
              {'addr': 'buf:object+32', 'bytes': '00' * 8},
              {'addr': 'buf:object+48', 'bytes': struct.pack('<Q', value).hex()}]
    if count is None:
        memory.append({'addr': 'buf:object+64', 'bytes': '00' * 8})
    else:
        buffers['member'] = {'size': MEMBER_SIZE, 'bytes': member_bytes(count)}
        memory.append({'addr': 'buf:object+64', 'pointer': 'member'})
    if slot:
        memory.append({'addr': 'buf:object+40', 'pointer': 'slot_obj'})
        memory.append({'addr': 'buf:slot_obj', 'pointer': 'slot_vt'})
        memory.append({'addr': 'buf:slot_vt+24', 'guest': SLOT_FUNCTION})
    else:
        memory.append({'addr': 'buf:object+40', 'bytes': '00' * 8})
    stubs = []
    if count is not None:
        stubs.append({'address': MEMBER_RELEASE, 'argc': 1})
    if slot:
        stubs.append({'address': SLOT_FUNCTION, 'argc': 2, 'ret': SLOT_RETURN})
    stubs.append({'address': SCRATCH_RELEASE, 'argc': 2, 'ret': SCRATCH_RETURN})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object'},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('negative_count_slot', count=-3, slot=True),
    case('zero_count_slot', count=0, slot=True),
    case('one_count_no_slot', count=1, slot=False),
    case('high_count_slot', count=5, slot=True),
    case('high_count_no_slot', count=5, slot=False),
    case('top_count_value', count=0x7fffffff, slot=False, value=MASK64),
]

# The member is read before its null test, so a null member faults in the original (no input reaches it).
UNREACHABLE = {'0x00414f5c': ('taken', 'null member is read at 0x00414f45 before its null test')}


def main():
    """Write deterministic synthetic input for the cases above."""
    if len(sys.argv) != 2:
        print(__doc__)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
