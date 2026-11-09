#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for the forward (0x0040d270): an inner record with or without an object, and the
object's method or the fallback function receiving the two register arguments unchanged."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040d270'
FALLBACK = '0x0040f580'
METHOD = '0x00500500'
MASK64 = (1 << 64) - 1
HOLDER_SIZE = 0x18
INNER_SIZE = 0x28
OBJECT_SIZE = 0x08
VTABLE_SIZE = 0x18


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, object_set=True, first=0x11, second=0x22):
    """A holder whose inner record has an object (or none); the object's method table slot at +0x10
    points at the scripted METHOD address."""
    memory = [{'addr': 'buf:holder+0x10', 'pointer': 'inner'}]
    if object_set:
        memory.append({'addr': 'buf:inner+0x18', 'pointer': 'object'})
    else:
        memory.append({'addr': 'buf:inner+0x18', 'bytes': word(0)})
    memory.append({'addr': 'buf:object+0x0', 'pointer': 'vtable'})
    memory.append({'addr': 'buf:vtable+0x10', 'guest': METHOD})
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': {'rdi': 'buf:holder', 'rsi': hex(first & MASK64), 'rdx': hex(second & MASK64)},
        'buffers': {
            'holder': {'size': HOLDER_SIZE, 'bytes': '6c' * HOLDER_SIZE},
            'inner': {'size': INNER_SIZE, 'bytes': '4e' * INNER_SIZE},
            'object': {'size': OBJECT_SIZE, 'bytes': '3a' * OBJECT_SIZE},
            'vtable': {'size': VTABLE_SIZE, 'bytes': 'f1' * VTABLE_SIZE},
        },
        'memory': memory,
        'imports': [],
        'stubs': [
            {'address': METHOD, 'argc': 3, 'ret': '0x0'},
            {'address': FALLBACK, 'argc': 2, 'ret': '0x0'},
        ],
    }


CASES = [
    case('object_method_receives_both_arguments', object_set=True, first=0x11, second=0x22),
    case('object_method_zero_arguments', object_set=True, first=0, second=0),
    case('object_method_full_width_arguments', object_set=True, first=MASK64, second=0x8000000000000000),
    case('object_method_upper_bits_forwarded', object_set=True, first=0xdeadbeef00000011, second=0xcafebabe00000022),
    case('no_object_falls_back', object_set=False, first=0x11, second=0x22),
    case('no_object_zero_arguments', object_set=False, first=0, second=0),
    case('no_object_full_width_arguments', object_set=False, first=MASK64, second=MASK64 >> 1),
    case('no_object_upper_bits_forwarded', object_set=False, first=0xdeadbeef00000011, second=0x1ff),
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
