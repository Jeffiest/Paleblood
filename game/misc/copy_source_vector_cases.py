#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_copy_source_vector (0x00c24740), for tools/verify.py run.

usage: copy_source_vector_cases.py OUT_DIR

The owner's +0xb0 pointer leads to a source whose 16-byte vector at +0x230 is copied out. The cases
cover zero, all-ones, signed-zero and NaN lanes, a vector whose neighbours hold other bits (they
must not reach the output), and an output that starts with a different pattern.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00c24740'
SOURCE_VECTOR = 0x230
SOURCE_SIZE = 0x240


def floats(*values):
    """Four little-endian float32 lanes as hex."""
    return b''.join(struct.pack('<f', v) if not isinstance(v, bytes) else v for v in values).hex()


def raw(*words):
    """Four little-endian 32-bit lanes as hex."""
    return b''.join(struct.pack('<I', w & 0xffffffff) for w in words).hex()


def case(cid, vector, out='a5' * 16):
    """vector: the 16 hex bytes at +0x230 of the source; the bytes before it hold 0x5a and the rest are zero."""
    source_bytes = '5a' * SOURCE_VECTOR + vector
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner', 'rsi': 'buf:out'},
            'buffers': {'owner': {'size': 0xb8}, 'source': {'size': SOURCE_SIZE, 'bytes': source_bytes},
                        'out': {'size': 16, 'bytes': out}},
            'memory': [{'addr': 'buf:owner+176', 'pointer': 'source'}],
            'imports': [], 'stubs': []}


CASES = [
    case('vector_zero', raw(0, 0, 0, 0)),
    case('vector_ones', floats(1.0, 1.0, 1.0, 1.0)),
    case('vector_mixed_lanes', floats(-2.5, 3.0, -0.0, 1e-30)),
    case('vector_negative_zero_lanes', raw(0x80000000, 0x80000000, 0x80000000, 0x80000000)),
    case('vector_quiet_nan', raw(0x7fc00001, 0, 0x7fc00000, 0xffffffff)),
    case('vector_infinity', raw(0x7f800000, 0xff800000, 0x7f800001, 0)),
    case('vector_bytes_before_not_copied', raw(0x11111111, 0x22222222, 0x33333333, 0x44444444), out='00' * 16),
    case('output_overwritten_all_lanes', raw(0xdeadbeef, 0xcafebabe, 0x0badf00d, 0x8badf00d), out='ff' * 16),
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
