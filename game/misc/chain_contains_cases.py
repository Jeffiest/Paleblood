#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic chains for the chain membership test (0x004065d0): an empty chain, a target that is the
first, a middle or the last node, a target absent from a chain of three, the head itself as the target,
and a target value with its upper bits set against a node address."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x004065d0'
MASK64 = (1 << 64) - 1
NODE_SIZE = 0x40
NEXT_FIELD = 0x38


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, nodes=0, target='node0', target_value=None):
    """A head followed by `nodes` chained nodes; the target register holds the named buffer, or a value."""
    buffers = {'head': {'size': NODE_SIZE, 'bytes': '6e' * NODE_SIZE}}
    memory = []
    previous = 'head'
    for k in range(nodes):
        buffers[f'node{k}'] = {'size': NODE_SIZE, 'bytes': '4c' * NODE_SIZE}
        memory.append({'addr': f'buf:{previous}+0x{NEXT_FIELD:x}', 'pointer': f'node{k}'})
        previous = f'node{k}'
    memory.append({'addr': f'buf:{previous}+0x{NEXT_FIELD:x}', 'bytes': word(0)})
    if target_value is None:
        rdi = f'buf:{target}'
    else:
        rdi = hex(target_value & MASK64)
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i8',
        'args': {'rdi': rdi, 'rsi': 'buf:head'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': [],
    }


CASES = [
    case('empty_chain_is_false', nodes=0, target_value=0x7000000000),
    case('first_node_is_found', nodes=3, target='node0'),
    case('middle_node_is_found', nodes=3, target='node1'),
    case('last_node_is_found', nodes=3, target='node2'),
    case('absent_target_is_false', nodes=3, target_value=0x7000000000),
    case('head_is_not_compared', nodes=2, target='head'),
    case('single_node_absent', nodes=1, target_value=0x1234),
    case('zero_target_not_matched_by_end', nodes=2, target_value=0),
    case('upper_bits_differ_from_node', nodes=2, target_value=0xdead000000000000),
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
