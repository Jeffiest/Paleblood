#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic buffer addresses for misc_inline_or_heap_buffer_6c60 (0x026f6c60), for tools/verify.py run.

usage: inline_or_heap_buffer_6c60_cases.py OUT_DIR

The object is 0x51a0 bytes: the buffer at +0x5180 is a heap pointer from a capacity of eight, and its inline bytes
below that; the capacity is the qword at +0x5198. The routine returns the address of the inline bytes, or the
heap pointer. Covers capacities zero and seven (inline), eight and a large one (heap).
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x026f6c60'
OBJECT_SIZE = 0x51a0
BUFFER = 0x5180
CAPACITY = 0x5198
MASK64 = (1 << 64) - 1


def case(cid, capacity, heap):
    """One call; with heap the buffer's pointer is the heap block, otherwise the inline bytes stay as set."""
    data = bytearray(b'\xaa' * OBJECT_SIZE)
    data[CAPACITY:CAPACITY + 8] = struct.pack('<Q', capacity & MASK64)
    memory = [{'addr': f'buf:obj+{BUFFER:#x}', 'pointer': 'heap'}] if heap else []
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:obj'},
            'buffers': {'obj': {'size': OBJECT_SIZE, 'bytes': data.hex()}, 'heap': {'size': 0x40}},
            'memory': memory, 'imports': [], 'stubs': []}


CASES = [
    case('inline_capacity_zero', 0, False),
    case('inline_capacity_seven', 0x7, False),
    case('heap_capacity_eight', 0x8, True),
    case('heap_capacity_large', 0x40, True),
]


def main():
    """Write deterministic synthetic calls to the requested directory."""
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
