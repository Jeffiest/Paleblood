#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owned states for misc_update_owned_entries (0x026e6fe0): no entry array (nothing is
called), an array with an entry count of zero, one, equal to the number of values, and greater;
values in several groups, where the entry index runs on across the groups; empty groups; and the
arguments' full 64-bit values.

usage: update_owned_entries_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026e6fe0'
UPDATE_ENTRY = '0x026de8b0'
FOLLOW_UP = '0x0122e6b0'
MASK64 = (1 << 64) - 1
OBJECT_SIZE = 0x998
SENTINEL = 0x318
TABLE = 0x978
ENTRIES = 0x980
ENTRY_COUNT = 0x988
UNKNOWN_6B0 = 0x6b0
ENTRY_SIZE = 0x120
NODE_SIZE = 0x20
GROUP_SIZE = 0x10
VALUE_SIZE = 0x48


def q(value):
    """A little-endian 64-bit value."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def u32(value):
    """A little-endian 32-bit value."""
    return (value & 0xffffffff).to_bytes(4, 'little').hex()


def ring(buffers, memory, head, names):
    """Links head, then the names, into a ring: next at +0, prev at +8."""
    order = [head] + names
    for k, name in enumerate(order):
        memory.append({'addr': 'buf:%s+0' % name, 'pointer': order[(k + 1) % len(order)]})
        memory.append({'addr': 'buf:%s+8' % name, 'pointer': order[k - 1]})


def case(cid, groups, entries=True, count=0, second=0x77, third=0x88):
    """groups: the number of values in each group's inner list. With entries, the update is called
    on the whole array first, then on each value whose index is below the count, then the follow-up
    receives the item, the second argument and the array."""
    buffers = {'self': {'size': OBJECT_SIZE}, 'sentinel': {'size': NODE_SIZE}, 'table': {'size': 16}}
    memory = [{'addr': 'buf:self+%d' % SENTINEL, 'pointer': 'sentinel'},
              {'addr': 'buf:self+%d' % TABLE, 'pointer': 'table'},
              {'addr': 'buf:self+%d' % ENTRY_COUNT, 'bytes': u32(count)}]
    stubs = []
    if entries:
        buffers['entries'] = {'size': ENTRY_SIZE * (count + len(groups) + 2)}
        memory.append({'addr': 'buf:self+%d' % ENTRIES, 'pointer': 'entries'})
        stubs.append({'address': UPDATE_ENTRY, 'argc': 3})
    else:
        memory.append({'addr': 'buf:self+%d' % ENTRIES, 'bytes': q(0)})
    buffers['self']['size'] = OBJECT_SIZE
    memory.append({'addr': 'buf:self+%d' % UNKNOWN_6B0, 'bytes': '00' * 8})

    outer = ['g%d' % i for i in range(len(groups))]
    index = 1
    for i, size in enumerate(groups):
        buffers['g%d' % i] = {'size': NODE_SIZE}
        buffers['grp%d' % i] = {'size': GROUP_SIZE}
        buffers['gsent%d' % i] = {'size': NODE_SIZE}
        memory.append({'addr': 'buf:g%d+24' % i, 'pointer': 'grp%d' % i})
        memory.append({'addr': 'buf:grp%d+8' % i, 'pointer': 'gsent%d' % i})
        values = ['v%d_%d' % (i, j) for j in range(size)]
        for name in values:
            buffers[name] = {'size': NODE_SIZE}
            buffers['val' + name[1:]] = {'size': VALUE_SIZE}
            memory.append({'addr': 'buf:%s+24' % name, 'pointer': 'val' + name[1:]})
            if entries and count > index:
                stubs.append({'address': UPDATE_ENTRY, 'argc': 3})
            index += 1
        ring(buffers, memory, 'gsent%d' % i, values)
    ring(buffers, memory, 'sentinel', outer)
    if entries:
        stubs.append({'address': FOLLOW_UP, 'argc': 3})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:self', 'rsi': hex(second & MASK64), 'rdx': hex(third & MASK64)},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_entry_array', [2], entries=False),
    case('no_entry_array_no_groups', [], entries=False),
    case('empty_array_no_groups', [], count=0),
    case('empty_array_values', [2, 1], count=0),
    case('count_one_values', [2], count=1),
    case('count_equals_values', [2], count=2),
    case('count_above_values', [1, 2], count=5),
    case('index_runs_across_groups', [2, 0, 2], count=4),
    case('empty_group_between', [1, 0, 2], count=2),
    case('full_64_bit_arguments', [1], count=2, second=0xffffffff00000001, third=0x8000000000000002),
    case('no_groups_array', [], count=3, second=0, third=MASK64),
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
