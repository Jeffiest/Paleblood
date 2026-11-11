#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic record teardowns for bb_misc_clear_held_then_chain_destroy (0x0188e4d0).

usage: clear_held_then_chain_destroy_cases.py OUT_DIR

The record's vtable word is replaced by the record vtable at 0x057b1fb0, the held pointer at +0x10 is passed
to the release call (0x02450560) and cleared when it is set. The chained base destructor (0x013e5c40) is a bare
return, so RAX as left is returned. Covers a record with no held pointer, one with a held pointer, and results
of zero and all ones.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0188e4d0'
RELEASE = '0x02450560'
BASE_DESTROY = '0x013e5c40'
MASK64 = (1 << 64) - 1
RECORD_SIZE = 0x18


def case(cid, held, release_result=0):
    """One teardown. held says whether the record holds a pointer; release_result is what the release call
    leaves in RAX, which the replacement returns. Without a held pointer RAX is the record vtable address."""
    buffers = {'record': {'size': RECORD_SIZE, 'bytes': 'ee' * RECORD_SIZE},
               'arg_state': {'size': 8}}
    memory = []
    stubs = []
    args = {'rdi': 'buf:record', 'rsi': '0x1111111111111111', 'rdx': '0x2222222222222222',
            'rcx': '0x3333333333333333', 'r8': '0x4444444444444444', 'r9': '0x5555555555555555'}
    if held:
        buffers['held'] = {'size': 0x10, 'bytes': '33' * 0x10}
        memory.append({'addr': 'buf:record+16', 'pointer': 'held'})
        stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0], 'ret': release_result & MASK64})
    else:
        memory.append({'addr': 'buf:record+16', 'bytes': '00' * 8})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': args,
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_held_pointer', held=False),
    case('held_pointer_released', held=True, release_result=0x1122334455667788),
    case('held_pointer_result_zero', held=True, release_result=0),
    case('held_pointer_result_all_ones', held=True, release_result=MASK64),
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
