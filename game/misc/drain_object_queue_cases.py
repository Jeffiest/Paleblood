#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic queue rings for the two-pass object drain at 0x01887300.

Each ring is built from node kinds: an empty node, an object that is not yet marked, and objects
whose marked byte holds each kind of nonzero value. The queue is its own allocator and its own
vtable holder, so a scripted free may move the sentinel; that exercises the reloaded sentinel check.
Calls are scripted stubs. No gameplay recordings are implied.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01887300'
INIT = '0x01884b50'
ALLOCATOR_OF = '0x0247b720'
DESTROY = '0x00500200'
FREE = '0x00500300'
MASK64 = (1 << 64) - 1
NULL = 'null'


def u64(value):
    """Eight bytes, little-endian, for a stored qword."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, kinds, change=None, count=3):
    """One pass over a ring. kinds: NULL, or ('object', marked_byte) for a node holding an object.

    change: index of a node whose object free moves the queue's sentinel to that node.
    """
    names = [f'node{i}' for i in range(len(kinds))]
    buffers = {
        'queue': {'size': 0x48},
        'avt': {'size': 0x78},
        'sentinel': {'size': 0x18},
        'objvt': {'size': 0x10},
    }
    memory = [
        {'addr': 'buf:queue+0', 'pointer': 'avt'},
        {'addr': 'buf:queue+48', 'pointer': 'sentinel'},
        {'addr': 'buf:queue+56', 'bytes': u64(count)},
        {'addr': 'buf:queue+64', 'pointer': 'queue'},
        {'addr': 'buf:avt+112', 'guest': FREE},
        {'addr': 'buf:objvt+0', 'guest': DESTROY},
    ]
    first = names[0] if names else 'sentinel'
    last = names[-1] if names else 'sentinel'
    memory += [{'addr': 'buf:sentinel+0', 'pointer': first}, {'addr': 'buf:sentinel+8', 'pointer': last}]
    for i, kind in enumerate(kinds):
        buffers[names[i]] = {'size': 0x18}
        following = names[i + 1] if i + 1 < len(names) else 'sentinel'
        previous = names[i - 1] if i > 0 else 'sentinel'
        memory += [{'addr': f'buf:{names[i]}+0', 'pointer': following},
                   {'addr': f'buf:{names[i]}+8', 'pointer': previous}]
        if kind == NULL:
            memory.append({'addr': f'buf:{names[i]}+16', 'bytes': u64(0)})
            continue
        buffers[f'obj{i}'] = {'size': 0x10}
        memory += [{'addr': f'buf:{names[i]}+16', 'pointer': f'obj{i}'},
                   {'addr': f'buf:obj{i}+0', 'pointer': 'objvt'},
                   {'addr': f'buf:obj{i}+12', 'bytes': f'{kind[1]:02x}' + '00' * 3}]

    stubs = [{'address': INIT, 'argc': 1}]
    for i, kind in enumerate(kinds):
        if kind == NULL:
            stubs.append({'address': FREE, 'argc': 2})
            continue
        if kind[1] == 0:
            continue
        stubs += [{'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:queue'},
                  {'address': DESTROY, 'argc': 1}]
        free_object = {'address': FREE, 'argc': 2}
        if change == i:
            free_object['writes'] = [{'arg': 0, 'offset': 48, 'pointer': names[i]}]
        stubs.append(free_object)
        if change != i:
            stubs.append({'address': FREE, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:queue'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


UNMARKED = ('object', 0x00)
MARKED = ('object', 0x01)

CASES = [
    case('empty_ring', []),
    case('single_null_node_removed', [NULL]),
    case('single_unmarked_only_marked', [UNMARKED]),
    case('single_marked_destroyed_and_removed', [('object', 0x01)]),
    case('marked_byte_0x80_destroyed', [('object', 0x80)]),
    case('marked_byte_0xff_destroyed', [('object', 0xff)]),
    case('marked_byte_0x02_destroyed', [('object', 0x02)]),
    case('mixed_ring', [MARKED, UNMARKED, NULL, ('object', 0x40)]),
    case('unmarked_then_marked_next_pass', [UNMARKED, UNMARKED]),
    case('sentinel_moved_by_object_free_keeps_node', [('object', 0x01), NULL], change=0),
    case('sentinel_moved_on_second_node_keeps_it', [NULL, ('object', 0x01)], change=1),
    case('count_zero_wraps', [NULL], count=0),
    case('count_high_word_lowered', [NULL, NULL], count=0x100000000),
    case('count_all_bits_lowered', [('object', 0x01)], count=MASK64),
]


def main():
    """Write only authored fixture JSON to the requested private directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    directory = Path(sys.argv[1])
    directory.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (directory / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {directory}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
