#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pool appends for misc_pool_append_node (0x0040dee0): remaining bytes at, above and
below one node, the slow allocator returning a node or nothing, a binding with and without an
object, a node that already holds an object (released first), a chain that is empty or not, a
first node already kept, and counters at the top of their range.

usage: pool_append_node_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040dee0'
KEY_LOOKUP = '0x00418060'
SLOW_ALLOC = '0x00414be0'
RETAIN = '0x00400800'
RELEASE = '0x00400900'
HOLDER_SIZE = 0x3a0
POOL_SIZE = 0x140
NODE_SIZE = 0x40


def word32(value):
    """A 4-byte little-endian value."""
    return struct.pack('<I', value & 0xffffffff).hex()


def holder_bytes(count):
    """The holder's counter at 0x37c; its pointer fields are set through memory entries."""
    data = bytearray(HOLDER_SIZE)
    data[0x37c:0x380] = struct.pack('<I', count & 0xffffffff)
    return data.hex()


def case(cid, remaining=0x40, slow=None, binding=False, release_previous=False, chain=False,
         first=False, count=3, tag=7, key=0x2a):
    """One append. slow is None when the cursor serves, otherwise 'node' (the slow allocator's
    node) or 'none'. binding gives the pair an object; release_previous makes the retain callee
    install an object into the node, which the append then releases. chain sets the pool's head
    and tail to the old node."""
    buffers = {
        'tagged': {'size': 0x10, 'bytes': '00' * 8 + word32(tag) + '00' * 4},
        'key': {'size': 8, 'bytes': word32(key) + '00' * 4},
        'holder': {'size': HOLDER_SIZE, 'bytes': holder_bytes(count)},
        'pool': {'size': POOL_SIZE},
        'slot': {'size': NODE_SIZE, 'bytes': 'cc' * NODE_SIZE},
        'slow': {'size': NODE_SIZE, 'bytes': 'cc' * NODE_SIZE},
        'old': {'size': NODE_SIZE, 'bytes': 'dd' * NODE_SIZE},
        'binding': {'size': 0x10},
        'vobj': {'size': 0x10},
        'released': {'size': 0x10},
        'vt': {'size': 0x20},
    }
    memory = [
        {'addr': 'buf:holder+56', 'pointer': 'pool'},
        {'addr': 'buf:pool+16', 'pointer': 'slot'},
        {'addr': 'buf:pool+24', 'bytes': struct.pack('<Q', remaining).hex()},
        {'addr': 'buf:vt+16', 'guest': RETAIN},
        {'addr': 'buf:vt+24', 'guest': RELEASE},
        {'addr': 'buf:vobj', 'pointer': 'vt'},
        {'addr': 'buf:released', 'pointer': 'vt'},
    ]
    if chain:
        memory.append({'addr': 'buf:pool+304', 'pointer': 'old'})
        memory.append({'addr': 'buf:pool+312', 'pointer': 'old'})
    else:
        memory.append({'addr': 'buf:pool+304', 'bytes': '00' * 8})
        memory.append({'addr': 'buf:pool+312', 'bytes': '00' * 8})
    if first:
        memory.append({'addr': 'buf:holder+920', 'pointer': 'old'})
    else:
        memory.append({'addr': 'buf:holder+920', 'bytes': '00' * 8})
    if binding:
        memory.append({'addr': 'buf:binding', 'pointer': 'vobj'})
    else:
        memory.append({'addr': 'buf:binding', 'bytes': '00' * 8})
    if release_previous:
        memory.append({'addr': 'buf:binding+8', 'pointer': 'slot'})
    else:
        memory.append({'addr': 'buf:binding+8', 'bytes': '3412000000000000'})

    stubs = [{'address': KEY_LOOKUP, 'argc': 3}]
    if slow is not None or remaining < 0x20:
        ret = 'buf:slow' if slow == 'node' else 0
        stubs.append({'address': SLOW_ALLOC, 'argc': 2, 'ret': ret})
    node_taken = (remaining >= 0x20) or slow == 'node'
    if node_taken:
        if binding:
            retain = {'address': RETAIN, 'argc': 2}
            if release_previous:
                retain['writes'] = [{'arg': 1, 'pointer': 'released'}]
            stubs.append(retain)
        if binding and release_previous:
            stubs.append({'address': RELEASE, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:tagged', 'rsi': 'buf:holder', 'rdx': 'buf:key', 'rcx': 'buf:binding'},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('take_empty_no_binding'),
    case('take_with_retained_object', binding=True),
    case('take_releases_previous_object', binding=True, release_previous=True),
    case('take_chain_nonempty', chain=True),
    case('take_first_already_kept', first=True),
    case('exact_node_remaining', remaining=0x20),
    case('below_node_slow_node', remaining=0x1f, slow='node'),
    case('below_node_slow_none', remaining=0x0, slow='none'),
    case('slow_node_chain_and_binding', remaining=0x8, slow='node', chain=True, binding=True),
    case('count_wraps', count=0xffffffff, tag=0xdeadbeef, key=0xffffffff),
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
