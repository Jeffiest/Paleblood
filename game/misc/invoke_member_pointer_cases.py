#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic member-function calls for bb_misc_invoke_member_pointer (0x0188e210).

usage: invoke_member_pointer_cases.py OUT_DIR

The member pointer is a 0x20-byte record: subobject at +0x08, function or vtable offset plus one at +0x10,
adjustment at +0x18. A function field with the low bit clear is called directly; with it set, the slot at
vtable + (field - 1) is called. The callee is a scripted stub at a real game entry that takes the adjusted
this and the caller's other arguments (RSI, RDX, R8, R9); RCX holds the callee address. Covers an empty
function field, an empty subobject, a direct call with and without adjustment, and a virtual call with and
without adjustment.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0188e210'
DIRECT = '0x00400020'       # a real game entry a direct member function pointer points at
VIRTUAL = '0x004000a0'      # a real game entry the vtable slot points at
MASK64 = (1 << 64) - 1
POINTER_SIZE = 0x20


def u64(value):
    """Eight little-endian bytes of value as hex."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def case(cid, function, subobject=True, adjustment=0, virtual_slot=None, ret=0x1122334455667788):
    """One call. function is the member pointer's field; virtual_slot is the vtable offset the callee sits
    at when the function field is a virtual marker; ret is what the callee returns."""
    buffers = {'pointer': {'size': POINTER_SIZE}, 'arg_state': {'size': 8}}
    args = {'rdi': 'buf:pointer', 'rsi': '0x1111111111111111', 'rdx': '0x2222222222222222',
            'rcx': '0x3333333333333333', 'r8': '0x4444444444444444', 'r9': '0x5555555555555555'}
    if function and not function & 1:
        function_entry = {'addr': 'buf:pointer+16', 'guest': hex(function)}   # a direct callee the case stubs
    else:
        function_entry = {'addr': 'buf:pointer+16', 'bytes': u64(function)}
    memory = [function_entry, {'addr': 'buf:pointer+24', 'bytes': u64(adjustment)}]
    stubs = []
    if subobject:
        buffers['subobj'] = {'size': POINTER_SIZE, 'bytes': 'a7' * POINTER_SIZE}
        memory.append({'addr': 'buf:pointer+8', 'pointer': 'subobj'})
    else:
        memory.append({'addr': 'buf:pointer+8', 'bytes': '00' * 8})
    if subobject and function != 0:
        if virtual_slot is None:
            stubs.append({'address': DIRECT, 'argc': 6, 'argi': [0, 1, 2, 3, 4, 5], 'ret': ret})
        else:
            buffers['vt'] = {'size': 0x40}
            memory.append({'addr': f'buf:subobj+{adjustment}', 'pointer': 'vt'})
            memory.append({'addr': f'buf:vt+{virtual_slot}', 'guest': VIRTUAL})
            stubs.append({'address': VIRTUAL, 'argc': 6, 'argi': [0, 1, 2, 3, 4, 5], 'ret': ret})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': args, 'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('empty_function_returns_pointer', function=0, subobject=True),
    case('empty_subobject_returns_pointer', function=0x00400020, subobject=False),
    case('direct_call_no_adjustment', function=0x00400020),
    case('direct_call_adjusted', function=0x00400020, adjustment=0x10),
    case('direct_call_result_zero', function=0x00400020, ret=0),
    case('virtual_call_no_adjustment', function=0x20 + 1, virtual_slot=0x20),
    case('virtual_call_adjusted', function=0x28 + 1, adjustment=0x8, virtual_slot=0x28),
    case('virtual_call_result_all_ones', function=0x20 + 1, virtual_slot=0x20, ret=MASK64),
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
