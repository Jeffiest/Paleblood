#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic entry arrays for the release-and-clear routine at 0x02b3d3f0.

usage: release_entries_and_clear_cases.py OUT_DIR

The owner holds its vtable word, the begin and end pointers (+0x10, +0x18), the word at +0x20 and
the allocator at +0x28. Entries are 16 bytes: the object pointer, then the 32-bit kind. Counted
entries (kind 3) hold a counted object whose first vtable slot is a stub; the decrement callee
(0x0247ec00) returns the count before the drop, scripted per entry. Covers a null begin, an empty
range, every count outcome (last reference, shared, zero, minus one), uncounted kinds, and mixed
ranges in which a fatal report comes before a destroy.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3d3f0'
DECREMENT = '0x0247ec00'
FATAL = '0x024b55b0'
FREE = '0x00500700'
DESTROY = '0x00500900'
ENTRY_BYTES = 0x10
MASK32 = (1 << 32) - 1
COUNTED = 3


def case(cid, entries, begin=True, word=0x5a5a5a5a5a5a5a5a):
    """entries: (kind, count) per entry; count is the decrement's old value and is ignored for other
    kinds. begin False leaves the storage null (the routine then does nothing to the owner)."""
    buffers = {'owner': {'size': 0x30}, 'store': {'size': ENTRY_BYTES * max(len(entries), 1)},
               'alloc': {'size': 0x10}, 'avt': {'size': 0x80}}
    memory = [
        {'addr': 'buf:owner+32', 'bytes': struct.pack('<Q', word).hex()},
        {'addr': 'buf:owner+40', 'pointer': 'alloc'},
        {'addr': 'buf:alloc+0', 'pointer': 'avt'},
        {'addr': 'buf:avt+112', 'guest': FREE},
    ]
    stubs = []
    fatal_count, destroy_count, decrements = 0, 0, []
    for i, (kind, count) in enumerate(entries):
        offset = i * ENTRY_BYTES
        memory.append({'addr': f'buf:store+{offset + 8}', 'bytes': struct.pack('<I', kind).hex()})
        if kind == COUNTED:
            buffers[f'obj{i}'] = {'size': 0x10}
            buffers[f'objvt{i}'] = {'size': 0x10}
            memory.append({'addr': f'buf:objvt{i}+0', 'guest': DESTROY})
            memory.append({'addr': f'buf:store+{offset}', 'pointer': f'obj{i}'})
            memory.append({'addr': f'buf:obj{i}+0', 'pointer': f'objvt{i}'})
            decrements.append(count & MASK32)
            if count & MASK32 == 1:
                destroy_count += 1
            elif (count & MASK32) == 0 or (count & MASK32) >= (1 << 31):
                fatal_count += 1
        else:
            memory.append({'addr': f'buf:store+{offset}', 'bytes': '00' * 8})
    for old in decrements:
        stubs.append({'address': DECREMENT, 'argc': 1, 'ret': hex(old)})
    stubs += [{'address': DESTROY, 'argc': 1} for _ in range(destroy_count)]
    stubs += [{'address': FATAL, 'argc': 3} for _ in range(fatal_count)]
    if begin:
        memory.append({'addr': 'buf:owner+16', 'pointer': 'store'})
        memory.append({'addr': 'buf:owner+24', 'pointer': f'store+{len(entries) * ENTRY_BYTES}'})
        stubs.append({'address': FREE, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('null_begin_leaves_range', [], begin=False),
    case('empty_range_frees_storage', []),
    case('single_counted_last_reference', [(COUNTED, 1)]),
    case('single_counted_shared', [(COUNTED, 2)]),
    case('single_counted_zero_fatal', [(COUNTED, 0)]),
    case('single_counted_minus_one_fatal', [(COUNTED, MASK32)]),
    case('single_counted_high_bit_fatal', [(COUNTED, 1 << 31)]),
    case('uncounted_kinds_untouched', [(0, None), (2, None), (4, None)]),
    case('mixed_shared_uncounted_last', [(COUNTED, 2), (0, None), (COUNTED, 1)]),
    case('fatal_then_destroy', [(COUNTED, 0), (COUNTED, 1)]),
    case('shared_shared_last_last', [(COUNTED, 2), (COUNTED, 2), (COUNTED, 1), (COUNTED, 1)]),
    case('kind_four_then_counted', [(4, None), (COUNTED, 1)]),
    case('uncounted_between_fatal', [(COUNTED, MASK32), (1, None), (COUNTED, 0)]),
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
