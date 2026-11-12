#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for misc_fill_two_slot_blocks (0x00ce7830), for tools/verify.py run.

usage: fill_two_slot_blocks_cases.py OUT_DIR

Two slots of a pair are given: a block per slot (buffers the case owns) and a capacity word. A slot
without a block has its capacity word's sign bit set, so the reservation stub runs and gives it a
block (the stub writes the block address into the slot). Each of the four combinations of
reserved and existing blocks is covered.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00ce7830'
RESERVE = '0x00819040'
MASK32 = 0xffffffff
UNALLOCATED = 0x80000000
BLOCK_A = 'blk_a'
BLOCK_B = 'blk_b'


def dword(value):
    """Four little-endian bytes of a 32-bit value, as hex."""
    return (value & MASK32).to_bytes(4, 'little').hex()


def slot_bytes(capacity_word):
    """One 16-byte slot: a zero block address, a zero count and the capacity word."""
    return '00' * 8 + dword(0) + dword(capacity_word)


def reserve_stub(block_name, capacity):
    """A reservation stub: writes the block address and the capacity into the slot it receives."""
    return {'address': RESERVE, 'argc': 4, 'argi': [0], 'argu32': [2, 3], 'ret': '0x0',
            'writes': [{'arg': 1, 'offset': 0, 'pointer': block_name, 'size': 8},
                       {'arg': 1, 'offset': 0xc, 'bytes': dword(capacity)}]}


def case(cid, first_cap, second_cap, stubs):
    """One call with the given capacity words for the two slots (None means no block yet)."""
    first = slot_bytes(UNALLOCATED if first_cap is None else first_cap)
    second = slot_bytes(UNALLOCATED if second_cap is None else second_cap)
    memory = [{'addr': 'buf:slots', 'pointer': BLOCK_A}, {'addr': 'buf:slots+0x10', 'pointer': BLOCK_B}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:slots', 'rsi': hex(0x12345678)},
            'buffers': {'slots': {'size': 0x20, 'bytes': first + second},
                        BLOCK_A: {'size': 8, 'bytes': '00' * 8},
                        BLOCK_B: {'size': 8, 'bytes': '00' * 8}},
            'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    # Both slots already have blocks: no reservation, the stores go to the existing blocks.
    case('both_blocks_present', 1, 1, []),
    # Neither slot has a block: both are reserved.
    case('both_reserved', None, None, [reserve_stub(BLOCK_A, 1), reserve_stub(BLOCK_B, 1)]),
    # Only the first slot needs a block.
    case('first_reserved', None, 1, [reserve_stub(BLOCK_A, 1)]),
    # Only the second slot needs a block.
    case('second_reserved', 1, None, [reserve_stub(BLOCK_B, 1)]),
]


def main():
    """Write deterministic fixtures to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
