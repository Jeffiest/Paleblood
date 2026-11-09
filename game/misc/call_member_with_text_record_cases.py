#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic thunk calls with a text and a subject for misc_call_member_with_text_record (0x01888bf0).

usage: call_member_with_text_record_cases.py OUT_DIR

The thunk's text at +0x48 is measured by the library routine 0x02fbf228 only when its first unit is nonzero.
The routine 0x02a2a310 then receives the subject (first argument), the text and the length, and always runs.
Next, when the target at +0x58 is nonzero, it is called on the object at +0x50 adjusted by +0x60 with a record
holding kind two and the subject, and with the 32-bit word at +0x68. A plain or a virtual target is covered.
The routines return nothing the caller reads, so every case sets 'returns' to 'void'.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01888bf0'
LENGTH = '0x02fbf228'
ROUTINE = '0x02a2a310'
PLAIN = '0x00400300'
VIRTUAL = '0x004000a0'
VIRTUAL_BIT = 1
RECORD_BYTES = 0x10
# The kind word and the pointer word; the middle word is left as the original leaves it.
RECORD_FIELDS = [{'arg': 1, 'offset': 0, 'size': 4}, {'arg': 1, 'offset': 8, 'size': 8}]
MASK32 = 0xffffffff
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, text_empty=False, kind='plain', adjustment=0, length_result=0x1234, argument=0x1357):
    """One call. The length stub runs only for non-empty text; the record stub compares its bytes."""
    buffers = {
        'thunk': {'size': 0x70, 'bytes': 'ee' * 0x70},
        'base': {'size': 0x40, 'bytes': '00' * 0x40},
        'vtable': {'size': 0x40, 'bytes': '00' * 0x40},
        'text': {'size': 0x20, 'bytes': ('00' * 2 if text_empty else '4100') + '00' * 0x1e},
        'subject': {'size': 0x20, 'bytes': '77' * 0x20},
    }
    memory = [
        {'addr': 'buf:thunk+0x48', 'pointer': 'text'},
        {'addr': 'buf:thunk+0x50', 'pointer': 'base'},
        {'addr': 'buf:thunk+0x60', 'bytes': word(adjustment)},
        {'addr': 'buf:thunk+0x68', 'bytes': struct.pack('<I', argument & MASK32).hex()},
    ]
    stubs = [{'address': ROUTINE, 'argc': 3, 'argi': [0, 1, 2]}]
    if not text_empty:
        stubs.append({'address': LENGTH, 'argc': 1, 'argi': [0], 'ret': hex(length_result & MASK64)})
    if kind == 'zero':
        memory.append({'addr': 'buf:thunk+0x58', 'bytes': word(0)})
    elif kind == 'plain':
        memory.append({'addr': 'buf:thunk+0x58', 'guest': PLAIN})
        stubs.append({'address': PLAIN, 'argc': 3, 'argi': [0, 2],
                      'argmem': RECORD_FIELDS})
    else:
        memory.append({'addr': 'buf:thunk+0x58', 'bytes': word(VIRTUAL_BIT + 0x20)})
        memory.append({'addr': f'buf:base+{adjustment:#x}', 'pointer': 'vtable'})
        memory.append({'addr': 'buf:vtable+0x20', 'guest': VIRTUAL})
        stubs.append({'address': VIRTUAL, 'argc': 3, 'argi': [0, 2],
                      'argmem': RECORD_FIELDS})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:thunk', 'rsi': 'buf:subject'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('empty_text_zero_target', text_empty=True, kind='zero'),
    case('empty_text_plain_target', text_empty=True, kind='plain', argument=0x80000000),
    case('text_measured_plain_target', kind='plain'),
    case('text_measured_plain_adjusted', kind='plain', adjustment=0x10, length_result=MASK64),
    case('text_measured_zero_target', kind='zero', length_result=0),
    case('text_measured_virtual_target', kind='virtual', adjustment=0x18, length_result=0x8000000000000001),
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
