#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_copy_narrow_clone_record (0x018bded0), for tools/verify.py run.

usage: copy_narrow_clone_record_cases.py OUT_DIR

Given record: the source's words at +0x08, +0x10 and +0x20 are copied into it. No record given: a block
comes from the allocator (0x02fbe9a8, which returns RAX); a null block throws (0x02fbf188, which never
returns) and the case ends there. The record's address is returned in RAX.
"""
import json
import os
import sys

ADDRESS = '0x018bded0'
ALLOCATE = '0x02fbe9a8'
THROW = '0x02fbf188'


def case(cid, given, alloc_ok=True):
    """given: the caller passes a record; alloc_ok: the allocator grants a block when none is given."""
    b = {'source': {'size': 0x30}, 'given': {'size': 0x30}, 'block': {'size': 0x30}}
    m = [{'addr': 'buf:source+8', 'bytes': '1122334455667788'},
         {'addr': 'buf:source+16', 'bytes': 'a1a2a3a4a5a6a7a8'},
         {'addr': 'buf:source+32', 'bytes': 'c1c2c3c4c5c6c7c8'}]
    stubs = []
    if not given:
        stubs.append({'address': ALLOCATE, 'argc': 1, 'argi': [0], 'ret': 'buf:block' if alloc_ok else 0})
        if not alloc_ok:
            stubs.append({'address': THROW, 'argc': 0, 'noreturn': True})
    args = {'rdi': 'buf:source', 'rsi': 'buf:given' if given else '0x0'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': args, 'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('given_record', given=True),
    case('new_block', given=False, alloc_ok=True),
    case('new_block_allocation_fails', given=False, alloc_ok=False),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
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
