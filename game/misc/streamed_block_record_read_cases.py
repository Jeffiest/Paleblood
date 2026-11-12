#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic reads for bb_misc_streamed_block_record_read (0x018ccaa0), for tools/verify.py run.

usage: streamed_block_record_read_cases.py OUT_DIR

The reader's read slot (+0x20) gives the count asked for, or a short count, and the body and member
readers return zero or a value (their low byte is what the original tests). The optional children are
read through their slot at +0x18. The original compares each count as its 32-bit EAX, so a count with
high bits set still passes when its low half is right. A failing check stops the reads where the
original stops; the two blocks and the stamp are always read in full before their sizes are checked.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x018ccaa0'
READ = '0x00400020'
CHILD_READ = '0x00400300'
BODY_READ = '0x01c95290'
MEMBER_READ = '0x018d8fb0'
RECORD_BYTES = 0x290
FIRST_CHILD = 0x1f8
SECOND_CHILD = 0x280
HEADER_BYTES = 0x40
BLOCK_BYTES = 0x30
STAMP_BYTES = 4
READER_VT_BYTES = 0x28
READ_SLOT_OFFSET = 0x20
CHILD_VT_BYTES = 0x20
CHILD_READ_OFFSET = 0x18


def read_stub(count, size):
    """A read that gives count and writes size bytes into the destination."""
    return {'address': READ, 'argc': 3, 'ret': hex(count),
            'writes': [{'arg': 1, 'offset': 0, 'bytes': 'c3' * size}]}


def child_stub(value):
    return {'address': CHILD_READ, 'argc': 2, 'ret': hex(value)}


def case(cid, header=HEADER_BYTES, body=1, member=1, first=None, first_block=BLOCK_BYTES,
         stamp=STAMP_BYTES, second_block=BLOCK_BYTES, second=None):
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
    low = 0xffffffff   # the original compares EAX only
    stubs = [read_stub(header, HEADER_BYTES)]
    if (header & low) != HEADER_BYTES:
        return _case_dict(cid, buffers, memory, stubs)
    stubs.append({'address': BODY_READ, 'argc': 2, 'ret': hex(body)})
    if not (body & 0xff):
        return _case_dict(cid, buffers, memory, stubs)
    stubs.append({'address': MEMBER_READ, 'argc': 2, 'ret': hex(member)})
    if not (member & 0xff):
        return _case_dict(cid, buffers, memory, stubs)
    if first is not None:
        stubs.append(child_stub(first))
        if not (first & 0xff):
            return _case_dict(cid, buffers, memory, stubs)
    stubs += [read_stub(first_block, BLOCK_BYTES), read_stub(stamp, STAMP_BYTES),
              read_stub(second_block, BLOCK_BYTES)]
    if (first_block & low) == BLOCK_BYTES and stamp == STAMP_BYTES and (second_block & low) == BLOCK_BYTES \
            and second is not None:
        stubs.append(child_stub(second))
    return _case_dict(cid, buffers, memory, stubs)


def _case_dict(cid, buffers, memory, stubs):
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:rec', 'rsi': 'buf:reader'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('header_short', header=0x3f),
    case('header_high_bits_only_low_half_compared', header=0x100000040, first=None),
    case('body_rejects', body=0),
    case('body_high_byte_accepted', body=0x101),
    case('member_rejects', member=0),
    case('member_low_byte_zero_rejects', member=0x100),
    case('first_child_rejects', first=0),
    case('first_child_low_byte_zero_rejects', first=0x100),
    case('no_children_accepted'),
    case('first_child_accepted', first=1),
    case('second_child_result', second=0x55),
    case('second_child_full_word', second=0x8000000000000001),
    case('both_children', first=1, second=0x77),
    case('first_block_short', first_block=0x2f),
    case('first_block_high_bits_only_low_half_compared', first_block=0x100000030),
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
