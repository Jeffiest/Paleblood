#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners whose child is asked through a vtable slot (a template: near_cases.py puts the
child's offset and the slot's offset in place of the slot names and the function's address in place
of the one below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

Covers an owner with no child, and owners whose child answers zero, ordinary, all-ones and high-bit
values. The owner reaches past the child pointer and is filled with other bytes, and every other slot
of the child's vtable leads to a second stub that must not be called.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3f260'
QUERY_SLOT = '0x00400020'    # a real game entry standing in for the child's slot; stubbed
OTHER_SLOT = '0x00400300'    # a real game entry in every other slot; a call to it is a mismatch
CHILD_FIELD = NEAR_SLOT_0
QUERY_SLOT_OFFSET = NEAR_SLOT_2
OWNER_BYTES = CHILD_FIELD + 0x20
CHILD_BYTES = 8
VTABLE_BYTES = QUERY_SLOT_OFFSET + 0x20
POINTER_BYTES = 8
MASK64 = (1 << 64) - 1


def case(cid, answer=None, owner_fill='ab'):
    """One query: with a child, the child's slot is stubbed and its answer is returned; with no
    child, the result is zero and the slot is never reached."""
    buffers = {'owner': {'size': OWNER_BYTES, 'bytes': owner_fill * OWNER_BYTES}}
    memory = []
    stubs = []
    if answer is None:
        memory.append({'addr': f'buf:owner+{CHILD_FIELD:#x}', 'bytes': '00' * POINTER_BYTES})
    else:
        buffers['child'] = {'size': CHILD_BYTES, 'bytes': '00' * CHILD_BYTES}
        buffers['child_vt'] = {'size': VTABLE_BYTES, 'bytes': '00' * VTABLE_BYTES}
        memory += [
            {'addr': f'buf:owner+{CHILD_FIELD:#x}', 'pointer': 'child'},
            {'addr': 'buf:child', 'pointer': 'child_vt'},
        ]
        memory += [{'addr': f'buf:child_vt+{offset:#x}',
                    'guest': QUERY_SLOT if offset == QUERY_SLOT_OFFSET else OTHER_SLOT}
                   for offset in range(0, VTABLE_BYTES, POINTER_BYTES)]
        stubs.append({'address': QUERY_SLOT, 'argc': 1, 'ret': hex(answer & MASK64)})
        stubs.append({'address': OTHER_SLOT, 'argc': 1, 'ret': hex(~answer & MASK64)})
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
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
