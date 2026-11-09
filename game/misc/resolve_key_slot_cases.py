#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot lookups for misc_resolve_key_slot (0x026f1ba0): a key that is found and resolves to a
node or to nothing, and a key that is not found with the preferred fallback set or zero.

usage: resolve_key_slot_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026f1ba0'
PREDICATE = '0x0261efb0'
LOOKUP = '0x0261eaa0'
ROOT_GLOBAL = '0x05940dd8'
MASK64 = (1 << 64) - 1
KEY_VALUE = 0x00000007_00000003
SERVICE_KEY = 0x108
ROOT_SERVICE = 0x5948
OWNER_FALLBACK = 0x150
OWNER_PREFERRED = 0x1d0
HANDLE_NODE = 0x48
OWNER_SIZE = 0x1d8
SERVICE_SIZE = 0x110
HANDLE_SIZE = 0x50


def u64(value):
    """Little-endian hex bytes of a 64-bit value."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def case(cid, found, node_present, preferred, fallback):
    """One resolution: the predicate says whether the key is found; when it is, the lookup's handle leads
    to a node or to nothing. The key the service holds is read through both calls, and both calls compare
    the key bytes they receive."""
    memory = [{'addr': ROOT_GLOBAL, 'pointer': 'root'},
              {'addr': 'buf:root+%d' % ROOT_SERVICE, 'pointer': 'service'},
              {'addr': 'buf:service+%d' % SERVICE_KEY, 'bytes': u64(KEY_VALUE)},
              {'addr': 'buf:owner+%d' % OWNER_FALLBACK, 'bytes': u64(fallback)},
              {'addr': 'buf:owner+%d' % OWNER_PREFERRED, 'bytes': u64(preferred)}]
    if node_present:
        memory.append({'addr': 'buf:handle+%d' % HANDLE_NODE, 'pointer': 'node'})
    else:
        memory.append({'addr': 'buf:handle+%d' % HANDLE_NODE, 'bytes': u64(0)})
    stubs = [{'address': PREDICATE, 'argc': 2, 'argi': [0], 'argmem': [{'arg': 1, 'size': 8}],
              'ret': 1 if found else 0}]
    if found:
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
    case('found_resolves_node', True, True, 0x5555, 0x6666),
    case('found_node_missing', True, False, 0x5555, 0x6666),
    case('not_found_preferred_set', False, False, 0x7777, 0x6666),
    case('not_found_preferred_zero', False, False, 0, 0x6666),
    case('not_found_preferred_zero_fallback_zero', False, False, 0, 0),
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
