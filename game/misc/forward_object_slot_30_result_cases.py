#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic references for bb_misc_forward_object_slot_30_result (0x02b3e2d0): the object's slot at
+0x30 gives no object or a second object, whose slot at +0x28 is a scripted routine returning zero,
all ones or a high-bit value. The no-object result is thirty-two bits of ones.

usage: forward_object_slot_30_result_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3e2d0'
LOOKUP = '0x004000a0'     # a real game function entry stubbed as the object's slot at +0x30
ROUTINE = '0x00400020'    # a real game function entry stubbed as the second object's slot at +0x28
MASK64 = (1 << 64) - 1


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, lookup_ret, routine_ret=0):
    """The reference holds the object. Its slot 0x30 returns lookup_ret, which is the buffer of the
    second object when it is set; that object's slot 0x28 is the routine that returns routine_ret."""
    buffers = {'ref': {'size': 0x10, 'bytes': '00' * 0x10},
               'object': {'size': 0x10, 'bytes': '00' * 0x10},
               'vtable': {'size': 0x48, 'bytes': '00' * 0x48},
               'target': {'size': 0x10, 'bytes': '00' * 0x10},
               'target_vt': {'size': 0x48, 'bytes': '00' * 0x48}}
    memory = [{'addr': 'buf:ref+0x0', 'pointer': 'object'},
              {'addr': 'buf:object+0x0', 'pointer': 'vtable'},
              {'addr': 'buf:vtable+0x30', 'guest': LOOKUP},
              {'addr': 'buf:target+0x0', 'pointer': 'target_vt'},
              {'addr': 'buf:target_vt+0x28', 'guest': ROUTINE}]
    stubs = [{'address': LOOKUP, 'argc': 1,
              'ret': 'buf:target' if lookup_ret else '0x0'}]
    if lookup_ret:
        stubs.append({'address': ROUTINE, 'argc': 1, 'ret': hex(routine_ret & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:ref'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('no_object_given', lookup_ret=False),
    case('object_routine_returns_zero', lookup_ret=True, routine_ret=0),
    case('object_routine_returns_ordinary', lookup_ret=True, routine_ret=0x2a),
    case('object_routine_returns_all_ones', lookup_ret=True, routine_ret=MASK64),
    case('object_routine_returns_high_bit', lookup_ret=True, routine_ret=0x8000000000000000),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
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
