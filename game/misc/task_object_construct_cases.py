#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic task object builds for bb_misc_task_object_construct (0x02b3f280): a shared object that
already exists, one created on first use, flag queries with the required bit set, clear and only
in the upper bytes, the flag byte taken from the low byte of a wider argument, and all-zero and
all-ones values. The fatal report runs when the flag bit is clear and the build goes on.

usage: task_object_construct_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b3f280'
BASE_INIT = '0x02b9a3f0'
COPY_WORD = '0x02b3d2c0'
SUB_INIT = '0x02b46280'
CREATE_SHARED = '0x02fa2b10'
FATAL = '0x024b55b0'
FLAG_QUERY = '0x00400020'
SHARED_GLOBAL = '0x05940670'
GUARD_GLOBAL = '0x057e3be0'
FLAG_QUERY_SLOT = 0x20
OBJECT_BYTES = 0x140
SHARED_VTABLE_BYTES = 0x28
MASK64 = (1 << 64) - 1
REQUIRED_BIT = 0x20


def case(cid, flag_bits='ff' + '00' * 7, shared_present=True, flag=0x01,
         value_128=0x1234, context=0x5678, value_28=0x9abc, self_fill='ee'):
    """One build: the record is the object, the source is a word. The flag query writes flag_bits
    into the record it is given. A clear required bit leads to the fatal report, and the build
    then goes on."""
    buffers = {
        'self': {'size': OBJECT_BYTES, 'bytes': self_fill * OBJECT_BYTES},
        'source': {'size': 8, 'bytes': '0102030405060708'},
        'guard': {'size': 8, 'bytes': '00' * 8},
        'shared': {'size': 8, 'bytes': '00' * 8},
        'shared_vt': {'size': SHARED_VTABLE_BYTES, 'bytes': '00' * SHARED_VTABLE_BYTES},
    }
    memory = [
        {'addr': GUARD_GLOBAL, 'pointer': 'guard'},
        {'addr': 'buf:shared', 'pointer': 'shared_vt'},
        {'addr': f'buf:shared_vt+{FLAG_QUERY_SLOT:#x}', 'guest': FLAG_QUERY},
    ]
    if shared_present:
        memory.append({'addr': SHARED_GLOBAL, 'pointer': 'shared'})
    else:
        memory.append({'addr': SHARED_GLOBAL, 'bytes': '00' * 8})
    stubs = [
        {'address': BASE_INIT, 'argc': 2},
        {'address': COPY_WORD, 'argc': 3},
        {'address': COPY_WORD, 'argc': 3},
    ]
    if not shared_present:
        stubs.append({'address': CREATE_SHARED, 'argc': 0, 'ret': 'buf:shared'})
    stubs.append({'address': FLAG_QUERY, 'argc': 3,
                  'writes': [{'arg': 0, 'offset': 0, 'bytes': flag_bits}]})
    if (int(flag_bits[:2], 16) & REQUIRED_BIT) == 0:
        stubs.append({'address': FATAL, 'argc': 3})
    stubs.append({'address': SUB_INIT, 'argc': 3})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:self', 'rsi': 'buf:source', 'rdx': hex(value_128 & MASK64),
                     'rcx': hex(context & MASK64), 'r8': hex(value_28 & MASK64),
                     'r9': hex(flag)},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('shared_exists_flag_set'),
    case('shared_exists_flag_clear_reports', flag_bits='5f' + '00' * 7),
    case('shared_exists_flag_bit_only', flag_bits='20' + '00' * 7),
    case('shared_exists_upper_bytes_only_reports', flag_bits='00' + 'ff' * 7),
    case('shared_created_flag_set', shared_present=False, flag_bits='3f' + '00' * 7),
    case('shared_created_flag_clear_reports', shared_present=False, flag_bits='1f' + '00' * 7),
    case('flag_low_byte_of_wider_argument', flag=0x101),
    case('flag_zero', flag=0, flag_bits='ff' + '00' * 7),
    case('values_zero', value_128=0, context=0, value_28=0, flag=0),
    case('values_all_ones', value_128=MASK64, context=MASK64, value_28=MASK64, flag=0xff),
    case('values_high_bit', value_128=0x8000000000000000, context=0x7fffffff, value_28=0x100000000),
    case('object_bytes_zero_fill', self_fill='00'),
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
