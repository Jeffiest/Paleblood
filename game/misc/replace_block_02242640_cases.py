#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic block replacements for misc_replace_block_02242640 (0x02242640), for tools/verify.py run.

usage: replace_block_02242640_cases.py OUT_DIR

The owner keeps an entry count (+0x50) and a block (+0x58). The request's word (+0x14) is doubled and
masked to an even count; the new block comes from the default allocator (its allocate slot at 0x50 is
a stub). The entries are filled by a stub, then the old block, if any, is freed through the thread's
cached allocator (in a thread-local slot at +0x10 of the cache block) or, when the cache is empty,
through the allocator that the block's address gives (a stub). Covers no old block with zero, ordinary,
high-bit and mask-edge requests, an old block freed through the cache, and an old block freed through
the allocator lookup. The branch where the lookup finds no allocator is a fatal report followed by a
load through null, so it is declared unreachable.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02242640'
ALLOCATE = '0x00400060'      # the default allocator's allocate slot; stubbed
FREE = '0x004000a0'          # the free slot of the cached and looked-up allocators; stubbed
FILL = '0x00f4ff60'
ALLOCATOR_OF = '0x0247b720'
TLS_OFFSET = -0x740          # value of the thread-local offset global at 0x057e44a8
TLS_BELOW = -TLS_OFFSET
CACHE_SLOT = 0x10
MASK32 = (1 << 32) - 1

UNREACHABLE = {
    '0x022426c0': ('fallthrough',
                   'fatal error 0x024b55b0 then a load through null at 0x022426df when the allocator lookup finds nothing'),
}


def u32(value):
    """Four little-endian bytes."""
    return struct.pack('<I', value & MASK32).hex()


def case(cid, request=0x12345, old=False, cached=False):
    """One replacement. Stub order follows the original's call order."""
    buffers = {
        'tls': {'size': TLS_BELOW + 8},
        'src': {'size': 0x20, 'bytes': '00' * 0x14 + u32(request)},
        'self': {'size': 0x60, 'bytes': '00' * 0x50 + u32(0x77) + '00' * 0x04},
        'unused': {'size': 0x10},
        'block': {'size': 0x100},
        'alloc': {'size': 0x10},
        'alloc_vt': {'size': 0x78},
        'cache_obj': {'size': 0x10},
        'cache_vt': {'size': 0x78},
        'old': {'size': 0x40},
    }
    memory = [
        {'addr': '0x057e44a8', 'bytes': struct.pack('<q', TLS_OFFSET).hex()},
        {'addr': f'buf:tls+{TLS_BELOW}', 'pointer': f'tls+{TLS_BELOW}'},
        {'addr': '0x05940410', 'pointer': 'alloc'},
        {'addr': 'buf:alloc+0', 'pointer': 'alloc_vt'},
        {'addr': f'buf:alloc_vt+{0x50:#x}', 'guest': ALLOCATE},
        {'addr': f'buf:alloc_vt+{0x70:#x}', 'guest': FREE},
        {'addr': 'buf:cache_obj+0', 'pointer': 'cache_vt'},
        {'addr': f'buf:cache_vt+{0x70:#x}', 'guest': FREE},
    ]
    if old:
        memory.append({'addr': 'buf:self+88', 'pointer': 'old'})
    if old and cached:
        memory.append({'addr': f'buf:tls+{CACHE_SLOT}', 'pointer': 'cache_obj'})
    stubs = [{'address': ALLOCATE, 'argc': 2, 'ret': 'buf:block'},
             {'address': FILL, 'argc': 3}]
    if old:
        if cached:
            stubs.append({'address': FREE, 'argc': 2})
        else:
            stubs.append({'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:alloc'})
            stubs.append({'address': FREE, 'argc': 2})
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'gs': f'buf:tls+{TLS_BELOW}',
        'args': {'rdi': 'buf:self', 'rsi': '0x0', 'rdx': 'buf:src'},
        'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs,
        'UNREACHABLE': UNREACHABLE,
    }


CASES = [
    case('no_old_block_zero_request', request=0x0),
    case('no_old_block', request=0x12345),
    case('no_old_block_high_bits', request=0xc0000001),
    case('no_old_block_mask_edge', request=0x3fffffff),
    case('no_old_block_wraps_to_zero', request=0x40000000),
    case('old_block_cached', request=0x1000, old=True, cached=True),
    case('old_block_cached_high_request', request=0x7fffffff, old=True, cached=True),
    case('old_block_lookup_allocator', request=0x3fffffff, old=True),
    case('old_block_lookup_small', request=0x2, old=True),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        fixture.pop('UNREACHABLE', None)
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
