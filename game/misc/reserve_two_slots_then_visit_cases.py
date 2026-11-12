#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for misc_reserve_two_slots_then_visit (0x00cdccc0), for tools/verify.py run.

usage: reserve_two_slots_then_visit_cases.py OUT_DIR

The reservation and the visit are stubbed; the reservation stubs write the slot they are given
(its block address and capacity word), so each case chooses which slots end up with blocks, and the
two releases go through the allocator's virtual table to a stubbed entry. Every path is covered:
no entries (count -4), both reservations with and without blocks, a failure at either reservation,
and the release of each block that a failure leaves behind.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00cdccc0'
RESERVE = '0x00819040'
VISIT = '0x014bc590'
RELEASE_ENTRY = '0x00400020'
ALLOCATOR = '0x058018a0'
GUARD = '0x057e3be0'
MASK32 = 0xffffffff
UNALLOCATED = 0x80000000
FIRST_BLOCK = 0x7100
SECOND_BLOCK = 0x7200


def dword(value):
    """Four little-endian bytes of a 32-bit value, as hex."""
    return (value & MASK32).to_bytes(4, 'little').hex()


def qword(value):
    """Eight little-endian bytes of a 64-bit value, as hex."""
    return value.to_bytes(8, 'little').hex()


def reserve_stub(ret, block=None, capacity=None):
    """A reservation stub: returns ret and, when given, writes the block and capacity into the slot
    it receives as its second argument."""
    writes = []
    if block is not None:
        writes.append({'arg': 1, 'offset': 0, 'bytes': qword(block)})
    if capacity is not None:
        writes.append({'arg': 1, 'offset': 0xc, 'bytes': dword(capacity)})
    stub = {'address': RESERVE, 'argc': 4, 'argi': [0], 'argu32': [2, 3], 'ret': hex(ret)}
    if writes:
        stub['writes'] = writes
    return stub


RELEASE = {'address': RELEASE_ENTRY, 'argc': 3, 'argi': [0, 1, 2]}
VISIT_STUB = {'address': VISIT, 'argc': 4, 'argu32': [1]}


def case(cid, count, stubs):
    """One call with the given count and the stubs in call order."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:ctx', 'rsi': hex(count & MASK32)},
            'buffers': {'ctx': {'size': 0x40, 'bytes': '00' * 0x40},
                        'guard': {'size': 8, 'bytes': 'c3' * 8},
                        'alloc_vt': {'size': 0x40, 'bytes': '00' * 0x40}},
            'memory': [{'addr': GUARD, 'pointer': 'guard'},
                       {'addr': ALLOCATOR, 'pointer': 'alloc_vt'},
                       {'addr': 'buf:alloc_vt+0x28', 'guest': RELEASE_ENTRY}],
            'imports': [], 'stubs': stubs}


CASES = [
    # wanted = count + 4 <= 0: nothing is reserved, the visit runs, nothing is released.
    case('no_entries', -4, [VISIT_STUB]),
    # Both reservations give blocks: the visit runs, then both blocks are released.
    case('both_reserved', 0, [reserve_stub(0, FIRST_BLOCK, 4), reserve_stub(0, SECOND_BLOCK, 4),
                              VISIT_STUB, RELEASE, RELEASE]),
    # Larger count, same shape.
    case('both_reserved_larger', 10, [reserve_stub(0, FIRST_BLOCK, 14),
                                      reserve_stub(0, SECOND_BLOCK, 14), VISIT_STUB, RELEASE, RELEASE]),
    # Both reservations succeed without writing a block: nothing to release.
    case('both_reserved_no_blocks', 0, [reserve_stub(0), reserve_stub(0), VISIT_STUB]),
    # The first reservation fails and wrote nothing: no visit, nothing to release, one returned.
    case('first_fails_nothing', 0, [reserve_stub(1)]),
    # The first reservation fails after it gave a block: that block is released.
    case('first_fails_with_block', 0, [reserve_stub(1, FIRST_BLOCK, 4), RELEASE]),
    # The second reservation fails after giving a block: both blocks are released.
    case('second_fails_with_block', 0, [reserve_stub(0, FIRST_BLOCK, 4),
                                        reserve_stub(1, SECOND_BLOCK, 4), RELEASE, RELEASE]),
    # The second reservation fails and wrote nothing: only the first block is released.
    case('second_fails_nothing', 0, [reserve_stub(0, FIRST_BLOCK, 4), reserve_stub(1), RELEASE]),
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
