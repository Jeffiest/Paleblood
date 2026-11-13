#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic listener lists for bb_misc_merge_pending_listeners (0x01245d80), for tools/verify.py run.

usage: merge_pending_listeners_cases.py OUT_DIR

The owner holds an active list (+0x18) and a pending list (+0x20) of circular doubly linked nodes. Each active node
counts down; an expired node runs its callbacks (virtual notify slot 0x10, a stub), frees its callback storage and
vector (free slot 0x70, a stub) and is unlinked and freed. Then the owner's slot 0x18 (a stub) runs, every pending
node is copied onto the active list through the allocator (slot 0x58, a stub), the pending nodes are freed, and the
owner's slot 0x28 is tail-called (a stub whose result is returned).
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01245d80'
NOTIFY = '0x00400020'
ALLOCATE = '0x004000a0'
FREE = '0x00400300'
RESET = '0x004004a0'
FINISH = '0x004004e0'
THROW = '0x02fbe978'
LENGTH_ERROR = '0x02fbf1b8'
FLAG_OFFSET_SLOT = 0x057e4318
LOCK_OFFSET_SLOT = 0x057e4320
FLAG_OFFSET = 0x8
LOCK_OFFSET = 0x10
TLS_BELOW = 0x20
MAX_COUNT = 0x666666666666665
MASK64 = (1 << 64) - 1

# The branch at 0x01245e09 tests a callback vector for null after loading through it; the branch at 0x01245e61
# tests the node against the sentinel, which the loop condition has already excluded and no stub changes; the
# branch at 0x01245f14 falls to the fatal report only when the flag is clear, after which the null block is stored
# through.
UNREACHABLE = {
    '0x01245e09': ('taken', 'null test after the vector was already loaded through at 0x01245dc7'),
    '0x01245e61': ('taken', 'the loop condition already excluded the sentinel and no stub changes the list'),
    '0x01245f14': ('fallthrough', 'fatal report 0x024b55b0 then a store through the null block at 0x01245f51'),
}


def u64(value):
    """Eight little-endian bytes of a value, as hex."""
    return struct.pack('<Q', value & MASK64).hex()


def u32(value):
    """Four little-endian bytes of a value, as hex."""
    return struct.pack('<I', value & 0xffffffff).hex()


def ptr(address, target):
    """A memory entry that stores a buffer pointer."""
    return {'addr': f'buf:{address}', 'pointer': target}


def ring(memory, sentinel, names):
    """Link the named node buffers into a circular list around the sentinel buffer."""
    chain = [sentinel] + names
    for index, name in enumerate(chain):
        following = chain[(index + 1) % len(chain)]
        previous = chain[index - 1]
        memory.append(ptr(f'{name}+0x0', following))
        memory.append(ptr(f'{name}+0x8', previous))


