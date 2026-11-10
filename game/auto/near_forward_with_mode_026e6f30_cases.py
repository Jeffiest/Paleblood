#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic arguments for a function that forwards two values with a word of the resource manager
(a template: near_cases.py puts the word's offset in place of the slot name and the addresses of
the function in place of the ones below).

usage: near_cases.py FUNCTION_NAME OUT_DIR

Covers the two 32-bit values with upper words set and cleared, the manager's word at zero, negative
and high-bit values, and the routine's results: zero, all-ones and an ordinary value. The manager
reaches past the word and is filled with other bytes, so a read from another place shows up.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026e6f30'
ROUTINE = '0x02586da0'
ROOT_GLOBAL = '0x05940dd8'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
ROOT_TO_MANAGER = 0x5ad0
WORD_FIELD = NEAR_SLOT_2
MANAGER_BYTES = WORD_FIELD + 0x20


def case(cid, second, third, mode, result, first=0x1234):
    """One call: the routine receives the manager, its word, the two low words and all ones, and
    returns result, which the replacement returns unchanged."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': hex(first & MASK64), 'rsi': hex(second & MASK64), 'rdx': hex(third & MASK64)},
            'buffers': {'root': {'size': ROOT_TO_MANAGER + 8},
                        'manager': {'size': MANAGER_BYTES, 'bytes': '6d' * MANAGER_BYTES}},
            'memory': [{'addr': ROOT_GLOBAL, 'pointer': 'root'},
                       {'addr': 'buf:root+%d' % ROOT_TO_MANAGER, 'pointer': 'manager'},
                       {'addr': 'buf:manager+%d' % WORD_FIELD, 'bytes': (mode & MASK32).to_bytes(4, 'little').hex()}],
            'stubs': [{'address': ROUTINE, 'argc': 5, 'argi': [0, 4], 'argu32': [1, 2, 3],
                       'ret': hex(result & MASK64)}],
            'imports': []}


CASES = [
    case('ordinary_values', 0x11, 0x22, 0x33, 0x7000),
    case('all_zero', 0, 0, 0, 0),
    case('mode_negative', 5, 6, -2, 0x123),
    case('mode_high_bit', 5, 6, 0x80000000, 0x123),
    case('second_upper_word_dropped', 0x100000005, 6, 3, 9),
    case('third_upper_word_dropped', 5, 0xffffffff80000000, 3, 9),
    case('both_all_ones_low', MASK32, MASK32, MASK32, MASK64),
    case('both_upper_words_set', 0xffffffff00000001, 0xfffffffe00000002, 7, 1),
    case('routine_result_zero', 1, 2, 3, 0),
    case('routine_result_all_ones', 1, 2, 3, MASK64),
    case('routine_result_high_bit', 1, 2, 3, 0x8000000000000001),
    case('first_argument_ignored', 1, 2, 3, 4, first=MASK64),
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
