#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic reads for bb_misc_streamed_record_read (0x018cc980), for tools/verify.py run.

usage: streamed_record_read_cases.py OUT_DIR

The reader's read slot (+0x20) gives the count asked for or a short count, the body and member
readers return zero or a value, and the optional children's read slots (+0x10) return what the
case says. Each case stops the reads where the original does: a short header, body, member or tag
returns zero at once, a child that rejects returns zero, and the two blocks and the stamp are read
in full before the sizes are checked. The first child's read is taken from its low byte (AL), the
second's whole RAX.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x018cc980'
READ = '0x00400020'
CHILD_READ = '0x00400300'
BODY_READ = '0x01c95110'
MEMBER_READ = '0x01ec5d10'
RECORD_BYTES = 0x290
FIRST_CHILD = 0x1f8
SECOND_CHILD = 0x280
HEADER_BYTES = 0x40
TAG_BYTES = 4
BLOCK_BYTES = 0x30
STAMP_BYTES = 4
READER_VT_BYTES = 0x28
READ_SLOT_OFFSET = 0x20
CHILD_VT_BYTES = 0x18
CHILD_READ_OFFSET = 0x10


def read_stub(count, size):
    """A read that gives count bytes and writes size bytes into the destination."""
    return {'address': READ, 'argc': 3, 'ret': hex(count),
            'writes': [{'arg': 1, 'offset': 0, 'bytes': 'c3' * size}]}


def child_stub(value):
    return {'address': CHILD_READ, 'argc': 2, 'ret': hex(value)}


def case(cid, header=HEADER_BYTES, body=1, member=1, tag=TAG_BYTES, first=None,
         first_block=BLOCK_BYTES, stamp=STAMP_BYTES, second_block=BLOCK_BYTES, second=None):
    """first and second are None for a record without that child, or the value its read returns."""
    buffers = {'rec': {'size': RECORD_BYTES, 'bytes': 'a5' * RECORD_BYTES},
               'reader': {'size': 8, 'bytes': '00' * 8},
               'reader_vt': {'size': READER_VT_BYTES, 'bytes': '00' * READER_VT_BYTES}}
    memory = [{'addr': 'buf:reader', 'pointer': 'reader_vt'},
              {'addr': f'buf:reader_vt+{READ_SLOT_OFFSET}', 'guest': READ}]
    for name, offset, value in (('first', FIRST_CHILD, first), ('second', SECOND_CHILD, second)):
        if value is None:
            memory.append({'addr': f'buf:rec+{offset}', 'bytes': '00' * 8})
            continue
        buffers[name] = {'size': 8, 'bytes': '00' * 8}
        buffers[name + '_vt'] = {'size': CHILD_VT_BYTES, 'bytes': '00' * CHILD_VT_BYTES}
        memory += [
            {'addr': f'buf:rec+{offset}', 'pointer': name},
            {'addr': f'buf:{name}', 'pointer': name + '_vt'},
            {'addr': f'buf:{name}_vt+{CHILD_READ_OFFSET}', 'guest': CHILD_READ},
        ]

    # The calls in the order the original makes them, stopping where it returns.
    stubs = [read_stub(header, HEADER_BYTES)]
    if header == HEADER_BYTES:
        stubs.append({'address': BODY_READ, 'argc': 2, 'ret': hex(body)})
    if header == HEADER_BYTES and (body & 0xff):
        stubs.append({'address': MEMBER_READ, 'argc': 2, 'ret': hex(member)})
    if header == HEADER_BYTES and (body & 0xff) and member:
        stubs.append(read_stub(tag, TAG_BYTES))
    if header == HEADER_BYTES and (body & 0xff) and member and tag == TAG_BYTES:
        if first is not None:
            stubs.append(child_stub(first))
        if first is None or (first & 0xff):
            stubs += [read_stub(first_block, BLOCK_BYTES), read_stub(stamp, STAMP_BYTES),
                      read_stub(second_block, BLOCK_BYTES)]
            if first_block == BLOCK_BYTES and stamp == STAMP_BYTES and second_block == BLOCK_BYTES \
                    and second is not None:
                stubs.append(child_stub(second))
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:rec', 'rsi': 'buf:reader'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('header_short', header=0x3f),
    case('body_rejects', body=0),
    case('body_low_byte_zero_rejects', body=0x100),
    case('body_high_byte_accepted', body=0x101),
    case('member_rejects', member=0),
    case('tag_short', tag=3),
    case('first_child_rejects', first=0),
    case('first_child_low_byte_zero_rejects', first=0x100),
    case('no_children_accepted'),
    case('first_child_accepted', first=1),
    case('second_child_result', second=0x55),
    case('second_child_full_word', second=0x8000000000000001),
    case('both_children', first=1, second=0x77),
    case('first_block_short', first_block=0x2f),
    case('stamp_short', stamp=3),
    case('second_block_short', second_block=0x2f),
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
