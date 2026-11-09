#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic scratch-block reads for misc_scratch_value_18 (0x00405dc0).

The builder returns a harness buffer whose double at offset 0x18 holds each scripted bit pattern and
whose other bytes are a sentinel. The builder's argument block is recorded byte for byte, so the
game's starting values are checked too. Covers ordinary, signed, zero, subnormal, infinite and NaN
payloads, and a null source.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00405dc0'
BUILDER = '0x00403570'
OFFSET = 0x18
BLOCK_BYTES = 0x60
SENTINEL = 0xa5
VALUES = [
    ('ordinary_positive', 0x3ff8000000000000),
    ('ordinary_negative', 0xc002000000000000),
    ('one', 0x3ff0000000000000),
    ('initial_value', 0x4059000000000000),
    ('zero', 0x0000000000000000),
    ('negative_zero', 0x8000000000000000),
    ('subnormal', 0x0000000000000001),
    ('negative_subnormal', 0x8000000000000001),
    ('largest_finite', 0x7fefffffffffffff),
    ('positive_infinity', 0x7ff0000000000000),
    ('negative_infinity', 0xfff0000000000000),
    ('quiet_nan_payload', 0x7ff8000000001234),
    ('negative_nan_payload', 0xfff8abcdef012345),
    ('signaling_nan_payload', 0x7ff0000000005678),
]


def case(cid, value_bits, with_source=True):
    """One read: the builder returns the result buffer, whose field at OFFSET holds value_bits."""
    result = bytearray([SENTINEL]) * BLOCK_BYTES
    result[OFFSET:OFFSET + 8] = struct.pack('<Q', value_bits)
    buffers = {'result': {'size': BLOCK_BYTES, 'bytes': bytes(result).hex()}}
    args = {'rdi': 'buf:source' if with_source else '0x0'}
    if with_source:
        buffers['source'] = {'size': 8, 'bytes': '5a' * 8}
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'f64', 'args': args,
        'buffers': buffers, 'imports': [],
        'stubs': [{'address': BUILDER, 'argc': 2, 'argmem': [{'arg': 1, 'size': BLOCK_BYTES}],
                   'ret': 'buf:result'}],
    }


CASES = [case(cid, bits) for cid, bits in VALUES]
CASES.append(case('null_source', 0x3ff8000000000000, with_source=False))


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
