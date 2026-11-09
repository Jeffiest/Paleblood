#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pairs for the pair store (0x0040b860): old and new blocks that are null or set in each
combination, with the retain and release calls scripted in call order and the stored pair checked."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040b860'
RETAIN = '0x0042e5c0'
RELEASE = '0x0042e5d0'
MASK64 = (1 << 64) - 1
PAIR_SIZE = 0x10
BLOCK_SIZE = 0x20


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, old_first=False, old_second=False, new_first=False, new_second=False):
    """A pair with its old blocks set or null, and new blocks set or null (rsi and rdx)."""
    buffers = {'pair': {'size': PAIR_SIZE, 'bytes': '00' * PAIR_SIZE},
               'new_first': {'size': BLOCK_SIZE, 'bytes': '1d' * BLOCK_SIZE},
               'new_second': {'size': BLOCK_SIZE, 'bytes': '2d' * BLOCK_SIZE}}
    memory = []
    retains = []
    releases = []
    for offset, present, name in ((0x0, old_first, 'old_first'), (0x8, old_second, 'old_second')):
        if present:
            buffers[name] = {'size': BLOCK_SIZE, 'bytes': '3d' * BLOCK_SIZE}
            memory.append({'addr': f'buf:pair+{offset:#x}', 'pointer': name})
            releases.append(name)
        else:
            memory.append({'addr': f'buf:pair+{offset:#x}', 'bytes': word(0)})
    for name, present in (('new_first', new_first), ('new_second', new_second)):
        if present:
            retains.append(name)
    stubs = [{'address': RETAIN, 'argc': 1, 'ret': '0x0'} for _ in retains]
    stubs += [{'address': RELEASE, 'argc': 1, 'ret': '0x0'} for _ in releases]
    args = {'rdi': 'buf:pair',
            'rsi': 'buf:new_first' if new_first else '0x0',
            'rdx': 'buf:new_second' if new_second else '0x0'}
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'void',
        'args': args,
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('all_null', ),
    case('new_first_only', new_first=True),
    case('new_second_only', new_second=True),
    case('new_both_set', new_first=True, new_second=True),
    case('old_first_released', old_first=True),
    case('old_second_released', old_second=True),
    case('old_both_released', old_first=True, old_second=True),
    case('old_and_new_both', old_first=True, old_second=True, new_first=True, new_second=True),
    case('old_second_new_first', old_second=True, new_first=True),
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
