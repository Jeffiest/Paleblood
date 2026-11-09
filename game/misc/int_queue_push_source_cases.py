#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pushes of a source's integer onto an integer queue (address 0x02b3ac20).

usage: int_queue_push_source_cases.py OUT_DIR

The source's read slot (0x18) returns the integer; the cell allocation (0x0247c4e0) returns a
buffer cell, or null when it fails; the list routine (0x02b38c10) receives the list at +0x38 and the
address of the pointer. Covers a positive, a negative and a zero value, a read whose upper bits are
set (only the low 32 bits are stored), a failed allocation that pushes null, and a non-zero hint.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3ac20'
READ = '0x00400280'
ALLOC = '0x0247c4e0'
PUSH = '0x02b38c10'
QUEUE_BYTES = 0x50
CELL_BYTES = 4
MASK64 = (1 << 64) - 1


def case(cid, value, cell=True, hint=0x1234):
    """One push: the source is read once, one allocation is made, and the list routine is called."""
    buffers = {
        'queue': {'size': QUEUE_BYTES, 'bytes': '4c' * QUEUE_BYTES},
        'source': {'size': 8, 'bytes': '00' * 8},
        'source_vt': {'size': 0x20, 'bytes': '00' * 0x20},
        'cell': {'size': CELL_BYTES, 'bytes': 'dd' * CELL_BYTES},
    }
    memory = [
        {'addr': 'buf:queue+0x10', 'bytes': f'{hint & MASK64:016x}'},
        {'addr': 'buf:source', 'pointer': 'source_vt'},
        {'addr': 'buf:source_vt+0x18', 'guest': READ},
    ]
    stubs = [
        {'address': READ, 'argc': 1, 'argi': [0], 'ret': hex(value & MASK64)},
        {'address': ALLOC, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:cell' if cell else '0x0'},
        {'address': PUSH, 'argc': 2, 'argi': [0], 'argmem': [{'arg': 1, 'size': 8}]},
    ]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:queue', 'rsi': 'buf:source'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('push_positive_value', 0x12345678),
    case('push_negative_value', 0x80000000),
    case('push_zero_value', 0),
    case('upper_bits_of_read_ignored', 0xffffffff00000005),
    case('failed_allocation_pushes_null', 0x55, cell=False),
    case('zero_hint_passed_through', 0x7, hint=0),
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
