#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic objects for misc_set_vtable_after_call (0x018881b0): the routine receives the object
unchanged, may write its own bytes, and the function then stores the static vtable address in the
object's first word. Covers a fresh object, an old vtable pointer, zero and all-ones words, and a
routine that writes past the vtable word. The second, third and fourth arguments are passed on to the
routine and compared there.

usage: set_vtable_after_call_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x018881b0'
ROUTINE = '0x01884e90'
SIZE = 0x10
MASK64 = (1 << 64) - 1
FURTHER = {'rsi': '0x1111111111111111', 'rdx': '0x2222222222222222', 'rcx': '0x3333333333333333'}


def case(cid, obj_bytes='e7' * SIZE, writes=None, registers=None):
    """One call on a 16-byte object; the routine sees it as its first argument and may write it, and it
    receives the second, third and fourth arguments as the caller set them."""
    stub = {'address': ROUTINE, 'argc': 4}
    if writes:
        stub['writes'] = writes
    args = dict(FURTHER, rdi='buf:object') if registers is None else registers
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': {'object': {'size': SIZE, 'bytes': obj_bytes}}, 'memory': [],
            'stubs': [stub], 'imports': []}


CASES = [
    case('fresh_object'),
    case('old_vtable_pointer', obj_bytes='c3' * SIZE),
    case('zero_object', obj_bytes='00' * SIZE),
    case('all_ones_object', obj_bytes='ff' * SIZE),
    case('routine_writes_upper_word', writes=[{'arg': 0, 'offset': 8, 'bytes': 'aa' * 8}]),
    case('routine_writes_vtable_word', writes=[{'arg': 0, 'offset': 0, 'bytes': 'bb' * 8}]),
    case('zero_registers', registers={'rdi': 'buf:object', 'rsi': '0x0', 'rdx': '0x0', 'rcx': '0x0',
                                      'r8': '0x0', 'r9': '0x0'}),
    case('all_ones_registers', registers={'rdi': 'buf:object', 'rsi': hex(MASK64), 'rdx': hex(MASK64),
                                          'rcx': hex(MASK64)}),
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
