#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic two-key slot lookups for misc_resolve_either_key_slot (0x026f1ae0): the first key found,
the second key found after the first is not, and neither found with the third fallback value.

usage: resolve_either_key_slot_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026f1ae0'
PREDICATE = '0x0261efb0'
LOOKUP = '0x0261eaa0'
ROOT_GLOBAL = '0x05940dd8'
MASK64 = (1 << 64) - 1
FIRST_KEY = 0x1111
SECOND_KEY = 0x2222
ROOT_SERVICE = 0x5948
SERVICE_FIRST = 0xf8
SERVICE_SECOND = 0x100
OWNER_THIRD = 0x158
HANDLE_NODE = 0x48
OWNER_SIZE = 0x1d8
SERVICE_SIZE = 0x110
HANDLE_SIZE = 0x50


def u64(value):
    """Little-endian hex bytes of a 64-bit value."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def case(cid, first_found, second_found, node_present, fallback):
    """One resolution: the predicate is asked about the first key, and about the second only when the first
    is not found. When either is found, the lookup takes that key and its handle leads to a node or to
    nothing; otherwise the owner's third fallback value is returned."""
    memory = [{'addr': ROOT_GLOBAL, 'pointer': 'root'},
              {'addr': 'buf:root+%d' % ROOT_SERVICE, 'pointer': 'service'},
              {'addr': 'buf:service+%d' % SERVICE_FIRST, 'bytes': u64(FIRST_KEY)},
              {'addr': 'buf:service+%d' % SERVICE_SECOND, 'bytes': u64(SECOND_KEY)},
              {'addr': 'buf:owner+%d' % OWNER_THIRD, 'bytes': u64(fallback)}]
    if node_present:
        memory.append({'addr': 'buf:handle+%d' % HANDLE_NODE, 'pointer': 'node'})
    else:
        memory.append({'addr': 'buf:handle+%d' % HANDLE_NODE, 'bytes': u64(0)})
    stubs = [{'address': PREDICATE, 'argc': 2, 'argi': [0], 'argmem': [{'arg': 1, 'size': 8}],
              'ret': 1 if first_found else 0}]
    if not first_found:
        stubs.append({'address': PREDICATE, 'argc': 2, 'argi': [0], 'argmem': [{'arg': 1, 'size': 8}],
                      'ret': 1 if second_found else 0})
    if first_found or second_found:
        stubs.append({'address': LOOKUP, 'argc': 2, 'argi': [0], 'argmem': [{'arg': 1, 'size': 8}],
                      'ret': 'buf:handle'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner'},
            'buffers': {'owner': {'size': OWNER_SIZE}, 'root': {'size': 0x5950},
                        'service': {'size': SERVICE_SIZE}, 'handle': {'size': HANDLE_SIZE},
                        'node': {'size': 8}},
            'memory': memory,
            'stubs': stubs,
            'imports': []}


CASES = [
    case('first_found_node', True, False, True, 0x3333),
    case('first_found_node_missing', True, False, False, 0x3333),
    case('second_found_node', False, True, True, 0x3333),
    case('second_found_node_missing', False, True, False, 0x3333),
    case('neither_found_fallback', False, False, False, 0x3333),
    case('neither_found_zero_fallback', False, False, False, 0),
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
