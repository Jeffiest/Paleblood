#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic initializations for misc_init_flagged_payload_or_allocate (0x01888e60).

usage: init_flagged_payload_or_allocate_cases.py OUT_DIR

The object's first word is set to the release vtable at 0x05722670. The kind byte (low byte of the second
argument) is stored at +0x08, the size (fourth argument) at +0x18, and the payload word (third argument) at
+0x10 and +0x20. When the payload word is zero and a size is given, the shared allocator at 0x05940408 supplies
the payload through its allocate-default slot at +0x50 (a stub), and the flag at +0x09 is set. Covers a given
payload, a zero payload with and without a size, an allocator that returns null, and kind bits above the low
byte.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01888e60'
SHARED = '0x05940408'
ALLOCATE = '0x00400300'
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, kind=0x5a, payload=0, size=0, ret_null=False):
    """One initialization. The allocator stub runs only when the payload is zero and a size is given."""
    buffers = {
        'obj': {'size': 0x30, 'bytes': 'dd' * 0x30},
        'block': {'size': 0x40, 'bytes': 'ee' * 0x40},
        'alloc': {'size': 0x10},
        'alloc_vt': {'size': 0x80},
    }
    memory = [
        {'addr': SHARED, 'pointer': 'alloc'},
        {'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
        {'addr': 'buf:alloc_vt+0x50', 'guest': ALLOCATE},
    ]
    stubs = []
    if payload == 0 and size != 0:
        ret = '0x0' if ret_null else 'buf:block'
        stubs.append({'address': ALLOCATE, 'argc': 2, 'argi': [0, 1], 'ret': ret})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:obj', 'rsi': hex(0xabcd00000000 | (kind & 0xff)),
                     'rdx': hex(payload & MASK64), 'rcx': hex(size & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('given_payload_no_allocation', payload=0x7000, size=0x20),
    case('zero_payload_zero_size_no_allocation', payload=0, size=0),
    case('zero_payload_size_allocates', payload=0, size=0x40),
    case('zero_payload_size_allocator_returns_null', payload=0, size=0x40, ret_null=True),
    case('kind_high_byte_ignored', kind=0xff, payload=0x1234, size=0x10),
    case('payload_all_ones_size_given', payload=MASK64, size=0x18),
    case('kind_zero_size_one', kind=0, payload=0, size=1),
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
