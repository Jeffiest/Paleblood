#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owned states for misc_reset_listed_members (0x026e6f60): an empty outer list, empty
groups among full ones, groups with one and several values, and the member object's reset first.

usage: reset_listed_members_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026e6f60'
RESET = '0x026e0860'
MASK64 = (1 << 64) - 1
OBJECT_SIZE = 0x998
SENTINEL = 0x318
MEMBER = 0x670
NODE_SIZE = 0x20
GROUP_SIZE = 0x10
VALUE_SIZE = 0x48


def q(value):
    """A little-endian 64-bit value."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def ring(buffers, memory, head, names):
    """Links head, then the names, into a ring: next at +0, prev at +8."""
    order = [head] + names
    for k, name in enumerate(order):
        nxt = order[(k + 1) % len(order)]
        prv = order[k - 1]
        memory.append({'addr': 'buf:%s+0' % name, 'pointer': nxt})
        memory.append({'addr': 'buf:%s+8' % name, 'pointer': prv})


def case(cid, groups):
    """groups: for each outer node, the number of values in its inner list. The reset is called
    once with the member object, then once per value in list order."""
    buffers = {'self': {'size': OBJECT_SIZE}, 'sentinel': {'size': NODE_SIZE}}
    memory = [{'addr': 'buf:self+%d' % SENTINEL, 'pointer': 'sentinel'}]
    outer = ['g%d' % i for i in range(len(groups))]
    stubs = [{'address': RESET, 'argc': 1}]
    for i, count in enumerate(groups):
        buffers['g%d' % i] = {'size': NODE_SIZE}
        buffers['grp%d' % i] = {'size': GROUP_SIZE}
        buffers['gsent%d' % i] = {'size': NODE_SIZE}
        memory.append({'addr': 'buf:g%d+24' % i, 'pointer': 'grp%d' % i})
        memory.append({'addr': 'buf:grp%d+8' % i, 'pointer': 'gsent%d' % i})
        values = ['v%d_%d' % (i, j) for j in range(count)]
        for name in values:
            buffers[name] = {'size': NODE_SIZE}
            buffers['val' + name[1:]] = {'size': VALUE_SIZE}
            memory.append({'addr': 'buf:%s+24' % name, 'pointer': 'val' + name[1:]})
        ring(buffers, memory, 'gsent%d' % i, values)
        for _ in values:
            stubs.append({'address': RESET, 'argc': 1})
    ring(buffers, memory, 'sentinel', outer)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:self'}, 'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_groups', []),
    case('one_empty_group', [0]),
    case('one_value', [1]),
    case('several_values_one_group', [3]),
    case('empty_group_between', [1, 0, 2]),
    case('all_groups_empty', [0, 0]),
    case('several_groups', [2, 1, 3]),
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
