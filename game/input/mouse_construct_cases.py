#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for input_mouse_construct (0x02a8c210), for tools/verify.py run.

usage: mouse_construct_cases.py OUT_DIR

Synthetic: the base constructor, libSceMouse's calls and the object's virtual method are scripted
stubs, not game recordings. The virtual method's target is a stand-in address written into the
image's vtable slot (0x056b7e00), the same on both sides. Covers each of the three setup steps
failing and succeeding (only the low 32 bits of the sysmodule and init results count, and only
the low byte of the method's result), the handle slot cleared on failure, a method that writes
the object, and a null owner.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02a8c210'
BASE = '0x02a8d2b0'
SYSMODULE_LOAD = '0x02fbf448'
MOUSE_INIT = '0x02fbf458'
METHOD_SLOT = '0x056b7e00'
METHOD_TARGET = '0x02a8c420'
GUARD_SLOT = '0x057e3be0'
OBJECT_SIZE = 0x178
MASK64 = (1 << 64) - 1


def word64(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, sysmodule=0, init=0, method=1, owner='buf:owner', method_writes=None, rsi=0x4):
    method_stub = {'address': METHOD_TARGET, 'argc': 1, 'ret': hex(method & MASK64)}
    if method_writes is not None:
        method_stub['writes'] = [{'arg': 0, 'offset': 0x168, 'bytes': method_writes, 'size': 8}]
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': {'rdi': 'buf:self', 'rsi': hex(rsi & MASK64), 'rdx': owner},
        'buffers': {
            'self': {'size': OBJECT_SIZE, 'bytes': 'a5' * OBJECT_SIZE},
            'owner': {'size': 16, 'bytes': 'c3' * 16},
            'guard': {'size': 16, 'bytes': 'b7' * 8 + word64(0x1122334455667788)},
        },
        'memory': [
            {'addr': GUARD_SLOT, 'pointer': 'guard+0x8'},
            {'addr': METHOD_SLOT, 'guest': METHOD_TARGET},
        ],
        'imports': [],
        'stubs': [
            {'address': BASE, 'argc': 2},
            {'address': SYSMODULE_LOAD, 'argc': 1, 'ret': hex(sysmodule & 0xffffffff)},
            {'address': MOUSE_INIT, 'argc': 0, 'ret': hex(init & 0xffffffff)},
            method_stub,
        ],
    }


CASES = [
    case('set_up', method=1),
    case('method_result_zero', method=0),
    case('method_low_byte_zero', method=0x100),
    case('method_high_byte_only', method=0xff00),
    case('method_low_byte_one_upper_bits', method=0x100000001),
    case('method_writes_slot_fails', method=0, method_writes='ff' * 8),
    case('method_writes_slot_succeeds', method=1, method_writes='ff' * 8),
    case('sysmodule_fails', sysmodule=0x80010001, init=0, method=1),
    case('sysmodule_minus_one', sysmodule=0xffffffff, method=1),
    case('sysmodule_upper_bits_only', sysmodule=0x100000000, method=1),
    case('init_fails', init=1, method=1),
    case('init_minus_one', init=0xffffffff, method=1),
    case('init_upper_bits_only', init=0x200000000, method=1),
    case('owner_null', owner='0x0', method=1),
    case('unused_second_argument', rsi=0xdeadbeefcafe0000, method=1),
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
