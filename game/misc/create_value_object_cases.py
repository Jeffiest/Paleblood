#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for create_value_object at 0x02b4c1a0, for tools/verify.py run.

usage: create_value_object_cases.py OUT_DIR

The source record is a 0x480-byte buffer holding the selector, the flag, the two candidate words
and the allocation argument. The allocation returns a 0x78-byte buffer or zero; the base
initializer and the two sub-object initializers are stubbed.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b4c1a0'
ALLOCATE = '0x0247c4e0'
BASE_INIT = '0x02bb7990'
SUB_INIT = '0x02baa950'
SOURCE_SIZE = 0x480
OBJECT_SIZE = 0x78
MASK64 = (1 << 64) - 1


def u64(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def source_bytes(selector, flag, field118, field210, alloc_arg):
    """The source record with its selector, flag, candidate words and allocation argument."""
    data = bytearray(b'\xe7' * SOURCE_SIZE)
    data[0x45a] = selector
    data[0x468] = flag
    struct.pack_into('<Q', data, 0x118, field118 & MASK64)
    struct.pack_into('<Q', data, 0x210, field210 & MASK64)
    struct.pack_into('<Q', data, 0x460, alloc_arg & MASK64)
    return data.hex()


def case(cid, selector=0, flag=0, field118=0x1111222233334444, field210=0x5555666677778888,
         alloc_arg=0x0123456789abcdef, created=True):
    """One call: the allocation returns the object buffer (or zero), and both sub-objects are set
    from the candidate word the selector chooses."""
    stubs = [{'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2],
              'ret': 'buf:object' if created else 0}]
    if created:
        stubs.append({'address': BASE_INIT, 'argc': 1, 'argi': [0]})
        stubs.append({'address': SUB_INIT, 'argc': 2, 'argi': [0, 1]})
        stubs.append({'address': SUB_INIT, 'argc': 2, 'argi': [0, 1]})
    args = {'rdi': '0x1111111111111111', 'rsi': 'buf:source'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': {'source': {'size': SOURCE_SIZE,
                                   'bytes': source_bytes(selector, flag, field118, field210, alloc_arg)},
                        'object': {'size': OBJECT_SIZE, 'bytes': 'ee' * OBJECT_SIZE}},
            'memory': [], 'imports': [], 'stubs': stubs}


CASES = [
    case('allocation_null_selector_set', selector=1, flag=1, created=False),
    case('allocation_null_selector_clear', selector=0, flag=0, created=False),
    case('selector_set_flag0', selector=1, flag=0),
    case('selector_set_flag1', selector=1, flag=1),
    case('selector_clear_flag0', selector=0, flag=0),
    case('selector_clear_flag1', selector=0, flag=1),
    case('selector_high_bits_clear', selector=0xfe, flag=0, field118=0, field210=0),
    case('selector_high_bits_set', selector=0xff, flag=1, field118=MASK64, alloc_arg=0),
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
