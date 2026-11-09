#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for misc_release_resource_holder (0x01e49400): a counted object with its gate
closed or open and low counts of zero, one, two and wrapping values; a block; two buffers; and a
first call that clears the block before it is read.

The retry branch of the locked compare-exchange loop is declared unreachable: this harness has one
thread, so no other thread can change the counted word between the read and the exchange."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e49400'
FIRST = '0x01e49ab0'
BLOCK_RELEASE = '0x01c00d20'
BUFFER_DESTROY = '0x0223fb80'
BUFFER_FREE = '0x0223f750'
COUNTED_DESTROY = '0x00400040'
HOLDER_SIZE = 0x230
BLOCK_OFFSET = 0x20
BUFFER_218_OFFSET = 0x218
BUFFER_220_OFFSET = 0x220
COUNTED_OFFSET = 0x228
MASK32 = (1 << 32) - 1

UNREACHABLE = {'0x01e4944d': ('taken', 'compare-exchange retry: no other thread can change the value')}


def u32(value):
    """Four bytes of a 32-bit value, little endian."""
    return struct.pack('<I', value & MASK32).hex()


def case(cid, counted=None, block=False, buffer_220=False, buffer_218=False, first_clears_block=False):
    """One teardown. `counted` is the packed count word, or None for no counted object."""
    buffers = {'holder': {'size': HOLDER_SIZE, 'bytes': 'aa' * HOLDER_SIZE},
               'block': {'size': 0x10, 'bytes': '00' * 0x10},
               'buffer_a': {'size': 0x10, 'bytes': '00' * 0x10},
               'buffer_b': {'size': 0x10, 'bytes': '00' * 0x10},
               'counted': {'size': 0x10, 'bytes': '00' * 0x10},
               'counted_vt': {'size': 0x28, 'bytes': '00' * 0x28}}
    memory = []
    if block:
        memory.append({'addr': f'buf:holder+{BLOCK_OFFSET}', 'pointer': 'block'})
    else:
        memory.append({'addr': f'buf:holder+{BLOCK_OFFSET}', 'bytes': '00' * 8})
    for offset, name, present in ((BUFFER_218_OFFSET, 'buffer_b', buffer_218),
                                  (BUFFER_220_OFFSET, 'buffer_a', buffer_220)):
        memory.append({'addr': f'buf:holder+{offset}', 'pointer': name} if present
                      else {'addr': f'buf:holder+{offset}', 'bytes': '00' * 8})
    if counted is None:
        memory.append({'addr': f'buf:holder+{COUNTED_OFFSET}', 'bytes': '00' * 8})
    else:
        memory += [{'addr': f'buf:holder+{COUNTED_OFFSET}', 'pointer': 'counted'},
                   {'addr': 'buf:counted', 'pointer': 'counted_vt'},
                   {'addr': 'buf:counted+8', 'bytes': u32(counted)},
                   {'addr': 'buf:counted_vt+32', 'guest': COUNTED_DESTROY}]

    first = {'address': FIRST, 'argc': 1, 'argmem': [{'arg': 0, 'size': HOLDER_SIZE}]}
    if first_clears_block:
        first['writes'] = [{'arg': 0, 'offset': BLOCK_OFFSET, 'bytes': '00' * 8}]
    stubs = [first]
    if counted is not None and counted & 0xffffffff >= 0x10000:
        if (counted - 1) & 0xffff == 0:
            stubs.append({'address': COUNTED_DESTROY, 'argc': 1})
    if block and not first_clears_block:
        stubs.append({'address': BLOCK_RELEASE, 'argc': 1})
    for present in (buffer_220, buffer_218):
        if present:
            stubs.append({'address': BUFFER_DESTROY, 'argc': 1})
            stubs.append({'address': BUFFER_FREE, 'argc': 1})
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': {'rdi': 'buf:holder'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('nothing_held'),
    case('counted_gate_closed_low_all_ones', counted=0x0000ffff),
    case('counted_gate_closed_zero', counted=0),
    case('counted_gate_boundary_wraps', counted=0x10000),
    case('counted_gate_open_low_one_destroys', counted=0x10001),
    case('counted_gate_open_low_two_keeps', counted=0x10002),
    case('counted_gate_open_low_zero_wraps', counted=0x20000),
    case('counted_gate_high_bit_low_one_destroys', counted=0x80010001),
    case('block_only', block=True),
    case('buffers_only', buffer_220=True, buffer_218=True),
    case('first_call_clears_block', block=True, first_clears_block=True),
    case('counted_destroy_with_block_and_buffers', counted=0x10001, block=True,
         buffer_220=True, buffer_218=True),
    case('counted_kept_with_block_and_one_buffer', counted=0x10002, block=True, buffer_218=True),
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
