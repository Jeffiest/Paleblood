#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic forwarded calls for misc_forward_member_call_alt (0x026f3a60), for tools/verify.py run.

usage: forward_member_call_cases.py OUT_DIR

The record is 0x30 bytes: a flag byte at +0x0b (bit 0x40 forwards the call), the base pointer at +0x10,
an int argument at +0x18, the target at +0x20 and the base adjustment at +0x28. The object is the base plus
the adjustment. An even target is the function itself; an odd target is a vtable offset plus one, read from
the object's vtable. The target is a stub that takes the object and the argument and returns the scripted
value. With the forward bit clear the original returns without writing RAX, so that case is void.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x026f3a60'
DIRECT_TARGET = '0x00400020'     # a real game entry the even target calls; stubbed
VIRTUAL_TARGET = '0x004000a0'    # the vtable slot's function; stubbed
RECORD_SIZE = 0x30
FLAG_OFFSET = 0x0b
BASE_OFFSET = 0x10
VALUE_OFFSET = 0x18
TARGET_OFFSET = 0x20
ADJUST_OFFSET = 0x28
FORWARD_BIT = 0x40
VIRTUAL_SLOT = 0x58
BASE_SIZE = 0x80
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def u32(value):
    """Four little-endian bytes of a 32-bit value."""
    return struct.pack('<I', value & MASK32).hex()


def u64(value):
    """Eight little-endian bytes of a 64-bit value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, flags=FORWARD_BIT, virtual=False, adjust=0, value=0x1234, ret=0x5678):
    """One call. The base holds the object (and its vtable slot when virtual); the result is the target's."""
    record = bytearray(RECORD_SIZE)
    record[FLAG_OFFSET] = flags
    record[VALUE_OFFSET:VALUE_OFFSET + 4] = bytes.fromhex(u32(value))
    record[ADJUST_OFFSET:ADJUST_OFFSET + 8] = bytes.fromhex(u64(adjust))
    if virtual:
        record[TARGET_OFFSET:TARGET_OFFSET + 8] = bytes.fromhex(u64(VIRTUAL_SLOT + 1))
    buffers = {
        'record': {'size': RECORD_SIZE, 'bytes': bytes(record).hex()},
        'base': {'size': BASE_SIZE},
        'vt': {'size': BASE_SIZE},
    }
    memory = [{'addr': f'buf:record+{BASE_OFFSET:#x}', 'pointer': 'base'}]
    stubs = []
    if flags & FORWARD_BIT:
        if virtual:
            memory.append({'addr': f'buf:base+{adjust:#x}', 'pointer': 'vt'})
            memory.append({'addr': f'buf:vt+{VIRTUAL_SLOT:#x}', 'guest': VIRTUAL_TARGET})
            stubs.append({'address': VIRTUAL_TARGET, 'argc': 2, 'argi': [0, 1], 'ret': hex(ret & MASK64)})
        else:
            memory.append({'addr': f'buf:record+{TARGET_OFFSET:#x}', 'guest': DIRECT_TARGET})
            stubs.append({'address': DIRECT_TARGET, 'argc': 2, 'argi': [0, 1], 'ret': hex(ret & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid,
            'returns': 'i64' if flags & FORWARD_BIT else 'void',
            'args': {'rdi': 'buf:record'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('forward_bit_clear', flags=0x00),
    case('forward_bit_clear_other_bits', flags=0xbf),
    case('direct_target', ret=0x5678),
    case('direct_target_adjusted_base', adjust=0x8, ret=0x0),
    case('direct_target_negative_value', value=0x80000001, ret=MASK64),
    case('virtual_target', virtual=True, ret=0x55aa),
    case('virtual_target_adjusted_base', virtual=True, adjust=0x10, value=0x7fffffff, ret=0x1234),
]


def main():
    """Write deterministic synthetic calls to the requested directory."""
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
