#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic member-function thunk calls (a template: near_cases.py puts the thunk's three offsets
in place of the slot names and the function's address in place of the one below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

The thunk holds an object pointer, a target and an adjustment. A target with its low bit set is a
virtual slot: the object's vtable slot at (target - 1) gives the function. The target is a stub that
receives the adjusted object and returns a chosen result. Covers direct and virtual targets, zero,
positive and negative adjustments, and results of zero, all ones and high bits. The second and third
arguments are passed on to the target and compared there. The thunk reaches past its last word and is
filled with other bytes, so a word read from another place shows up.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02242a10'
DIRECT = '0x00400020'        # a real game entry standing in for a directly called member; stubbed
VIRTUAL = '0x00400300'       # a real game entry standing in for a virtual member; stubbed
OBJECT_FIELD = NEAR_SLOT_0
TARGET_FIELD = NEAR_SLOT_1
ADJUSTMENT_FIELD = NEAR_SLOT_2
THUNK_BYTES = max(OBJECT_FIELD, TARGET_FIELD, ADJUSTMENT_FIELD) + 0x20
SLOT = 0x18
MASK64 = (1 << 64) - 1
SECOND = 0x5566778899aabbcc
THIRD = 0x1122334455667788


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, virtual=False, adjustment=0, object_offset=0, result=0x1234, second=SECOND, third=THIRD):
    """One call through the thunk: the target stub runs on the adjusted object with the second and third
    arguments, and returns result."""
    target_value = (SLOT + 1) if virtual else int(DIRECT, 16)
    target_stub = VIRTUAL if virtual else DIRECT
    object_pointer = 'obj' if object_offset == 0 else f'obj+{object_offset}'
    target_at = f'buf:thunk+{TARGET_FIELD:#x}'
    memory = [{'addr': f'buf:thunk+{OBJECT_FIELD:#x}', 'pointer': object_pointer},
              ({'addr': target_at, 'guest': DIRECT} if not virtual else {'addr': target_at, 'bytes': word(target_value)}),
              {'addr': f'buf:thunk+{ADJUSTMENT_FIELD:#x}', 'bytes': word(adjustment)}]
    buffers = {'thunk': {'size': THUNK_BYTES, 'bytes': 'ee' * THUNK_BYTES},
               'obj': {'size': 0x40, 'bytes': '55' * 0x40}}
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
