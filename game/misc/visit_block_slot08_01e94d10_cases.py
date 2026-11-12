#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic field blocks for misc_visit_block_slot08_01e94d10 (0x01e94d10), for tools/verify.py run.

usage: visit_block_slot08_01e94d10_cases.py OUT_DIR

The block is 0x80 bytes: three fields at 0x18, 0x1c and 0x28, and member objects at 0x30, 0x40, 0x50, 0x60 and
0x70 whose first word is a virtual table. The visitor's field slot at 0x20 is a stub, each member's slot 0x08 is a
stub, and the tail member's slot 0x08 is a stub whose result is the function's result. The function has no branch;
the cases vary the tail result (zero, all ones, high bits, low word) and the block contents, which must not change.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e94d10'
VISIT_FIELD = '0x00400020'
VISIT_MEMBER = '0x004000a0'
VISIT_TAIL = '0x00400300'
MASK64 = (1 << 64) - 1
BLOCK_SIZE = 0x80
MEMBER_OFFSETS = (0x30, 0x40, 0x50, 0x60)
TAIL_OFFSET = 0x70
SLOT_OFFSET = 0x08


def case(cid, result=0x1234, fill='b7'):
    """One walk: the visitor's field slot and the member slot are stubs, the tail stub returns the given result."""
    buffers = {'block': {'size': BLOCK_SIZE, 'bytes': fill * BLOCK_SIZE},
               'visitor': {'size': 8},
               'visitor_vt': {'size': 0x28},
               'member_vt': {'size': 0x10},
               'tail_vt': {'size': 0x10}}
    memory = [{'addr': 'buf:visitor', 'pointer': 'visitor_vt'},
              {'addr': 'buf:visitor_vt+32', 'guest': VISIT_FIELD},
              {'addr': f'buf:member_vt+{SLOT_OFFSET}', 'guest': VISIT_MEMBER},
              {'addr': f'buf:tail_vt+{SLOT_OFFSET}', 'guest': VISIT_TAIL}]
    for offset in MEMBER_OFFSETS:
        memory.append({'addr': f'buf:block+{offset}', 'pointer': 'member_vt'})
    memory.append({'addr': f'buf:block+{TAIL_OFFSET}', 'pointer': 'tail_vt'})
    stubs = [{'address': VISIT_FIELD, 'argc': 3} for _ in range(3)]
    stubs += [{'address': VISIT_MEMBER, 'argc': 2} for _ in MEMBER_OFFSETS]
    stubs.append({'address': VISIT_TAIL, 'argc': 2, 'ret': hex(result & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:block', 'rsi': 'buf:visitor'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('tail_result_nonzero'),
    case('tail_result_zero', result=0),
    case('tail_result_all_ones', result=MASK64),
    case('tail_result_high_bit', result=1 << 63),
    case('tail_result_low_word', result=0xffffffff),
    case('block_fill_zero', fill='00'),
    case('block_fill_ones', fill='ff', result=0x0123456789abcdef),
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
