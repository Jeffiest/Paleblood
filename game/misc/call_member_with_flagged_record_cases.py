#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic member-thunk calls with a stack record for misc_call_member_with_flagged_record (0x01888d00).

usage: call_member_with_flagged_record_cases.py OUT_DIR

The thunk's target at +0x58 is zero (no call), a plain function, or a virtual slot offset plus the virtual
bit. The object at +0x50 is adjusted by +0x60 and the adjusted object is the first argument. The second
argument is a 16-byte record that the target reads: kind one, the 32-bit value and the 64-bit value. The
third argument is the 32-bit word at +0x68. The target stub compares the record's bytes. Paths that make no
call leave the return register alone, so those cases set 'returns' to 'void'.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01888d00'
PLAIN = '0x00400300'
VIRTUAL = '0x004000a0'
VIRTUAL_BIT = 1
RECORD_BYTES = 0x10
MASK32 = 0xffffffff
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, kind='plain', adjustment=0, value32=0x1234, value64=0x5678, argument=0x1357):
    """One call. The target stub compares the adjusted object, the record and the argument."""
    buffers = {
        'thunk': {'size': 0x70, 'bytes': 'ee' * 0x70},
        'base': {'size': 0x40, 'bytes': '00' * 0x40},
        'vtable': {'size': 0x40, 'bytes': '00' * 0x40},
    }
    memory = [
        {'addr': 'buf:thunk+0x50', 'pointer': 'base'},
        {'addr': 'buf:thunk+0x60', 'bytes': word(adjustment)},
        {'addr': 'buf:thunk+0x68', 'bytes': struct.pack('<I', argument & MASK32).hex()},
    ]
    stubs = []
    if kind == 'zero':
        memory.append({'addr': 'buf:thunk+0x58', 'bytes': word(0)})
    elif kind == 'plain':
        memory.append({'addr': 'buf:thunk+0x58', 'guest': PLAIN})
        stubs.append({'address': PLAIN, 'argc': 3, 'argi': [0, 2], 'argmem': [{'arg': 1, 'size': RECORD_BYTES}]})
    else:
        memory.append({'addr': 'buf:thunk+0x58', 'bytes': word(VIRTUAL_BIT + 0x20)})
        memory.append({'addr': f'buf:base+{adjustment:#x}', 'pointer': 'vtable'})
        memory.append({'addr': 'buf:vtable+0x20', 'guest': VIRTUAL})
        stubs.append({'address': VIRTUAL, 'argc': 3, 'argi': [0, 2], 'argmem': [{'arg': 1, 'size': RECORD_BYTES}]})
    returns = 'void'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns,
            'args': {'rdi': 'buf:thunk', 'rsi': hex((0xdead << 32) | (value32 & MASK32)),
                     'rdx': hex(value64 & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('target_zero_no_call', kind='zero'),
    case('plain_target_zero_adjustment', kind='plain'),
    case('plain_target_adjusted_object', kind='plain', adjustment=0x10, argument=0x80000000),
    case('plain_target_all_ones', kind='plain', value32=MASK32, value64=MASK64, argument=MASK32),
    case('plain_target_zero_values', kind='plain', value32=0, value64=0, argument=0),
    case('virtual_target_adjusted_object', kind='virtual', adjustment=0x18, value64=0x8000000000000001),
    case('virtual_target_value_upper_word', kind='virtual', value32=0x7f, value64=0xfeedface00000001),
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
