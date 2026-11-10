#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners for bb_misc_query_owned_child (0x02b3f260): an owner with no child, and owners
whose child answers zero, ordinary, all-ones and high-bit values, with the owner's other words kept.

usage: query_owned_child_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3f260'
QUERY_SLOT = '0x00400020'
OWNER_BYTES = 0x38
CHILD_BYTES = 8
VTABLE_BYTES = 0x38
QUERY_SLOT_OFFSET = 0x30
MASK64 = (1 << 64) - 1


def case(cid, answer=None, owner_fill='ab'):
    """One query: with a child, the child's query slot is stubbed and its answer is returned; with
    no child, the result is zero and the query slot is never reached."""
    buffers = {'owner': {'size': OWNER_BYTES, 'bytes': owner_fill * OWNER_BYTES}}
    memory = []
    stubs = []
    if answer is None:
        memory.append({'addr': 'buf:owner+0x30', 'bytes': '00' * 8})
    else:
        buffers['child'] = {'size': CHILD_BYTES, 'bytes': '00' * CHILD_BYTES}
        buffers['child_vt'] = {'size': VTABLE_BYTES, 'bytes': '00' * VTABLE_BYTES}
        memory += [
            {'addr': 'buf:owner+0x30', 'pointer': 'child'},
            {'addr': 'buf:child', 'pointer': 'child_vt'},
            {'addr': f'buf:child_vt+{QUERY_SLOT_OFFSET:#x}', 'guest': QUERY_SLOT},
        ]
        stubs.append({'address': QUERY_SLOT, 'argc': 1, 'ret': hex(answer & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('no_child_returns_zero'),
    case('no_child_owner_words_kept', owner_fill='5c'),
    case('child_answers_zero', answer=0),
    case('child_answers_ordinary', answer=0x1234),
    case('child_answers_all_ones', answer=MASK64),
    case('child_answers_high_bit', answer=0x8000000000000000),
    case('child_answers_upper_word', answer=0x100000000),
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
