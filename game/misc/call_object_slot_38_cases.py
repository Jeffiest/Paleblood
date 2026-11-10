#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic references for bb_misc_call_object_slot_38 (0x02b3e190): the object's vtable slot at
+0x38 is a scripted game entry that receives the object and the caller's other five arguments, and
returns the chosen value, which the routine returns unchanged.

usage: call_object_slot_38_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3e190'
TARGET = '0x004000a0'     # a real game function entry stubbed as the slot's routine
SLOT = 0x38
MASK64 = (1 << 64) - 1
FURTHER = (0x1111111111111111, 0x2222222222222222, 0x3333333333333333, 0x4444444444444444, 0x5555555555555555)


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, ret, further=FURTHER):
    """The reference holds the object; the object's vtable holds the routine in its slot. The routine
    is compared on all six arguments."""
    registers = dict(zip(('rsi', 'rdx', 'rcx', 'r8', 'r9'), (hex(value & MASK64) for value in further)))
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': dict(registers, rdi='buf:ref'),
            'buffers': {'ref': {'size': 0x10, 'bytes': '00' * 0x10},
                        'object': {'size': 0x10, 'bytes': '00' * 0x10},
                        'vtable': {'size': 0x48, 'bytes': '00' * 0x48}},
            'memory': [{'addr': 'buf:ref+0x0', 'pointer': 'object'},
                       {'addr': 'buf:object+0x0', 'pointer': 'vtable'},
                       {'addr': f'buf:vtable+{SLOT:#x}', 'guest': TARGET}],
            'stubs': [{'address': TARGET, 'argc': 6, 'ret': hex(ret & MASK64)}],
            'imports': []}


CASES = [
    case('returns_zero', 0),
    case('returns_ordinary', 0x2a),
    case('returns_all_ones', MASK64),
    case('returns_high_bit', 0x8000000000000000),
    case('further_arguments_zero', 0x2a, further=(0, 0, 0, 0, 0)),
    case('further_arguments_all_ones', 0x2a, further=(MASK64,) * 5),
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
