#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_path_tails_match (0x00419a70), for tools/verify.py run.

usage: path_tails_match_cases.py OUT_DIR

Each argument is a reference to a path text: a signed 32-bit length at offset 0 and the characters from offset
0x0c on. The comparison walks both texts from their last characters, folding case and treating a slash and a
backslash alike; where both characters are separators it stops with a match. When one text is exhausted first,
the rest of the longer one must begin with a separator.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00419a70'
TEXT_OFFSET = 0x0c
MIN_SIZE = 0x20


def text_object(name, text):
    raw = text.encode('latin-1')
    body = struct.pack('<i', len(raw)) + b'\x00' * 8 + raw
    size = max(MIN_SIZE, len(body) + 0x10)
    body = body + b'\xcc' * (size - len(body))
    return name, {'size': size, 'bytes': body.hex()}


def case(cid, left, right):
    left_name, left_buf = text_object('left_obj', left)
    right_name, right_buf = text_object('right_obj', right)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:left_ref', 'rsi': 'buf:right_ref'},
            'buffers': {'left_ref': {'size': 8, 'bytes': 'aa' * 8},
                        'right_ref': {'size': 8, 'bytes': 'bb' * 8},
                        left_name: left_buf, right_name: right_buf},
            'memory': [{'addr': 'buf:left_ref', 'pointer': left_name},
                       {'addr': 'buf:right_ref', 'pointer': right_name}],
            'stubs': [], 'imports': []}


CASES = [
    case('both_empty_match', '', ''),
    case('empty_against_char_differs', '', 'x'),
    case('equal_texts_match', 'abc', 'abc'),
    case('last_character_differs', 'abd', 'abc'),
    case('case_folded_match', 'ABC', 'abc'),
    case('both_separators_match', 'a/', 'a\\'),
    case('backslash_then_slash_match', 'a\\', 'a/'),
    case('backslash_against_letter_differs', 'a\\', 'ab'),
    case('left_separator_against_letter_differs', 'x/', 'xy'),
    case('right_longer_separator_match', 'bc', '/bc'),
    case('right_longer_letter_differs', 'bc', 'abc'),
    case('left_longer_separator_match', '/bc', 'bc'),
    case('left_longer_letter_differs', 'abc', 'bc'),
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
