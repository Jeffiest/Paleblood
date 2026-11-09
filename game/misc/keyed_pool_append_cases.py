#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic keyed appends for misc_keyed_pool_append (0x0040e020): an argument that is zero or
not, a previous argument that the retain callee installs and the append then releases, a binding
that the pool append clears, a pool with or without a cursor node, a slow node, a chain that is
empty or not, a first node already kept, and a counter at the top of its range.

usage: keyed_pool_append_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040e020'
POOL_APPEND = '0x0040dee0'
SLOW_ALLOC = '0x00414be0'
RETAIN_ARG = '0x0045a4b0'
RELEASE_ARG = '0x0045a4c0'
RETAIN_SHARED = '0x00400a00'
RELEASE_SHARED = '0x00400b00'
SHARED_ADDRESS = '0x0553be98'
HOLDER_SIZE = 0x3a8 + 8
POOL_SIZE = 0x130


def word32(value):
    """A 4-byte little-endian value."""
    return struct.pack('<I', value & 0xffffffff).hex()


def holder_bytes(count):
    """The holder's counter at 0x380; its pointer fields are set through memory entries."""
    data = bytearray(HOLDER_SIZE)
    data[0x380:0x384] = struct.pack('<I', count & 0xffffffff)
    return data.hex()


def case(cid, argument=0x1234, zero_pair=False, remaining=0x40, slow=None, chain=False,
         first=False, count=3, tag=9, key=0x35, rewrite_argument=False):
    """One call. argument is the value passed in; when rewrite_argument is set, it is the node's
    own address and the retain callee installs a previous argument into the node, which the append
    then releases. zero_pair makes the pool append clear the binding's object. slow is None when
    the cursor serves, otherwise 'node' or 'none'."""
    arg_pointer = argument == 'node'
    buffers = {
        'tagged': {'size': 0x10, 'bytes': '00' * 8 + word32(tag) + '00' * 4},
        'key': {'size': 8, 'bytes': word32(key) + '00' * 4},
        'holder': {'size': HOLDER_SIZE, 'bytes': holder_bytes(count)},
        'pool': {'size': POOL_SIZE},
        'slot': {'size': 0x40, 'bytes': 'cc' * 0x40},
        'slow': {'size': 0x40, 'bytes': 'cc' * 0x40},
        'old': {'size': 0x40, 'bytes': 'dd' * 0x40},
        'other': {'size': 0x10},
        'svt': {'size': 0x20},
    }
    memory = [
        {'addr': 'buf:holder+56', 'pointer': 'pool'},
        {'addr': 'buf:pool+16', 'pointer': 'slot'},
        {'addr': 'buf:pool+24', 'bytes': struct.pack('<Q', remaining).hex()},
        {'addr': 'buf:svt+16', 'guest': RETAIN_SHARED},
        {'addr': 'buf:svt+24', 'guest': RELEASE_SHARED},
        {'addr': SHARED_ADDRESS, 'pointer': 'svt'},
    ]
    if chain:
        memory.append({'addr': 'buf:pool+288', 'pointer': 'old'})
        memory.append({'addr': 'buf:pool+296', 'pointer': 'old'})
    else:
        memory.append({'addr': 'buf:pool+288', 'bytes': '00' * 8})
        memory.append({'addr': 'buf:pool+296', 'bytes': '00' * 8})
    if first:
        memory.append({'addr': 'buf:holder+936', 'pointer': 'old'})
    else:
        memory.append({'addr': 'buf:holder+936', 'bytes': '00' * 8})

    if arg_pointer:
        rdx_argument = 'buf:slot'
    else:
        rdx_argument = hex(argument)
    stubs = [{'address': RETAIN_SHARED, 'argc': 2}]
    pool_stub = {'address': POOL_APPEND, 'argc': 4}
    if zero_pair:
        pool_stub['writes'] = [{'arg': 3, 'bytes': '00' * 8}]
    stubs.append(pool_stub)
    if remaining < 0x20 or slow is not None:
        ret = 'buf:slow' if slow == 'node' else 0
        stubs.append({'address': SLOW_ALLOC, 'argc': 2, 'ret': ret})
    node_taken = remaining >= 0x20 or slow == 'node'
    if node_taken:
        if argument != 0:
            retain_arg = {'address': RETAIN_ARG, 'argc': 1}
            if rewrite_argument:
                retain_arg['writes'] = [{'arg': 0, 'offset': 8, 'pointer': 'other'}]
            stubs.append(retain_arg)
        if rewrite_argument:
            stubs.append({'address': RELEASE_ARG, 'argc': 1})
        if not zero_pair:
            stubs.append({'address': RELEASE_SHARED, 'argc': 2})
    else:
        stubs.append({'address': RELEASE_SHARED, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:tagged', 'rsi': 'buf:holder', 'rdx': 'buf:key', 'rcx': rdx_argument},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('argument_set_node_taken'),
    case('argument_zero', argument=0),
    case('pair_cleared_node_taken', zero_pair=True),
    case('node_null_releases_shared', slow='none', remaining=0x0),
    case('node_null_pair_cleared', slow='none', remaining=0x0, zero_pair=True),
    case('slow_node', remaining=0x10, slow='node', chain=True),
    case('exact_node_remaining', remaining=0x20),
    case('chain_nonempty_first_set', chain=True, first=True),
    case('previous_argument_released', argument='node', rewrite_argument=True),
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
