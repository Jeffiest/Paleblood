#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic FileHandle reads: descriptor widths, requested sizes, kernel results that are zero,
positive or negative, writes that precede a failure, aliased and null count pointers."""
import json
from pathlib import Path
import sys

ADDRESS = '0x02a70920'
KERNEL_READ = '0x02fbf408'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
PAYLOAD = bytes.fromhex('1032547698badcfe1122334455667788')
DATA_BYTES = 64
COUNT_BYTES = 8


def handle(descriptor, flags=0x01):
    """FileHandle bytes: the 32-bit descriptor, the flags byte, then padding that must not be read."""
    return (descriptor & MASK32).to_bytes(4, 'little').hex() + f'{flags:02x}' + 'a5a5a5'


def case(cid, descriptor=5, flags=0x01, size=16, result=16, write_bytes=0, count='buf:count',
         buffer='buf:data+0x8'):
    """One read: the kernel receives the zero-extended descriptor, the buffer and the full size."""
    requested = size & MASK64
    operation = {'address': KERNEL_READ, 'argc': 3, 'ret': hex(result & MASK64)}
    if requested and buffer == 'buf:data+0x8':
        operation['argmem'] = [{'arg': 1, 'size': min(requested, len(PAYLOAD))}]
    if write_bytes:
        assert buffer == 'buf:data+0x8' and 0 < write_bytes <= min(requested, len(PAYLOAD))
        operation['writes'] = [{'arg': 1, 'bytes': PAYLOAD[:write_bytes].hex()}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:handle', 'rsi': buffer, 'rdx': hex(requested), 'rcx': count},
            'buffers': {'handle': {'size': 8, 'bytes': handle(descriptor, flags)},
                        'data': {'size': DATA_BYTES, 'bytes': 'c7' * DATA_BYTES},
                        'count': {'size': COUNT_BYTES, 'bytes': 'e5' * COUNT_BYTES}},
            'imports': [], 'stubs': [operation]}


CASES = [
    case('ordinary_exact', write_bytes=16),
    case('zero_descriptor_still_calls', descriptor=0, write_bytes=16),
    case('negative_descriptor_zero_extends', descriptor=MASK32, write_bytes=16),
    case('high_bit_descriptor', descriptor=0x80000005, write_bytes=16),
    case('flags_clear_still_reads', flags=0x00, write_bytes=16),
    case('flags_all_bits_ignored', flags=0xff, write_bytes=16),
    case('zero_size_still_calls', size=0, result=0),
    case('one_byte', size=1, result=1, write_bytes=1),
    case('size_high_bit_zero_extends', size=0x80000000, result=0x80000000),
    case('size_all_low_bits', size=MASK32, result=MASK32),
    case('size_upper_word_forwarded', size=0x100000010, result=16, write_bytes=16),
    case('size_all_bits_forwarded', size=MASK64, result=16, write_bytes=16),
    case('zero_result_is_success', result=0),
    case('partial_result', result=7, write_bytes=7),
    case('positive_result_low_sign_bit', size=0x80000000, result=0x80000000),
    case('positive_result_upper_word', size=1 << 32, result=1 << 32),
    case('positive_int64_max', size=MASK64 >> 1, result=(1 << 63) - 1),
    case('negative_int64_min', result=1 << 63),
    case('negative_minus_one', result=MASK64),
    case('negative_errno_style', result=-0x7ffefffe),
    case('high_word_low_positive', size=0x1ffffffff, result=0x00000001ffffffff),
    case('negative_high_word_low_positive', result=0xffffffff00000005),
    case('failure_after_full_write', result=MASK64, write_bytes=16),
    case('failure_after_partial_write', result=MASK64 - 1, write_bytes=5),
    case('null_count_success', count='0x0', result=16, write_bytes=16),
    case('null_count_failure', count='0x0', result=MASK64),
    case('count_overlaps_kernel_write', count='buf:data+0x10', write_bytes=16),
    case('opaque_buffer_zero_size_forwarded', size=0, result=0, buffer='0xfedcba9876543210'),
    case('null_buffer_zero_size_forwarded', size=0, result=0, buffer='0x0'),
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
