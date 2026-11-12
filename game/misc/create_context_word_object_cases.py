#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic small-object creations for misc_create_small_source_object_02b4e4a0 (0x02b50a50), for tools/verify.py run.

usage: create_small_source_object_02b4e4a0_cases.py OUT_DIR

A source gives its own allocation argument (its readiness flag is not used). Without a source the cached allocation
argument is used, fetched once when it is zero. A failed allocation returns null with nothing else called. Covers a
source, a failed allocation, a cached argument already set, and one fetched on first use.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b50a50'
ALLOCATE, CONSTRUCT, FETCH_ARGUMENT = '0x0247c4e0', '0x02bacb60', '0x02fa2b10'
CACHED = '0x05940670'
SOURCE_ALLOC_OFFSET, SOURCE_FLAG_OFFSET = 0x460, 0x468
SOURCE_SIZE = 0x470
OBJECT_BYTES, OBJECT_ALIGNMENT = 0x10, 0x8
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
    """The allocator: size, alignment and the allocation argument; a buffer or null comes back."""
    return {'address': ALLOCATE, 'argc': 3, 'ret': ret}


CONSTRUCT_CALL = {'address': CONSTRUCT, 'argc': 1}

CASES = [
    case('source_flag_clear', source_bytes(0x1234, 0), [], [allocate('buf:created'), CONSTRUCT_CALL]),
    case('source_flag_set', source_bytes(0xabcdef, 1), [], [allocate('buf:created'), CONSTRUCT_CALL]),
    case('source_allocation_fails', source_bytes(0x55, 0), [], [allocate('0x0')]),
    case('no_source_cached_argument_set', None,
         [{'addr': CACHED, 'bytes': (0x7777).to_bytes(8, 'little').hex()}],
         [allocate('buf:created'), CONSTRUCT_CALL]),
    case('no_source_cached_argument_fetched', None,
         [{'addr': CACHED, 'bytes': '00' * 8}],
         [{'address': FETCH_ARGUMENT, 'argc': 0, 'ret': '0x9999'}, allocate('buf:created'), CONSTRUCT_CALL]),
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
