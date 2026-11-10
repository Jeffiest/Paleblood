#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_jump_thunk (0x00ad8840), for tools/verify.py run.

usage: jump_thunk_cases.py OUT_DIR

The function is one jump to its target. Each case sets the six integer argument registers and the value
the target returns: the target must be called once with the same six values in the same places, and its
result must come back unchanged. The values differ from one register to the next, so an argument that is
dropped, repeated or put in another place is noticed.
"""
import json
import os
import sys

ADDRESS = '0x00ad8840'
TARGET = '0x00ad8850'
MASK64 = (1 << 64) - 1
REGISTERS = ('rdi', 'rsi', 'rdx', 'rcx', 'r8', 'r9')


def case(cid, values, result):
    """One call with the six argument registers set to the values; the target returns the result."""
    args = {register: hex(value & MASK64) for register, value in zip(REGISTERS, values)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args, 'buffers': {},
            'memory': [], 'imports': [], 'stubs': [{'address': TARGET, 'argc': 6, 'ret': hex(result & MASK64)}]}


def only(position, value):
    """Six values that are zero except the one at the position."""
    return [value if index == position else 0 for index in range(len(REGISTERS))]


CASES = [
    case('all_zero', [0] * 6, 0),
    case('all_ones', [MASK64] * 6, MASK64),
    case('six_different_values', [0x1001, 0x2002, 0x3003, 0x4004, 0x5005, 0x6006], 0x7007),
    case('six_different_values_reversed', [0x6006, 0x5005, 0x4004, 0x3003, 0x2002, 0x1001], 0),
    case('high_bits', [0x8000000000000001 + index for index in range(6)], 0x8000000000000000),
    case('upper_halves', [(index + 1) << 32 for index in range(6)], 0xffffffff00000000),
    case('result_low_half_only', [0x11, 0x22, 0x33, 0x44, 0x55, 0x66], 0xffffffff),
] + [case(f'only_{register}', only(index, 0xa5a5a5a500000000 + index), index + 1)
     for index, register in enumerate(REGISTERS)]


def main():
    """Write one JSON case per call shape to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for fixture in CASES:
        with open(os.path.join(sys.argv[1], fixture['id'] + '.json'), 'w') as stream:
            json.dump(fixture, stream, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
