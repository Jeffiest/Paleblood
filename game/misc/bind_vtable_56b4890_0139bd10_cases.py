#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for bind_vtable at 0x0139b530, for tools/verify.py run.

usage: bind_vtable_56b4890_cases.py OUT_DIR

The published pointer at 0x05ac59c0 and the 8-byte flag at 0x05ac59c8 are given explicit old
values. The flag is tested as its low byte only, so nonzero upper bits with a zero low byte
still publish, and the flag is written as a full qword.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0139bd10'
POINTER = '0x05ac59c0'
FLAG = '0x05ac59c8'
MASK64 = (1 << 64) - 1
GARBAGE = {'rdi': '0x5a5a5a5a5a5a5a5a', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def word(value):
    """Encode the complete eight-byte value stored at a fixed guest slot."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, flag=0, old_pointer=0xe5e5e5e5e5e5e5e5, registers=None):
    """One call with the given old flag qword and published pointer."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': dict(GARBAGE if registers is None else registers),
            'buffers': {}, 'imports': [], 'stubs': [],
            'memory': [{'addr': POINTER, 'bytes': word(old_pointer)},
                       {'addr': FLAG, 'bytes': word(flag)}]}


CASES = [
    case('unbound_publishes_pointer_and_flag'),
    case('unbound_zero_registers', registers={k: '0x0' for k in GARBAGE}),
    case('unbound_overwrites_old_pointer', old_pointer=0x0),
    case('unbound_overwrites_null_free_pointer', old_pointer=0x0123456789abcdef),
    case('bound_flag_one_is_skipped', flag=1),
    case('bound_flag_one_keeps_pointer', flag=1, old_pointer=0x7777777777777777),
    case('bound_flag_low_byte_ff_skipped', flag=0xff),
    case('bound_flag_high_bit_only_skipped', flag=0x80),
    case('bound_flag_full_ones_skipped', flag=MASK64),
    case('low_byte_zero_upper_bits_publish', flag=0x100),
    case('low_byte_zero_high_bit_publishes', flag=0x8000000000000000),
    case('low_byte_zero_upper_ones_publish', flag=0xffffffffffffff00),
    case('low_byte_one_upper_bits_skipped', flag=0x0123456789abcd01),
    case('low_byte_two_is_bound', flag=2),
]


def main():
    """Write deterministic fixtures to the requested directory."""
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
