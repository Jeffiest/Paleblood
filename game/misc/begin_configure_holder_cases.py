#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_begin_configure_holder (0x0040fd20), for tools/verify.py run.

usage: begin_configure_holder_cases.py OUT_DIR

The entry stores the holder vtable (0x0553c230) in the holder and tail-jumps to 0x0040fd40 with the
same arguments; the tail target's result is the function's result. The target is scripted as a stub
that returns the value each case gives.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0040fd20'
TAIL_TARGET = '0x0040fd40'

FIRST_RESULT = 0x0000000000abcdef
SECOND_RESULT = 0xfeedfacecafebeef


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def u64(v):
    return struct.pack('<Q', v & ((1 << 64) - 1)).hex()


def case(cid, flags, result):
    b = {'holder': {'size': 0x30}, 'args': {'size': 0x20}}
    m = [{'addr': 'buf:holder', 'bytes': '00' * 0x30},
         {'addr': 'buf:args', 'bytes': u32(flags) + '00' * 4 + u64(0x5555) + u64(0x6666)}]
    stubs = [{'address': TAIL_TARGET, 'argc': 2, 'argi': [0, 1], 'ret': hex(result)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder', 'rsi': 'buf:args'}, 'buffers': b, 'memory': m, 'stubs': stubs,
            'imports': []}


CASES = [
    case('tail_result_returned', flags=0x3, result=FIRST_RESULT),
    case('tail_result_high_bits', flags=0x10000005, result=SECOND_RESULT),
]


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
