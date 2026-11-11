#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic element list owners (0x02254740): each list's array present or absent, an end pointer set while its
begin is null (the test is on the begin only), both arrays, and results with the top bit set, zero, and all ones.
The list clear is stubbed at its address; each array is freed through its allocator's slot 0x70 in call order,
second array first; the release routine at the end of the tail call is stubbed and its result returned.

usage: destroy_element_list_owner_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02254740'
CLEAR_LISTS = '0x02254830'
RELEASE = '0x02fbe588'
FREE = '0x004000a0'          # a real game function entry, stubbed as each allocator's free slot
OWNER_SIZE = 0x58
ARRAY_SIZE = 0x20
ALLOCATOR_FREE_SLOT = 0x70
ALLOCATOR_VTABLE_SIZE = 0x80
MASK64 = (1 << 64) - 1


def case(cid, first=True, second=True, result=0x1234, fill='ee'):
    """One owner. A list's begin is its array when present and null otherwise; its end always points just past
    its array, so a null begin with a set end is a case of its own. The clear and the release come first and last."""
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': fill * OWNER_SIZE},
               'array_a': {'size': ARRAY_SIZE, 'bytes': 'dd' * ARRAY_SIZE},
               'array_b': {'size': ARRAY_SIZE, 'bytes': 'dd' * ARRAY_SIZE},
               'alloc_a': {'size': 0x10}, 'alloc_b': {'size': 0x10},
               'alloc_a_vt': {'size': ALLOCATOR_VTABLE_SIZE}, 'alloc_b_vt': {'size': ALLOCATOR_VTABLE_SIZE}}
    memory = [{'addr': 'buf:alloc_a+0x0', 'pointer': 'alloc_a_vt'},
              {'addr': 'buf:alloc_b+0x0', 'pointer': 'alloc_b_vt'},
              {'addr': f'buf:alloc_a_vt+{ALLOCATOR_FREE_SLOT:#x}', 'guest': FREE},
              {'addr': f'buf:alloc_b_vt+{ALLOCATOR_FREE_SLOT:#x}', 'guest': FREE},
              {'addr': 'buf:owner+0x28', 'pointer': 'alloc_a'},
              {'addr': 'buf:owner+0x50', 'pointer': 'alloc_b'},
              {'addr': 'buf:owner+0x18', 'pointer': f'array_a+{ARRAY_SIZE:#x}'},
              {'addr': 'buf:owner+0x40', 'pointer': f'array_b+{ARRAY_SIZE:#x}'},
              {'addr': 'buf:owner+0x48', 'pointer': f'array_b+{ARRAY_SIZE:#x}'}]
    if first:
        memory.append({'addr': 'buf:owner+0x10', 'pointer': 'array_a'})
    else:
        memory.append({'addr': 'buf:owner+0x10', 'bytes': '00' * 8})
    if second:
        memory.append({'addr': 'buf:owner+0x38', 'pointer': 'array_b'})
    else:
        memory.append({'addr': 'buf:owner+0x38', 'bytes': '00' * 8})
    stubs = [{'address': CLEAR_LISTS, 'argc': 1}]
    if second:
        stubs.append({'address': FREE, 'argc': 2})
    if first:
        stubs.append({'address': FREE, 'argc': 2})
    stubs.append({'address': RELEASE, 'argc': 1, 'ret': hex(result & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('no_arrays', first=False, second=False),
    case('first_array_only', second=False),
    case('second_array_only', first=False),
    case('both_arrays'),
    case('result_top_bit', result=1 << 63),
    case('result_zero', result=0),
    case('result_all_ones', result=MASK64),
    case('result_high_word_only', result=0x100000000, first=False),
    case('owner_fill_zero', fill='00', result=0x42),
    case('no_arrays_result_zero', first=False, second=False, result=0),
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
    sys.exit(main())
