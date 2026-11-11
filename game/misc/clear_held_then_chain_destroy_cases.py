#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic record teardowns for bb_misc_clear_held_then_chain_destroy (0x0188e4d0).

usage: clear_held_then_chain_destroy_cases.py OUT_DIR

The record's vtable word is replaced by the record vtable at 0x057b1fb0, the held pointer at +0x10 is passed
to the release call (0x02450560) and cleared when it is set, and the base destructor (0x013e5c40) returns the
result. Covers a record with no held pointer, one with a held pointer, and results of zero and all ones.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0188e4d0'
RELEASE = '0x02450560'
BASE_DESTROY = '0x013e5c40'
MASK64 = (1 << 64) - 1
RECORD_SIZE = 0x18


def case(cid, held, base_result):
    """One teardown. held says whether the record holds a pointer; base_result is what the base destructor returns."""
    buffers = {'record': {'size': RECORD_SIZE, 'bytes': 'ee' * RECORD_SIZE}}
    memory = []
    stubs = []
    if held:
        buffers['held'] = {'size': 0x10, 'bytes': '33' * 0x10}
        memory.append({'addr': 'buf:record+16', 'pointer': 'held'})
        stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0]})
    else:
        memory.append({'addr': 'buf:record+16', 'bytes': '00' * 8})
    stubs.append({'address': BASE_DESTROY, 'argc': 1, 'argi': [0], 'ret': base_result & MASK64})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:record'},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_held_pointer', held=False, base_result=0x66),
    case('held_pointer_released', held=True, base_result=0x1122334455667788),
    case('held_pointer_result_zero', held=True, base_result=0),
    case('no_held_result_all_ones', held=False, base_result=MASK64),
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
