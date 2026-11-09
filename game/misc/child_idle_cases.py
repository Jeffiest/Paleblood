#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic idle checks for misc_child_idle (0x00409b30).

The owner's child vtable slot at 0x20 is a stub whose 64-bit return is scripted, so the low 32 bits
(what the game tests) and the upper word both get exercised. Covers zero, negative, minimum and
upper-word-only query results against a zero and a non-zero counter.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00409b30'
QUERY_FN = '0x00400120'
OWNER_BYTES = 0x80
COUNTER_OFFSET = 0x78
CHILD_OFFSET = 0x38
VTABLE_QUERY_OFFSET = 0x20
SENTINEL = 0xa5
CASES = [
    ('query_zero_counter_zero', 0x0, 0x0),
    ('query_zero_counter_set', 0x0, 0x5),
    ('query_one_counter_zero', 0x1, 0x0),
    ('query_one_counter_set', 0x1, 0x7),
    ('query_negative_counter_set', 0xffffffff, 0x1),
    ('query_int_min_counter_zero', 0x80000000, 0x0),
    ('query_int_min_counter_set', 0x80000000, 0x80000000),
    ('query_upper_word_only_counter_zero', 0x100000000, 0x0),
    ('query_upper_word_and_low_one_counter_set', 0x100000001, 0x3),
    ('query_negative_one_64_counter_zero', 0xffffffffffffffff, 0x0),
]


def case(cid, query_value, counter):
    """One check: the child query returns query_value, and the owner's counter holds counter."""
    owner = bytearray([SENTINEL]) * OWNER_BYTES
    owner[COUNTER_OFFSET:COUNTER_OFFSET + 4] = struct.pack('<I', counter & 0xffffffff)
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8', 'args': {'rdi': 'buf:owner'},
        'buffers': {'owner': {'size': OWNER_BYTES, 'bytes': bytes(owner).hex()},
                    'child': {'size': 8, 'bytes': '00' * 8},
                    'vtable': {'size': 0x28, 'bytes': '00' * 0x28}},
        'memory': [
            {'addr': f'buf:owner+{CHILD_OFFSET}', 'pointer': 'child'},
            {'addr': 'buf:child', 'pointer': 'vtable'},
            {'addr': f'buf:vtable+{VTABLE_QUERY_OFFSET}', 'guest': QUERY_FN},
        ],
        'imports': [],
        'stubs': [{'address': QUERY_FN, 'argc': 1, 'argi': [0], 'ret': hex(query_value)}],
    }


CASES_JSON = [case(cid, query, counter) for cid, query, counter in CASES]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES_JSON:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES_JSON)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
