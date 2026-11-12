#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic object creations for misc_create_source_object_02b4ce70 (0x02b4ce70), for tools/verify.py run.

usage: create_source_object_02b4ce70_cases.py OUT_DIR

A source gives its own allocation argument (its readiness flag is read by the original and does not
change the result). Without a source the cached allocation argument is used, fetched once when it is
zero. A failed allocation returns null with nothing else called. Covers a source with the flag clear
and set, a failed allocation, a cached argument already set, and one fetched on first use.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b4ce70'
ALLOCATE, CONSTRUCT, INITIALISE, FETCH_ARGUMENT = '0x0247c4e0', '0x02bb7990', '0x02baa950', '0x02fa2b10'
CACHED = '0x05940670'
SOURCE_ALLOC_OFFSET, SOURCE_FLAG_OFFSET = 0x460, 0x468
SOURCE_SIZE = 0x470
OBJECT_BYTES, OBJECT_ALIGNMENT = 0x78, 0x8
MASK64 = (1 << 64) - 1


def source_bytes(alloc_argument, flag):
    """An ObjectSource's bytes that matter here: the allocation argument at +0x460 and the flag at +0x468."""
    data = bytearray(SOURCE_SIZE)
    data[SOURCE_ALLOC_OFFSET:SOURCE_ALLOC_OFFSET + 8] = (alloc_argument & MASK64).to_bytes(8, 'little')
    data[SOURCE_FLAG_OFFSET] = flag
    return data.hex()


def case(cid, source, memory, stubs):
    """One call; rdi is unused by the original, rsi is the source (null or a buffer)."""
    args = {'rdi': '0x0', 'rsi': '0x0' if source is None else 'buf:source'}
    buffers = {'created': {'size': OBJECT_BYTES}}
    if source is not None:
        buffers['source'] = {'size': SOURCE_SIZE, 'bytes': source}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


def allocate(ret):
    """The allocator: three arguments (size, alignment, the allocation argument), a buffer or null back."""
    return {'address': ALLOCATE, 'argc': 3, 'ret': ret}


def build_calls():
    """The constructor and the two sub-object initialisers that follow a successful allocation."""
    return [{'address': CONSTRUCT, 'argc': 1},
            {'address': INITIALISE, 'argc': 2},
            {'address': INITIALISE, 'argc': 2}]


CASES = [
    case('source_flag_clear', source_bytes(0x1234, 0),
         [], [allocate('buf:created')] + build_calls()),
    case('source_flag_set', source_bytes(0xabcdef, 1),
         [], [allocate('buf:created')] + build_calls()),
    case('source_allocation_fails', source_bytes(0x55, 0),
         [], [allocate('0x0')]),
    case('no_source_cached_argument_set', None,
         [{'addr': CACHED, 'bytes': (0x7777).to_bytes(8, 'little').hex()}],
         [allocate('buf:created')] + build_calls()),
    case('no_source_cached_argument_fetched', None,
         [{'addr': CACHED, 'bytes': '00' * 8}],
         [{'address': FETCH_ARGUMENT, 'argc': 0, 'ret': '0x9999'}, allocate('buf:created')] + build_calls()),
]


def main():
    """Write deterministic synthetic calls to the requested directory."""
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
