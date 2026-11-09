#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_select_pair_table_entry (0x0139bcc0), for tools/verify.py run.

usage: select_pair_table_entry_cases.py OUT_DIR

The table is read from the executable, so no memory is scripted. Rows zero to two with flag bytes zero
to three, garbage in the unread first argument and in the flag register's upper bits, and a high 32-bit
row register value that the row argument ignores.
"""
import json
import os
import sys

ADDRESS = '0x0139bcc0'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def case(cid, row=0, flag=0, flag_register=None, first=0x5a5a5a5a5a5a5a5a, row_register=None):
    """One lookup: the row and the flag byte are the arguments; the register upper bits are set as given."""
    flag_register = flag if flag_register is None else flag_register
    row_register = row if row_register is None else row_register
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': hex(first & MASK64), 'rsi': hex(row_register & MASK64),
                     'rdx': hex(flag_register & MASK64)},
            'buffers': {}, 'memory': [], 'imports': [], 'stubs': []}


CASES = [
    case('row_zero_flag_zero', row=0, flag=0),
    case('row_zero_flag_one', row=0, flag=1),
    case('row_one_flag_zero', row=1, flag=0),
    case('row_one_flag_one', row=1, flag=1),
    case('row_two_flag_zero', row=2, flag=0),
    case('row_two_flag_one', row=2, flag=1),
    case('flag_two_selects_column_three', row=0, flag=2),
    case('flag_three_selects_column_two', row=1, flag=3),
    case('flag_upper_bits_ignored', row=1, flag=1, flag_register=0xdeadbeef00000001),
    case('flag_upper_bits_zero_low_byte', row=1, flag=0, flag_register=0xffffffff00000000),
    case('row_register_high_word_ignored', row=1, flag=0, row_register=0x1_00000001),
    case('first_argument_zero', row=0, flag=1, first=0),
]


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
