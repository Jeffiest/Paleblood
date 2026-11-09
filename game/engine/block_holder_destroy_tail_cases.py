#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic block holders for the destructor part at 0x018868f0: no block (the cache is kept), a block
released through the thread's cached allocator or through the allocator the block reports, and the base
destructor's result returned unchanged. The null allocator path is declared unreachable: it reports a fatal
error and then loads a vtable through null."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x018868f0'
TLS_OFFSET = -0x40          # the cache block sits this far below the thread pointer
TLS_OFFSET_GLOBAL = '0x057e44a8'
FREE = '0x00500a10'
ALLOCATOR_OF = '0x0247b720'
BASE = '0x02fbe588'
MASK64 = (1 << 64) - 1
UNREACHABLE = {'0x01886943': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x01886961')}


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, block=True, cache=False, lookup=False, result=0):
    """A holder with or without a block; the cache slot holds an allocator when `cache` is set."""
    buffers = {'holder': {'size': 0x10, 'bytes': 'cd' * 0x10},
               'tls': {'size': 0x48},
               'block': {'size': 0x20, 'bytes': '6d' * 0x20},
               'cached': {'size': 0x10}, 'cached_vt': {'size': 0x80},
               'lookup': {'size': 0x10}, 'lookup_vt': {'size': 0x80}}
    memory = [{'addr': 'buf:holder+8', 'pointer': 'block'} if block else {'addr': 'buf:holder+8', 'bytes': word(0)},
              {'addr': TLS_OFFSET_GLOBAL, 'bytes': struct.pack('<q', TLS_OFFSET).hex()},
              {'addr': 'buf:tls+64', 'pointer': 'tls+64'},
              {'addr': 'buf:tls+16', 'pointer': 'cached'} if cache else {'addr': 'buf:tls+16', 'bytes': word(0)},
              {'addr': 'buf:cached+0', 'pointer': 'cached_vt'},
              {'addr': 'buf:cached_vt+112', 'guest': FREE},
              {'addr': 'buf:lookup+0', 'pointer': 'lookup_vt'},
              {'addr': 'buf:lookup_vt+112', 'guest': FREE}]
    stubs = []
    if block and not cache:
        stubs.append({'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:lookup' if lookup else 0})
    if block:
        stubs.append({'address': FREE, 'argc': 2})
    stubs.append({'address': BASE, 'argc': 1, 'ret': hex(result & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder'}, 'buffers': buffers, 'memory': memory,
            'gs': 'buf:tls+64', 'imports': [], 'stubs': stubs}


CASES = [
    case('no_block_keeps_cache', block=False, cache=True),
    case('no_block_no_cache', block=False),
    case('block_freed_through_cache', cache=True),
    case('block_freed_through_cache_ignores_lookup', cache=True, lookup=True),
    case('block_freed_through_lookup', lookup=True),
    case('base_result_zero_block_cache', cache=True, result=0),
    case('base_result_all_ones', block=False, result=MASK64),
    case('base_result_high_word_block', lookup=True, result=0x1234567800000000),
    case('base_result_low_bit_no_block', block=False, result=1),
]


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
