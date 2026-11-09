#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic block holders for the copy assignment at 0x01886b00: a fresh holder, an old block released
through the cached allocator or the allocator the block reports, allocation failure, a count with upper
register bits, and the copy of the source into the new block (also for a zero count)."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01886b00'
TLS_OFFSET = -0x40
TLS_OFFSET_GLOBAL = '0x057e44a8'
SHARED_GLOBAL = '0x05940438'
ALLOCATE = '0x00500a00'
FREE = '0x00500a10'
ALLOCATOR_OF = '0x0247b720'
COPY = '0x02a1a1b0'
MASK64 = (1 << 64) - 1
UNREACHABLE = {'0x01886b50': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x01886b6e')}
SOURCE = bytes((index * 11 + 5) & 0xff for index in range(0x100))


def word(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, count=3, count_arg=None, old=False, cache=False, lookup=False, alloc=True):
    """One copy; `count_arg` carries the full register, the low 16 bits are the count."""
    count_arg = count if count_arg is None else count_arg
    buffers = {'holder': {'size': 0x10, 'bytes': 'cd' * 0x10},
               'tls': {'size': 0x48},
               'block': {'size': 0x20, 'bytes': '6d' * 0x20},
               'cached': {'size': 0x10}, 'cached_vt': {'size': 0x80},
               'lookup': {'size': 0x10}, 'lookup_vt': {'size': 0x80},
               'shared': {'size': 0x10}, 'shared_vt': {'size': 0x80},
               'src': {'size': len(SOURCE), 'bytes': SOURCE.hex()},
               'fresh': {'size': 0x200, 'bytes': 'ef' * 0x200}}
    memory = [{'addr': 'buf:holder+8', 'pointer': 'block'} if old else {'addr': 'buf:holder+8', 'bytes': word(0)},
              {'addr': TLS_OFFSET_GLOBAL, 'bytes': struct.pack('<q', TLS_OFFSET).hex()},
              {'addr': 'buf:tls+64', 'pointer': 'tls+64'},
              {'addr': 'buf:tls+16', 'pointer': 'cached'} if cache else {'addr': 'buf:tls+16', 'bytes': word(0)},
              {'addr': 'buf:cached+0', 'pointer': 'cached_vt'}, {'addr': 'buf:cached_vt+112', 'guest': FREE},
              {'addr': 'buf:lookup+0', 'pointer': 'lookup_vt'}, {'addr': 'buf:lookup_vt+112', 'guest': FREE},
              {'addr': SHARED_GLOBAL, 'pointer': 'shared'}, {'addr': 'buf:shared+0', 'pointer': 'shared_vt'},
              {'addr': 'buf:shared_vt+88', 'guest': ALLOCATE}]
    stubs = []
    if old and not cache:
        stubs.append({'address': ALLOCATOR_OF, 'argc': 1, 'ret': 'buf:lookup' if lookup else 0})
    if old:
        stubs.append({'address': FREE, 'argc': 2})
    stubs.append({'address': ALLOCATE, 'argc': 3, 'ret': 'buf:fresh' if alloc else 0})
    if alloc:
        copy = {'address': COPY, 'argc': 3}
        if count:
            copy['argmem'] = [{'arg': 1, 'size': count}]
            copy['writes'] = [{'arg': 0, 'bytes': SOURCE[:count].hex()}]
        stubs.append(copy)
    args = {'rdi': 'buf:holder', 'rsi': 'buf:src', 'rdx': hex(count_arg & MASK64)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8', 'args': args,
            'buffers': buffers, 'memory': memory, 'gs': 'buf:tls+64', 'imports': [], 'stubs': stubs}


CASES = [
    case('fresh_holder_copies_source'),
    case('replaces_old_block_through_cache', old=True, cache=True),
    case('replaces_old_block_through_lookup', old=True, lookup=True),
    case('allocation_failure_clears_old_block', old=True, cache=True, alloc=False),
    case('allocation_failure_fresh_holder', alloc=False),
    case('count_high_bits_ignored', count=5, count_arg=0xabcdef0000000005),
    case('zero_count_still_copies', count=0),
    case('count_0x80_high_word_ignored', count=0x80, count_arg=0x1234000000000080),
    case('count_0x100_boundary', count=0x100),
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
