#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners for the list check (0x0040b820): a null list, an empty list, and lists whose objects'
signed values are above, at, or below one, including negative values, the signed minimum and maximum,
and junk bits above the 32-bit value. The first failing object decides the result."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040b820'
MASK64 = (1 << 64) - 1
OWNER_SIZE = 0x18
LIST_SIZE = 0x10
ELEMENT_SIZE = 0x48
OBJECT_SIZE = 0xec
VALUE_FIELD = 0xe4


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def dword(value):
    return struct.pack('<I', value & 0xffffffff).hex()


def case(cid, values=None, list_present=True):
    """An owner with a list of objects holding `values` (an empty list when none), or no list at all."""
    values = list(values or [])
    buffers = {'owner': {'size': OWNER_SIZE, 'bytes': 'c9' * OWNER_SIZE}}
    memory = []
    if list_present:
        memory.append({'addr': 'buf:owner+0x10', 'pointer': 'list'})
        buffers['list'] = {'size': LIST_SIZE, 'bytes': '00' * 8 + word(len(values))}
        if values:
            memory.append({'addr': 'buf:list+0x0', 'pointer': 'items'})
            buffers['items'] = {'size': 8 * len(values), 'bytes': '00' * (8 * len(values))}
            for k, value in enumerate(values):
                buffers[f'element{k}'] = {'size': ELEMENT_SIZE, 'bytes': '6d' * ELEMENT_SIZE}
                buffers[f'object{k}'] = {'size': OBJECT_SIZE,
                                         'bytes': '3c' * VALUE_FIELD + dword(value) + 'ff' * 4}
                memory.append({'addr': f'buf:items+0x{8 * k:x}', 'pointer': f'element{k}'})
                memory.append({'addr': f'buf:element{k}+0x40', 'pointer': f'object{k}'})
    else:
        memory.append({'addr': 'buf:owner+0x10', 'bytes': word(0)})
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i8',
        'args': {'rdi': 'buf:owner'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': [],
    }


CASES = [
    case('null_list_passes', list_present=False),
    case('empty_list_passes', values=[]),
    case('single_above_one_passes', values=[2]),
    case('single_at_one_fails', values=[1]),
    case('single_zero_fails', values=[0]),
    case('single_negative_fails', values=[-1]),
    case('signed_minimum_fails', values=[-0x80000000]),
    case('signed_maximum_passes', values=[0x7fffffff]),
    case('first_fails_second_passes', values=[1, 5]),
    case('first_passes_second_fails', values=[5, 0]),
    case('all_three_pass', values=[2, 3, 4]),
    case('middle_fails_last_not_checked', values=[2, -3, 9]),
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
