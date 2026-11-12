#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_set_lookup_locked (0x00418570), for tools/verify.py run.

usage: set_lookup_locked_cases.py OUT_DIR

The list's level word decides the lock: below two the lock is taken around the set query (0x00415270),
otherwise the query runs alone. The query gets the set region, the key, the value and the low byte of
the flags; its result is the low byte the function returns.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00418570'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
QUERY = '0x00415270'
LIST_SIZE = 0x1c0
LEVEL_OFFSET = 0xe4
LOCKED_LEVEL_LIMIT = 2
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def case(cid, level, key=0x0123456789abcdef, value=0xfedcba9876543210, flags=0x12, query_ret=0x55):
    locked = level < LOCKED_LEVEL_LIMIT
    stubs = []
    if locked:
        stubs.append({'address': LOCK, 'argc': 1, 'argi': [0]})
    stubs.append({'address': QUERY, 'argc': 4, 'argi': [0, 1, 2, 3], 'ret': hex(query_ret & MASK64)})
    if locked:
        stubs.append({'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:list', 'rsi': hex(key & MASK64), 'rdx': hex(value & MASK64),
                     'rcx': hex(flags & MASK32)},
            'buffers': {'list': {'size': LIST_SIZE, 'bytes': 'c3' * LIST_SIZE}},
            'memory': [{'addr': 'buf:list+' + str(LEVEL_OFFSET), 'bytes': struct.pack('<i', level).hex()}],
            'stubs': stubs, 'imports': []}


CASES = [
    case('locked_level_zero', level=0),
    case('locked_level_negative', level=-1, key=0, value=0, flags=0),
    case('locked_level_one_flags_high_bits', level=1, flags=0xabcdef12),
    case('unlocked_level_two', level=2, query_ret=0x0f),
    case('unlocked_level_large', level=0x7fffffff, key=MASK64, value=MASK64, flags=MASK32),
    case('result_high_bits_dropped_locked', level=1, query_ret=0x123456789abcdef0),
    case('result_zero_locked', level=0, query_ret=0),
    case('result_high_bit_unlocked', level=3, query_ret=0xffffffffffffff80),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: set_lookup_locked_cases.py OUT_DIR', file=sys.stderr)
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
