#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic arguments for the prepare-and-forward (0x0040b680): a null, a small and a full-width argument,
and the forward method's result passed back unchanged, including bits above the low byte."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040b680'
PREPARE = '0x0040b6b0'
GLOBAL = '0x057e7320'
FORWARD = '0x00500700'
MASK64 = (1 << 64) - 1
OBJECT_SIZE = 0x08
VTABLE_SIZE = 0x70
TARGET_SIZE = 0x40


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, target=None, forward_ret=0x0, target_is_buffer=True):
    """The shared object's forward method returns `forward_ret`; the argument is a buffer or the given value."""
    buffers = {
        'object': {'size': OBJECT_SIZE, 'bytes': '4f' * OBJECT_SIZE},
        'vtable': {'size': VTABLE_SIZE, 'bytes': '5a' * VTABLE_SIZE},
        'target': {'size': TARGET_SIZE, 'bytes': '7b' * TARGET_SIZE},
    }
    memory = [
        {'addr': GLOBAL, 'pointer': 'object'},
        {'addr': 'buf:object+0x0', 'pointer': 'vtable'},
        {'addr': 'buf:vtable+0x68', 'guest': FORWARD},
    ]
    if target is None:
        rdi = 'buf:target'
    else:
        rdi = hex(target & MASK64)
    stubs = [
        {'address': PREPARE, 'argc': 1, 'ret': '0x0'},
        {'address': FORWARD, 'argc': 2, 'ret': hex(forward_ret & MASK64)},
    ]
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i64',
        'args': {'rdi': rdi},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('null_target_forwarded', target=0x0, forward_ret=0x55),
    case('buffer_target_forwarded', forward_ret=0x1234),
    case('small_target_value', target=0x10, forward_ret=0x0),
    case('full_width_target_value', target=0xffffffffffffffff, forward_ret=0x8000000000000001),
    case('upper_bits_target_value', target=0xdeadbeef00000011, forward_ret=0xcafebabe00000000),
    case('forward_result_zero', forward_ret=0x0),
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
