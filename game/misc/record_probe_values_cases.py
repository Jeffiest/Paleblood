#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic probe recordings for misc_record_probe_values (0x026f3ac0), for tools/verify.py run.

usage: record_probe_values_cases.py OUT_DIR

The probe holder (a global at 0x059406c8) keeps a pair at +0x238; the pair's first object is at +0x08 and its
second at +0x30. Each object's vtable slot at +0x18 is a stub: the first object is probed twice and the second
once, in that order. The owner (reached through the slot argument) has its pair words at +0x8d0, its value at
+0x8e0 and two counts at +0x960 and +0x964 (the first capped at 0x29, the second raised to 0x2c). The pair
context (+0x08 of the owner) gets pending bits at +0x1968 and three values at +0xd270..+0xd280.
Covers counts below, at and above their bounds, and flag words with and without the bits already set.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x026f3ac0'
HOLDER = '0x059406c8'
PROBE_SLOT = 0x18
FIRST_PROBE = '0x00400020'    # the probe routine of the first object and its repeat; stubbed
SECOND_PROBE = '0x004000a0'   # the probe routine of the second object; stubbed
PAIR_OFFSET = 0x238
PAIR_FIRST = 0x08
PAIR_SECOND = 0x30
OWNER_COUNT_FIRST = 0x960
OWNER_COUNT_SECOND = 0x964
CONTEXT_FLAGS = 0x1968
CONTEXT_VALUES = 0xd270
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def u32(value):
    """Four little-endian bytes of a 32-bit value."""
    return struct.pack('<I', value & MASK32).hex()


def u64(value):
    """Eight little-endian bytes of a 64-bit value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, count_first=0x10, count_second=0x30, flags=0, values=(0x1111222233334444, 0x5555666677778888,
                                                                      0x9999aaaabbbbcccc)):
    """One recording. The probe values are returned in order: first, first again, then the second object."""
    owner = bytearray(0x970)
    owner[OWNER_COUNT_FIRST:OWNER_COUNT_FIRST + 4] = bytes.fromhex(u32(count_first))
    owner[OWNER_COUNT_SECOND:OWNER_COUNT_SECOND + 4] = bytes.fromhex(u32(count_second))
    context = bytearray(0xd288)
    context[CONTEXT_FLAGS:CONTEXT_FLAGS + 8] = bytes.fromhex(u64(flags))
    buffers = {
        'unused': {'size': 0x10},
        'holder': {'size': 0x240},
        'pair': {'size': 0x40},
        'obj_first': {'size': 0x10},
        'obj_second': {'size': 0x10},
        'vt_first': {'size': 0x40},
        'vt_second': {'size': 0x40},
        'slot': {'size': 0x10},
        'owner_ptr': {'size': 0x8},
        'owner': {'size': 0x970, 'bytes': bytes(owner).hex()},
        'context': {'size': 0xd288, 'bytes': bytes(context).hex()},
    }
    memory = [
        {'addr': HOLDER, 'pointer': 'holder'},
        {'addr': f'buf:holder+{PAIR_OFFSET:#x}', 'pointer': 'pair'},
        {'addr': f'buf:pair+{PAIR_FIRST:#x}', 'pointer': 'obj_first'},
        {'addr': f'buf:pair+{PAIR_SECOND:#x}', 'pointer': 'obj_second'},
        {'addr': 'buf:obj_first+0', 'pointer': 'vt_first'},
        {'addr': 'buf:obj_second+0', 'pointer': 'vt_second'},
        {'addr': f'buf:vt_first+{PROBE_SLOT:#x}', 'guest': FIRST_PROBE},
        {'addr': f'buf:vt_second+{PROBE_SLOT:#x}', 'guest': SECOND_PROBE},
        {'addr': f'buf:slot+{0x08:#x}', 'pointer': 'owner_ptr'},
        {'addr': 'buf:owner_ptr+0', 'pointer': 'owner'},
        {'addr': f'buf:owner+{0x08:#x}', 'pointer': 'context'},
    ]
    stubs = [
        {'address': FIRST_PROBE, 'argc': 1, 'ret': hex(values[0] & MASK64)},
        {'address': FIRST_PROBE, 'argc': 1, 'ret': hex(values[1] & MASK64)},
        {'address': SECOND_PROBE, 'argc': 1, 'ret': hex(values[2] & MASK64)},
    ]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:unused', 'rsi': 'buf:slot'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('counts_inside_bounds'),
    case('first_count_above_cap', count_first=0x100, count_second=0x30),
    case('second_count_below_floor', count_first=0x10, count_second=0x0),
    case('counts_at_bounds', count_first=0x29, count_second=0x2c),
    case('flags_clear_zero_values', flags=0, values=(0, 0, 0)),
    case('flags_already_set', flags=0xffffffffffffffff, count_first=0xffffffff, count_second=0xffffffff),
]


def main():
    """Write deterministic synthetic recordings to the requested directory."""
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
