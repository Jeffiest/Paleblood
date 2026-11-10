#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for bb_misc_release_holder_node (0x02b3f5c0): a holder that owns no node, one
that owns a node whose allocator is looked up, released and freed, and a holder whose other words
keep their values.

usage: release_holder_node_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3f5c0'
ALLOCATOR_OF = '0x0247b720'
NODE_SLOT_00 = '0x004000a0'
FREE_SLOT = '0x00400300'
HOLDER_BYTES = 0x70
NODE_BYTES = 0x10
ALLOCATOR_VT_BYTES = 0x78
FREE_SLOT_OFFSET = 112


def case(cid, owns_node=True, holder_fill='ab'):
    """One release: the holder's node pointer is cleared when it owns a node, and the other holder
    words are left as they were."""
    buffers = {'holder': {'size': HOLDER_BYTES, 'bytes': holder_fill * HOLDER_BYTES}}
    memory = []
    stubs = []
    if owns_node:
        buffers['node'] = {'size': NODE_BYTES, 'bytes': '00' * NODE_BYTES}
        buffers['node_vt'] = {'size': 8, 'bytes': '00' * 8}
        buffers['alloc'] = {'size': 8, 'bytes': '00' * 8}
        buffers['alloc_vt'] = {'size': ALLOCATOR_VT_BYTES, 'bytes': '00' * ALLOCATOR_VT_BYTES}
        memory += [
            {'addr': 'buf:holder+0x68', 'pointer': 'node'},
            {'addr': 'buf:node', 'pointer': 'node_vt'},
            {'addr': 'buf:node_vt', 'guest': NODE_SLOT_00},
            {'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
            {'addr': f'buf:alloc_vt+{FREE_SLOT_OFFSET}', 'guest': FREE_SLOT},
        ]
        stubs = [
            {'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:alloc'},
            {'address': NODE_SLOT_00, 'argc': 1},
            {'address': FREE_SLOT, 'argc': 2},
        ]
    else:
        memory.append({'addr': 'buf:holder+0x68', 'bytes': '00' * 8})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('holder_owns_no_node', owns_node=False),
    case('holder_owns_node'),
    case('holder_owns_node_other_words_kept', holder_fill='5c'),
    case('holder_owns_node_zero_words', holder_fill='00'),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
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
