#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic release chains for bb_misc_release_chain_nodes (0x00414b90): an empty chain, chains of
one to three nodes, each node released through the scratch service's release slot (0x68), which is
a scripted stub that takes the node and returns nothing the caller reads.

usage: release_chain_nodes_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00414b90'
RELEASE = '0x00400300'          # game entry the service's release slot points at, stubbed
SCRATCH_GLOBAL = '0x057e7320'   # the scratch service pointer
CHAIN_SIZE = 0x20
NODE_SIZE = 0x18


def case(cid, nodes):
    """A chain whose head is the first node; each node's first word is the next node. Every release
    stub receives the service and the node it takes back, in chain order."""
    buffers = {'chain': {'size': CHAIN_SIZE, 'bytes': 'a5' * CHAIN_SIZE},
               'service': {'size': 8},
               'service_vt': {'size': 0x78}}
    memory = [{'addr': 'buf:service', 'pointer': 'service_vt'},
              {'addr': 'buf:service_vt+104', 'guest': RELEASE},
              {'addr': SCRATCH_GLOBAL, 'pointer': 'service'}]
    stubs = []
    for index, name in enumerate(nodes):
        buffers[name] = {'size': NODE_SIZE, 'bytes': '5a' * NODE_SIZE}
        if index + 1 < len(nodes):
            memory.append({'addr': f'buf:{name}+0', 'pointer': nodes[index + 1]})
        else:
            memory.append({'addr': f'buf:{name}+0', 'bytes': '00' * 8})
        stubs.append({'address': RELEASE, 'argc': 2, 'argi': [0, 1]})
    if nodes:
        memory.append({'addr': 'buf:chain+16', 'pointer': nodes[0]})
    else:
        memory.append({'addr': 'buf:chain+16', 'bytes': '00' * 8})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:chain'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('empty_chain', []),
    case('one_node', ['node0']),
    case('two_nodes', ['node0', 'node1']),
    case('three_nodes', ['node0', 'node1', 'node2']),
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
