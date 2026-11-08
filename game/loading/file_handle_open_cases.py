#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic FileHandle opens: every combination of the mode bits that matter, ignored upper mode
bits, and kernel results that succeed, fail, or carry garbage above the low 32 bits."""
import json
from pathlib import Path
import sys

ADDRESS = '0x02a70890'
KERNEL_OPEN = '0x02fbf3f8'
MASK64 = (1 << 64) - 1
# read, write, create_exclusive, create_truncate, create, truncate
MODE_BITS = [0x01, 0x02, 0x08, 0x10, 0x40, 0x80]
PATH = b'/app0/dvdroot_ps4/test.bin\0'


def case(cid, mode, result=3, handle='aaaaaaaa' + 'fe' + '555555'):
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:handle', 'rsi': 'buf:path', 'rdx': hex(mode & MASK64)},
            'buffers': {'handle': {'size': 8, 'bytes': handle},
                        'path': {'size': len(PATH), 'bytes': PATH.hex()}},
            'imports': [],
            'stubs': [{'address': KERNEL_OPEN, 'argc': 3, 'ret': hex(result & MASK64),
                       'argmem': [{'arg': 0, 'size': len(PATH)}]}]}


CASES = []
for combo in range(1 << len(MODE_BITS)):
    mode = sum(bit for i, bit in enumerate(MODE_BITS) if combo >> i & 1)
    CASES.append(case(f'mode_{mode:02x}', mode))
CASES += [
    case('unused_bits_ignored', 0x04 | 0x20 | 0x03),
    case('upper_mode_bits_ignored', 0xffffff00 | 0x13),
    case('upper_register_bits_ignored', 0xdeadbeef00000013),
    case('all_mode_bits', 0xffffffff),
    case('caller_mode', 0x13),
    case('descriptor_zero', 0x13, result=0),
    case('descriptor_max', 0x13, result=0x7fffffff),
    case('failure_minus_one', 0x13, result=-1),
    case('failure_errno_style', 0x13, result=-0x7ffefffe),
    case('failure_int_min', 0x13, result=0x80000000),
    case('upper_result_bits_ignored', 0x13, result=0xffffffff00000005),
    case('upper_result_bits_negative', 0x13, result=0x00000001ffffffff),
    case('handle_flags_clear', 0x13, handle='00000000' + '00' + '000000'),
    case('handle_flags_all', 0x13, handle='00000000' + 'ff' + '000000'),
    case('failure_leaves_handle', 0x01, result=-1, handle='11223344' + '00' + '667788'),
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
