#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic FileHandle seeks: origin values with garbage above their low 32 bits, offsets across the
full 64-bit range, kernel positions that are zero, positive or negative, and null or aliased outputs."""
import json
from pathlib import Path
import sys

ADDRESS = '0x02a70980'
KERNEL_SEEK = '0x02fbf428'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def handle(descriptor, flags=0x01):
    """FileHandle bytes: the 32-bit descriptor, the flags byte, then padding that must not be read."""
    return (descriptor & MASK32).to_bytes(4, 'little').hex() + f'{flags:02x}' + 'a5a5a5'


def case(cid, descriptor=5, flags=0x01, origin=0, offset=16, result=16, position='buf:position'):
    """One seek: the kernel receives the zero-extended descriptor, the full offset and the zero-extended origin."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:handle', 'rsi': hex(origin & MASK64), 'rdx': hex(offset & MASK64),
                     'rcx': position},
            'buffers': {'handle': {'size': 8, 'bytes': handle(descriptor, flags)},
                        'position': {'size': 8, 'bytes': 'e5' * 8}},
            'imports': [],
            'stubs': [{'address': KERNEL_SEEK, 'argc': 3, 'ret': hex(result & MASK64)}]}


CASES = [
    case('ordinary_set', origin=0, offset=16, result=16),
    case('origin_current', origin=1, offset=3, result=19),
    case('origin_end', origin=2, offset=-8 & MASK64, result=100),
    case('origin_unknown_forwarded', origin=7, offset=5, result=5),
    case('origin_upper_bits_ignored', origin=0xdeadbeef00000002, offset=16, result=16),
    case('origin_upper_word_only_is_zero', origin=0x100000000, offset=16, result=16),
    case('origin_high_bit_zero_extends', origin=0x80000000, offset=16, result=16),
    case('origin_all_low_bits_zero_extend', origin=MASK32, offset=16, result=16),
    case('origin_all_bits_ignored_above', origin=MASK64, offset=16, result=16),
    case('zero_descriptor_still_calls', descriptor=0),
    case('negative_descriptor_zero_extends', descriptor=MASK32),
    case('high_bit_descriptor', descriptor=0x80000005),
    case('flags_clear_still_seeks', flags=0x00),
    case('flags_all_bits_ignored', flags=0xff),
    case('offset_zero', offset=0, result=0),
    case('offset_one', offset=1, result=1),
    case('offset_low_word_full', offset=MASK32, result=MASK32),
    case('offset_upper_word', offset=1 << 32, result=1 << 32),
    case('offset_high_bit', offset=1 << 63, result=0x8000000000000000 & MASK64, origin=0),
    case('offset_all_bits', offset=MASK64, result=MASK64 - 1),
    case('zero_result_is_success', result=0),
    case('positive_result_low_sign_bit', result=0x80000000),
    case('positive_result_upper_word', result=1 << 32),
    case('positive_int64_max', result=(1 << 63) - 1),
    case('negative_int64_min', result=1 << 63),
    case('negative_minus_one', result=MASK64),
    case('negative_errno_style', result=-0x7ffefffe),
    case('high_word_low_positive', result=0x00000001ffffffff),
    case('negative_high_word_low_positive', result=0xffffffff00000005),
    case('failure_leaves_position', result=MASK64 - 1),
    case('null_position_success', position='0x0', result=16),
    case('null_position_failure', position='0x0', result=MASK64),
    case('position_overlaps_handle', position='buf:handle', result=16),
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
