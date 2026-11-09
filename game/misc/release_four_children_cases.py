#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders for release_four_children at 0x0139b030, for tools/verify.py run.

usage: release_four_children_cases.py OUT_DIR

Each set child reference resolves its target through the scripted lookup at 0x0247b720, then its
notify slot (0x70) is a stub at guest 0x00400300 taking the target and the child. Stubs appear in
call order, so a set reference contributes two stubs. Covers every combination that matters for
each branch: none, each one alone, pairs, and all four set.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0139b030'
TARGET_LOOKUP = '0x0247b720'
NOTIFY = '0x00400300'
TARGET_SLOT = 0x70
FIELDS = {'first': 0x10, 'second': 0x18, 'third': 0x30, 'fourth': 0x38}


def case(cid, present=('first', 'second', 'third', 'fourth')):
    """One release: the holder's references, set for the named fields only, with a shared target."""
    buffers = {'holder': {'size': 0x40, 'bytes': 'e6' * 0x40},
               'target': {'size': 16}, 'target_vt': {'size': 0x78}}
    memory = [{'addr': 'buf:target', 'pointer': 'target_vt'},
              {'addr': f'buf:target_vt+0x{TARGET_SLOT:x}', 'guest': NOTIFY}]
    stubs = []
    for name, offset in FIELDS.items():
        if name in present:
            buffers[f'child_{name}'] = {'size': 8}
            memory.append({'addr': f'buf:holder+0x{offset:x}', 'pointer': f'child_{name}'})
            stubs.append({'address': TARGET_LOOKUP, 'argc': 1, 'argi': [0], 'ret': 'buf:target'})
            stubs.append({'address': NOTIFY, 'argc': 2, 'argi': [0, 1]})
        else:
            memory.append({'addr': f'buf:holder+0x{offset:x}', 'bytes': '00' * 8})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder', 'rsi': '0x1111111111111111', 'rdx': '0x0', 'rcx': '0x0',
                     'r8': '0x0', 'r9': '0x0'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('all_four_set'),
    case('none_set', present=()),
    case('only_first', present=('first',)),
    case('only_second', present=('second',)),
    case('only_third', present=('third',)),
    case('only_fourth', present=('fourth',)),
    case('first_and_third', present=('first', 'third')),
    case('second_and_fourth', present=('second', 'fourth')),
    case('first_second_third', present=('first', 'second', 'third')),
]


def main():
    """Write deterministic fixtures to the requested directory."""
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
