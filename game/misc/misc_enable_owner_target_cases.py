#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic request, node, owner and target layouts for bb_misc_enable_owner_target (0x01e54f40).

usage: misc_enable_owner_target_cases.py OUT_DIR

The node's virtual query at vtable slot +0x160 returns the owner; the owner's target at +0xb0 gets
its enable byte at +0x22c set to 1. Covers a null node, a null owner, a null target, and a target
whose byte starts clear or set.
"""
import json
import os
import sys

ADDRESS = '0x01e54f40'
OWNER_OF = '0x00400300'
TARGET_BYTE = 0x22c


def case(cid, node=True, owner=True, target=True, target_before=0x00):
    """One call: the node's query returns the owner, whose target gets its enable byte set."""
    buffers = {
        'request': {'size': 16},
        'node': {'size': 8},
        'vt': {'size': 0x168},
        'owner': {'size': 0xb8},
        'target': {'size': 0x230, 'bytes': '00' * TARGET_BYTE + f'{target_before:02x}'},
    }
    memory = [{'addr': 'buf:node', 'pointer': 'vt'},
              {'addr': 'buf:vt+352', 'guest': OWNER_OF}]
    if node:
        memory.append({'addr': 'buf:request+8', 'pointer': 'node'})
    if owner and target:
        memory.append({'addr': 'buf:owner+176', 'pointer': 'target'})
    stubs = []
    if node:
        ret = 'buf:owner' if owner else '0x0'
        stubs.append({'address': OWNER_OF, 'argc': 1, 'ret': ret})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:request'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('null_node_no_query', node=False),
    case('null_owner_no_write', owner=False),
    case('null_target_no_write', target=False),
    case('target_clear_becomes_enabled', target_before=0x00),
    case('target_set_stays_enabled', target_before=0x01),
    case('target_other_bits_overwritten', target_before=0xfe),
]


def main():
    """Write one JSON case per scenario into the output directory."""
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
