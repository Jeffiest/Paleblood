#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic walks for misc_push_walk_node_value (0x02705900), for tools/verify.py run.

usage: push_walk_node_value_cases.py OUT_DIR

The walk flag is a byte at 0x0553b318. When it is set, the node's list is walked: each link gives an entry
(0x02c4f340, a stub), an entry with a selector bit and a payload is given a kind code (0x02c69560, a stub), and
the link after it comes from 0x02c4f0e0 (a stub). A matching kind (3, 0x3d or 0x6c) sends the node to the
owner's second vector at +0x38; otherwise it goes to the first vector at +0x10. The push routine
(0x027071a0) is a stub that records the call; the value it copies is the node's address, read from a local.
Each case lists its links in order: an entry is absent (null), or has its selector and payload, and its kind
code is absent (a null pointer) or a number.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02705900'
WALK_FLAG = 0x0553b318
ENTRY = '0x02c4f340'
KIND = '0x02c69560'
NEXT = '0x02c4f0e0'
PUSH = '0x027071a0'
ENTRY_SIZE = 0x60
LINK_SIZE = 0x20
NODE_SIZE = 0x80
SINK_SIZE = 0x60
MASK64 = (1 << 64) - 1
SELECTOR_MASK = 0x5
MATCHING_KINDS = (0x3, 0x3d, 0x6c)


def entry(selector, kind, payload=True):
    """One link's entry: its selector byte, and its kind code (None for a null kind pointer)."""
    return {'selector': selector, 'kind': kind, 'payload': payload}


def case(cid, enabled, links):
    """One walk over the links in order; links holds entries, or None for a null entry."""
    buffers = {'sink': {'size': SINK_SIZE}, 'node': {'size': NODE_SIZE}}
    memory = [{'addr': hex(WALK_FLAG), 'bytes': f'{1 if enabled else 0:02x}'}]
    stubs = []
    for index, link in enumerate(links):
        buffers[f'link{index}'] = {'size': LINK_SIZE}
        if link is None:
            stubs.append({'address': ENTRY, 'argc': 1, 'ret': '0x0'})
        else:
            buffers[f'entry{index}'] = {'size': ENTRY_SIZE}
            stubs.append({'address': ENTRY, 'argc': 1, 'ret': f'buf:entry{index}'})
            memory.append({'addr': f'buf:entry{index}+0x4', 'bytes': f"{link['selector']:02x}"})
            if link['payload']:
                buffers[f'payload{index}'] = {'size': 0x10}
                memory.append({'addr': f'buf:entry{index}+0x58', 'pointer': f'payload{index}'})
            if link['payload'] and (link['selector'] & SELECTOR_MASK) != 0:
                if link['kind'] is None:
                    stubs.append({'address': KIND, 'argc': 1, 'ret': '0x0'})
                else:
                    buffers[f'kind{index}'] = {'size': 0x8,
                                               'bytes': (link['kind'] & 0xffffffff).to_bytes(4, 'little').hex()}
                    stubs.append({'address': KIND, 'argc': 1, 'ret': f'buf:kind{index}'})
        matched = link is not None and link['payload'] and (link['selector'] & SELECTOR_MASK) != 0 and \
            link['kind'] in MATCHING_KINDS
        if matched:
            break
        stubs.append({'address': NEXT, 'argc': 1,
                      'ret': f'buf:link{index + 1}' if index + 1 < len(links) else '0x0'})
    if links:
        memory.append({'addr': 'buf:node+0x78', 'pointer': 'link0'})
    else:
        memory.append({'addr': 'buf:node+0x78', 'bytes': '00' * 8})
    stubs.append({'address': PUSH, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:sink', 'rsi': 'buf:node'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('walk_disabled_first_vector', enabled=False, links=[]),
    case('walk_enabled_empty_list', enabled=True, links=[]),
    case('null_entry_no_match', enabled=True, links=[None]),
    case('entry_selector_clear_skipped', enabled=True, links=[entry(0x0, 0x3)]),
    case('entry_payload_null_skipped', enabled=True, links=[entry(0x1, 0x3, payload=False)]),
    case('kind_pointer_null_skipped', enabled=True, links=[entry(0x4, None)]),
    case('other_kind_then_small_match', enabled=True, links=[entry(0x1, 0x5), entry(0x4, 0x3)]),
    case('mid_kind_matches', enabled=True, links=[entry(0x1, 0x3d)]),
    case('large_kind_matches', enabled=True, links=[entry(0x4, 0x6c)]),
    case('no_kind_matches_then_end', enabled=True, links=[entry(0x1, 0x10), None]),
]


def main():
    """Write deterministic synthetic walks to the requested directory."""
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