def case(cid, active=(), pending=0, alloc_null=False, flag=0, active_count=None, ret=0x1234567890):
    """One merge. active is a list of (countdown, callbacks, storage); pending is a count of pending nodes."""
    buffers = {'tls': {'size': 0x40}, 'owner': {'size': 0x4c0}, 'ownvt': {'size': 0x40},
               'listA': {'size': 0x20}, 'sentA': {'size': 0x28}, 'listB': {'size': 0x20},
               'sentB': {'size': 0x28}, 'alloc': {'size': 0x10}, 'allocvt': {'size': 0x80},
               'lis': {'size': 0x10}, 'lisvt': {'size': 0x20},
               'new0': {'size': 0x28, 'bytes': 'cc' * 0x28}, 'new1': {'size': 0x28, 'bytes': 'cc' * 0x28}}
    memory = [ptr(f'tls+{TLS_BELOW:#x}', f'tls+{TLS_BELOW:#x}'),
              {'addr': f'buf:tls+{TLS_BELOW + FLAG_OFFSET:#x}', 'bytes': u32(flag)},
              {'addr': hex(FLAG_OFFSET_SLOT), 'bytes': u64(FLAG_OFFSET)},
              {'addr': hex(LOCK_OFFSET_SLOT), 'bytes': u64(LOCK_OFFSET)},
              ptr('owner+0x0', 'ownvt'), ptr('owner+0x18', 'listA'), ptr('owner+0x20', 'listB'),
              ptr('owner+0x4b0', 'alloc'),
              {'addr': 'buf:ownvt+0x18', 'guest': RESET}, {'addr': 'buf:ownvt+0x28', 'guest': FINISH},
              ptr('alloc+0x0', 'allocvt'),
              {'addr': 'buf:allocvt+0x58', 'guest': ALLOCATE}, {'addr': 'buf:allocvt+0x70', 'guest': FREE},
              ptr('lis+0x0', 'lisvt'), {'addr': 'buf:lisvt+0x10', 'guest': NOTIFY},
              ptr('listA+0x8', 'sentA'), ptr('listA+0x18', 'alloc'),
              ptr('listB+0x8', 'sentB'), ptr('listB+0x18', 'alloc'),
              {'addr': 'buf:listA+0x10',
               'bytes': u64(len(active) if active_count is None else active_count)},
              {'addr': 'buf:listB+0x10', 'bytes': u64(pending)}]
    stubs = []
    names = []
    for index, (countdown, callbacks, storage) in enumerate(active):
        node, vector, store = f'a{index}', f'vec{index}', f'store{index}'
        names.append(node)
        buffers[node] = {'size': 0x28}
        buffers[vector] = {'size': 0x28}
        buffers[store] = {'size': 0x40}
        memory += [{'addr': f'buf:{node}+0x10', 'bytes': u64(0xa100 + index)},
                   {'addr': f'buf:{node}+0x18', 'bytes': u32(countdown) + u32(0x55 + index)},
                   ptr(f'{node}+0x20', vector), ptr(f'{vector}+0x20', 'alloc')]
        if storage or callbacks:
            memory += [ptr(f'{vector}+0x8', store), ptr(f'{vector}+0x10', f'{store}+{callbacks * 16:#x}'),
                       ptr(f'{vector}+0x18', f'{store}+0x40')]
            for slot in range(callbacks):
                memory += [{'addr': f'buf:{store}+{slot * 16:#x}', 'bytes': u64(0xc000 + slot)},
                           ptr(f'{store}+{slot * 16 + 8:#x}', 'lis')]
        if countdown <= 0:
            stubs += [{'address': NOTIFY, 'argc': 2} for _ in range(callbacks)]
            if storage or callbacks:
                stubs.append({'address': FREE, 'argc': 2})
            stubs.append({'address': FREE, 'argc': 2})
            stubs.append({'address': FREE, 'argc': 2})
    ring(memory, 'sentA', names)
    stubs.append({'address': RESET, 'argc': 2})
    pending_names = []
    for index in range(pending):
        node = f'b{index}'
        pending_names.append(node)
        buffers[node] = {'size': 0x28}
        memory += [{'addr': f'buf:{node}+0x10', 'bytes': u64(0xb100 + index)},
                   {'addr': f'buf:{node}+0x18', 'bytes': u32(7 + index) + u32(0x66 + index)},
                   {'addr': f'buf:{node}+0x20', 'bytes': u64(0xb200 + index)}]
    ring(memory, 'sentB', pending_names)
    if alloc_null:
        stubs.append({'address': ALLOCATE, 'argc': 3, 'ret': '0x0'})
        stubs.append({'address': THROW, 'argc': 2, 'noreturn': True})
    elif active_count == MAX_COUNT:
        stubs.append({'address': ALLOCATE, 'argc': 3, 'ret': 'buf:new0'})
        stubs.append({'address': LENGTH_ERROR, 'argc': 1, 'noreturn': True})
    else:
        for index in range(pending):
            stubs.append({'address': ALLOCATE, 'argc': 3, 'ret': f'buf:new{index}'})
        stubs += [{'address': FREE, 'argc': 2} for _ in range(pending)]
        stubs.append({'address': FINISH, 'argc': 1, 'ret': hex(ret)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': 'buf:owner'},
            'buffers': buffers, 'memory': memory, 'gs': f'buf:tls+{TLS_BELOW:#x}', 'imports': [], 'stubs': stubs}


CASES = [
    case('both_lists_empty'),
    case('live_nodes_only', active=[(1, 1, True), (5, 0, False)]),
    case('expired_two_callbacks', active=[(0, 2, True)]),
    case('expired_one_callback', active=[(-3, 1, True)]),
    case('expired_no_storage', active=[(0, 0, False)]),
    case('expired_empty_storage', active=[(-1, 0, True)]),
    case('mixed_nodes', active=[(0, 1, True), (2, 0, False), (-7, 0, False)]),
    case('one_pending_empty_active', pending=1),
    case('two_pending_onto_live', pending=2, active=[(3, 0, False)]),
    case('expired_then_pending', pending=2, active=[(0, 2, True), (1, 1, True)]),
    case('allocation_refused_throws', pending=1, alloc_null=True, flag=1),
    case('active_count_at_limit', pending=1, active_count=MAX_COUNT),
]


def main():
    """Write deterministic synthetic merges to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
