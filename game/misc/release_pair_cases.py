#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pairs for the pair release (0x0040b8c0): neither block set, only one of them set, both set,
and the release results (zero, a value, and bits above the low byte) that the last release returns."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040b8c0'
RELEASE = '0x0042e5d0'
MASK64 = (1 << 64) - 1
PAIR_SIZE = 0x10
BLOCK_SIZE = 0x20


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, first=False, second=False, rets=()):
    """A pair with its first and/or second block set; the release stub returns `rets` in call order."""
    buffers = {'pair': {'size': PAIR_SIZE, 'bytes': '00' * PAIR_SIZE}}
    memory = []
    for slot, present in (('first', first), ('second', second)):
        offset = 0x0 if slot == 'first' else 0x8
        if present:
            buffers[slot] = {'size': BLOCK_SIZE, 'bytes': '5e' * BLOCK_SIZE}
            memory.append({'addr': f'buf:pair+{offset:#x}', 'pointer': slot})
        else:
            memory.append({'addr': f'buf:pair+{offset:#x}', 'bytes': word(0)})
    stubs = [{'address': RELEASE, 'argc': 1, 'ret': hex(value & MASK64)} for value in rets]
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i64',
        'args': {'rdi': 'buf:pair'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('neither_block_set', rets=()),
    case('only_first_set', first=True, rets=(0x55,)),
    case('only_second_set', second=True, rets=(0x66,)),
    case('both_set_returns_second_result', first=True, second=True, rets=(0x11, 0x22)),
    case('first_result_zero_second_returned', first=True, second=True, rets=(0x0, 0x7)),
    case('first_result_upper_bits_second_returned', first=True, second=True, rets=(0xffffffff00000001, 0x9)),
    case('second_result_upper_bits', first=True, second=True, rets=(0x3, 0xdead000000000000)),
    case('only_first_result_upper_bits', first=True, rets=(0xcafebabe00000000,)),
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
