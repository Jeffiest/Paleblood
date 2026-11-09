#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot checks for bb_misc_slot_matches_unset (address 0x02b3abc0).

usage: slot_matches_unset_cases.py OUT_DIR

The slot's kind word selects a float or an integer number; the number must equal the unset value
before the reference (flag word at +0x10) and then the child (virtual slot 0x40) are consulted.
Covers the float kinds (NaN, out of range, negative, small and a value that truncates), the integer
kind with the unset value and with another value, an unknown kind, a set reference with high bits,
a clear reference with a child that accepts or refuses (its result is a byte with high bits), and no
reference and no child.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3abc0'
CHECK = '0x00400240'
SLOT_BYTES = 0xd4
UNSET_BITS = 0x7fffffff
MASK32 = (1 << 32) - 1


def float_bits(value):
    """The 32-bit pattern of a float."""
    return struct.unpack('<I', struct.pack('<f', value))[0]


def case(cid, kind, bits, ref=None, child=None):
    """One check. ref is the flag word of a reference, or None when there is none; child is the
    byte the child's check returns, or None when there is no child."""
    buffers = {'slot': {'size': SLOT_BYTES, 'bytes': 'a1' * SLOT_BYTES}}
    memory = [{'addr': 'buf:slot+0xd0', 'bytes': struct.pack('<i', kind).hex()},
              {'addr': 'buf:slot+0xc8', 'bytes': struct.pack('<I', bits & MASK32).hex()}]
    stubs = []
    if ref is None:
        memory.append({'addr': 'buf:slot+0x20', 'bytes': '00' * 8})
    else:
        buffers['ref'] = {'size': 0x14, 'bytes': '00' * 0x14}
        buffers['ref']['bytes'] = ('00' * 0x10) + struct.pack('<I', ref & MASK32).hex()
        memory.append({'addr': 'buf:slot+0x20', 'pointer': 'ref'})
    if child is None:
        memory.append({'addr': 'buf:slot+0x90', 'bytes': '00' * 8})
    else:
        buffers['child'] = {'size': 8, 'bytes': '00' * 8}
        buffers['child_vt'] = {'size': 0x48, 'bytes': '00' * 0x48}
        memory += [{'addr': 'buf:slot+0x90', 'pointer': 'child'},
                   {'addr': 'buf:child', 'pointer': 'child_vt'},
                   {'addr': 'buf:child_vt+0x40', 'guest': CHECK}]
        stubs.append({'address': CHECK, 'argc': 1, 'argi': [0], 'ret': hex(child)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:slot'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('integer_unset_flag_set', 2, UNSET_BITS, ref=1),
    case('integer_unset_flag_high_bits', 2, UNSET_BITS, ref=0x100),
    case('integer_unset_flag_clear_child_accepts', 2, UNSET_BITS, ref=0, child=0x101),
    case('integer_unset_flag_clear_child_refuses', 2, UNSET_BITS, ref=0, child=0x100),
    case('integer_unset_no_reference_child_accepts', 2, UNSET_BITS, child=0x1),
    case('integer_unset_no_reference_no_child', 2, UNSET_BITS),
    case('integer_other_value', 2, 0x12345678, ref=1),
    case('integer_negative_one', 2, MASK32, ref=1),
    case('float_nan', 1, float_bits(float('nan')), ref=1),
    case('float_above_range', 1, float_bits(3.0e9), ref=1),
    case('float_below_range', 1, float_bits(-3.0e9), ref=1),
    case('float_negative_truncates', 1, float_bits(-1.75), ref=1),
    case('float_small_truncates_to_zero', 1, float_bits(0.5), ref=1),
    case('float_large_truncates_below_unset', 1, float_bits(2147483520.0), ref=1),
    case('unknown_kind_zero', 0, UNSET_BITS, ref=1),
    case('unknown_kind_three', 3, UNSET_BITS, ref=1, child=0x101),
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
