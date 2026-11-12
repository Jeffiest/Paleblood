#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted word blocks and sources for the apply (0x01e91b50): the source's fill slot (0x00400020, stubbed)
writes the block's kind, four slots are applied through their virtual tables (0x00400300, stubbed), and the last
slot is applied through a tail call whose result (0x004000a0, stubbed) is returned. Each case differs in the value the
tail call returns and in the block's kind before the call.

usage: apply_source_to_counted_block_01e91b50_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e91b50'
FILL = '0x00400020'
SLOT_APPLY = '0x00400300'
TAIL_APPLY = '0x004000a0'
BLOCK_SIZE = 0x60
SLOT_OFFSET = 0x10
SLOT_STRIDE = 0x10
SLOT_COUNT = 5
SOURCE_VTABLE_SIZE = 0x28
FILL_SLOT = 0x20
MASK64 = (1 << 64) - 1
PREFILL = 'ee' * BLOCK_SIZE
FILLED_KIND = '05000000'


def case(cid, tail_result, prefill=PREFILL):
    """One application: the block's slots point at a shared vtable for the first four and at a tail vtable for the last;
    the source's vtable has the fill entry. The stubs compare what each callee is given."""
    memory = [{'addr': 'buf:source', 'pointer': 'source_vt'},
              {'addr': f'buf:source_vt+{FILL_SLOT:#x}', 'guest': FILL}]
    for index in range(SLOT_COUNT):
        slot = SLOT_OFFSET + SLOT_STRIDE * index
        target = 'tail_vt' if index == SLOT_COUNT - 1 else 'slot_vt'
        memory.append({'addr': f'buf:block+{slot:#x}', 'pointer': target})
    memory.append({'addr': 'buf:slot_vt', 'guest': SLOT_APPLY})
    memory.append({'addr': 'buf:tail_vt', 'guest': TAIL_APPLY})
    stubs = [{'address': FILL, 'argc': 3, 'argi': [0, 1, 2], 'writes': [{'arg': 1, 'offset': 0, 'bytes': FILLED_KIND}]}]
    stubs += [{'address': SLOT_APPLY, 'argc': 2, 'argi': [0, 1]} for _ in range(SLOT_COUNT - 1)]
    stubs.append({'address': TAIL_APPLY, 'argc': 2, 'argi': [0, 1], 'ret': hex(tail_result & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:block', 'rsi': 'buf:source'},
            'buffers': {'block': {'size': BLOCK_SIZE, 'bytes': prefill},
                        'source': {'size': 8, 'bytes': '00' * 8},
                        'source_vt': {'size': SOURCE_VTABLE_SIZE, 'bytes': '00' * SOURCE_VTABLE_SIZE},
                        'slot_vt': {'size': 8, 'bytes': '00' * 8},
                        'tail_vt': {'size': 8, 'bytes': '00' * 8}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('tail_returns_ordinary', 0x1234),
    case('tail_returns_zero', 0),
    case('tail_returns_all_ones', MASK64),
    case('tail_returns_high_word', 0x0123456789abcdef),
    case('kind_prefill_zero', 0x55, prefill='00' * BLOCK_SIZE),
    case('kind_prefill_mixed', 0x80000000, prefill='a5' * BLOCK_SIZE),
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
