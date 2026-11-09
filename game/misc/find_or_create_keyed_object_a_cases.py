#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic keyed lookups for misc_find_or_create_keyed_object_a (0x026f2270), for tools/verify.py run.

usage: find_or_create_keyed_object_a_cases.py OUT_DIR

The owner's first entry vector sits at +0x1338: its begin pointer is at +0x1340 and its end pointer at
+0x1348. Each entry is 0x18 bytes: three keys, a hidden byte at +0x0c and the object at +0x10. A key that
matches an entry with a clear hidden byte returns that entry's object with no allocation. Otherwise the
allocator's allocate slot (a stub, called twice in order: the entry, then the object) runs, the builder
(a stub) fills the object, and the entry is pushed (a stub) only when the builder reports success.
Allocator and builder results are scripted. A null entry with a successful builder would store through
null, so no case scripts that combination.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x026f2270'
ALLOCATE = '0x00400020'      # the allocator's allocate slot at 0x58; stubbed
BUILD = '0x0259f130'         # fills the new object from the request record; stubbed
PUSH = '0x026f47c0'          # appends the entry pointer to the owner's vector; stubbed
ALLOCATOR_GLOBAL = '0x05940680'
LIST_OFFSET = 0x1338
SELF_SIZE = 0x1380
ALLOCATE_SLOT = 0x58
ENTRY_SIZE = 0x18
OBJECT_SIZE = 0x90
HIDDEN_OFFSET = 0x0c
OBJECT_OFFSET = 0x10
GARBAGE_HIGH = 0x5a5a5a5a << 32
MASK32 = (1 << 32) - 1


def u32(value):
    """Four little-endian bytes of a 32-bit value."""
    return struct.pack('<I', value & MASK32).hex()


def reg(value):
    """A register value: the key in its low half, garbage in the high half the function ignores."""
    return f'0x{GARBAGE_HIGH | (value & MASK32):x}'


def case(cid, key=(0x11, 0x22, 0x33), entries=(), node=True, obj=True, built=True):
    """One call. entries are (key_a, key_b, key_c, hidden) in list order."""
    matched = any(hidden == 0 and tuple(v & MASK32 for v in entry[:3]) == tuple(v & MASK32 for v in key)
                  for entry in entries for hidden in [entry[3]])
    built = built and node and obj
    buffers = {
        'self': {'size': SELF_SIZE},
        'list': {'size': 0x40},
        'alloc': {'size': 0x10},
        'alloc_vt': {'size': 0x78},
        'node_buf': {'size': ENTRY_SIZE},
        'obj_buf': {'size': OBJECT_SIZE},
    }
    memory = [
        {'addr': ALLOCATOR_GLOBAL, 'pointer': 'alloc'},
        {'addr': 'buf:alloc+0', 'pointer': 'alloc_vt'},
        {'addr': f'buf:alloc_vt+{ALLOCATE_SLOT:#x}', 'guest': ALLOCATE},
        {'addr': f'buf:self+{LIST_OFFSET + 0x08:#x}', 'pointer': 'list'},
        {'addr': f'buf:self+{LIST_OFFSET + 0x10:#x}',
         'pointer': f'list+{8 * len(entries):#x}' if entries else 'list'},
    ]
    for index, (key_a, key_b, key_c, hidden) in enumerate(entries):
        buffers[f'entry{index}'] = {'size': ENTRY_SIZE, 'bytes': (
            u32(key_a) + u32(key_b) + u32(key_c) + f'{hidden:02x}' + '000000')}
        buffers[f'eobj{index}'] = {'size': OBJECT_SIZE}
        memory.append({'addr': f'buf:list+{8 * index:#x}', 'pointer': f'entry{index}'})
        memory.append({'addr': f'buf:entry{index}+{OBJECT_OFFSET:#x}', 'pointer': f'eobj{index}'})
    stubs = []
    if not matched:
        stubs.append({'address': ALLOCATE, 'argc': 3, 'ret': 'buf:node_buf' if node else 0})
        stubs.append({'address': ALLOCATE, 'argc': 3, 'ret': 'buf:obj_buf' if obj else 0})
        stubs.append({'address': BUILD, 'argc': 4, 'argi': [0, 2, 3], 'ret': 1 if built else 0})
        if built:
            stubs.append({'address': PUSH, 'argc': 2, 'argi': [0]})
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:self', 'rsi': reg(key[0]), 'rdx': reg(key[1]), 'rcx': reg(key[2])},
        'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs,
    }


CASES = [
    case('empty_list_builds_object'),
    case('single_match_returns_existing', entries=[(0x11, 0x22, 0x33, 0)]),
    case('hidden_match_builds_object', entries=[(0x11, 0x22, 0x33, 1)]),
    case('first_key_mismatch_builds', entries=[(0x10, 0x22, 0x33, 0)]),
    case('second_key_mismatch_builds', entries=[(0x11, 0x21, 0x33, 0)]),
    case('third_key_mismatch_builds', entries=[(0x11, 0x22, 0x34, 0)]),
    case('match_after_mismatch', entries=[(0x11, 0x22, 0x34, 0), (0x11, 0x22, 0x33, 0)]),
    case('match_after_hidden', entries=[(0x11, 0x22, 0x33, 1), (0x11, 0x22, 0x33, 0)]),
    case('two_entries_no_match_builds', entries=[(0x1, 0x2, 0x3, 0), (0x4, 0x5, 0x6, 0)]),
    case('zero_keys_builds', key=(0, 0, 0)),
    case('negative_keys_match', key=(-1, -2, 3), entries=[(-1, -2, 3, 0)]),
    case('node_alloc_fails', node=False),
    case('object_alloc_fails', obj=False),
    case('builder_refuses', built=False),
    case('builder_refuses_after_entries', built=False, entries=[(0x1, 0x2, 0x3, 0)]),
]


def main():
    """Write deterministic synthetic lookups to the requested directory."""
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
