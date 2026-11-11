#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_copy_source_vector_pair (0x00c24700), for tools/verify.py run.

usage: copy_source_vector_pair_cases.py OUT_DIR

The owner's +0xb0 source holds the vectors at +0x1a0 and +0x1e0; its +0xb8 addend, when present,
holds a vector at +0x30 that is added to the +0x1a0 one. Cases: no addend (the sum is the base
vector, RAX is null), addends of zero, of signed values, of an infinity that cancels, and of NaN;
the outputs start with other patterns so an unwritten lane shows.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00c24700'
SOURCE_SIZE = 0x240
ADDEND_SIZE = 0x40


def lanes(*words):
    """Four little-endian 32-bit lanes as hex, from raw bit patterns or floats."""
    out = b''
    for w in words:
        if isinstance(w, float):
            out += struct.pack('<f', w)
        else:
            out += struct.pack('<I', w & 0xffffffff)
    return out.hex()


def place(size, pieces):
    """A zero-filled block of size bytes with hex pieces placed at their offsets."""
    block = bytearray(size)
    for offset, hex_bytes in pieces:
        data = bytes.fromhex(hex_bytes)
        block[offset:offset + len(data)] = data
    return block.hex()


def case(cid, base, first, addend=None, out_first='a5' * 16, out_sum='5b' * 16):
    """base: the vector at +0x1a0; first: the one at +0x1e0; addend: the +0x30 vector, or None for no addend."""
    source = place(SOURCE_SIZE, [(0x1a0, base), (0x1e0, first), (0x230, lanes(0x0badcafe, 0, 0, 0))])
    buffers = {'owner': {'size': 0xc0},'source': {'size': SOURCE_SIZE, 'bytes': source},
               'first': {'size': 16, 'bytes': out_first}, 'sum': {'size': 16, 'bytes': out_sum}}
    memory = [{'addr': 'buf:owner+176', 'pointer': 'source'}]
    if addend is None:
        memory.append({'addr': 'buf:owner+184', 'bytes': '00' * 8})
    else:
        buffers['addend'] = {'size': ADDEND_SIZE, 'bytes': place(ADDEND_SIZE, [(0x30, addend)])}
        memory.append({'addr': 'buf:owner+184', 'pointer': 'addend'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner', 'rsi': 'buf:first', 'rdx': 'buf:sum'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': []}


BASE = lanes(1.5, -2.0, 0.25, 8.0)
FIRST = lanes(0x11111111, 0x22222222, 0x33333333, 0x44444444)

CASES = [
    case('no_addend', BASE, FIRST),
    case('addend_zero', BASE, FIRST, addend=lanes(0, 0, 0, 0)),
    case('addend_signed_values', BASE, FIRST, addend=lanes(-1.5, 2.0, -0.25, -8.0)),
    case('addend_negative_zero', BASE, FIRST, addend=lanes(0x80000000, 0x80000000, 0x80000000, 0x80000000)),
    case('addend_infinities_cancel', lanes(float('inf'), 1.0, -1.0, 0.0), FIRST,
         addend=lanes(float('-inf'), 2.0, 3.0, 4.0)),
    case('addend_quiet_nan', BASE, FIRST, addend=lanes(0x7fc00001, 0, 0x7fc00000, 0xffffffff)),
    case('base_nan_passes_through', lanes(0x7fc00002, 0x7f800001, 0, 0x80000000), FIRST, addend=lanes(0, 0, 0, 0)),
    case('first_output_only_from_source', BASE, lanes(0xdeadbeef, 0xcafebabe, 0x0badf00d, 0x8badf00d),
         addend=lanes(0.5, 0.5, 0.5, 0.5), out_first='00' * 16),
    case('sum_output_overwritten', BASE, FIRST, out_sum='ff' * 16),
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
