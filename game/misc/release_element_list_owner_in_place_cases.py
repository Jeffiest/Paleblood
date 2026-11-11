#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic element list owners (0x022547b0): arrays present or absent in each list, an end pointer set while its
begin is null, and results from the list clear, from the second free and from the first free. The clear is stubbed
with its own return value, which is what RAX holds when no array is freed. The second array is freed first, then the
first; each free is stubbed and returns the value the free leaves in RAX.

usage: release_element_list_owner_in_place_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x022547b0'
CLEAR_LISTS = '0x02254830'
FREE = '0x004000a0'          # a real game function entry, stubbed as each allocator's free slot
OWNER_SIZE = 0x58
ARRAY_SIZE = 0x20
ALLOCATOR_FREE_SLOT = 0x70
ALLOCATOR_VTABLE_SIZE = 0x80
MASK64 = (1 << 64) - 1


def case(cid, first=True, second=True, clear=0x7001, free_first=0x8001, free_second=0x9001, fill='ee'):
    """One owner. A list's begin is its array when present and null otherwise, and its end is always past its array.
    The routine's result is the first array's free when present, otherwise the second array's, otherwise the clear's."""
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
              {'addr': 'buf:owner+0x20', 'pointer': f'array_a+{ARRAY_SIZE:#x}'},
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
    stubs = [{'address': CLEAR_LISTS, 'argc': 1, 'ret': hex(clear & MASK64)}]
    if second:
        stubs.append({'address': FREE, 'argc': 2, 'ret': hex(free_second & MASK64)})
    if first:
        stubs.append({'address': FREE, 'argc': 2, 'ret': hex(free_first & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('no_arrays_clear_result_kept', first=False, second=False, clear=0x7abc),
    case('no_arrays_clear_zero', first=False, second=False, clear=0),
    case('first_array_only', second=False),
    case('second_array_only', first=False),
    case('both_arrays_first_free_wins', free_first=0x1111, free_second=0x2222),
    case('first_free_result_top_bit', second=False, free_first=1 << 63),
    case('second_free_result_all_ones', first=False, free_second=MASK64),
    case('first_free_result_zero', free_first=0),
    case('clear_result_top_bit_kept', first=False, second=False, clear=1 << 63),
    case('clear_all_ones_kept', first=False, second=False, clear=MASK64),
    case('owner_fill_zero', fill='00', free_first=0x42),
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
