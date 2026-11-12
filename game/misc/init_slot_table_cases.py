#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_init_slot_table_013b4e20 (0x013b4e20), for tools/verify.py run.

usage: init_slot_table_cases.py OUT_DIR

The function is straight-line: thirteen calls to the slot setter (0x0138e690, four arguments, the last one zero)
and seven calls to the slot mark (0x0138dbf0, three arguments), in that order, the last mark being the tail
call whose result is returned. Both callees are stubs, one entry per call in call order. The object is a plain
buffer: the stubs write nothing, so the case compares only the return value. Two cases differ only in what the
tail mark returns.
"""
import json
import os
import sys

ADDRESS = '0x013b4e20'
SETTER = '0x0138e690'
MARK = '0x0138dbf0'
SETTER_CALLS = 13
MARK_CALLS = 7
TAIL_RESULT = 0x1234567890abcdef


def case(cid, tail_result):
    stubs = [{'address': SETTER, 'argc': 4, 'argi': [0, 1, 2, 3]} for _ in range(SETTER_CALLS)]
    stubs += [{'address': MARK, 'argc': 3, 'argi': [0, 1, 2]} for _ in range(MARK_CALLS - 1)]
    stubs.append({'address': MARK, 'argc': 3, 'argi': [0, 1, 2], 'ret': tail_result})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object'}, 'buffers': {'object': {'size': 0x100}}, 'memory': [],
            'stubs': stubs, 'imports': []}


CASES = [
    case('tail_mark_result', TAIL_RESULT),
    case('tail_mark_zero', 0),
]


def main():
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
