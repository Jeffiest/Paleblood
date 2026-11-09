#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic bind records for misc_bind_counted_handle (0x01e47d50): a counted object whose gate
(high half) is closed or open, with low counts of zero, one, two and wrapping values, the
destruction on a last count, and the target released after it.

The retry branch of the locked compare-exchange loop is declared unreachable: this harness has one
thread, so no other thread can change the counted word between the read and the exchange."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e47d50'
FIRST_CALL = '0x00f86b00'
BIND_CALL = '0x01c013e0'
DESTROY_SLOT = '0x00400040'
BOUND_SLOT = '0x00400080'
MASK64 = (1 << 64) - 1
MASK32 = (1 << 32) - 1

UNREACHABLE = {'0x01e47dbd': ('taken', 'compare-exchange retry: no other thread can change the value')}


def u32(value):
    """Four bytes of a 32-bit value, little endian."""
    return struct.pack('<I', value & MASK32).hex()


def case(cid, count=0x10001, first=0x1111, second=0x2222, key=0x3333):
    """One bind: the counted object holds `count` in its packed word; the target's release is a stub.
    The destroy stub runs only when the low count reaches zero."""
    buffers = {'record': {'size': 0x18, 'bytes': 'aa' * 0x18},
               'counted': {'size': 0x10, 'bytes': '00' * 0x10},
               'counted_vt': {'size': 0x28, 'bytes': '00' * 0x28},
               'bound': {'size': 0x8, 'bytes': '00' * 8},
               'bound_vt': {'size': 0x38, 'bytes': '00' * 0x38}}
    memory = [
        {'addr': 'buf:counted', 'pointer': 'counted_vt'},
        {'addr': 'buf:counted+8', 'bytes': u32(count)},
        {'addr': f'buf:counted_vt+32', 'guest': DESTROY_SLOT},
        {'addr': 'buf:bound', 'pointer': 'bound_vt'},
        {'addr': 'buf:bound_vt+48', 'guest': BOUND_SLOT},
    ]
    low = count & 0xffff
    gate = (count & MASK32) >= 0x10000
    stubs = [
        {'address': FIRST_CALL, 'argc': 2, 'ret': 'buf:counted'},
        {'address': BIND_CALL, 'argc': 4, 'ret': 'buf:bound'},
    ]
    if gate and (low - 1) & 0xffff == 0:
        stubs.append({'address': DESTROY_SLOT, 'argc': 1})
    stubs.append({'address': BOUND_SLOT, 'argc': 2})
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i8',
        'args': {'rdi': 'buf:record', 'rsi': hex(first & MASK64),
                 'rdx': hex(second & MASK64), 'rcx': hex(key & MASK64)},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('gate_closed_low_all_ones', count=0x0000ffff),
    case('gate_closed_zero', count=0),
    case('gate_closed_low_one', count=0x00000001),
    case('gate_boundary_low_zero_wraps', count=0x10000),
    case('gate_open_low_one_destroys', count=0x10001),
    case('gate_open_low_two_keeps_object', count=0x10002),
    case('gate_open_low_zero_wraps_to_ffff', count=0x20000),
    case('gate_high_bit_low_one_destroys', count=0x80010001),
    case('gate_high_bit_low_zero_wraps', count=0x80000000),
    case('gate_open_all_bits', count=MASK32),
    case('gate_open_low_all_ones_two_steps', count=0x1ffff),
    case('zero_arguments', count=0x10001, first=0, second=0, key=0),
    case('all_ones_arguments', count=0x10001, first=MASK64, second=MASK64, key=MASK64),
    case('gate_closed_key_and_arguments_all_ones', count=0x1234, first=MASK64, second=MASK64,
         key=MASK64),
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
