#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic node tables for bb_misc_collect_path_values (0x00cd1810).

usage: misc_collect_path_values_cases.py OUT_DIR

Terminal and non-terminal start nodes, both modes, paths of one and two hops, the value bit on the start
node, limits that cut a path short, and lists that have room, need to grow, or grow to double. The lookup
(0x00cf9310) is stubbed to return the first node of the table; the grow call (0x00819040) stubs its new array.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00cd1810'
FIND = '0x00cf9310'
GROW = '0x00819040'
TERMINAL = 0x04
VALUE = 0x08
NODE_BYTES = 0x10
MASK32 = (1 << 32) - 1


def u32(v):
    return struct.pack('<I', v & MASK32).hex()


def node(value, link, flags):
    return b'\x00' * 8 + struct.pack('<iHBB', value, link & 0xffff, flags, 0)


def case(cid, nodes, mode=0, limit=8, capacity=0, grow=False, count=0):
    table_nodes = b''.join(nodes)
    table_nodes += b'\x00' * (4 * NODE_BYTES - len(table_nodes))
    stubs = [{'address': FIND, 'argc': 2, 'ret': 'buf:nodes'}]
    if grow:
        stubs.append({'address': GROW, 'argc': 4,
                      'writes': [{'arg': 1, 'offset': 0, 'pointer': 'grown'}]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:table', 'rsi': 7, 'rdx': mode, 'rcx': 'buf:list', 'r8': limit},
            'buffers': {'table': {'size': 0x20, 'bytes': '00' * 0x20},
                        'nodes': {'size': 4 * NODE_BYTES, 'bytes': table_nodes.hex()},
                        'list': {'size': 0x10, 'bytes': '00' * 8 + u32(count) + u32(capacity)},
                        'items': {'size': 0x20, 'bytes': 'a5' * 0x20},
                        'grown': {'size': 0x20, 'bytes': '5a' * 0x20}},
            'memory': [{'addr': 'buf:table+0x0', 'pointer': 'nodes'},
                       {'addr': 'buf:list+0x0', 'pointer': 'items'}],
            'imports': [], 'stubs': stubs}


# The link of a node that is not terminal is never -1 on a path the walk takes: a -1 link ends the walk at
# a null node, which faults on its first read.
UNREACHABLE = {
    '0x00cd1974': ('taken', 'the start node is not terminal on this path, so its flag bit is clear'),
    '0x00cd199e': ('taken', 'a -1 link leads to a null node that faults on its first read'),
    '0x00cd19de': ('taken', 'a -1 link leads to a null node that faults on its first read'),
}

TERM = node(3, -1, TERMINAL)
TWO_HOP = [node(0, 1, 0), node(11, 2, 0), node(22, -1, TERMINAL)]
VALUE_START = [node(5, 1, VALUE), node(11, 2, 0), node(22, -1, TERMINAL)]

CASES = [
    case('terminal_nonzero_mode_returns_one', [TERM], mode=1, limit=5),
    case('terminal_zero_limit_returns_zero', [TERM], mode=0, limit=0, capacity=4),
    case('terminal_grows_empty_list', [TERM], mode=0, limit=3, capacity=0, grow=True),
    case('terminal_fits_list', [TERM], mode=0, limit=3, capacity=4),
    case('nonzero_mode_stores_middle_node', TWO_HOP, mode=1, limit=5, capacity=4),
    case('nonzero_mode_zero_limit_stores_nothing', TWO_HOP, mode=1, limit=0, capacity=4),
    case('zero_mode_value_start_complete_grows', VALUE_START, mode=0, limit=8, capacity=0, grow=True),
    case('zero_mode_value_start_capacity_doubles', VALUE_START, mode=0, limit=8, capacity=2, grow=True),
    case('zero_mode_value_start_incomplete', VALUE_START, mode=0, limit=2, capacity=4),
    case('zero_mode_two_hops_complete_grows', TWO_HOP, mode=0, limit=8, capacity=0, grow=True),
    case('zero_mode_two_hops_cut_short_grows', TWO_HOP, mode=0, limit=1, capacity=0, grow=True),
]


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
