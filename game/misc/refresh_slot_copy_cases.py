#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_refresh_slot_copy (0x0225fac0), for tools/verify.py run.

usage: refresh_slot_copy_cases.py OUT_DIR

The function passes its record and the five other integer argument registers it was given to the
helper at 0x02262760, then copies the record's source word (offset 0xd0) into the copy (0xd8), clears
the flag at 0x120 and returns the source word read after the helper. The helper's result is ignored.
The original leaves RAX holding that loaded source word, so the function returns it as an integer.
"""
import json
import os
import sys

ADDRESS = '0x0225fac0'
HELPER = '0x02262760'
SOURCE, COPY, FLAG = 0xd0, 0xd8, 0x120
RECORD_SIZE = 0x124
ARGUMENTS = ['rdi', 'rsi', 'rdx', 'rcx', 'r8', 'r9']


def qword(value):
    return (value & ((1 << 64) - 1)).to_bytes(8, 'little').hex()


def case(cid, source=0x1122334455667788, copy=0xdeadbeefdeadbeef, flag=0x01, registers=None,
         helper_ret=0, helper_writes=None):
    """One refresh: the record's source, copy and flag before the call, the helper's arguments and result,
    and an optional rewrite of the source by the helper (which the function must read again)."""
    if registers is None:
        registers = {'rdi': 'buf:record', 'rsi': '0x1111111111111111', 'rdx': '0x2222222222222222',
                     'rcx': '0x3333333333333333', 'r8': '0x4444444444444444', 'r9': '0x5555555555555555'}
    memory = [
        {'addr': f'buf:record+{SOURCE}', 'bytes': qword(source)},
        {'addr': f'buf:record+{COPY}', 'bytes': qword(copy)},
        {'addr': f'buf:record+{FLAG}', 'bytes': f'{flag:02x}'},
    ]
    stub = {'address': HELPER, 'argc': 6, 'argi': [0, 1, 2, 3, 4, 5], 'ret': hex(helper_ret & ((1 << 64) - 1))}
    if helper_writes is not None:
        stub['writes'] = [{'arg': 0, 'offset': SOURCE, 'bytes': qword(helper_writes)}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': dict(registers),
            'buffers': {'record': {'size': RECORD_SIZE}},
            'memory': memory, 'stubs': [stub], 'imports': []}


CASES = [
    case('source_nonzero_flag_set'),
    case('source_zero', source=0),
    case('source_high_bit', source=1 << 63),
    case('source_all_ones', source=(1 << 64) - 1),
    case('flag_already_clear', flag=0x00),
    case('flag_all_bits_cleared', flag=0xff),
    case('copy_already_equal', copy=0x1122334455667788),
    case('helper_result_ignored', helper_ret=0x55aa55aa55aa55aa),
    case('source_changed_by_helper_is_reread', source=0x0102030405060708, helper_writes=0x8877665544332211),
    case('pass_through_all_registers', registers={'rdi': 'buf:record', 'rsi': '0xdeadbeef00000001',
                                                  'rdx': '0x0', 'rcx': '0xffffffffffffffff',
                                                  'r8': '0x7f7f7f7f7f7f7f7f', 'r9': '0x0123456789abcdef'}),
    case('zero_registers', registers={'rdi': 'buf:record', 'rsi': '0x0', 'rdx': '0x0', 'rcx': '0x0',
                                      'r8': '0x0', 'r9': '0x0'}),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
