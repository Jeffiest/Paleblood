#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic dual member objects for misc_construct_pair_object_flagged at 0x00d47e90, for tools/verify.py run.

usage: construct_pair_object_flagged_cases.py OUT_DIR

The constructor calls the base initialiser at 0x00d62990 with its flag, stores the base vtable (guest 0x05680200),
calls the first member's initialiser at 0x00d6df20, stores the derived vtable (guest 0x0567e460), calls the second
member's initialiser at 0x00836830 with the flag, clears the word at 0x90 and sets the state byte at 0x43 to 2 when
the flag is nonzero. The derived vtable is returned in RAX. The stubs write nothing; the second member's routine
returns without touching RAX, so its stub gives back the derived vtable, which RAX still holds; the flag is passed in ESI and every case gives the register its low word only.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00d47e90'
BASE_INIT = '0x00d62990'
FIRST_MEMBER = '0x00d6df20'
SECOND_MEMBER = '0x00836830'
DERIVED_VTABLE = '0x0567e460'
OBJECT_SIZE = 0x98
GARBAGE = {'rdx': '0xffffffffffffffff', 'rcx': '0x8080808080808080', 'r8': '0x0123456789abcdef',
           'r9': '0x7f7f7f7f7f7f7f7f'}


def case(cid, flag, fill='a5', registers=None):
    """One construction with the given flag (its low 32 bits in ESI) over an object filled with fill."""
    args = {'rdi': 'buf:object', 'rsi': hex(flag & 0xffffffff)}
    args.update(GARBAGE if registers is None else registers)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': {'object': {'size': OBJECT_SIZE, 'bytes': fill * OBJECT_SIZE}},
            'memory': [], 'imports': [],
            'stubs': [{'address': BASE_INIT, 'argc': 2, 'argi': [0, 1]},
                      {'address': FIRST_MEMBER, 'argc': 1, 'argi': [0]},
                      {'address': SECOND_MEMBER, 'argc': 2, 'argi': [0, 1], 'ret': 'guest:' + DERIVED_VTABLE}]}


CASES = [
    case('flag_zero_keeps_state_byte', 0, fill='a5'),
    case('flag_one_sets_state_byte', 1, fill='5a'),
    case('flag_high_bit_sets_state_byte', 0x80000000, fill='00'),
    case('flag_all_ones_low_word', 0xffffffff, fill='ff'),
    case('zero_registers_flag_two', 2, fill='c3', registers={k: '0x0' for k in GARBAGE}),
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
