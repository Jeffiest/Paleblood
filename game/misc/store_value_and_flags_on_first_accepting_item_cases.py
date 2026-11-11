#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic item lists (0x02255610) where the accept routine answers per item: nothing taken, the first or a later
item taken, a null item taken (nothing written), and answers with garbage above their low byte. A taken item gets the
value byte at +0xec and its flag byte at +0xed rebuilt: bits 0x20 and 0x04 cleared, the caller's flag bits placed at
0x20 and up, and 0x04 set. Flag and value arguments carry garbage above their low bytes.

usage: store_value_and_flags_on_first_accepting_item_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02255610'
ACCEPTS = '0x010a1c70'          # the accept routine, stubbed once per item asked
ITEM_SIZE = 0x130
VALUE_OFFSET = 0xec
FLAGS_OFFSET = 0xed
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def case(cid, answers=(), nulls=(), flags=(), value_in=0xaa, value=0x5a, flag_bits=0, context=0x1234):
    """One list. The answers are the accept routine's raw RAX values in order, stopping at the first whose low byte
    is nonzero. Items get their initial value and flag byte; a null item is listed as a null pointer."""
    buffers = {'holder': {'size': 0x20}, 'list': {'size': max(1, len(answers)) * 8}}
    memory = []
    stubs = []
    for index, raw in enumerate(answers):
        if index in nulls:
            memory.append({'addr': f'buf:list+{index * 8:#x}', 'bytes': '00' * 8})
        else:
            item = bytearray(b'\xee' * ITEM_SIZE)
            item[VALUE_OFFSET] = value_in & 0xff
            item[FLAGS_OFFSET] = (flags[index] if index < len(flags) else 0x00) & 0xff
            buffers[f'item_{index}'] = {'size': ITEM_SIZE, 'bytes': item.hex()}
            memory.append({'addr': f'buf:list+{index * 8:#x}', 'pointer': f'item_{index}'})
        stubs.append({'address': ACCEPTS, 'argc': 2, 'ret': hex(raw & MASK64)})
        if raw & 0xff:
            break
    end = f'list+{len(answers) * 8:#x}' if answers else 'list'
    memory.append({'addr': 'buf:holder+0x10', 'pointer': 'list'})
    memory.append({'addr': 'buf:holder+0x18', 'pointer': end})
    returns = 'i8' if answers else 'void'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns,
            'args': {'rdi': 'buf:holder', 'rsi': hex(context & MASK64),
                     'rdx': hex(((0x7700 << 32) | (value & 0xff)) & MASK64),
                     'rcx': hex(((0x5500 << 32) | (flag_bits & 0xff)) & MASK64)},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('empty_list'),
    case('refused_only', answers=[0]),
    case('first_taken_clear_flags', answers=[1], flags=[0x00]),
    case('kept_bits_and_marked', answers=[1], flags=[0xff], flag_bits=1),
    case('flag_bits_shifted', answers=[1], flags=[0x00], flag_bits=0x07),
    case('flag_bits_high_bits_ignored', answers=[1], flags=[0x00], flag_bits=0xffffff00),
    case('value_high_bits_ignored', answers=[1], value=0x78, flags=[0x00]),
    case('later_item_taken', answers=[0, 0x101], flags=[0x20, 0x00]),
    case('refused_all', answers=[0, 0x100], flags=[0x20, 0x04]),
    case('null_item_taken_nothing_written', answers=[0x101], nulls=[0]),
    case('null_refused_then_item', answers=[0, 1], nulls=[0], flags=[0x00, 0x00]),
    case('flags_top_bits_kept', answers=[1], flags=[0xc0], flag_bits=0x02),
    case('context_high_bits', answers=[1], flags=[0x00], context=0xdeadbeef00001234),
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
