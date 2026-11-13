#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_insert_value_node (0x013bc380), for tools/verify.py run.

usage: insert_value_node_cases.py OUT_DIR

The chain list holds its sentinel at +0x08, the count at +0x10 and the node allocator at +0x18. The
allocator's allocate slot (0x58, a scripted stub) returns a node block or refuses. A refused block with the
thread flag set reaches the throw helper (0x02fbe978, which never returns); with the flag clear the engine's
fatal report returns and the original stores through the null node, so that outcome is declared
unreachable. A count at its limit reaches the length error throw (0x02fbf1b8, which never returns). The
thread pointer is gs:[0]; the flag and the throw slot are read through the offsets stored at 0x057e4318 and
0x057e4320. Covers a null value, an empty list, a two-node ring, a refused node with the flag set, and a count
at its limit. The routine returns a byte: the case compares AL only.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013bc380'
ALLOCATE = '0x00400020'       # a real game entry the allocator's allocate slot points at
THROW = '0x02fbe978'
LENGTH_ERROR = '0x02fbf1b8'
FLAG_OFFSET_SLOT = '0x057e4318'
THROW_OFFSET_SLOT = '0x057e4320'
NODE_SIZE = 0x18
TLS_BELOW = 0x20              # the thread pointer; the flag sits at +0x28 and the throw slot at +0x30
FLAG_OFFSET = 0x8
THROW_OFFSET = 0x10
LIMIT = 0x0aaaaaaaaaaaaaa9
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, value=True, ring=0, count=0, refuse=False, flag=0):
    """ring: nodes already in the list (0 or 2); count: the list count; refuse: the allocator refuses the node;
    flag: the thread flag value that picks the throw path when the node is refused."""
    buffers = {'list': {'size': 0x20, 'bytes': '00' * 0x20},
               'head': {'size': NODE_SIZE, 'bytes': '00' * NODE_SIZE},
               'alloc': {'size': 8}, 'alloc_vt': {'size': 0x78},
               'tls': {'size': TLS_BELOW + 0x20, 'bytes': '00' * (TLS_BELOW + 0x20)},
               'node': {'size': NODE_SIZE, 'bytes': '5c' * NODE_SIZE}}
    memory = [{'addr': 'buf:list+8', 'pointer': 'head'},
              {'addr': 'buf:list+16', 'bytes': word(count)},
              {'addr': 'buf:list+24', 'pointer': 'alloc'},
              {'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+88', 'guest': ALLOCATE},
              {'addr': f'buf:tls+{TLS_BELOW}', 'pointer': f'tls+{TLS_BELOW}'},
              {'addr': f'buf:tls+{TLS_BELOW + FLAG_OFFSET}', 'bytes': struct.pack('<I', flag).hex()},
              {'addr': FLAG_OFFSET_SLOT, 'bytes': struct.pack('<q', FLAG_OFFSET).hex()},
              {'addr': THROW_OFFSET_SLOT, 'bytes': struct.pack('<q', THROW_OFFSET).hex()}]
    if ring:
        buffers['first'] = {'size': NODE_SIZE, 'bytes': '00' * NODE_SIZE}
        memory.append({'addr': 'buf:head+8', 'pointer': 'first'})
        memory.append({'addr': 'buf:first+0', 'pointer': 'head'})
    else:
        memory.append({'addr': 'buf:head+8', 'pointer': 'head'})
    memory.append({'addr': 'buf:head+0', 'pointer': 'head'})
    buffers['value'] = {'size': 0x10, 'bytes': '3d' * 0x10}
    args = {'rdi': 'buf:list', 'rsi': 'buf:value' if value else hex(0)}
    stubs = []
    if value:
        if refuse:
            stubs.append({'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 0})
            stubs.append({'address': THROW, 'argc': 2, 'argi': [1], 'noreturn': True})
        else:
            stubs.append({'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:node'})
            if count == LIMIT:
                stubs.append({'address': LENGTH_ERROR, 'argc': 1, 'argi': [0], 'noreturn': True})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8', 'args': args,
            'buffers': buffers, 'memory': memory, 'gs': f'buf:tls+{TLS_BELOW}', 'stubs': stubs, 'imports': []}


CASES = [
    case('value_null', value=False),
    case('empty_list_links_node'),
    case('two_node_ring_links_node', ring=2, count=2),
    case('refused_flag_set_throws', refuse=True, flag=1),
    case('count_at_limit_throws', count=LIMIT),
]

UNREACHABLE = {
    '0x013bc3e8': ('fallthrough', 'refused node with the thread flag clear: the fatal report returns and the original then stores through the null node'),
}


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
