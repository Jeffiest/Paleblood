#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for attach_two_objects at 0x0139b160, for tools/verify.py run.

usage: attach_two_objects_cases.py OUT_DIR

Stubs follow the call order: the object lookup, then per child the context lookup, the allocation,
the optional initializer, the object's update slot (0x78) and two field registrations. The
update slot and the registration calls are stubs, and the child allocations may return null.
Covers a null source (no calls at all), and each allocation outcome.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0139b160'
LOOKUP = '0x0140a410'
CONTEXT = '0x0140ce80'
ALLOCATE = '0x0247c4e0'
INITIALIZE = '0x01401c90'
REGISTER = '0x02d85350'
UPDATE = '0x00400620'
MASK64 = (1 << 64) - 1


def case(cid, source=True, child_first='buf:child1', child_second='buf:child2',
         context_first=0x1111111111111111, context_second=0x2222222222222222):
    """One attach: a source (or none), the two allocation results and the two context values."""
    buffers = {'holder': {'size': 0x40, 'bytes': 'e6' * 0x40},
               'source': {'size': 8}, 'object': {'size': 8}, 'object_vt': {'size': 0x80},
               'child1': {'size': 0x50}, 'child2': {'size': 0x50}}
    memory = [{'addr': 'buf:object', 'pointer': 'object_vt'},
              {'addr': 'buf:object_vt+0x78', 'guest': UPDATE}]
    stubs = []
    if source:
        stubs.append({'address': LOOKUP, 'argc': 2, 'argi': [0], 'ret': 'buf:object'})
        for context, child, init in ((context_first, child_first, 'buf:name_a'),
                                     (context_second, child_second, 'buf:name_b')):
            stubs.append({'address': CONTEXT, 'argc': 0, 'ret': hex(context & MASK64)})
            stubs.append({'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': child})
            if child != '0x0':
                stubs.append({'address': INITIALIZE, 'argc': 2, 'argi': [0]})
            stubs.append({'address': UPDATE, 'argc': 3, 'argi': [0, 1, 2]})
            stubs.append({'address': REGISTER, 'argc': 3, 'argi': [0, 2]})
            stubs.append({'address': REGISTER, 'argc': 3, 'argi': [0, 2]})
    args = {'rdi': 'buf:holder', 'rsi': 'buf:source' if source else '0x0',
            'rdx': '0x0', 'rcx': '0x0', 'r8': '0x0', 'r9': '0x0'}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('both_children_allocated'),
    case('no_source_no_calls', source=False),
    case('first_allocation_null', child_first='0x0'),
    case('second_allocation_null', child_second='0x0'),
    case('both_allocations_null', child_first='0x0', child_second='0x0'),
    case('context_values_all_ones', context_first=MASK64, context_second=0),
]


def main():
    """Write deterministic fixtures to the requested directory."""
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
