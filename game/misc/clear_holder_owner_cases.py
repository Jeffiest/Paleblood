#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_clear_holder_owner (0x00419730), for tools/verify.py run.

usage: clear_holder_owner_cases.py OUT_DIR

The owner holds a node holder (+0x38), an entry holder (+0x58) and a spare (+0x30). A node holder whose node is
non-null is retained first; a holder in the start state (mode masked to one) finishes its node; the holder is
then released. The entry holder's table gets its entries set to the free key and is released through the scratch
service, with the entry holder itself. The spare is released, a kept node is finished and released, and the owner
goes on to the remove routine (0x00410f10), whose result is returned.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00419730'
RETAIN = '0x0045a4b0'
RELEASE = '0x0045a4c0'
RELEASE_SPARE = '0x0045a510'
INNER = '0x004658d0'
LINK = '0x00465ec0'
INNER_TAIL = '0x00465930'
REMOVE = '0x00410f10'
SERVICE_RELEASE = '0x00400c00'
SCRATCH_GLOBAL = '0x057e7320'
OWNER_SIZE, HOLDER_SIZE, NODE_SIZE = 0x60, 0xc0, 0x48
MASK64 = (1 << 64) - 1
FREE_KEY = -2
START_MASK = 0xf
START_STATE = 0x1

UNREACHABLE = {
    '0x00419781': ('taken',
                   'the retain call leaves the holder pointer in place, so the holder is never cleared here'),
    '0x004197e3': ('taken',
                   'the holder pointer is non-null on this path, so its release is always made'),
    '0x0041989f': ('fallthrough',
                   'the holder pointer was cleared above, so the final release never runs'),
    '0x004198ad': ('fallthrough',
                   'the spare pointer was cleared above, so the final release never runs'),
}


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, holder=True, mode=0, node=False, entries=None, spare=False, count=0, entry_keys=(0, FREE_KEY)):
    """entries: None (no entry holder), 'nullable' (an entry holder with no table) or 'table'."""
    table_size = 0x10 + 0x18 * (count + 2)
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': 'c3' * OWNER_SIZE},
               'spare_obj': {'size': 0x10, 'bytes': 'e4' * 0x10},
               'holder': {'size': HOLDER_SIZE, 'bytes': 'b5' * HOLDER_SIZE},
               'node': {'size': NODE_SIZE, 'bytes': 'a6' * NODE_SIZE},
               'entry_holder': {'size': 0x10, 'bytes': 'd7' * 0x10},
               'table': {'size': table_size, 'bytes': '9b' * table_size},
               'service': {'size': 0x10, 'bytes': '8c' * 0x10},
               'service_vt': {'size': 0x70, 'bytes': '7d' * 0x70}}
    memory = [{'addr': 'buf:owner+48', 'pointer': 'spare_obj'} if spare
              else {'addr': 'buf:owner+48', 'bytes': u64(0)},
              {'addr': 'buf:owner+56', 'pointer': 'holder'} if holder
              else {'addr': 'buf:owner+56', 'bytes': u64(0)},
              {'addr': 'buf:owner+88', 'pointer': 'entry_holder'} if entries is not None
              else {'addr': 'buf:owner+88', 'bytes': u64(0)},
              {'addr': 'buf:service', 'pointer': 'service_vt'},
              {'addr': 'buf:service_vt+104', 'guest': SERVICE_RELEASE},
              {'addr': SCRATCH_GLOBAL, 'pointer': 'service'}]
    if holder:
        memory.append({'addr': 'buf:holder+160', 'bytes': struct.pack('<I', mode).hex()})
        memory.append({'addr': 'buf:holder+168', 'pointer': 'node'} if node
                      else {'addr': 'buf:holder+168', 'bytes': u64(0)})
    if entries is not None:
        if entries == 'table':
            memory.append({'addr': 'buf:entry_holder', 'pointer': 'table'})
            memory.append({'addr': 'buf:table+8', 'bytes': u64(count)})
            for i, key in enumerate(entry_keys):
                memory.append({'addr': 'buf:table+%d' % (0x10 + 0x18 * i), 'bytes': u64(key)})
        else:
            memory.append({'addr': 'buf:entry_holder', 'bytes': u64(0)})

    stubs = []
    if holder:
        if node:
            stubs.append({'address': RETAIN, 'argc': 1, 'argi': [0]})
            if (mode & START_MASK) == START_STATE:
                stubs += [{'address': INNER, 'argc': 1, 'argi': [0]},
                          {'address': LINK, 'argc': 1, 'argi': [0]},
                          {'address': INNER_TAIL, 'argc': 1, 'argi': [0], 'ret': 0}]
        stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0]})
    if entries == 'table':
        stubs.append({'address': SERVICE_RELEASE, 'argc': 2, 'argi': [0, 1], 'ret': 0})
    if entries is not None:
        stubs.append({'address': SERVICE_RELEASE, 'argc': 2, 'argi': [0, 1], 'ret': 0})
    if spare:
        stubs.append({'address': RELEASE_SPARE, 'argc': 1, 'argi': [0]})
    if holder and node:
        stubs += [{'address': INNER, 'argc': 1, 'argi': [0]},
                  {'address': LINK, 'argc': 1, 'argi': [0]},
                  {'address': INNER_TAIL, 'argc': 1, 'argi': [0], 'ret': 0},
                  {'address': RELEASE, 'argc': 1, 'argi': [0]}]
    stubs.append({'address': REMOVE, 'argc': 1, 'argi': [0], 'ret': 0x5150})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_holder_no_entries', holder=False),
    case('holder_mode_two_no_node', mode=0x2),
    case('holder_start_state_no_node', mode=0x1),
    case('holder_start_state_with_node', mode=0x1, node=True),
    case('holder_other_state_with_node', mode=0x2, node=True),
    case('entry_holder_without_table', entries='nullable', holder=False),
    case('entries_table_and_spare', entries='table', spare=True, count=1, holder=False,
         entry_keys=(0x55, FREE_KEY)),
]


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
