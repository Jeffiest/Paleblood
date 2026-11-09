#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic node takes for misc_take_pending_node (0x0040e680), for tools/verify.py run.

usage: take_pending_node_cases.py OUT_DIR

The holder (PooledHolder) points at a node pool whose cursor and remaining bytes decide whether a
0x38-byte node comes from the cursor or from the slow allocator (0x00414be0, scripted). Each node
buffer starts with a sentinel so every byte the original writes shows. Covers the cursor path at and
above the node size, one byte short (allocator), an allocator that gives nothing, the pending words
(each set and cleared), and the first-node pointer.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040e680'
ALLOCATOR = '0x00414be0'
HOLDER_BYTES = 0x400
POOL_BYTES = 0x140
NODE_BYTES = 0x38
SENTINEL = 'a5' * NODE_BYTES
MASK64 = (1 << 64) - 1
MASK32 = (1 << 32) - 1


def u32(value):
    """Four little-endian bytes."""
    return struct.pack('<I', value & MASK32).hex()


def u64(value):
    """Eight little-endian bytes."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, remaining=0x40, cursor=True, allocated=True, first=True, count=5,
         words=(0x11111111, 0x22222222, 0x33333333, 0x4444444444444444, 0x5555555555555555)):
    """One take. The cursor is the sentinel node when it is set; the allocator returns the slow node
    when allocated is set, and null otherwise."""
    value_378, value_380, value_390, value_3a8 = words[0], words[2], words[3], words[4]
    holder = bytearray(HOLDER_BYTES)
    struct.pack_into('<I', holder, 0x378, value_378 & MASK32)
    struct.pack_into('<I', holder, 0x37c, count & MASK32)
    struct.pack_into('<I', holder, 0x380, value_380 & MASK32)
    struct.pack_into('<Q', holder, 0x390, value_390 & MASK64)
    struct.pack_into('<Q', holder, 0x3a8, value_3a8 & MASK64)
    buffers = {
        'holder': {'size': HOLDER_BYTES, 'bytes': bytes(holder).hex()},
        'pool': {'size': POOL_BYTES},
        'bump_node': {'size': NODE_BYTES, 'bytes': SENTINEL},
        'slow_node': {'size': NODE_BYTES, 'bytes': SENTINEL},
        'other': {'size': 0x10},
    }
    memory = [{'addr': 'buf:holder+0x38', 'pointer': 'pool'},
              {'addr': 'buf:pool+0x18', 'bytes': u64(remaining)}]
    if cursor:
        memory.append({'addr': 'buf:pool+0x10', 'pointer': 'bump_node'})
    if first:
        memory.append({'addr': 'buf:holder+0x398', 'pointer': 'other'})
    stubs = []
    # The allocator is offered for every size up to and including the node size, so that a take at
    # exactly the node size must not reach it.
    if remaining <= NODE_BYTES:
        stubs.append({'address': ALLOCATOR, 'argc': 2, 'argi': [0, 1],
                      'ret': 'buf:slow_node' if allocated else '0x0'})
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:holder', 'rsi': '0x7777777777777777'},
        'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs,
    }


CASES = [
    case('cursor_with_room', remaining=0x40),
    case('cursor_exact_size', remaining=0x38),
    case('cursor_huge_remaining', remaining=(1 << 40)),
    case('one_byte_short_allocates', remaining=0x37),
    case('allocator_gives_null', remaining=0x0, allocated=False),
    case('allocator_gives_null_no_first', remaining=0x10, allocated=False, first=False),
    case('no_first_node', remaining=0x40, first=False),
    case('count_and_words_all_ones', remaining=0x40, count=0xffffffff,
         words=(0xffffffff, 0xffffffff, 0xffffffff, 0xffffffffffffffff, 0xffffffffffffffff)),
    case('count_zero_words_zero', remaining=0x40, count=0, words=(0, 0, 0, 0, 0)),
    case('high_bits_of_words_kept', remaining=0x40, count=0x80000000,
         words=(0x80000001, 0x7fffffff, 0x12345678, 0x8000000000000001, 0x0fedcba987654321)),
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
