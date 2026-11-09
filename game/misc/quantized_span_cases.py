#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic Span reads for misc_quantized_span (0x00405fd0): a null chunk, a chunk whose entry
flag is set, clear, or set only in other bits, chunk slots 0 and 1, the direct callee and the vtable
slots, negative, zero, infinite, NaN and denormal widths, and padding bytes of the out block.

usage: quantized_span_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00405fd0'
DIRECT = '0x004060a0'
VALUE_SLOT = '0x00400400'
SPAN_SLOT = '0x00400500'
MASK64 = (1 << 64) - 1
PAGE = 0x1000
CHUNK_SLOT0 = 'page+0x38'
CHUNK_SLOT1 = 'page+0x70'
INF = float('inf')
NAN = float('nan')


def entry(flags):
    """A ChunkEntry: eleven bytes before the flags byte, then padding."""
    return '00' * 0x0b + f'{flags:02x}' + '00' * 4


def span(start, end, pad=0):
    """A 16-byte out block: the start float, four padding bytes, the end float, four padding bytes."""
    return struct.pack('<fIfI', start, pad & 0xffffffff, end, pad & 0xffffffff).hex()


def case(cid, chunk=CHUNK_SLOT0, flags=(0x02, 0x00), start=0.0, end=0.0, value=0, pad=0):
    """One call. chunk is a buffer offset, or None for a null chunk; flags are the entry flag bytes
    for slots 0 and 1. The direct callee runs when the chunk's entry has the direct bit set."""
    slot = 1 if chunk == CHUNK_SLOT1 else 0
    direct = chunk is not None and bool(flags[slot] & 0x02)
    buffers = {'self': {'size': 0x50}, 'vt': {'size': 0x200}, 'page': {'size': PAGE},
               'pool': {'size': 0x40}, 'entry0': {'size': 0x10, 'bytes': entry(flags[0])},
               'entry1': {'size': 0x10, 'bytes': entry(flags[1])}}
    memory = [{'addr': 'buf:self', 'pointer': 'vt'},
              {'addr': 'buf:vt+24', 'guest': VALUE_SLOT},
              {'addr': 'buf:vt+496', 'guest': SPAN_SLOT},
              {'addr': 'buf:page+32', 'pointer': 'pool'},
              {'addr': 'buf:pool+40', 'pointer': 'entry0'},
              {'addr': 'buf:pool+48', 'pointer': 'entry1'}]
    if chunk is None:
        memory.append({'addr': 'buf:self+72', 'bytes': '00' * 8})
    else:
        memory.append({'addr': 'buf:self+72', 'pointer': chunk})
    if direct:
        stubs = [{'address': DIRECT, 'argc': 2,
                  'writes': [{'arg': 0, 'bytes': span(start, end, pad)}]}]
    else:
        stubs = [{'address': VALUE_SLOT, 'argc': 1, 'ret': hex(value & MASK64)},
                 {'address': SPAN_SLOT, 'argc': 3,
                  'writes': [{'arg': 0, 'bytes': span(start, end, pad)}]}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'f64',
            'args': {'rdi': 'buf:self'}, 'buffers': buffers, 'memory': memory,
            'stubs': stubs, 'imports': []}


CASES = [
    case('null_chunk_vtable_path', chunk=None, flags=(0x02, 0x02), start=1.5, end=4.25, value=0x1234),
    case('null_chunk_high_bits_argument', chunk=None, start=0.0, end=-0.5, value=0x8000000000000000),
    case('null_chunk_all_ones_argument', chunk=None, start=0.25, end=2.0, value=MASK64),
    case('flag_clear_vtable_path', flags=(0x01, 0x00), start=0.25, end=2.0, value=7, pad=0xdeadbeef),
    case('flag_other_bits_only_vtable', flags=(0xfd, 0x00), start=3.0, end=1.0, value=5),
    case('flag_bit_four_vtable', flags=(0x04, 0x00), start=-1.0, end=1.0, value=9),
    case('direct_flag_set', flags=(0x02, 0x00), start=1.0, end=4.25, pad=0xdeadbeef),
    case('direct_all_flag_bits', flags=(0xff, 0x00), start=-2.5, end=3.75),
    case('direct_slot_one', chunk=CHUNK_SLOT1, flags=(0x00, 0x02), start=0.0, end=0.3),
    case('slot_one_flag_clear_slot_zero_set', chunk=CHUNK_SLOT1, flags=(0x02, 0x00),
         start=0.0, end=0.3, value=11),
    case('slot_zero_flag_clear_slot_one_set', chunk=CHUNK_SLOT0, flags=(0x00, 0x02),
         start=0.0, end=0.3, value=12),
    case('direct_negative_width', flags=(0x02, 0x00), start=5.0, end=2.0),
    case('direct_zero_width', flags=(0x02, 0x00), start=2.0, end=2.0),
    case('direct_small_negative_width', flags=(0x02, 0x00), start=0.1, end=0.05),
    case('direct_exact_integer_width', flags=(0x02, 0x00), start=0.0, end=3.0),
    case('direct_infinite_end', flags=(0x02, 0x00), start=0.0, end=INF),
    case('direct_float_overflow_width', flags=(0x02, 0x00), start=-3.0e38, end=3.0e38),
    case('direct_nan_start', flags=(0x02, 0x00), start=NAN, end=1.0),
    case('direct_denormal_end', flags=(0x02, 0x00), start=0.0, end=1.0e-40),
    case('vtable_reversed_span', flags=(0x00, 0x00), start=4.0, end=1.0, value=3),
    case('vtable_nan_end', flags=(0x00, 0x00), start=0.5, end=NAN, value=2),
    case('vtable_infinite_start', flags=(0x00, 0x00), start=-INF, end=0.0, value=1),
    case('vtable_padding_ignored', flags=(0x00, 0x00), start=0.75, end=6.5, value=0x55, pad=0x12345678),
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
