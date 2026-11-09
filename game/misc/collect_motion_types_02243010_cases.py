#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic motion-type collections for misc_collect_motion_types_02243010 (0x02243010), for tools/verify.py run.

usage: collect_motion_types_02243010_cases.py OUT_DIR

The list's indices sit in a buffer, with their count at +0x28. Each index names a body (0x90 bytes, its
motion index at +0x68); each motion (0x80 bytes) has a 16-bit type at +0x38. The world is reached from the
physics manager global at 0x0593d700 through its holder (+0x28) and world (+0x8); the world keeps its body
table at +0x20 and its motion table at +0xe0. The id vector's storage holds the ids the owner already has,
followed by the values the pushes will add, so that the push stub only moves the end pointer, as the
push itself would. An empty list must not read the manager, so its case has no manager.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02243010'
MANAGER_GLOBAL = '0x0593d700'
PUSH = '0x02bc1bb0'
BODY_SIZE = 0x90
MOTION_SIZE = 0x80
STORAGE_SIZE = 0x80
MASK32 = (1 << 32) - 1
LISTED_FROM = 5


def case(cid, body_motions=(), motion_types=(), indices=(), initial=()):
    """One call: body_motions maps each body to a motion, motion_types gives each motion's type."""
    count = len(indices)
    buffers = {'owner': {'size': 0x30, 'bytes': 'ee' * 0x30},
               'list': {'size': 0x30, 'bytes': ('00' * 0x28) + struct.pack('<i', count).hex() + '00' * 4},
               'indices': {'size': max(4 * count, 4),
                           'bytes': b''.join(struct.pack('<i', i) for i in indices).hex()}}
    memory = [{'addr': 'buf:list+0x20', 'pointer': 'indices'}]
    storage = list(initial)
    pushes = []
    for index in indices:
        value = motion_types[body_motions[index]]
        if value >= LISTED_FROM and value not in storage:
            storage.append(value)
            pushes.append(value)
    buffers['storage'] = {'size': STORAGE_SIZE,
                          'bytes': b''.join((value & MASK32).to_bytes(4, 'little') for value in storage).hex()}
    memory += [{'addr': 'buf:owner+0x10', 'pointer': 'storage'},
               {'addr': 'buf:owner+0x18', 'pointer': f'storage+0x{4 * len(initial):x}'},
               {'addr': 'buf:owner+0x20', 'pointer': f'storage+0x{STORAGE_SIZE:x}'}]
    stubs = []
    for k, value in enumerate(pushes):
        end = len(initial) + k + 1
        stubs.append({'address': PUSH, 'argc': 2, 'argi': [0], 'argmem': [{'arg': 1, 'size': 4}],
                      'writes': [{'arg': 0, 'offset': 0x10, 'pointer': f'storage+0x{4 * end:x}'}]})
    if count:
        bodies = b''.join(b'\xc5' * 0x68 + struct.pack('<i', motion) + b'\xd4' * (BODY_SIZE - 0x6c)
                          for motion in body_motions)
        motions = b''.join(b'\xa7' * 0x38 + struct.pack('<H', value) + b'\x5b' * (MOTION_SIZE - 0x3a)
                           for value in motion_types)
        buffers.update({'mgr': {'size': 0x30}, 'holder': {'size': 0x10}, 'world': {'size': 0xe8},
                        'bodies': {'size': len(bodies), 'bytes': bodies.hex()},
                        'motions': {'size': len(motions), 'bytes': motions.hex()}})
        memory += [{'addr': MANAGER_GLOBAL, 'pointer': 'mgr'},
                   {'addr': 'buf:mgr+0x28', 'pointer': 'holder'},
                   {'addr': 'buf:holder+0x8', 'pointer': 'world'},
                   {'addr': 'buf:world+0x20', 'pointer': 'bodies'},
                   {'addr': 'buf:world+0xe0', 'pointer': 'motions'}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': 'buf:list'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('empty_list'),
    case('one_body_below_listed_type', body_motions=[0], motion_types=[4], indices=[0]),
    case('one_body_listed_type_pushed', body_motions=[0], motion_types=[5], indices=[0]),
    case('listed_type_already_held', body_motions=[0], motion_types=[5], indices=[0], initial=[5]),
    case('several_types_pushed_in_order', body_motions=[0, 1, 2], motion_types=[7, 9, 12],
         indices=[0, 1, 2]),
    case('same_type_pushed_once', body_motions=[0, 0, 0], motion_types=[6], indices=[0, 1, 2]),
    case('mixed_below_and_listed', body_motions=[0, 1, 2, 3, 4], motion_types=[3, 5, 4, 8, 5],
         indices=[4, 0, 1, 2, 3]),
    case('match_found_past_existing_ids', body_motions=[0], motion_types=[6], indices=[0],
         initial=[9, 6, 11]),
    case('shared_motion_and_reordered_indices', body_motions=[1, 0, 1], motion_types=[10, 0xffff],
         indices=[2, 0, 2, 1]),
    case('all_ones_and_zero_types', body_motions=[0, 1], motion_types=[0xffff, 0], indices=[1, 0],
         initial=[0xffffffff]),
    case('held_ids_then_new_type', body_motions=[0, 1], motion_types=[8, 4], indices=[1, 0],
         initial=[5, 8, 5]),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
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
