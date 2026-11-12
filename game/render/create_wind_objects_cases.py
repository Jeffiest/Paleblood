#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic object creations for bb_render_create_wind_objects (0x027134e0): both blocks taken, a refused
first block, a refused second block, and counts whose upper register bits are ignored.

usage: create_wind_objects_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x027134e0'
ALLOCATE = '0x00400020'          # a real game entry the allocator's allocate slot points at
INITIALIZE_FIRST = '0x01313be0'
BIND_FIRST = '0x01313e50'
INITIALIZE_SECOND = '0x026fb190'
BIND_SECOND = '0x026fb540'
MASK64 = (1 << 64) - 1


def case(cid, first, second, first_ok=True, second_ok=True):
    """One call: the allocator's allocate slot returns each block or refuses it, in call order."""
    buffers = {'alloc': {'size': 8},
               'alloc_vt': {'size': 0x80},
               'first_block': {'size': 0x110, 'bytes': 'b4' * 0x110},
               'second_block': {'size': 0x1a0, 'bytes': 'c5' * 0x1a0}}
    memory = [{'addr': 'buf:alloc+0', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc_vt+88', 'guest': ALLOCATE}]
    stubs = [{'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2],
              'ret': 'buf:first_block' if first_ok else 0}]
    if first_ok:
        stubs.append({'address': INITIALIZE_FIRST, 'argc': 1, 'argi': [0]})
        stubs.append({'address': BIND_FIRST, 'argc': 4, 'argi': [0, 1, 2, 3]})
        stubs.append({'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2],
                      'ret': 'buf:second_block' if second_ok else 0})
        if second_ok:
            stubs.append({'address': INITIALIZE_SECOND, 'argc': 1, 'argi': [0]})
        stubs.append({'address': BIND_SECOND, 'argc': 2, 'argi': [0, 1]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:alloc', 'rsi': hex(first & MASK64), 'rdx': hex(second & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('both_blocks_taken', first=1, second=2),
    case('first_block_refused', first=1, second=2, first_ok=False),
    case('second_block_refused', first=3, second=4, second_ok=False),
    case('counts_upper_bits_ignored', first=0xfffffff000000007, second=0xabcdef0100000009),
    case('zero_counts', first=0, second=0),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    destination = Path(sys.argv[1])
    destination.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (destination / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {destination}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
