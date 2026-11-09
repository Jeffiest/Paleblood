#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic appends to a value vector, with the value taken by reference (address 0x02b3b980).

usage: push_value_from_pointer_cases.py OUT_DIR

The vector holds its begin, end and capacity pointers in a buffer, the stored values live in
'store' and the storage that the growth stub hands back lives in 'newstore'. Covers an append with
room, a full vector that grows, a value inside the stored values with and without growth, a value
below the begin or at the end, an empty vector, a growth that leaves the end pointer null, and an
end pointer below the begin pointer (the growth then asks for capacity zero).
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3b980'
GROW = '0x02b3ba60'
STORE_BYTES = 0x40
NEWSTORE_BYTES = 0x40
VEC_BYTES = 0x20
VALUE_BYTES = 8


def slots(base, count):
    """Little-endian 64-bit values base, base+1, ... for a buffer."""
    return b''.join(struct.pack('<Q', base + i) for i in range(count)).ljust(0x40, b'\xee')


def case(cid, begin, count, capacity, value_at, grow=None):
    """One append. begin, count and capacity are element offsets into 'store'; value_at is a byte
    offset into 'store' of the value. grow is None, 'grow' (storage moves) or 'null' (moves and
    leaves the end pointer null)."""
    end = begin + count * VALUE_BYTES
    memory = [
        {'addr': 'buf:vec+8', 'pointer': f'store+{hex(begin)}'},
        {'addr': 'buf:vec+0x10', 'pointer': f'store+{hex(end)}'},
        {'addr': 'buf:vec+0x18', 'pointer': f'store+{hex(capacity * VALUE_BYTES)}'},
    ]
    stubs = []
    if grow is not None:
        new_end = max(count, 0) * VALUE_BYTES
        if grow == 'null':
            end_write = {'arg': 0, 'offset': 0x10, 'bytes': '00' * 8}
        else:
            end_write = {'arg': 0, 'offset': 0x10, 'pointer': f'newstore+{hex(new_end)}'}
        stubs.append({'address': GROW, 'argc': 2, 'argi': [0, 1], 'writes': [
            {'arg': 0, 'offset': 0x8, 'pointer': 'newstore'},
            end_write,
            {'arg': 0, 'offset': 0x18, 'pointer': f'newstore+{hex(NEWSTORE_BYTES)}'},
        ]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:vec', 'rsi': f'buf:store+{hex(value_at)}'},
            'buffers': {'vec': {'size': VEC_BYTES, 'bytes': '00' * VEC_BYTES},
                        'store': {'size': STORE_BYTES, 'bytes': slots(0x1000, 8).hex()},
                        'newstore': {'size': NEWSTORE_BYTES, 'bytes': slots(0x2000, 8).hex()}},
            'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('append_with_room_from_outside', 0, 2, 4, 0x30),
    case('full_append_grows_from_outside', 0, 2, 2, 0x30, grow='grow'),
    case('inside_value_with_room', 0, 3, 4, 0x8),
    case('inside_value_full_reads_new_storage', 0, 2, 2, 0x0, grow='grow'),
    case('value_below_begin_is_copied', 0x8, 2, 4, 0x0),
    case('value_at_end_is_copied', 0, 2, 4, 0x10),
    case('empty_grows_then_stores', 0, 0, 0, 0x30, grow='grow'),
    case('growth_leaves_end_null', 0, 0, 0, 0x30, grow='null'),
    case('end_below_begin_grows_zero', 0x8, -1, 0, 0x30, grow='grow'),
    case('inside_growth_leaves_end_null', 0, 2, 2, 0x0, grow='null'),
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
