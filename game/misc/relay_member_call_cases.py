#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic thunks and owners for misc_relay_member_call (0x01887ed0).

usage: relay_member_call_cases.py OUT_DIR

The thunk holds the object at 0x08, the target at 0x10, the adjustment at 0x18 and the 32-bit argument at
0x20. The owner holds a payload pointer at 0x08, and the target receives payload + 0x28. A target with
its low bit set is a virtual slot: the adjusted object's vtable slot at (target - 1) gives the function.
Covers direct and virtual targets, positive and negative adjustments, a null owner, a null payload, a null
object (each returns without a call), and results of zero, all ones and high bits.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01887ed0'
DIRECT = '0x00400300'
VIRTUAL = '0x004000a0'
SLOT = 0x18
ARGUMENT = 0xfffffffe00000005
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, virtual=False, adjustment=0, object_offset=0, result=0x1234,
         owner_null=False, payload_null=False, object_null=False):
    """One call: the target stub runs on the adjusted object with the forwarded payload and returns result.
    A null owner, payload or object makes no call and leaves the return value to the caller."""
    no_call = owner_null or payload_null or object_null
    buffers = {'thunk': {'size': 0x28, 'bytes': 'ee' * 0x28},
               'obj': {'size': 0x40, 'bytes': '55' * 0x40},
               'owner': {'size': 0x10, 'bytes': 'ee' * 0x10},
               'pay': {'size': 0x40, 'bytes': '77' * 0x40}}
    memory = [{'addr': 'buf:thunk+8', 'pointer': 'obj' if object_offset == 0 else f'obj+{object_offset}'},
              {'addr': 'buf:thunk+24', 'bytes': word(adjustment)},
              {'addr': 'buf:thunk+32', 'bytes': word(ARGUMENT)}]
    if object_null:
        memory[0] = {'addr': 'buf:thunk+8', 'bytes': word(0)}
    if payload_null:
        memory.append({'addr': 'buf:owner+8', 'bytes': word(0)})
    else:
        memory.append({'addr': 'buf:owner+8', 'pointer': 'pay'})
    stubs = []
    if no_call:
        returns = 'void'
    else:
        returns = 'i64'
        if virtual:
            memory.append({'addr': 'buf:thunk+16', 'bytes': word(SLOT + 1)})
            buffers['vt'] = {'size': 0x40}
            self_offset = object_offset + adjustment
            memory += [{'addr': f'buf:obj+{self_offset}', 'pointer': 'vt'},
                       {'addr': f'buf:vt+{SLOT:#x}', 'guest': VIRTUAL}]
            stub_address = VIRTUAL
        else:
            memory.append({'addr': 'buf:thunk+16', 'guest': DIRECT})
            stub_address = DIRECT
        stubs.append({'address': stub_address, 'argc': 3, 'ret': hex(result & MASK64)})
    args = {'rdi': 'buf:thunk', 'rsi': '0x0' if owner_null else 'buf:owner'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns, 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('direct_target'),
    case('direct_target_positive_adjustment', adjustment=8),
    case('direct_target_negative_adjustment', adjustment=-8, object_offset=16),
    case('virtual_target', virtual=True),
    case('virtual_target_positive_adjustment', virtual=True, adjustment=0x10),
    case('virtual_target_negative_adjustment', virtual=True, adjustment=-0x10, object_offset=32),
    case('null_owner_no_call', owner_null=True),
    case('null_payload_no_call', payload_null=True),
    case('null_object_no_call', object_null=True),
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
