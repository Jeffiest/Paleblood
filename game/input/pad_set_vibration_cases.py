#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for input_pad_set_vibration (0x02a9c790), for tools/verify.py run.

usage: pad_set_vibration_cases.py OUT_DIR

Synthetic: scePadSetVibration's result is scripted, not recorded in the game. Covers each
enable-byte value that counts as enabled (any nonzero one), the handle's sign and extremes, both
motor speeds with register bits above the bytes that are read, success and failure results (only
the low 32 bits count), and the stack guard the original checks.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02a9c790'
SET_VIBRATION = '0x02fbf528'
GUARD_SLOT = '0x057e3be0'
MASK64 = (1 << 64) - 1


def word32(value):
    return struct.pack('<I', value & 0xffffffff).hex()


def word64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, enable=0x01, handle=0x1234, rsi=0x11, rdx=0x22, result=0):
    owner = 'a5' * 8 + word32(handle) + f'{enable:02x}' + 'c3' * 3
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i8',
        'args': {'rdi': 'buf:owner', 'rsi': hex(rsi & MASK64), 'rdx': hex(rdx & MASK64)},
        'buffers': {
            'owner': {'size': 16, 'bytes': owner},
            'guard': {'size': 16, 'bytes': 'b7' * 8 + word64(0x1122334455667788)},
        },
        'memory': [{'addr': GUARD_SLOT, 'pointer': 'guard+0x8'}],
        'imports': [],
        'stubs': [{'address': SET_VIBRATION, 'argc': 2, 'ret': hex(result & 0xffffffff),
                   'argmem': [{'arg': 1, 'size': 2}]}],
    }


CASES = [
    case('enable_zero', enable=0x00),
    case('enable_zero_with_other_bits', enable=0x00, handle=0x7fffffff, rsi=0x80, rdx=0xff),
    case('enable_bit_0', enable=0x01),
    case('enable_bit_1', enable=0x02),
    case('enable_bit_7', enable=0x80),
    case('enable_ff', enable=0xff),
    case('success', result=0),
    case('failure_minus_one', result=0xffffffff),
    case('failure_one', result=0x1),
    case('failure_orbis_already_opened', result=0x80920004),
    case('failure_int_min', result=0x80000000),
    case('result_upper_bits_only', result=0x100000000),
    case('result_low_nonzero_upper_bits', result=0x0000000100000002),
    case('handle_zero', handle=0x0),
    case('handle_minus_one', handle=0xffffffff),
    case('handle_int_max', handle=0x7fffffff),
    case('motors_zero', rsi=0x0, rdx=0x0),
    case('motors_max', rsi=0xff, rdx=0xff),
    case('large_only', rsi=0x0, rdx=0x01),
    case('small_only', rsi=0x01, rdx=0x0),
    case('motors_distinct', rsi=0x80, rdx=0x7f),
    case('upper_register_bits_ignored', rsi=0xdeadbeef00000011, rdx=0xcafebabe00000022),
    case('bits_above_small_byte_ignored', rsi=0x1ff, rdx=0x2ff),
    case('enable_byte_ignores_upper_bits', enable=0x01, rsi=0xffffffffffffff40, rdx=0x0),
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
