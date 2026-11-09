#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for init_vtable_subobject at 0x013989a0, for tools/verify.py run.

usage: init_vtable_subobject_cases.py OUT_DIR

The holder is a 0x200-byte buffer that also holds the stack guard word at +0x1c0, so the guard
is read through the global pointer as the original does. The sub-object initializer is stubbed
and may write into its own sub-object only. A guard mismatch is not a fixture: the original
never returns from its stack check failure.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013989a0'
GUARD_POINTER = '0x057e3be0'
SUBOBJECT_INIT = '0x02d84b80'
GUARD_OFFSET = 0x1c0
SIZE = 0x200
MASK64 = (1 << 64) - 1
GARBAGE = {'rdi': 'buf:holder', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def u64(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, guard=0x0123456789abcdef, holder=None, sub_writes=None, registers=None):
    """One call: the holder bytes before the call, the guard word, and the initializer's writes."""
    holder = 'e7' * SIZE if holder is None else holder
    holder = holder[:GUARD_OFFSET * 2] + u64(guard) + holder[GUARD_OFFSET * 2 + 16:]
    stub = {'address': SUBOBJECT_INIT, 'argc': 2, 'argi': [0]}
    if sub_writes:
        stub['writes'] = sub_writes
    args = dict(GARBAGE if registers is None else registers)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': {'holder': {'size': SIZE, 'bytes': holder}},
            'memory': [{'addr': GUARD_POINTER, 'pointer': f'holder+0x{GUARD_OFFSET:x}'}],
            'imports': [], 'stubs': [stub]}


CASES = [
    case('fresh_holder'),
    case('holder_old_vtable_and_word', holder='c3' * SIZE),
    case('zero_guard_value', guard=0),
    case('all_ones_guard_value', guard=MASK64),
    case('zero_registers', registers={**{k: '0x0' for k in GARBAGE}, 'rdi': 'buf:holder'}),
    case('subobject_writes_its_own_bytes', sub_writes=[{'arg': 0, 'offset': 0, 'bytes': 'aa' * 16}]),
    case('subobject_writes_upper_bytes', sub_writes=[{'arg': 0, 'offset': 8, 'bytes': 'bb' * 8}]),
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
