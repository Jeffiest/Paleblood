#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic references for bb_misc_object_slot_28_is_set (0x02b3e1a0): the object's vtable slot at
+0x28 is a scripted game entry that returns zero, one, a value whose low byte is zero, all ones or
a high-bit value. The answer is one when the whole result is non-zero and zero otherwise.

usage: object_slot_28_is_set_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3e1a0'
TARGET = '0x004000a0'     # a real game function entry stubbed as the slot's routine
SLOT = 0x28
MASK64 = (1 << 64) - 1


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, ret):
    """The reference holds the object; the object's vtable holds the routine in its slot."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:ref'},
            'buffers': {'ref': {'size': 0x10, 'bytes': '00' * 0x10},
                        'object': {'size': 0x10, 'bytes': '00' * 0x10},
                        'vtable': {'size': 0x48, 'bytes': '00' * 0x48}},
            'memory': [{'addr': 'buf:ref+0x0', 'pointer': 'object'},
                       {'addr': 'buf:object+0x0', 'pointer': 'vtable'},
                       {'addr': f'buf:vtable+{SLOT:#x}', 'guest': TARGET}],
            'stubs': [{'address': TARGET, 'argc': 1, 'ret': hex(ret & MASK64)}],
            'imports': []}


CASES = [
    case('routine_returns_zero', 0),
    case('routine_returns_one', 1),
    case('routine_returns_low_byte_zero', 0x100),
    case('routine_returns_all_ones', MASK64),
    case('routine_returns_high_bit', 0x8000000000000000),
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
