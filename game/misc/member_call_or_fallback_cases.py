#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic thunks and fallback objects for misc_member_call_or_fallback (0x01887f70).

usage: member_call_or_fallback_cases.py OUT_DIR

The thunk holds the adjustment at 0x18, the target at 0x30, the object at 0x38 and the 32-bit argument
at 0x40. A nonzero target is called on the adjusted object with the fallback object as its second
argument; a target with its low bit set is a virtual slot read from the adjusted object's vtable. A
zero target calls the fallback object's vtable slot at 0x80 with the fixed tag and the 64-bit argument.
Covers direct and virtual targets, positive and negative adjustments, the fallback path, and results of
zero, all ones and high bits.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01887f70'
DIRECT = '0x00400300'
VIRTUAL = '0x00400020'
FALLBACK = '0x004000a0'
SLOT = 0x18
FALLBACK_SLOT = 0x80
FALLBACK_TAG = 0x04dc0016
ARGUMENT32 = 0xfffffffe00000005
ARGUMENT64 = 0x8123456789abcdef
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, virtual=False, zero_target=False, adjustment=0, object_offset=0, result=0x1234):
    """One call: the target stub (or the fallback slot) runs and returns result."""
    buffers = {'thunk': {'size': 0x48, 'bytes': 'ee' * 0x48},
               'obj': {'size': 0x40, 'bytes': '55' * 0x40},
               'fb': {'size': 0x10, 'bytes': '66' * 0x10},
               'fbvt': {'size': 0x90}}
    memory = [{'addr': 'buf:thunk+24', 'bytes': word(adjustment)},
              {'addr': 'buf:thunk+56', 'pointer': 'obj' if object_offset == 0 else f'obj+{object_offset}'},
              {'addr': 'buf:thunk+64', 'bytes': word(ARGUMENT32)},
              {'addr': 'buf:fb+0', 'pointer': 'fbvt'},
              {'addr': f'buf:fbvt+{FALLBACK_SLOT:#x}', 'guest': FALLBACK}]
    if zero_target:
        memory.append({'addr': 'buf:thunk+48', 'bytes': word(0)})
        stub = {'address': FALLBACK, 'argc': 3, 'ret': hex(result & MASK64)}
    else:
        if virtual:
            memory.append({'addr': 'buf:thunk+48', 'bytes': word(SLOT + 1)})
            buffers['vt'] = {'size': 0x40}
            self_offset = object_offset + adjustment
            memory += [{'addr': f'buf:obj+{self_offset}', 'pointer': 'vt'},
                       {'addr': f'buf:vt+{SLOT:#x}', 'guest': VIRTUAL}]
            target_stub = VIRTUAL
        else:
            memory.append({'addr': 'buf:thunk+48', 'guest': DIRECT})
            target_stub = DIRECT
        stub = {'address': target_stub, 'argc': 3, 'ret': hex(result & MASK64)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:thunk', 'rsi': 'buf:fb', 'rdx': hex(ARGUMENT64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': [stub]}


CASES = [
    case('direct_target'),
    case('direct_target_positive_adjustment', adjustment=8),
    case('direct_target_negative_adjustment', adjustment=-8, object_offset=16),
    case('virtual_target', virtual=True),
    case('virtual_target_positive_adjustment', virtual=True, adjustment=0x10),
    case('virtual_target_negative_adjustment', virtual=True, adjustment=-0x10, object_offset=32),
    case('zero_target_uses_fallback_slot', zero_target=True),
    case('fallback_result_zero', zero_target=True, result=0),
    case('fallback_result_all_ones', zero_target=True, result=MASK64),
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
