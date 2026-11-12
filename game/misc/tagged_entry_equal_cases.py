#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_tagged_entry_equal (0x0046b340), for tools/verify.py run.

usage: tagged_entry_equal_cases.py OUT_DIR

Two 0x50-byte entries (tagged text pointer +0x10, identity +0x38, key and tag +0x40, weight
+0x44, level +0x48, option bits +0x4a, flags +0x4c). Covers every flag combination for the text
comparison and identity test, a text compare of zero and nonzero, and each later mismatch: key,
tag byte, level, option bit 3, weight (equal, different, signed zeros, NaN).
"""
import json
import os
import struct
import sys

CMP = '0x0045e440'
NAN = 0x7fc00000
UNREACHABLE = {'0x0046b3ed': ('taken', 'both operands are a 16-bit integer times the same finite scale, so the compare is never unordered')}


def entry(flags=0, text=0x1001, identity=0x77, key=0x05000012, weight=1.5, level=3, option=0):
    d = bytearray(b'\xa5' * 0x50)
    d[0x10:0x18] = struct.pack('<Q', text)
    d[0x38:0x40] = struct.pack('<Q', identity)
    d[0x40:0x44] = struct.pack('<I', key)
    d[0x44:0x48] = struct.pack('<I', weight) if isinstance(weight, int) else struct.pack('<f', weight)
    d[0x48:0x4a] = struct.pack('<H', level)
    d[0x4a] = option
    d[0x4c:0x4e] = struct.pack('<H', flags)
    return d.hex()


def case(cid, a, b, compare=None):
    stubs = []
    if compare is not None:
        stubs.append({'address': CMP, 'argc': 2, 'ret': hex(compare & 0xffffffff)})
    return {'schema': 1, 'address': '0x0046b340', 'id': cid, 'returns': 'i32',
            'args': {'rdi': 'buf:a', 'rsi': 'buf:b'},
            'buffers': {'a': {'size': 0x50, 'bytes': a}, 'b': {'size': 0x50, 'bytes': b}},
            'stubs': stubs, 'imports': []}


T, I = 0x4, 0x800
CASES = [
    case('text_equal_all_match', entry(T), entry(T, text=0x2002), compare=0),
    case('text_equal_tag_bits_ignored', entry(T, text=0x1003), entry(T, text=0x2000), compare=0),
    case('text_differs_no_identity_flag', entry(T), entry(T), compare=5),
    case('text_differs_negative', entry(T | I), entry(T | I), compare=-1),
    case('text_differs_identity_equal', entry(T | I), entry(T | I), compare=1),
    case('text_differs_identity_differs', entry(T | I), entry(T | I, identity=0x78), compare=1),
    case('only_first_comparable_identity', entry(T | I), entry(I)),
    case('only_second_comparable_no_flag', entry(0), entry(T)),
    case('neither_comparable_identity_equal', entry(I), entry(I)),
    case('neither_comparable_first_lacks_identity', entry(0), entry(I)),
    case('neither_comparable_second_lacks_identity', entry(I), entry(0)),
    case('identity_differs', entry(I), entry(I, identity=0x1_0000_0077)),
    case('key_differs_low', entry(I), entry(I, key=0x05000013)),
    case('key_differs_high_bit', entry(I), entry(I, key=0x05800012)),
    case('tag_differs', entry(I), entry(I, key=0x06000012)),
    case('tag_differs_key_same', entry(I, key=0xff000012), entry(I, key=0x00000012)),
    case('level_differs', entry(I), entry(I, level=4)),
    case('level_high_differs', entry(I, level=0xffff), entry(I, level=0xfffe)),
    case('option_bit_differs', entry(I, option=8), entry(I, option=0)),
    case('option_other_bits_ignored', entry(I, option=0xf7), entry(I, option=0x08 | 0x01)),
    case('option_bit_same', entry(I, option=8), entry(I, option=8)),
    case('weight_differs', entry(I), entry(I, weight=2.5)),
    case('weight_signed_zero', entry(I, weight=0.0), entry(I, weight=-0.0)),
    case('weight_nan', entry(I, weight=NAN), entry(I, weight=NAN)),
    case('weight_nan_one_side', entry(I, weight=NAN), entry(I)),
    case('weight_infinity', entry(I, weight=0x7f800000), entry(I, weight=0x7f800000)),
    case('weight_tiny_differs', entry(I, weight=0x00000001), entry(I, weight=0x00000002)),
    case('flags_other_bits', entry(I | 0xf7fb), entry(I | 0x0300)),
]


def main():
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
