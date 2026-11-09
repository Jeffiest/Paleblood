#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic callbacks for misc_invoke_callback (0x026e8310): unarmed (nothing is called), armed
with a direct target at an adjusted object, armed with a virtual target whose slot is read from the
adjusted object's vtable at several offsets, the argument at zero, negative and high-bit values, and
the target's result at zero, all ones and an ordinary value.

usage: invoke_callback_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026e8310'
TARGET = '0x00400300'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
ARMED = 0x40000000
OBJECT_SIZE = 0x30
BASE_SIZE = 0x100
VTABLE_SIZE = 0x100
FLAGS, BASE, ARGUMENT, TARGET_SLOT, ADJUSTMENT = 0x8, 0x10, 0x18, 0x20, 0x28


def q(value):
    """A little-endian 64-bit value."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def u32(value):
    """A little-endian 32-bit value."""
    return (value & MASK32).to_bytes(4, 'little').hex()


def case(cid, flags, target, adjustment, argument, result, virtual=False, base_pointer_offset=0):
    """One call. A direct target is the guest address the stub is scripted at. A virtual target is an
    offset plus one into the vtable that the adjusted object points at; the slot holds the guest address.
    The target receives the adjusted object and the argument, and the stub returns result."""
    buffers = {'callback': {'size': OBJECT_SIZE}, 'base': {'size': BASE_SIZE}}
    memory = [{'addr': 'buf:callback+%d' % FLAGS, 'bytes': u32(flags)},
              {'addr': 'buf:callback+%d' % BASE, 'pointer': 'base'},
              {'addr': 'buf:callback+%d' % ARGUMENT, 'bytes': u32(argument)},
              {'addr': 'buf:callback+%d' % ADJUSTMENT, 'bytes': q(adjustment)}]
    if virtual:
        buffers['vtable'] = {'size': VTABLE_SIZE}
        memory += [{'addr': 'buf:base+%d' % (adjustment & MASK64), 'pointer': 'vtable'},
                   {'addr': 'buf:vtable+%d' % (target - 1), 'guest': TARGET}]
        memory.append({'addr': 'buf:callback+%d' % TARGET_SLOT, 'bytes': q(target)})
    else:
        memory.append({'addr': 'buf:callback+%d' % TARGET_SLOT, 'guest': TARGET})
    stubs = []
    if flags & ARMED:
        stubs.append({'address': TARGET, 'argc': 2, 'argi': [0], 'argu32': [1], 'ret': hex(result & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:callback'}, 'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('unarmed_calls_nothing', 0x3, 0x1, 0x0, 5, 0x99),
    case('unarmed_bit_below_calls_nothing', 0x3fffffff, 0x1, 0x0, 5, 0x99),
    case('armed_direct', ARMED, 0x00400300, 0x0, 5, 0x7000),
    case('armed_direct_adjusted', ARMED, 0x00400300, 0x20, 0x11, 0x7000),
    case('armed_direct_argument_zero', ARMED, 0x00400300, 0x0, 0, 0),
    case('armed_direct_argument_negative', ARMED, 0x00400300, 0x8, -2, MASK64),
    case('armed_direct_argument_high_bit', ARMED, 0x00400300, 0x8, 0x80000000, 0x8000000000000001),
    case('armed_virtual_slot', ARMED, 0x41, 0x0, 3, 0x55, virtual=True),
    case('armed_virtual_adjusted', ARMED, 0x21, 0x8, 3, 0x56, virtual=True),
    case('armed_virtual_high_slot', ARMED, 0x81, 0x10, 0x80000001, MASK64, virtual=True),
    case('armed_result_zero', ARMED, 0x00400300, 0x0, 7, 0),
    case('armed_other_flags', ARMED | 0x3, 0x00400300, 0x18, 8, 0x1234),
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
