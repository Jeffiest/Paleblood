#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pair list lookups for misc_pair_list_lookup_02ba9210 (0x02ba9210), for tools/verify.py run.

usage: pair_list_lookup_02ba9210_cases.py OUT_DIR

A null request, or one whose mode byte is not one, gives a null pair. With the flag bit set (bit zero of the
word at 0x45a), the primary word at 0x118 must be nonzero and the key's node (from 0x024b8500) must be on the
list from the head at 0x110, followed through the link at +8. Then the pair singleton at 0x05ac76e8 is taken
(built at 0x05ac76f8 when null, with the pending flag at 0x05ac76f0 and the guard at 0x05ac7748), an entry is
allocated (0x0247c4e0, size 0x40, alignment 8, the pool at 0x460) and the fill routine (0x02baa950) receives
the primary word, or the secondary word at 0x210 when the flag bit is clear. A failed allocation leaves the
entry out. The request byte at 0x468 is not read, so both of its values are covered by the same outcomes.

The lazy set-up at 0x024ede50 never sets the singleton global, so the re-read after it stays null and the
taken outcome of that branch is declared unreachable.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02ba9210'
SINGLETON_GLOBAL = '0x05ac76e8'
PENDING = '0x05ac76f0'
GUARD = '0x05ac7748'
LAZY, ACQUIRE, RELEASE, CONSTRUCT = '0x024ede50', '0x02fbe538', '0x02fbe558', '0x024b6d00'
LOOKUP, ALLOC, FILL = '0x024b8500', '0x0247c4e0', '0x02baa950'
MASK64 = (1 << 64) - 1
REQUEST_SIZE = 0x470
OUT_SIZE = 0x10
NODE_SIZE = 0x10
ENTRY_SIZE = 0x40
SINGLETON_SIZE = 0x50
POOL = 0x7777

UNREACHABLE = {
    '0x02ba92a3': ('taken', 'the lazy set-up at 0x024ede50 never sets the singleton at 0x05ac76e8, so the re-read stays null'),
}


def u64(value):
    return (value & MASK64).to_bytes(8, 'little').hex()


def u16(value):
    return (value & 0xffff).to_bytes(2, 'little').hex()


def stub(address, argc, ret=None):
    """One scripted call in call order; ret is a number or a buf: reference."""
    entry = {'address': address, 'argc': argc}
    if ret is not None:
        entry['ret'] = ret
    return entry


