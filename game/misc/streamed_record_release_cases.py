#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic records for bb_misc_streamed_record_release (0x018cc8c0), for tools/verify.py run.

usage: streamed_record_release_cases.py OUT_DIR

A record with no child, with only its first child (+0x1f8), only its second (+0x280), and both.
Each child is an object whose first word is a vtable with a release slot, and each has an owner
found through 0x0247b720 whose remove slot (+0x70) is stubbed. The member release is stubbed, and
the body release is stubbed with the result it returns, which the replacement must return too.
The record's other bytes are filled with a pattern and must come back unchanged.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x018cc8c0'
OWNER_OF = '0x0247b720'
CHILD_RELEASE = '0x00400020'
OWNER_REMOVE = '0x00400300'
MEMBER_RELEASE = '0x01ec5880'
BODY_RELEASE = '0x01c93990'
RECORD_BYTES = 0x290
FIRST_CHILD = 0x1f8
SECOND_CHILD = 0x280
OWNER_REMOVE_OFFSET = 112
OWNER_VT_BYTES = 0x78


def case(cid, first=False, second=False, body_result='0x0'):
    """first and second say whether the record holds that child; body_result is what the body's
    release returns."""
    buffers = {'rec': {'size': RECORD_BYTES, 'bytes': 'a5' * RECORD_BYTES}}
    memory = []
    stubs = []
    for name, offset, present in (('second', SECOND_CHILD, second), ('first', FIRST_CHILD, first)):
        if not present:
            memory.append({'addr': f'buf:rec+{offset}', 'bytes': '00' * 8})
            continue
        owner = name + '_owner'
        buffers[name] = {'size': 8, 'bytes': '00' * 8}
        buffers[name + '_vt'] = {'size': 8, 'bytes': '00' * 8}
        buffers[owner] = {'size': 8, 'bytes': '00' * 8}
        buffers[owner + '_vt'] = {'size': OWNER_VT_BYTES, 'bytes': '00' * OWNER_VT_BYTES}
        memory += [
            {'addr': f'buf:rec+{offset}', 'pointer': name},
            {'addr': f'buf:{name}', 'pointer': name + '_vt'},
            {'addr': f'buf:{name}_vt', 'guest': CHILD_RELEASE},
            {'addr': f'buf:{owner}', 'pointer': owner + '_vt'},
            {'addr': f'buf:{owner}_vt+{OWNER_REMOVE_OFFSET}', 'guest': OWNER_REMOVE},
        ]
        stubs += [
            {'address': OWNER_OF, 'argc': 1, 'ret': f'buf:{owner}'},
            {'address': CHILD_RELEASE, 'argc': 1},
            {'address': OWNER_REMOVE, 'argc': 2, 'ret': '0x0'},
        ]
    stubs += [
        {'address': MEMBER_RELEASE, 'argc': 1},
        {'address': BODY_RELEASE, 'argc': 1, 'ret': body_result},
    ]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:rec'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('no_children'),
    case('first_child_only', first=True),
    case('second_child_only', second=True),
    case('both_children', first=True, second=True, body_result='0x1234'),
    case('body_result_high_bit', body_result='0x8000000000000001'),
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
