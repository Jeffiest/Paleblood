#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic record copies: distinct field values so a swapped or misplaced field shows, zero and all-ones
sources, keys and flags with garbage above their low bits, identifiers with the top bit set (the returned word is
zero-extended), and a destination with a sentinel tail that must stay untouched."""
import json
from pathlib import Path
import sys

ADDRESS = '0x02254600'
DESTINATION_SIZE = 0x30
SOURCE_SIZE = 0x58
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def source(mode=0x5a, id_a=0x11111111, id_b=0x22222222, pointer=0x3333333333333333,
           count=0x44444444, link=0x5555555555555555, extra=0x66666666, filler=0x7e):
    """A 0x58-byte source record: each copied field at its offset, the rest filled with a byte that must not matter."""
    data = bytearray([filler]) * SOURCE_SIZE
    data[0x08] = mode & 0xff
    data[0x38:0x3c] = (id_a & MASK32).to_bytes(4, 'little')
    data[0x3c:0x40] = (id_b & MASK32).to_bytes(4, 'little')
    data[0x40:0x48] = (pointer & MASK64).to_bytes(8, 'little')
    data[0x48:0x4c] = (count & MASK32).to_bytes(4, 'little')
    data[0x4c:0x54] = (link & MASK64).to_bytes(8, 'little')
    data[0x54:0x58] = (extra & MASK32).to_bytes(4, 'little')
    return data.hex()


def case(cid, key=0x01020304, flag=0x01, rsi_high=0, rcx_high=0, src=None, dst_fill='ee'):
    """One copy: the destination starts as a sentinel, the key and flag arrive with garbage above their low bits,
    and the routine reads only the fields the original reads. The return value is compared as a 64-bit word."""
    src = src if src is not None else source()
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:destination',
                     'rsi': hex((rsi_high << 32) | (key & MASK32)),
                     'rdx': 'buf:source',
                     'rcx': hex((rcx_high << 8) | (flag & 0xff))},
            'buffers': {'destination': {'size': DESTINATION_SIZE, 'bytes': dst_fill * DESTINATION_SIZE},
                        'source': {'size': SOURCE_SIZE, 'bytes': src}},
            'imports': [],
            'stubs': []}


CASES = [
    case('ordinary_copy'),
    case('all_fields_distinct', key=0x0badf00d, flag=0x80, src=source(mode=0x81, id_a=0xaaaa0001,
                                                                     id_b=0xbbbb0002, pointer=0xc0de0000c0de0003,
                                                                     count=0xd00d0004, link=0xe1e1e1e100000005,
                                                                     extra=0xf0f0f0f0)),
    case('key_upper_bits_ignored', key=0x00000007, rsi_high=0xdeadbeef),
    case('key_zero', key=0),
    case('key_top_bit', key=0x80000000),
    case('key_all_ones', key=MASK32),
    case('flag_zero', flag=0),
    case('flag_upper_bits_ignored', flag=0x01, rcx_high=0xabcdef00),
    case('flag_all_bits_stored_low_byte', flag=0xff, rcx_high=0x12345600),
    case('flag_low_byte_only', flag=0x7f),
    case('source_all_zero', src=source(mode=0, id_a=0, id_b=0, pointer=0, count=0, link=0, extra=0, filler=0)),
    case('source_all_ones', src=source(mode=0xff, id_a=MASK32, id_b=MASK32, pointer=MASK64, count=MASK32,
                                       link=MASK64, extra=MASK32, filler=0xff)),
    case('id_b_top_bit_zero_extended', src=source(id_b=0x80000000)),
    case('id_b_low_word_only', src=source(id_b=0x00000001, id_a=0xffffffff)),
    case('id_a_is_not_returned', src=source(id_a=0x9abcdef0, id_b=0x00000002)),
    case('count_top_bit', src=source(count=0x80000000)),
    case('extra_top_bit', src=source(extra=0x80000000)),
    case('pointer_high_word_only', src=source(pointer=0x0000000100000000)),
    case('link_high_byte_only', src=source(link=0xff00000000000000)),
    case('link_low_byte_only', src=source(link=0x00000000000000ab)),
    case('mode_high_bit', src=source(mode=0x80)),
    case('sentinel_tail_untouched', dst_fill='cc', src=source(filler=0x11)),
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
