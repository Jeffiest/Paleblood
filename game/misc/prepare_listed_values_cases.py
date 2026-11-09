#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owned states for misc_prepare_listed_values (0x026e79d0): an empty outer list, empty
groups, values with an element array of two, with a null array and with a zero count, and the
manager mode at -1 (passed as zero), zero, positive and high-bit values.

usage: prepare_listed_values_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026e79d0'
PREPARE = '0x01242e90'
ROOT_GLOBAL = '0x05940dd8'
SENTINEL = 0x318
OBJECT_SIZE = 0x998
NODE_SIZE = 0x20
GROUP_SIZE = 0x10
VALUE_SIZE = 0x2d0
ELEMENT_SIZE = 0x28
ROOT_TO_MANAGER = 0x5ad0
MODE_OFFSET = 0x80
MANAGER_SIZE = 0x1c0
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def q(value):
    """A little-endian 64-bit value."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def u32(value):
    """A little-endian 32-bit value."""
    return (value & MASK32).to_bytes(4, 'little').hex()


def ring(memory, head, names):
    """Links head, then the names, into a ring: next at +0, prev at +8."""
    order = [head] + names
    for k, name in enumerate(order):
        memory.append({'addr': 'buf:%s+0' % name, 'pointer': order[(k + 1) % len(order)]})
        memory.append({'addr': 'buf:%s+8' % name, 'pointer': order[k - 1]})


def case(cid, groups, mode, element_mode='array'):
    """groups: the number of values in each group's inner list. Each value has a flag set and an
    element array of two elements with their flags set, or a null array, or an array with count zero.
    The prepare call is made once per value, in list order, with the mode (-1 becomes zero)."""
    buffers = {'self': {'size': OBJECT_SIZE}, 'sentinel': {'size': NODE_SIZE},
               'root': {'size': ROOT_TO_MANAGER + 8}, 'mgr': {'size': MANAGER_SIZE}}
    memory = [{'addr': 'buf:self+%d' % SENTINEL, 'pointer': 'sentinel'},
              {'addr': ROOT_GLOBAL, 'pointer': 'root'},
              {'addr': 'buf:root+%d' % ROOT_TO_MANAGER, 'pointer': 'mgr'},
              {'addr': 'buf:mgr+%d' % MODE_OFFSET, 'bytes': u32(mode)}]
    stubs = []
    outer = ['g%d' % i for i in range(len(groups))]
    for i, count in enumerate(groups):
        buffers['g%d' % i] = {'size': NODE_SIZE}
        buffers['grp%d' % i] = {'size': GROUP_SIZE}
        buffers['gsent%d' % i] = {'size': NODE_SIZE}
        memory.append({'addr': 'buf:g%d+24' % i, 'pointer': 'grp%d' % i})
        memory.append({'addr': 'buf:grp%d+8' % i, 'pointer': 'gsent%d' % i})
        values = ['v%d_%d' % (i, j) for j in range(count)]
        for name in values:
            suffix = name[1:]
            buffers[name] = {'size': NODE_SIZE}
            buffers['val' + suffix] = {'size': VALUE_SIZE}
            buffers['elem' + suffix] = {'size': ELEMENT_SIZE * 2, 'bytes': 'aa' * ELEMENT_SIZE * 2}
            memory.append({'addr': 'buf:%s+24' % name, 'pointer': 'val' + suffix})
            memory.append({'addr': 'buf:val%s+704' % suffix, 'bytes': '%02x' % 0xff})
            if element_mode == 'array':
                memory.append({'addr': 'buf:val%s+712' % suffix, 'pointer': 'elem' + suffix})
                memory.append({'addr': 'buf:val%s+708' % suffix, 'bytes': u32(2)})
            elif element_mode == 'zero':
                memory.append({'addr': 'buf:val%s+712' % suffix, 'pointer': 'elem' + suffix})
                memory.append({'addr': 'buf:val%s+708' % suffix, 'bytes': u32(0)})
            else:
                memory.append({'addr': 'buf:val%s+712' % suffix, 'bytes': q(0)})
                memory.append({'addr': 'buf:val%s+708' % suffix, 'bytes': u32(2)})
            stubs.append({'address': PREPARE, 'argc': 3, 'argi': [0, 1], 'argu32': [2]})
        ring(memory, 'gsent%d' % i, values)
    ring(memory, 'sentinel', outer)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:self'}, 'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_groups', [], 5),
    case('one_empty_group', [0], 5),
    case('one_value_array', [1], 5),
    case('mode_negative_one_is_zero', [1], -1),
    case('mode_zero', [1], 0),
    case('mode_high_bit', [1], 0x80000000),
    case('mode_positive', [2], 0x7fffffff),
    case('null_element_array', [1], 3, element_mode='null'),
    case('zero_count_array', [1], 3, element_mode='zero'),
    case('several_groups_with_empty', [2, 0, 1], 9),
    case('all_groups_empty', [0, 0], 9),
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
