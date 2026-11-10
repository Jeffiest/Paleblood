#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic member-function thunks for misc_tail_call_member_target (0x01887f40).

usage: tail_call_member_target_cases.py OUT_DIR

The thunk holds the target at 0x20, the object at 0x28, the adjustment at 0x18 and the 32-bit argument
at 0x40. A target with its low bit set is a virtual slot: the adjusted object's vtable slot at
(target - 1) gives the function. The target stub receives the adjusted object, the second argument and
the 32-bit argument. Covers direct and virtual targets, zero, positive and negative adjustments, and a
zero target that makes no call. The function returns nothing, so the return register is not compared.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01887f40'
DIRECT = '0x00400300'
VIRTUAL = '0x004000a0'
SLOT = 0x18
SECOND = 0x5566778899aabbcc
ARGUMENT = 0xfffffffe00000005
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, virtual=False, zero_target=False, adjustment=0, object_offset=0, second=SECOND):
    """One call through the thunk: the target stub runs on the adjusted object with the second argument
    and the 32-bit argument. A zero target makes no call."""
    if zero_target:
        target_entry = {'addr': 'buf:thunk+32', 'bytes': word(0)}
    elif virtual:
        target_entry = {'addr': 'buf:thunk+32', 'bytes': word(SLOT + 1)}
    else:
        target_entry = {'addr': 'buf:thunk+32', 'guest': DIRECT}
    object_pointer = 'obj' if object_offset == 0 else f'obj+{object_offset}'
    memory = [{'addr': 'buf:thunk+40', 'pointer': object_pointer},
              target_entry,
              {'addr': 'buf:thunk+24', 'bytes': word(adjustment)},
              {'addr': 'buf:thunk+64', 'bytes': word(ARGUMENT)}]
    buffers = {'thunk': {'size': 0x48, 'bytes': 'ee' * 0x48},
               'obj': {'size': 0x40, 'bytes': '55' * 0x40}}
    stubs = []
    if not zero_target:
        if virtual:
            buffers['vt'] = {'size': 0x40}
            self_offset = object_offset + adjustment
            memory += [{'addr': f'buf:obj+{self_offset}', 'pointer': 'vt'},
                       {'addr': f'buf:vt+{SLOT:#x}', 'guest': VIRTUAL}]
        stubs.append({'address': VIRTUAL if virtual else DIRECT, 'argc': 3})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:thunk', 'rsi': hex(second & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('direct_target'),
    case('direct_target_positive_adjustment', adjustment=8),
    case('direct_target_negative_adjustment', adjustment=-8, object_offset=16),
    case('virtual_target', virtual=True),
    case('virtual_target_positive_adjustment', virtual=True, adjustment=0x10),
    case('virtual_target_negative_adjustment', virtual=True, adjustment=-0x10, object_offset=32),
    case('zero_target_no_call', zero_target=True),
    case('second_zero', second=0),
    case('second_all_ones_virtual', virtual=True, second=MASK64),
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
