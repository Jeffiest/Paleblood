#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic calls for bb_misc_build_object_block (0x02b3e1e0): the object's slot at +0x28 gives zero
or an answer object; the allocator gives a block or zero; the fill and finish routines are stubs; the
answer object's slot at +0x10 gives the value kept in the block at +0x20. Covers the zero answer, the
failed allocation, and the full path with ordinary, zero, all-ones and high-bit arguments.

usage: build_object_block_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3e1e0'
SLOT_28 = '0x004000a0'     # a real game function entry stubbed as the object's slot at +0x28
SLOT_10 = '0x00400300'     # a real game function entry stubbed as the answer's slot at +0x10
ALLOCATE = '0x0247c4e0'
FILL = '0x02b3f280'
FINISH = '0x02b3f5c0'
SLOT = 0x28
ANSWER_SLOT = 0x10
MASK64 = (1 << 64) - 1
BLOCK_SIZE = 0x140


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def case(cid, answer, routine=0x0, block=None, word=0x22, value=0x11, extra=0x33, flag=0):
    """answer: 'zero' or the answer object's routine result when it exists. block: whether the
    allocator gives a block. The stubs are listed in the order the routine calls them."""
    buffers = {'ref': {'size': 0x10, 'bytes': '00' * 0x10},
               'object': {'size': 0x10, 'bytes': '00' * 0x10},
               'vtable': {'size': 0x48, 'bytes': '00' * 0x48},
               'context': {'size': 0x10, 'bytes': '00' * 0x10},
               'answer': {'size': 0x10, 'bytes': '00' * 0x10},
               'answer_vt': {'size': 0x48, 'bytes': '00' * 0x48},
               'block': {'size': BLOCK_SIZE, 'bytes': '00' * BLOCK_SIZE}}
    memory = [{'addr': 'buf:ref+0x0', 'pointer': 'object'},
              {'addr': 'buf:ref+0x8', 'pointer': 'context'},
              {'addr': 'buf:object+0x0', 'pointer': 'vtable'},
              {'addr': f'buf:vtable+{SLOT:#x}', 'guest': SLOT_28},
              {'addr': 'buf:answer+0x0', 'pointer': 'answer_vt'},
              {'addr': f'buf:answer_vt+{ANSWER_SLOT:#x}', 'guest': SLOT_10}]
    stubs = [{'address': SLOT_28, 'argc': 2, 'ret': 'buf:answer' if answer else '0x0'}]
    if answer:
        stubs.append({'address': ALLOCATE, 'argc': 3, 'ret': 'buf:block' if block else '0x0'})
    if answer and block:
        stubs.append({'address': FILL, 'argc': 6})
        stubs.append({'address': SLOT_10, 'argc': 1, 'ret': hex(routine & MASK64)})
        stubs.append({'address': FINISH, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:ref', 'rsi': hex(word & MASK64), 'rdx': hex(value),
                     'rcx': hex(extra & MASK64), 'r8': hex(flag)},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('slot_gives_zero', answer=False),
    case('allocation_fails', answer=True, block=False),
    case('block_ordinary', answer=True, block=True, routine=0x55),
    case('block_zero_arguments', answer=True, block=True, routine=0, word=0, value=0,
         extra=0, flag=0),
    case('block_all_ones_arguments', answer=True, block=True, routine=0x8000000000000000,
         word=MASK64, value=0xffffffff, extra=MASK64, flag=0xff),
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
