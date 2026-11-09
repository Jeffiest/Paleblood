#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic text assignments for bb_misc_assign_text_narrow_capacity (0x00413fc0): null sources,
measured and given lengths, and capacities whose 32-bit measure wraps, sets the top bit or
differs from the copied length. The measure, the reserve and the copy are stubs.

usage: assign_text_narrow_capacity_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00413fc0'
IMPORT_MEASURE = '0x02fbe608'   # library measure, used only when the length is unmeasured
MEASURE = '0x004634d0'          # bounded measure of the source, its result sets the capacity
RESERVE = '0x004645e0'          # reserves the holder's storage for the capacity
COPY = '0x004643f0'             # copies the characters into the storage
MASK64 = (1 << 64) - 1
UNMEASURED = -1
TARGET_SIZE = 0x20
FLAG_OFFSET = 0x18
STORAGE_SIZE = 64
TEXT_SIZE = 64
STORAGE_FILL = 'c7'


def case(cid, text=b'hello\x00', length=UNMEASURED, measured=None, flags=0x00):
    """One assignment. A None text is a null source. The measure stub returns measured, which is the
    text's own length unless the case says otherwise; the copy writes the given or measured length."""
    target_bytes = 'ee' * FLAG_OFFSET + f'{flags:02x}' + 'ee' * (TARGET_SIZE - FLAG_OFFSET - 1)
    buffers = {'target': {'size': TARGET_SIZE, 'bytes': target_bytes},
               'holder': {'size': 8, 'bytes': 'a5' * 8},
               'storage': {'size': STORAGE_SIZE, 'bytes': STORAGE_FILL * STORAGE_SIZE}}
    memory = [{'addr': 'buf:target+0x8', 'pointer': 'holder'},
              {'addr': 'buf:holder+0x0', 'pointer': 'storage'}]
    stubs = []
    args = {'rdi': 'buf:target', 'rsi': '0x0', 'rdx': hex(length & MASK64)}
    if text is None:
        return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
                'args': args, 'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}
    buffers['text'] = {'size': TEXT_SIZE, 'bytes': (text + b'\x00' * TEXT_SIZE)[:TEXT_SIZE].hex()}
    args['rsi'] = 'buf:text'
    text_length = len(text.split(b'\x00', 1)[0])
    if length == UNMEASURED:
        stubs.append({'address': IMPORT_MEASURE, 'argc': 1, 'ret': hex(text_length),
                      'argmem': [{'arg': 0, 'size': text_length + 1}]})
        count = text_length
    else:
        count = length
    capacity_source = text_length if measured is None else measured
    stubs.append({'address': MEASURE, 'argc': 2, 'ret': hex(capacity_source & MASK64)})
    stubs.append({'address': RESERVE, 'argc': 2})
    copy = {'address': COPY, 'argc': 4, 'writes': [{'arg': 0, 'bytes': text[:count].hex()}]}
    if count:
        copy['argmem'] = [{'arg': 2, 'size': count}]
    stubs.append(copy)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': args, 'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('null_source_untouched', text=None, length=3),
    case('null_source_keeps_flags', text=None, length=UNMEASURED, flags=0xfe),
    case('measured_text', text=b'hello\x00'),
    case('measured_empty_text', text=b'\x00'),
    case('given_length_exact', text=b'abc\x00', length=3),
    case('given_length_shorter_than_measure', text=b'abcdef\x00', length=2, measured=6),
    case('given_zero_length_measure_zero', text=b'x\x00', length=0, measured=0),
    case('measure_top_bit_sign_extends', text=b'abcd\x00', length=4, measured=0x80000000),
    case('measure_all_low_ones_wraps_to_zero', text=b'abcd\x00', length=4, measured=0xffffffff),
    case('measure_upper_word_ignored', text=b'abcde\x00', length=5, measured=0x100000005),
    case('measure_low_word_just_below_top', text=b'abc\x00', length=3, measured=0x7fffffff),
    case('measured_all_flags_set', text=b'abcdefgh\x00', flags=0xff),
    case('given_long_text', text=b'0123456789abcdef\x00', length=0x10),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
