#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic member-thunk calls for misc_tail_call_offset_member_thunk (0x01888b30).

usage: tail_call_offset_member_thunk_cases.py OUT_DIR

The thunk's target at +0x10 is zero (no call), or a function address, or a virtual slot offset plus the
virtual bit. A null object at +0x08 returns without a call. The object is adjusted by +0x18 and the
adjusted object is the first argument; the second argument's value at +0x10 of the second record is the
second argument, and the 32-bit argument at +0x28 is the third. Paths that make no call have the return
register left alone by the original, so those cases set 'returns' to 'void'.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01888b30'
PLAIN = '0x00400300'
PLAIN_TARGET = 0x00400300
VIRTUAL = '0x004000a0'
VIRTUAL_BIT = 1
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, target, object_null=False, adjustment=0, argument=0x1357, value=0x2468,
         handled=0x1234, virtual=False):
    """One call. The stub for the target receives the adjusted object, the value and the argument."""
    buffers = {
        'thunk': {'size': 0x30, 'bytes': '00' * 0x30},
        'second': {'size': 0x18, 'bytes': '00' * 0x18},
        'base': {'size': 0x40, 'bytes': '00' * 0x40},
        'vtable': {'size': 0x48, 'bytes': '00' * 0x48},
    }
    target_entry = ({'addr': 'buf:thunk+0x10', 'guest': PLAIN}
                    if target == int(PLAIN, 16) else {'addr': 'buf:thunk+0x10', 'bytes': word(target)})
    memory = [
        target_entry,
        {'addr': 'buf:thunk+0x18', 'bytes': word(adjustment)},
        {'addr': 'buf:thunk+0x28', 'bytes': struct.pack('<I', argument & 0xffffffff).hex()},
        {'addr': 'buf:second+0x10', 'bytes': word(value)},
    ]
    if object_null:
        memory.append({'addr': 'buf:thunk+0x08', 'bytes': word(0)})
    else:
        memory.append({'addr': 'buf:thunk+0x08', 'pointer': 'base'})
        memory.append({'addr': 'buf:base', 'pointer': 'vtable'})
        memory.append({'addr': 'buf:vtable+0x20', 'guest': VIRTUAL})
    stubs = []
    returns = 'i64'
    if target != 0 and not object_null:
        callee = VIRTUAL if virtual else PLAIN
        stubs.append({'address': callee, 'argc': 3, 'argi': [0, 1, 2], 'ret': hex(handled & MASK64)})
    else:
        returns = 'void'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns,
            'args': {'rdi': 'buf:thunk', 'rsi': 'buf:second'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('target_zero_returns_without_call', 0),
    case('object_null_returns_without_call', PLAIN_TARGET, object_null=True),
    case('plain_target_zero_adjustment', PLAIN_TARGET),
    case('plain_target_adjusted_object', PLAIN_TARGET, adjustment=0x10, argument=0x80000000),
    case('plain_target_all_ones_argument', PLAIN_TARGET, argument=0xffffffff, value=MASK64, handled=MASK64),
    case('plain_target_result_zero', PLAIN_TARGET, handled=0, value=1 << 63),
    case('virtual_target_slot_20', VIRTUAL_BIT + 0x20, virtual=True),
    case('virtual_target_result_high_bit', VIRTUAL_BIT + 0x20, virtual=True, handled=0x8000000000000001,
         argument=0x7f, value=0xfeedface00000001),
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
