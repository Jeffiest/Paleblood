#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic text assignments for bb_misc_assign_text (0x00413f60): null sources, measured and
given lengths, empty and long texts, and flag bytes that must keep their other bits.
The length measure, the reserve and the copy are stubs, the reserve leaves the holder alone.

usage: assign_text_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00413f60'
MEASURE = '0x0045c1f0'     # strlen-like measure of the source text
RESERVE = '0x004645e0'     # reserves the holder's storage for capacity bytes
COPY = '0x0045c210'        # copies length bytes of the text into the storage
MASK64 = (1 << 64) - 1
UNMEASURED = -1
TARGET_SIZE = 0x20
FLAG_OFFSET = 0x18
STORAGE_SIZE = 64
TEXT_SIZE = 64
STORAGE_FILL = 'c7'
TEXT_FILL = 'dd'


def case(cid, text=b'hello\x00', length=UNMEASURED, flags=0x00):
    """One assignment. A None text is a null source; a length of -1 makes the measure stub run
    first and return the text's length before the reserve and the copy."""
    target_bytes = 'ee' * FLAG_OFFSET + f'{flags:02x}' + 'ee' * (TARGET_SIZE - FLAG_OFFSET - 1)
    buffers = {'target': {'size': TARGET_SIZE, 'bytes': target_bytes},
               'holder': {'size': 8, 'bytes': 'a5' * 8},
               'storage': {'size': STORAGE_SIZE, 'bytes': STORAGE_FILL * STORAGE_SIZE}}
    memory = [{'addr': 'buf:target+0x8', 'pointer': 'holder'},
              {'addr': 'buf:holder+0x0', 'pointer': 'storage'}]
    stubs = []
    if text is None:
        args = {'rdi': 'buf:target', 'rsi': '0x0', 'rdx': hex(length & MASK64)}
        return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
                'args': args, 'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}
    buffers['text'] = {'size': TEXT_SIZE,
                       'bytes': (text + b'\x00' * TEXT_SIZE)[:TEXT_SIZE].hex()}
    if length == UNMEASURED:
        measured = len(text.split(b'\x00', 1)[0])
        stubs.append({'address': MEASURE, 'argc': 1, 'ret': hex(measured),
                      'argmem': [{'arg': 0, 'size': measured + 1}]})
        count = measured
    else:
        count = length
    stubs.append({'address': RESERVE, 'argc': 2})
    copy = {'address': COPY, 'argc': 4,
            'writes': [{'arg': 0, 'bytes': text[:count].hex()}]}
    if count:
        copy['argmem'] = [{'arg': 2, 'size': count}]
    stubs.append(copy)
    args = {'rdi': 'buf:target', 'rsi': 'buf:text', 'rdx': hex(length & MASK64)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': args, 'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('null_source_untouched', text=None, length=5),
    case('null_source_keeps_flags', text=None, length=UNMEASURED, flags=0xfe),
    case('measured_text', text=b'hello\x00'),
    case('measured_text_flags_clear_set', text=b'hello\x00', flags=0x00),
    case('measured_text_other_flags_kept', text=b'hello\x00', flags=0xfe),
    case('measured_empty_text', text=b'\x00'),
    case('measured_long_text', text=b'the quick brown fox jumps over\x00'),
    case('given_length_exact', text=b'abc\x00', length=3),
    case('given_length_ignores_terminator', text=b'abc\x00zz', length=3),
    case('given_zero_length', text=b'x\x00', length=0),
    case('given_length_all_flags_set', text=b'abcdefgh\x00', length=8, flags=0xff),
    case('given_length_long', text=b'0123456789abcdef\x00', length=0x10),
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
