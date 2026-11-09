#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic scopes for misc_scope_attach_root (0x026efd30): a root node that is absent, unflagged,
partly flagged or flagged already, and counters on both sides of their clamps.

The loop in the original runs its body once: the second pass it would take needs a stack slot the
original never fills, so its back edge is declared unreachable.

usage: scope_attach_root_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026efd30'
CALLEE = '0x02568a20'
MASK64 = (1 << 64) - 1
EXTRA = 0x5a5a
OWNER_SIZE = 0x2a8
STATE_SIZE = 0x9e0
CHILD_SIZE = 0xd588
NODE_SIZE = 0x50
OWNER_ROOT = 0x2a0
STATE_CHILD = 0x08
STATE_COUNTER = 0x9d8
CHILD_FLAGS = 0x1978
NODE_FLAGS = 0x44

UNREACHABLE = {'0x026efe00': ('taken', 'the root-flag loop body always leaves its counter at 1, so the '
                                       'back edge that would start a second pass is never taken')}


def u32(value):
    """Little-endian hex bytes of a 32-bit value."""
    return (value & 0xffffffff).to_bytes(4, 'little').hex()


def u64(value):
    """Little-endian hex bytes of a 64-bit value."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def case(cid, node, node_flags, child_flags, counter_9d8, counter_9dc):
    """One attach: the owner holds the node (or none), the state points at the child, and the child's
    call receives the node and the extra argument; the counters and flags are set as the cases need."""
    memory = [{'addr': 'buf:state+%d' % STATE_CHILD, 'pointer': 'child'},
              {'addr': 'buf:state+%d' % STATE_COUNTER,
               'bytes': u32(counter_9d8) + u32(counter_9dc)},
              {'addr': 'buf:child+%d' % CHILD_FLAGS, 'bytes': u64(child_flags)}]
    if node:
        memory.append({'addr': 'buf:owner+%d' % OWNER_ROOT, 'pointer': 'node'})
        memory.append({'addr': 'buf:node+%d' % NODE_FLAGS, 'bytes': u32(node_flags)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': '0x1234', 'rdx': 'buf:state', 'rcx': hex(EXTRA)},
            'buffers': {'owner': {'size': OWNER_SIZE}, 'state': {'size': STATE_SIZE},
                        'child': {'size': CHILD_SIZE}, 'node': {'size': NODE_SIZE}},
            'memory': memory,
            'stubs': [{'address': CALLEE, 'argc': 8, 'argi': [0, 1, 2, 3, 4, 5], 'argu32': [6, 7], 'ret': 0}],
            'imports': []}


CASES = [
    case('root_absent', False, 0, 0, 3, 5),
    case('root_unflagged_counters_high', True, 0, 0, 0x20, 0x40),
    case('root_flags_all_set', True, 0x100800, 0x8000000, 0xb, 0xc),
    case('root_partly_flagged', True, 0x100000, 0x1, 0xa, 0xb),
    case('root_flags_all_ones', True, 0xffffffff, 0xffffffffffffffff, 0x0c, 0x0b),
    case('root_low_bit_only', True, 0x800, 0, 0, 0),
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
