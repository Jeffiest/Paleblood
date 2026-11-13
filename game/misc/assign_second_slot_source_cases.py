#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_assign_second_slot_source (0x013ba4c0), for tools/verify.py run.

usage: assign_second_slot_source_cases.py OUT_DIR

The pair holds the second slot array pointer at +0x18 and its count at +0x2c; each slot is 0x4b0 bytes.
An index at or past the count first calls the growth stub, with the holder, the array and count fields,
the rounded capacity and a zero flag. The assignment stub then receives the slot and the source and
returns a distinct value. Covers an index inside the count, and an index at the count and past it.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013ba4c0'
GROW = '0x013b9950'
ASSIGN = '0x01447210'
SLOT_SIZE = 0x4b0
SLOTS = 4


def u32(value):
    """Encode a four-byte value."""
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, count, index, ret):
    """One call with the array count and the index; the growth stub runs when the index is not inside the count."""
    total = SLOT_SIZE * SLOTS
    buffers = {'pair': {'size': 0x30, 'bytes': '00' * 0x30},
               'slots': {'size': total, 'bytes': '5a' * total},
               'src': {'size': 0x10, 'bytes': '3c' * 0x10}}
    memory = [{'addr': 'buf:pair+24', 'pointer': 'slots'},
              {'addr': 'buf:pair+44', 'bytes': u32(count)}]
    stubs = []
    if count <= index:
        stubs.append({'address': GROW, 'argc': 5, 'argi': [0, 1, 2, 3, 4]})
    stubs.append({'address': ASSIGN, 'argc': 2, 'argi': [0, 1], 'ret': ret})
    args = {'rdi': 'buf:pair', 'rsi': hex(index), 'rdx': 'buf:src'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('index_inside_count', count=3, index=1, ret=0x8001),
    case('index_first_inside', count=3, index=0, ret=0x8002),
    case('index_at_count', count=2, index=2, ret=0x8003),
    case('index_past_empty', count=0, index=3, ret=0x8004),
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
