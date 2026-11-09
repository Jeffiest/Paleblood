#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_replace_holder_object (0x0040f0b0), for tools/verify.py run.

usage: replace_holder_object_cases.py OUT_DIR

The caller's self holds a key and a table (0x10); the holder keeps an object (+0) and a list (+8).
The list's source chain leads to an owner value that the lookup (0x00418120) is given. The lookup's
result is written by a stub: a found flag and an index, or an object. The row helper (0x0042e5c0,
0x0042fe80), the release (0x0042e5d0), the built object's setup (0x0278b020), the service's allocate
slot and the object query slot are scripted. Each object's query answers with a scripted word. The
stub order per callee follows the original's call order. The one branch whose outcome is fixed by
the code (a zeroed pair is never released) is declared unreachable.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040f0b0'
LOOKUP = '0x00418120'
FILL_PAIR = '0x0042fe80'
RETAIN = '0x0042e5c0'
RELEASE = '0x0042e5d0'
BUILD = '0x0278b020'
ALLOCATE = '0x00400060'
QUERY = '0x00400080'
STACK_FAIL = '0x02fbe4f8'
GUARD_GLOBAL = '0x057e3be0'
MASK64 = (1 << 64) - 1
MASK32 = (1 << 32) - 1
BUILT_BYTES = 0x78
ROW_BYTES = 0x10

UNREACHABLE = {
    '0x0040f163': ('fallthrough',
                   'the pair is zeroed just before the call and nothing can write it, so the release never runs'),
}


def u32(value):
    """Four little-endian bytes."""
    return struct.pack('<I', value & MASK32).hex()


