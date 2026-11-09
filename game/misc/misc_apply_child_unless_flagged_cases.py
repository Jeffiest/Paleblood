#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owner flags, child values and answers for bb_misc_apply_child_unless_flagged (0x01e579f0).

usage: misc_apply_child_unless_flagged_cases.py OUT_DIR

The owner's flag byte at +0x200 with bit 0x2 set answers 1 at once. Otherwise the child's virtual
apply at vtable slot +0x4b0 is called with the value's low byte, and its answer's low byte is
returned. Covers both flag outcomes, the other flag bits, the value's upper bits and the answer's
upper bits.
"""
import json
import os
import sys

ADDRESS = '0x01e579f0'
APPLY = '0x00400300'
FLAG_OFFSET = 0x200


def case(cid, flags=0x00, value=0x42, answer=0x01, value_high=0):
    """One call: the owner's flags decide whether the child is asked, and the answer is returned."""
    buffers = {
        'owner': {'size': 0x208, 'bytes': '00' * FLAG_OFFSET + f'{flags:02x}'},
        'child': {'size': 8},
        'vt': {'size': 0x4b8},
    }
    memory = [{'addr': 'buf:owner+8', 'pointer': 'child'},
              {'addr': 'buf:child', 'pointer': 'vt'},
              {'addr': 'buf:vt+1200', 'guest': APPLY}]
    stubs = []
    if not flags & 0x2:
        stubs.append({'address': APPLY, 'argc': 2, 'ret': hex(answer)})
    args = {'rdi': 'buf:owner', 'rsi': hex(value_high | value)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': args, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('skip_flag_set_answers_one', flags=0x02),
    case('skip_flag_with_all_bits_set', flags=0xff),
    case('flag_clear_child_answer_returned', flags=0x00, answer=0x7f),
    case('flag_clear_child_answers_zero', flags=0x00, answer=0x00),
    case('other_bits_do_not_skip', flags=0xfd, answer=0x80),
    case('bit_one_only_is_tested', flags=0x01, answer=0x03),
    case('value_upper_bits_dropped', flags=0x00, value=0xff, value_high=0x1234500000000),
    case('value_low_byte_passed', flags=0x00, value=0x1ff, answer=0x05),
    case('answer_upper_bits_dropped', flags=0x00, answer=0x1234567800000100),
    case('answer_all_ones_low_byte', flags=0x00, answer=0x1ff),
]


def main():
    """Write one JSON case per scenario into the output directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