def case(cid, request=True, mode=1, flags=0x0001, primary=0x1111, secondary=0x2222, bl=0,
         head='none', lookup=None, singleton='built', pending=0, guard=0, acquire=0, alloc='entry'):
    """One call. head is none, B (the list is node B), A (A then B) or A_end (A, then the list ends).
    lookup is None (the lookup is not called), zero, or nodeB (the lookup returns node B). alloc is None
    (not called), entry or zero. singleton is built or null (the first build runs)."""
    memory = []
    stubs = []
    if singleton == 'built':
        memory.append({'addr': SINGLETON_GLOBAL, 'pointer': 'singleton'})
    else:
        memory.append({'addr': SINGLETON_GLOBAL, 'bytes': '00' * 8})
    memory.append({'addr': PENDING, 'bytes': f'{pending:02x}'})
    memory.append({'addr': GUARD, 'bytes': f'{guard:02x}'})
    args = {'rdi': 'buf:out'}
    if request:
        args['rdx'] = 'buf:request'
        memory.append({'addr': 'buf:request+0x458', 'bytes': f'{mode:02x}'})
        memory.append({'addr': 'buf:request+0x45a', 'bytes': u16(flags)})
        memory.append({'addr': 'buf:request+0x468', 'bytes': f'{bl:02x}'})
        memory.append({'addr': 'buf:request+0x118', 'bytes': u64(primary)})
        memory.append({'addr': 'buf:request+0x210', 'bytes': u64(secondary)})
        memory.append({'addr': 'buf:request+0x460', 'bytes': u64(POOL)})
        if head == 'B':
            memory.append({'addr': 'buf:request+0x110', 'pointer': 'nodeB'})
        elif head in ('A', 'A_end'):
            memory.append({'addr': 'buf:request+0x110', 'pointer': 'nodeA'})
            if head == 'A':
                memory.append({'addr': 'buf:nodeA+8', 'pointer': 'nodeB'})
            else:
                memory.append({'addr': 'buf:nodeA+8', 'bytes': '00' * 8})
        else:
            memory.append({'addr': 'buf:request+0x110', 'bytes': '00' * 8})
    else:
        args['rdx'] = '0x0'
    if lookup is not None:
        stubs.append(stub(LOOKUP, 1, 'buf:nodeB' if lookup == 'nodeB' else '0x0'))
    if singleton == 'null':
        stubs.append(stub(LAZY, 0))
        if guard == 0:
            stubs.append(stub(ACQUIRE, 1, hex(acquire)))
            if acquire != 0:
                stubs.append(stub(RELEASE, 1))
        stubs.append(stub(CONSTRUCT, 1))
    if alloc is not None:
        stubs.append(stub(ALLOC, 3, 'buf:entry' if alloc == 'entry' else '0x0'))
        if alloc == 'entry':
            stubs.append(stub(FILL, 2))
    buffers = {'out': {'size': OUT_SIZE}, 'singleton': {'size': SINGLETON_SIZE},
               'entry': {'size': ENTRY_SIZE}, 'nodeA': {'size': NODE_SIZE}, 'nodeB': {'size': NODE_SIZE}}
    if request:
        buffers['request'] = {'size': REQUEST_SIZE}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('null_request', request=False, alloc=None),
    case('mode_zero', mode=0, alloc=None),
    case('mode_two', mode=2, alloc=None),
    case('clear_flag_entry_bl0', flags=0x0000, bl=0),
    case('clear_flag_entry_bl1', flags=0x0000, bl=1),
    case('clear_flag_alloc_fails_bl0', flags=0x0000, alloc='zero', bl=0),
    case('clear_flag_alloc_fails_bl1', flags=0x0000, alloc='zero', bl=1),
    case('clear_flag_high_bits_set', flags=0xfffe, secondary=0x3333),
    case('set_flag_primary_zero_fails', flags=0x0001, primary=0, alloc=None),
    case('set_flag_lookup_zero_fails', flags=0x0001, lookup='zero', alloc=None),
    case('set_flag_head_null_fails', flags=0x0001, head='none', lookup='nodeB', alloc=None),
    case('set_flag_head_is_target_bl0', flags=0x0001, head='B', lookup='nodeB', bl=0),
    case('set_flag_head_is_target_bl1', flags=0x0001, head='B', lookup='nodeB', bl=1),
    case('set_flag_walk_one_step_bl0', flags=0x0001, head='A', lookup='nodeB', bl=0),
    case('set_flag_walk_one_step_bl1', flags=0x0001, head='A', lookup='nodeB', bl=1),
    case('set_flag_walk_list_ends_fails', flags=0x0001, head='A_end', lookup='nodeB', alloc=None),
    case('set_flag_alloc_fails_bl0', flags=0x0001, head='B', lookup='nodeB', alloc='zero', bl=0),
    case('set_flag_alloc_fails_bl1', flags=0x0001, head='B', lookup='nodeB', alloc='zero', bl=1),
    case('set_flag_high_bits_set_walk', flags=0xffff, head='A', lookup='nodeB', bl=1),
    case('singleton_null_guard_set', singleton='null', guard=1, flags=0x0000),
    case('singleton_null_guard_clear_acquire_fails', singleton='null', guard=0, acquire=0, flags=0x0000),
    case('singleton_null_guard_clear_acquire_succeeds', singleton='null', guard=0, acquire=1, flags=0x0000),
    case('singleton_null_pending_set', singleton='null', pending=1, guard=1, flags=0x0000),
    case('singleton_null_alloc_fails', singleton='null', flags=0x0000, alloc='zero'),
    case('singleton_null_walk_entry', singleton='null', flags=0x0001, head='A', lookup='nodeB', bl=1),
]


def main():
    """Write deterministic synthetic calls to the requested directory."""
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
