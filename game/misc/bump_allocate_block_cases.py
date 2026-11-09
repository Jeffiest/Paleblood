#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic bump arenas for misc_bump_allocate_block (0x01888f70).

usage: bump_allocate_block_cases.py OUT_DIR

The arena's cursor at +0x10 points into the region, its size at +0x18 is added to the region base at +0x20
to give the end, and the pending block at +0x28 gets its offset word from the cursor when one is pending.
The new block (eight bytes, four-byte aligned) becomes pending when it fits before the end, and its two
16-bit tags come from the second and third arguments. The aligned cursor is returned either way.
Covers aligned, unaligned and exact-fit cursors, a block one byte too large, a full region, a pending block
with and without room, and tag arguments with the upper bits set.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01888f70'
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, cursor_offset=0, size=0x20, pending=False, first=0x1234, second=0x5678):
    """One allocation. The cursor is region plus cursor_offset, and the pending block is a buffer."""
    buffers = {
        'arena': {'size': 0x30, 'bytes': 'dd' * 0x30},
        'region': {'size': 0x40, 'bytes': 'bb' * 0x40},
        'pending': {'size': 0x10, 'bytes': 'cc' * 0x10},
    }
    cursor = f'region+{cursor_offset}' if cursor_offset else 'region'
    memory = [
        {'addr': 'buf:arena+0x10', 'pointer': cursor},
        {'addr': 'buf:arena+0x18', 'bytes': word(size)},
        {'addr': 'buf:arena+0x20', 'pointer': 'region'},
    ]
    if pending:
        memory.append({'addr': 'buf:arena+0x28', 'pointer': 'pending'})
    else:
        memory.append({'addr': 'buf:arena+0x28', 'bytes': word(0)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:arena', 'rsi': hex(first & MASK64), 'rdx': hex(second & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': []}


CASES = [
    case('aligned_cursor_fits'),
    case('unaligned_cursor_one_fits', cursor_offset=1),
    case('unaligned_cursor_three_fits', cursor_offset=3),
    case('exact_fit_to_end', size=8),
    case('one_byte_short_does_not_fit', size=7),
    case('zero_size_does_not_fit', size=0),
    case('cursor_at_end_does_not_fit', cursor_offset=0x10, size=0x10),
    case('pending_no_room_stores_offset_and_clears', pending=True, size=4),
    case('pending_with_room_stores_offset_and_replaces', pending=True, size=0x20, cursor_offset=2),
    case('tags_upper_bits_ignored', first=0xffff00001234, second=0x80000000abcd, size=0x20),
    case('tags_zero', first=0, second=0),
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
