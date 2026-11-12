#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_finish_text_request (0x0225b6f0), for tools/verify.py run.

usage: finish_text_request_cases.py OUT_DIR

A text request (vtable at +0, reference count at +0x8, state at +0xc, the text at +0xc8, the source
flag at +0x172). A request not waiting (state other than 1) only reports its state. A waiting one
either appends its text (the length is measured first when the text is not empty) or assigns it and
copies the flag into +0xc2; its state moves to 2 or 3; then one reference is dropped: the last one
calls the destroy slot (stub 0x00400020), a count not positive goes to the fatal report (stub
0x024b55b0, which returns), and otherwise the old count is the result. Covers every state, both
append and assign, empty and non-empty text, and counts 2, 1, 0 and -2.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0225b6f0'
LENGTH = '0x02fbf228'
APPEND = '0x02d354e0'
ASSIGN = '0x02d35150'
DESTROY = '0x00400020'
FATAL = '0x024b55b0'
MARKER = 'c3' * 4


def case(cid, state=1, append=1, text='', refs=2, source_flag=0, length=0, destroy_ret=0, fatal_ret=0):
    b = {'request': {'size': 0x180}, 'rvt': {'size': 8}, 'text': {'size': 0x20}}
    m = [{'addr': 'buf:request', 'pointer': 'rvt'},
         {'addr': 'buf:rvt', 'guest': DESTROY},
         {'addr': 'buf:request+8', 'bytes': struct.pack('<i', refs).hex()},
         {'addr': 'buf:request+12', 'bytes': struct.pack('<I', state).hex()},
         {'addr': 'buf:request+0x172', 'bytes': '%02x' % source_flag},
         {'addr': 'buf:request+0xc2', 'bytes': 'ee'},
         {'addr': 'buf:request+0xc8', 'bytes': MARKER * 4},
         {'addr': 'buf:text', 'bytes': text.encode('utf-16-le').hex() + '00' * 2}]
    stubs = []
    if state == 1:
        if append and text:
            stubs.append({'address': LENGTH, 'argc': 1, 'ret': hex(length)})
        stubs.append({'address': APPEND if append else ASSIGN, 'argc': 3 if append else 4})
        if refs == 1:
            stubs.append({'address': DESTROY, 'argc': 1, 'ret': hex(destroy_ret)})
        elif refs <= 0:
            stubs.append({'address': FATAL, 'argc': 3, 'ret': hex(fatal_ret)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:request', 'rsi': 'buf:text', 'rdx': append},
            'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('not_waiting_state_two', state=2),
    case('not_waiting_state_three', state=3, append=0),
    case('append_text_two_refs', state=1, append=1, text='ab', refs=2, length=2),
    case('append_empty_text', state=1, append=1, text='', refs=3),
    case('append_last_reference', state=1, append=1, text='xyz', refs=1, length=3, destroy_ret=0x66),
    case('append_zero_count_fatal', state=1, append=1, text='q', refs=0, length=1, fatal_ret=0x77),
    case('assign_copies_flag', state=1, append=0, refs=4, source_flag=0x5a),
    case('assign_last_reference_flag_zero', state=1, append=0, refs=1, source_flag=0, destroy_ret=0x12),
    case('assign_negative_count_fatal', state=1, append=0, refs=-2, source_flag=0xff, fatal_ret=0x34),
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
