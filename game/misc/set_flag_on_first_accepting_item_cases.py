#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic item lists (0x022555b0) where the accept routine answers per item: no item taken, the first, a later
one, a null item taken (no flag to set), and items that already carry other flag bits. Each item's sink is passed to
the accept routine (stubbed in call order, stopping at the first taken answer); the answer is compared as AL, so
answers with garbage above the low byte are included. The flag bit 0x01 is set on the taken item only.

usage: set_flag_on_first_accepting_item_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x022555b0'
ACCEPTS = '0x010a1c70'          # the accept routine, stubbed once per item asked
ITEM_SIZE = 0x100
FLAGS_OFFSET = 0xed
ACCEPTED_FLAG = 0x01
MASK64 = (1 << 64) - 1


def case(cid, answers=(), nulls=(), initial_flags=(), context=0x1234):
    """One list. The answers are the accept routine's raw RAX values for the items asked in order, stopping at the
    first whose low byte is nonzero. A null item is listed as a null pointer; its sink is still asked."""
    buffers = {'holder': {'size': 0x20}, 'list': {'size': max(1, len(answers)) * 8}}
    memory = []
    stubs = []
    taken = None
    for index, raw in enumerate(answers):
        if index in nulls:
            memory.append({'addr': f'buf:list+{index * 8:#x}', 'bytes': '00' * 8})
        else:
            flags = initial_flags[index] if index < len(initial_flags) else 0x00
            item = bytearray(b'\xee' * ITEM_SIZE)
            item[FLAGS_OFFSET] = flags & 0xff
            buffers[f'item_{index}'] = {'size': ITEM_SIZE, 'bytes': item.hex()}
            memory.append({'addr': f'buf:list+{index * 8:#x}', 'pointer': f'item_{index}'})
        stubs.append({'address': ACCEPTS, 'argc': 2, 'ret': hex(raw & MASK64)})
        if raw & 0xff:
            taken = index
            break
    end = f'list+{len(answers) * 8:#x}' if answers else 'list'
    memory.append({'addr': 'buf:holder+0x10', 'pointer': 'list'})
    memory.append({'addr': 'buf:holder+0x18', 'pointer': end})
    returns = 'i8' if answers else 'void'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns,
            'args': {'rdi': 'buf:holder', 'rsi': hex(context & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('empty_list'),
    case('single_item_refused', answers=[0]),
    case('single_item_taken', answers=[1]),
    case('first_taken_stops_walk', answers=[1, 1], initial_flags=[0x00, 0x00]),
    case('later_item_taken', answers=[0, 0, 1], initial_flags=[0x00, 0x00, 0x00]),
    case('no_item_taken', answers=[0, 0, 0], initial_flags=[0x10, 0x20, 0x00]),
    case('answer_upper_bits_ignored', answers=[0x100, 0x101], initial_flags=[0x00, 0x00]),
    case('null_item_taken_no_flag', answers=[0x01], nulls=[0]),
    case('null_item_refused_then_item', answers=[0, 1], nulls=[0], initial_flags=[0x00, 0x00]),
    case('item_keeps_other_flag_bits', answers=[1], initial_flags=[0xf0]),
    case('context_zero', answers=[1], context=0, initial_flags=[0x00]),
    case('context_high_bits', answers=[0, 1], context=0xdeadbeef00001234, initial_flags=[0x00, 0x00]),
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
    sys.exit(main())