def u64(value):
    """Eight little-endian bytes."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, table=False, found=False, index=2, count=4, ready=True, row_first=True,
         second=0x5a5a5a5a, answer=0x100, value_set=True, old_set=True, key=0x77):
    """One replacement. Stub order per callee is the order the original makes its calls."""
    buffers = {
        'self': {'size': 0x20, 'bytes': ('00' * 0x0c + u32(key) + '00' * 0x10)},
        'holder': {'size': 0x10},
        'list': {'size': 0x30},
        'source': {'size': 0x50},
        'details': {'size': 0x20},
        'owner_info': {'size': 0x48},
        'owner_value': {'size': 8},
        'obj_vt': {'size': 0x20},
        'service': {'size': 8},
        'service_vt': {'size': 0x70},
        'new_obj': {'size': BUILT_BYTES},
        'guard': {'size': 8, 'bytes': u64(0x0123456789abcdef)},
        'table_obj': {'size': 0x10},
        'old_obj': {'size': 0x10},
        'cand_obj': {'size': 0x10},
        'value_obj': {'size': 0x10},
        'row_obj': {'size': 0x10},
        'rows': {'size': ROW_BYTES * (max(count, index + 1) + 1)},
    }
    memory = [
        {'addr': 'buf:self+0x10', 'pointer': 'table_obj'} if table else {'addr': 'buf:self+0x10', 'bytes': '00' * 8},
        {'addr': 'buf:holder', 'pointer': 'old_obj'} if old_set else {'addr': 'buf:holder', 'bytes': '00' * 8},
        {'addr': 'buf:holder+0x8', 'pointer': 'list'},
        {'addr': 'buf:list+0x10', 'pointer': 'rows'},
        {'addr': 'buf:list+0x8', 'bytes': u32(count) + '00' * 4},
        {'addr': 'buf:list+0x20', 'bytes': '01' if ready else '00'},
        {'addr': 'buf:list+0x28', 'pointer': 'source'},
        {'addr': 'buf:source+0x48', 'pointer': 'details'},
        {'addr': 'buf:details+0x18', 'pointer': 'owner_info'},
        {'addr': 'buf:owner_info+0x40', 'pointer': 'owner_value'},
        {'addr': 'buf:obj_vt+0x18', 'guest': QUERY},
        {'addr': 'buf:service', 'pointer': 'service_vt'},
        {'addr': 'buf:service_vt+0x50', 'guest': ALLOCATE},
        {'addr': GUARD_GLOBAL, 'pointer': 'guard'},
        {'addr': 'buf:table_obj', 'pointer': 'obj_vt'},
        {'addr': 'buf:old_obj', 'pointer': 'obj_vt'},
        {'addr': 'buf:cand_obj', 'pointer': 'obj_vt'},
        {'addr': 'buf:value_obj', 'pointer': 'obj_vt'},
        {'addr': 'buf:row_obj', 'pointer': 'obj_vt'},
    ]
    row_index = index
    memory.append({'addr': f'buf:rows+{hex(ROW_BYTES * row_index)}',
                   'pointer': 'row_obj' if row_first else 'table_obj'} if row_first else
                  {'addr': f'buf:rows+{hex(ROW_BYTES * row_index)}', 'bytes': '00' * 8})
    memory.append({'addr': f'buf:rows+{hex(ROW_BYTES * row_index + 8)}', 'bytes': u64(second)})

    stubs = []
    release_calls = []
    query_answers = []
    result_present = False
    allocate_calls = 0
    if table:
        result_present = True
    else:
        if found:
            lookup_value = {'arg': 1, 'offset': 8, 'bytes': u64(index), 'size': 8}
        elif value_set:
            lookup_value = {'arg': 1, 'offset': 8, 'pointer': 'value_obj', 'size': 8}
        else:
            lookup_value = {'arg': 1, 'offset': 8, 'bytes': '00' * 8, 'size': 8}
        stubs.append({'address': LOOKUP, 'argc': 3, 'argi': [0, 1, 2],
                      'writes': [{'arg': 1, 'offset': 0, 'bytes': u32(1 if found else 0) + '00' * 4, 'size': 8},
                                 lookup_value]})
        if found:
            # The row path reads the list directly; otherwise the pair is filled by a callee.
            array_path = ready and count > index
            if array_path:
                if row_first:
                    stubs.append({'address': RETAIN, 'argc': 1, 'argi': [0]})
                candidate = 'row_obj' if row_first else None
            else:
                stubs.append({'address': FILL_PAIR, 'argc': 3, 'argi': [0, 1, 2],
                              'writes': [{'arg': 1, 'offset': 0,
                                          **({'pointer': 'cand_obj'} if row_first else {'bytes': '00' * 8}),
                                          'size': 8},
                                         {'arg': 1, 'offset': 8, 'bytes': u64(second), 'size': 8}]})
                candidate = 'cand_obj' if row_first else None
            if candidate:
                release_calls.append(candidate)
                query_answers.append((candidate, answer))
                result_present = (answer & 0xff00) == 0x100
                result_name = candidate
        else:
            value = 'value_obj' if value_set else None
            if value:
                query_answers.append((value, answer))
                result_present = (answer & 0xff00) == 0x100
                result_name = value
                release_calls.append(value)
        if not found and not value_set:
            result_present = False
    if table:
        result_name = 'table_obj'
    # The releases follow the candidate or value release (before the build), then the old object.
    for name, ans in query_answers:
        stubs.append({'address': QUERY, 'argc': 1, 'argi': [0], 'ret': hex(ans & MASK64)})
    if result_present:
        allocate_calls = 1
        stubs.append({'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:new_obj'})
        stubs.append({'address': BUILD, 'argc': 5, 'argi': [0, 1, 2, 3, 4]})
        if old_set:
            release_calls.append('old_obj')
    # Release stubs in order: the candidate or value first, then the old object when rebuilt.
    release_stubs = []
    for name in release_calls:
        release_stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0]})
    stubs.extend(release_stubs)
    del allocate_calls
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
        'args': {'rdi': '0x0', 'rsi': 'buf:self', 'rdx': 'buf:holder', 'rcx': '0x0',
                 'r8': 'buf:service'},
        'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs,
        'UNREACHABLE': UNREACHABLE,
    }


CASES = [
    case('table_with_old_object', table=True, old_set=True),
    case('table_without_old_object', table=True, old_set=False),
    case('lookup_absent_value_rejected', found=False, value_set=True, answer=0x0),
    case('lookup_absent_value_accepted', found=False, value_set=True, answer=0x100, old_set=True),
    case('lookup_absent_no_value', found=False, value_set=False, old_set=True),
    case('lookup_absent_accepted_no_old', found=False, value_set=True, answer=0x100, old_set=False),
    case('found_array_row_accepted', found=True, index=2, count=4, ready=True, row_first=True,
         answer=0x100),
    case('found_array_row_empty', found=True, index=2, count=4, ready=True, row_first=False),
    case('found_not_ready_pair_filled', found=True, index=1, count=4, ready=False, row_first=True,
         answer=0x100),
    case('found_count_not_above_index', found=True, index=2, count=2, ready=True, row_first=True,
         answer=0x100),
    case('found_query_rejects', found=True, index=2, count=4, ready=True, row_first=True, answer=0x0),
    case('found_answer_high_bits_only', found=True, index=2, count=4, ready=True, row_first=True,
         answer=0x10100),
    case('found_answer_other_byte', found=True, index=2, count=4, ready=True, row_first=True,
         answer=0x1ff00),
    case('found_no_row_no_old', found=True, index=0, count=1, ready=True, row_first=False,
         old_set=False),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        fixture.pop('UNREACHABLE', None)
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
