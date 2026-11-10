#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic member-function thunk calls for misc_member_call_02242b70 (0x02242b70).

usage: member_call_02242b70_cases.py OUT_DIR

The same thunk as misc_member_call_02242a10: object pointer at 0x10, target at 0x18 (low bit set means a
virtual slot), adjustment at 0x20. Covers direct and virtual targets, adjustments of both signs, and
results of zero, all ones and high bits.
The second and third arguments are passed on to the target and compared there.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02242b70'
DIRECT = '0x00400020'
VIRTUAL = '0x00400300'
SLOT = 0x18
MASK64 = (1 << 64) - 1
SECOND = 0x5566778899aabbcc
THIRD = 0x1122334455667788


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, virtual=False, adjustment=0, object_offset=0, result=0x1234, second=SECOND, third=THIRD):
    """One call through the thunk: the target stub runs on the adjusted object with the second and third
    arguments, and returns result."""
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
            'args': {'rdi': 'buf:thunk', 'rsi': hex(second & MASK64), 'rdx': hex(third & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': [{'address': target_stub, 'argc': 3, 'ret': hex(result & MASK64)}]}


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
    case('further_arguments_zero', second=0, third=0),
    case('further_arguments_all_ones', virtual=True, second=MASK64, third=MASK64),
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
