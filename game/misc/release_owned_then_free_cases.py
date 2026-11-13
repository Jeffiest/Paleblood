#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic objects for misc_release_owned_then_free_02276de0 (0x02276de0), for tools/verify.py run.

usage: release_owned_then_free_cases.py OUT_DIR

The thunk stores its vtable address point, releases the block at +0x10 when it is set (then clears it), calls the
identity routine 0x013e5c40 with the object, and frees the object through 0x02fbe588, returning the free's result.
Covers an owned block, no owned block, and a free result with all bits set.
"""
import json
import os
import sys

ADDRESS = '0x02276de0'
RELEASE = '0x02450560'
IDENTITY = '0x013e5c40'
FREE_BLOCK = '0x02fbe588'
RELEASE_RESULT = 0x1357
MASK64 = (1 << 64) - 1


def case(cid, owned, free_ret):
    buffers = {'obj': {'size': 0x20, 'bytes': 'cc' * 0x20}, 'owned': {'size': 0x20}}
    memory = [{'addr': 'buf:obj+0x10', 'pointer': 'owned'} if owned else {'addr': 'buf:obj+0x10', 'bytes': '00' * 8}]
    stubs = []
    if owned:
        stubs.append({'address': RELEASE, 'argc': 1, 'ret': hex(RELEASE_RESULT)})
    stubs.append({'address': IDENTITY, 'argc': 1})
    stubs.append({'address': FREE_BLOCK, 'argc': 1, 'ret': hex(free_ret & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:obj'}, 'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('owned_block_released', True, 0x4680),
    case('no_owned_block', False, 0),
    case('free_result_all_bits', False, MASK64),
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
