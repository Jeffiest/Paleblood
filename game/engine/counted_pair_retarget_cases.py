#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted-pair fixtures for engine_counted_pair_retarget (0x004090b0).

usage: counted_pair_retarget_cases.py OUT_DIR

The pair slots hold two separate objects or the owner embedded object, and the counts
include wrapped and zero values. Each release the source makes is scripted as a stub in call
order, computed from the same count rules so that the scripted calls match the source order.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x004090b0'
RELEASE = '0x004f0410'
MASK32 = (1 << 32) - 1
EMBEDDED_HOLD = 2
FIRST_OBJECT = 'old_first'
SECOND_OBJECT = 'old_second'
EMBEDDED = 'embedded'
POINTERS = {FIRST_OBJECT: 'old_first', SECOND_OBJECT: 'old_second', EMBEDDED: 'owner+0x48'}


def word32(value):
    """Encode one 32-bit count as little-endian hex."""
    return struct.pack('<I', value & MASK32).hex()


def scripted_releases(embedded_count, first, first_count, second, second_count):
    """Return the objects the source releases, in call order."""
    counts = {EMBEDDED: embedded_count, FIRST_OBJECT: first_count, SECOND_OBJECT: second_count}
    released = []

    def drop(name):
        counts[name] = (counts[name] - 1) & MASK32
        if counts[name] == 0:
            released.append(name)

    counts[EMBEDDED] = (counts[EMBEDDED] + EMBEDDED_HOLD) & MASK32
    drop(first)
    drop(EMBEDDED)
    counts[EMBEDDED] = (counts[EMBEDDED] + 1) & MASK32
    drop(second)
    return released


def case(cid, embedded_count, first, first_count, second, second_count):
    """One rebinding: the pair starts with first and second; the owner embedded object is at 0x48."""
    stubs = [{'address': RELEASE, 'argc': 1, 'ret': '0x0'}
             for _ in scripted_releases(embedded_count, first, first_count, second, second_count)]
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
        'args': {'rdi': 'buf:pair', 'rsi': 'buf:owner'},
        'buffers': {
            'pair': {'size': 0x20, 'bytes': 'a5' * 0x20},
            'owner': {'size': 0x80, 'bytes': 'b6' * 0x80},
            'old_first': {'size': 0x20, 'bytes': 'c7' * 0x20},
            'old_second': {'size': 0x20, 'bytes': 'd8' * 0x20},
        },
        'memory': [
            {'addr': 'buf:pair+0x10', 'pointer': POINTERS[first]},
            {'addr': 'buf:pair+0x18', 'pointer': POINTERS[second]},
            {'addr': 'buf:owner+0x60', 'bytes': word32(embedded_count)},
            {'addr': 'buf:old_first+0x18', 'bytes': word32(first_count)},
            {'addr': 'buf:old_second+0x18', 'bytes': word32(second_count)},
        ],
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('ordinary_no_release', 5, FIRST_OBJECT, 3, SECOND_OBJECT, 3),
    case('first_count_reaches_zero', 5, FIRST_OBJECT, 1, SECOND_OBJECT, 3),
    case('second_count_reaches_zero', 5, FIRST_OBJECT, 3, SECOND_OBJECT, 1),
    case('embedded_count_wraps_to_zero', 0xffffffff, FIRST_OBJECT, 3, SECOND_OBJECT, 3),
    case('embedded_count_zero_no_release', 0, FIRST_OBJECT, 3, SECOND_OBJECT, 3),
    case('first_count_zero_wraps_no_release', 5, FIRST_OBJECT, 0, SECOND_OBJECT, 3),
    case('all_three_released', 0xffffffff, FIRST_OBJECT, 1, SECOND_OBJECT, 1),
    case('first_is_embedded', 0, EMBEDDED, 3, SECOND_OBJECT, 2),
    case('first_embedded_second_released', 0, EMBEDDED, 3, SECOND_OBJECT, 1),
    case('second_is_first_object', 5, FIRST_OBJECT, 2, FIRST_OBJECT, 2),
    case('first_and_second_same_object_released_once', 5, FIRST_OBJECT, 1, FIRST_OBJECT, 3),
    case('second_is_embedded_no_release', 0, FIRST_OBJECT, 3, EMBEDDED, 0),
    case('second_is_embedded_released_twice', 0xffffffff, FIRST_OBJECT, 3, EMBEDDED, 0),
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
