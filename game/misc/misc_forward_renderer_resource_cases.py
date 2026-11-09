#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic scene, renderer and child layouts for bb_misc_forward_renderer_resource (0x01e54b60).

usage: misc_forward_renderer_resource_cases.py OUT_DIR

The override renderer is used when set, else the scene renderer. The query kind is compared in
its low 32 bits; other kinds are returned in full. A renderer without a child returns 0. The child
resource is forwarded even when null.
"""
import json
import os
import sys

ADDRESS = '0x01e54b60'
QUERY = '0x00400020'
FORWARD = '0x016355c0'
MASK64 = (1 << 64) - 1


def case(cid, kind=6, override=False, child=True, resource=True, forwarded=0x5151):
    """One call: the chosen renderer (override or scene) is queried, then the child is forwarded."""
    chosen = 'override' if override else 'renderer'
    buffers = {
        'request': {'size': 16},
        'context': {'size': 0x60},
        'scene': {'size': 0x288},
        'renderer': {'size': 0xb8},
        'override': {'size': 0xb8},
        'vt': {'size': 0x98},
        'child': {'size': 0x798},
        'resource': {'size': 0x40},
    }
    memory = [
        {'addr': 'buf:request+8', 'pointer': 'context'},
        {'addr': 'buf:context+88', 'pointer': 'scene'},
        {'addr': 'buf:scene+128', 'pointer': 'renderer'},
        {'addr': 'buf:renderer', 'pointer': 'vt'},
        {'addr': 'buf:vt+144', 'guest': QUERY},
    ]
    if override:
        memory += [{'addr': 'buf:scene+640', 'pointer': 'override'},
                   {'addr': 'buf:override', 'pointer': 'vt'}]
    if child:
        memory.append({'addr': f'buf:{chosen}+176', 'pointer': 'child'})
    if child and resource:
        memory.append({'addr': 'buf:child+1936', 'pointer': 'resource'})
    stubs = [{'address': QUERY, 'argc': 1, 'ret': hex(kind & MASK64)}]
    if (kind & 0xffffffff) == 6 and child:
        stubs.append({'address': FORWARD, 'argc': 1, 'ret': hex(forwarded & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:request'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('forwards_scene_renderer_resource'),
    case('override_renderer_used', override=True),
    case('override_without_child_returns_zero', override=True, child=False),
    case('scene_renderer_without_child_returns_zero', child=False),
    case('null_resource_still_forwarded', resource=False),
    case('kind_five_returned', kind=5),
    case('kind_zero_returned', kind=0),
    case('kind_low_word_six_forwards', kind=0x100000006),
    case('kind_high_bit_five_returned_full', kind=0x8000000000000005),
    case('kind_all_ones_returned_full', kind=MASK64),
    case('override_kind_other_returned', override=True, kind=5),
    case('forwarded_result_full_width', forwarded=MASK64),
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
