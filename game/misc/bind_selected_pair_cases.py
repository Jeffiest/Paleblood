#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pair bindings for misc_bind_selected_pair (0x026efbf0): selectors set or absent, nodes
present or missing, and the fallback used when neither the selected node nor the primary node is set.

usage: bind_selected_pair_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026efbf0'
LOOKUP = '0x0261eaa0'
VALUE = '0x00400020'
ROOT_GLOBAL = '0x05940dd8'
MASK32 = (1 << 32) - 1
ABSENT = -1
SELECTED = 0x3
OWNER_SIZE = 0x160
KEY_SIZE = 0x2e0
RECORD_SIZE = 0x968
CONTEXT_SIZE = 0xd228
ROOT_SIZE = 0x5950
FIRST_INDEX = 0x2d4
SECOND_INDEX = 0x2dc
HANDLE_NODE = 0x48
OWNER_FALLBACK = 0x150
OWNER_PRIMARY = 0x158
ROOT_SERVICE = 0x5948
RECORD_CONTEXT = 0x08
RECORD_COUNTS = 0x960
CONTEXT_FLAGS = 0x1968


def u32(value):
    """Little-endian hex bytes of a 32-bit value."""
    return (value & MASK32).to_bytes(4, 'little').hex()


def handle_memory(name, node_present):
    """The handle's node pointer: the node when present, else zero."""
    if node_present:
        return {'addr': 'buf:%s+%d' % (name, HANDLE_NODE), 'pointer': 'node_' + name[-1]}
    return {'addr': 'buf:%s+%d' % (name, HANDLE_NODE), 'bytes': '00' * 8}


def case(cid, first_set, second_set, first_node, second_node, primary, fallback):
    """One binding. Each selector is set or absent, and each handle leads to a node or to nothing. The
    owner holds the primary and fallback nodes when they are present. Every object's first word points at
    one shared virtual table whose slot at +0x18 is a stubbed game function.

    The stubs are the two lookups, then the value calls in the order the original makes them: the candidate
    (the selected node, or the primary node when its selector is absent) and then the second node, or the
    candidate again when the second node is missing. A missing candidate calls the primary node or, when
    that is missing too, the fallback node, once."""
    memory = [{'addr': ROOT_GLOBAL, 'pointer': 'root'},
              {'addr': 'buf:root+%d' % ROOT_SERVICE, 'pointer': 'service'},
              {'addr': 'buf:key+%d' % FIRST_INDEX, 'bytes': u32(SELECTED if first_set else ABSENT)},
              {'addr': 'buf:key+%d' % SECOND_INDEX, 'bytes': u32(SELECTED if second_set else ABSENT)},
              {'addr': 'buf:vt+24', 'guest': VALUE},
              handle_memory('handle_a', first_node),
              handle_memory('handle_b', second_node),
              {'addr': 'buf:record+%d' % RECORD_CONTEXT, 'pointer': 'context'},
              {'addr': 'buf:record+%d' % RECORD_COUNTS, 'bytes': u32(0x21) + u32(0x05)},
              {'addr': 'buf:context+%d' % CONTEXT_FLAGS, 'bytes': '00' * 8}]
    if primary:
        memory.append({'addr': 'buf:owner+%d' % OWNER_PRIMARY, 'pointer': 'primary'})
    if fallback:
        memory.append({'addr': 'buf:owner+%d' % OWNER_FALLBACK, 'pointer': 'fallback'})
    for name, present in (('node_a', first_node), ('node_b', second_node),
                          ('primary', primary), ('fallback', fallback)):
        if present:
            memory.append({'addr': 'buf:%s' % name, 'pointer': 'vt'})

    stubs = [{'address': LOOKUP, 'argc': 2, 'argi': [0, 1], 'ret': 'buf:handle_a'},
             {'address': LOOKUP, 'argc': 2, 'argi': [0, 1], 'ret': 'buf:handle_b'}]
    candidate_present = (first_set and first_node) or (not first_set and primary)
    if candidate_present:
        second_present = (second_set and second_node) or (not second_set and primary)
        stubs.append({'address': VALUE, 'argc': 1, 'argi': [0], 'ret': 0x11})
        stubs.append({'address': VALUE, 'argc': 1, 'argi': [0], 'ret': 0x33 if second_present else 0x22})
    else:
        stubs.append({'address': VALUE, 'argc': 1, 'argi': [0], 'ret': 0x44})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': 'buf:key', 'rdx': 'buf:record'},
            'buffers': {'owner': {'size': OWNER_SIZE}, 'key': {'size': KEY_SIZE},
                        'record': {'size': RECORD_SIZE}, 'context': {'size': CONTEXT_SIZE},
                        'root': {'size': ROOT_SIZE}, 'service': {'size': 0x20},
                        'handle_a': {'size': 0x50}, 'handle_b': {'size': 0x50},
                        'node_a': {'size': 8}, 'node_b': {'size': 8},
                        'primary': {'size': 8}, 'fallback': {'size': 8}, 'vt': {'size': 0x40}},
            'memory': memory,
            'stubs': stubs,
            'imports': []}


CASES = [
    case('selected_both_nodes', True, True, True, True, True, False),
    case('first_absent_primary_both', False, False, False, False, True, False),
    case('selected_missing_fallback_used', True, False, False, False, False, True),
    case('primary_used_when_selected_missing', True, False, False, False, True, False),
    case('second_missing_repeats_first', True, True, True, False, True, False),
    case('second_selected_first_absent', False, True, False, True, True, False),
    case('first_absent_no_primary_fallback', False, False, False, False, False, True),
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
