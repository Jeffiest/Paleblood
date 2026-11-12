#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic wind part takes for bb_render_create_wind_part (0x027135f0): a refused block, a block that is
initialised for a kind, and a kind whose upper register bits are ignored.

usage: create_wind_part_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x027135f0'
ALLOCATE = '0x00400020'          # a real game entry the allocator's allocate slot points at
INITIALIZE = '0x02716820'
BIND = '0x02716b40'
MASK64 = (1 << 64) - 1


def case(cid, kind, part_ok=True):
    """One call: the allocator's allocate slot returns the part buffer or refuses; the part's callees are stubs."""
    buffers = {'alloc': {'size': 8},
               'alloc_vt': {'size': 0x80},
               'part': {'size': 0x78, 'bytes': 'b4' * 0x78}}
    memory = [{'addr': 'buf:alloc+0', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc_vt+88', 'guest': ALLOCATE}]
    stubs = [{'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2],
              'ret': 'buf:part' if part_ok else 0}]
    if part_ok:
        stubs.append({'address': INITIALIZE, 'argc': 1, 'argi': [0]})
        stubs.append({'address': BIND, 'argc': 3, 'argi': [0, 1, 2]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:alloc', 'rsi': hex(kind & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('block_taken_part_initialised', kind=1),
    case('block_refused_reports_false', kind=1, part_ok=False),
    case('kind_zero', kind=0),
    case('kind_upper_register_bits_ignored', kind=0xfffffff000000005),
    case('kind_all_low_bits', kind=0xffffffff),
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
