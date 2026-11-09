#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic member-function thunk calls for misc_member_call_02242a10 (0x02242a10).

usage: member_call_02242a10_cases.py OUT_DIR

The thunk holds the object pointer at 0x10, the target at 0x18 and the adjustment at 0x20. A target with
its low bit set is a virtual slot: the object's vtable slot at (target - 1) gives the function. The
target is a stub that receives the adjusted object and returns a chosen result. Covers direct and
virtual targets, zero, positive and negative adjustments, and results of zero, all ones and high bits.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02242a10'
DIRECT = '0x00400020'        # a real game entry standing in for a directly called member; stubbed
VIRTUAL = '0x00400300'       # a real game entry standing in for a virtual member; stubbed
SLOT = 0x18
MASK64 = (1 << 64) - 1


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, virtual=False, adjustment=0, object_offset=0, result=0x1234):
    """One call through the thunk: the target stub runs on the adjusted object and returns result."""
    target_value = (SLOT + 1) if virtual else int(DIRECT, 16)
    target_stub = VIRTUAL if virtual else DIRECT
    object_pointer = 'obj' if object_offset == 0 else f'obj+{object_offset}'
    memory = [{'addr': 'buf:thunk+16', 'pointer': object_pointer},
              ({'addr': 'buf:thunk+24', 'guest': DIRECT} if not virtual else {'addr': 'buf:thunk+24', 'bytes': word(target_value)}),
              {'addr': 'buf:thunk+32', 'bytes': word(adjustment)}]
    buffers = {'thunk': {'size': 0x28, 'bytes': 'ee' * 0x28}, 'obj': {'size': 0x40, 'bytes': '55' * 0x40}}
    if virtual:
        buffers['vt'] = {'size': 0x40}
        memory += [{'addr': f'buf:obj+{object_offset + adjustment}', 'pointer': 'vt'},
                   {'addr': f'buf:vt+{SLOT:#x}', 'guest': VIRTUAL}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:thunk'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': [{'address': target_stub, 'argc': 1, 'ret': hex(result & MASK64)}]}


CASES = [
    case('direct_target'),
    case('direct_target_positive_adjustment', adjustment=8),
    case('direct_target_negative_adjustment', adjustment=-8, object_offset=16),
    case('virtual_target', virtual=True),
    case('virtual_target_positive_adjustment', virtual=True, adjustment=0x10),
    case('virtual_target_negative_adjustment', virtual=True, adjustment=-0x10, object_offset=32),
    case('result_zero', result=0),
    case('result_all_ones', result=MASK64),
    case('result_high_bit', result=1 << 63),
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
