#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic dual member objects for misc_construct_pair_object_fixed at 0x00d47c20, for tools/verify.py run.

usage: construct_pair_object_fixed_cases.py OUT_DIR

The constructor calls the base initialiser at 0x00d62820 with flag 2, stores the base vtable (guest 0x05680200),
calls the first member's initialiser at 0x00d6df20, clears the word at 0x78, stores the derived vtable (guest
0x0567e460), clears the second member through 0x00836630 (which zeroes the qword it is given) and clears the word
at 0x90. The object's address with the derived vtable is returned in RAX. The stubs of the three callees write
nothing except the zero word of 0x00836630. That routine leaves RAX alone, so RAX still holds the derived vtable
when it returns, and its stub gives that value back.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00d47c20'
BASE_INIT = '0x00d62820'
FIRST_MEMBER = '0x00d6df20'
CLEAR_SECOND = '0x00836630'
DERIVED_VTABLE = '0x0567e460'
OBJECT_SIZE = 0x98
GARBAGE = {'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff', 'rcx': '0x8080808080808080',
           'r8': '0x0123456789abcdef', 'r9': '0x7f7f7f7f7f7f7f7f'}


def case(cid, fill, registers=None):
    """One construction of an object whose bytes are fill (a byte value repeated)."""
    args = {'rdi': 'buf:object'}
    args.update(GARBAGE if registers is None else registers)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': {'object': {'size': OBJECT_SIZE, 'bytes': fill * OBJECT_SIZE}},
            'memory': [], 'imports': [],
            'stubs': [{'address': BASE_INIT, 'argc': 2, 'argi': [0, 1]},
                      {'address': FIRST_MEMBER, 'argc': 1, 'argi': [0]},
                      {'address': CLEAR_SECOND, 'argc': 1, 'argi': [0], 'ret': 'guest:' + DERIVED_VTABLE,
                       'writes': [{'arg': 0, 'offset': 0, 'bytes': '00' * 8}]}]}


CASES = [
    case('object_all_ones', 'ff'),
    case('object_all_zero', '00'),
    case('object_byte_pattern', 'a5'),
    case('zero_registers', '5a', registers={k: '0x0' for k in GARBAGE}),
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
