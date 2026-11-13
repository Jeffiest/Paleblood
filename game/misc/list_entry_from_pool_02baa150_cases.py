#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic lookup entries for misc_list_entry_from_pool_02baa150 (0x02baa150), for tools/verify.py run.

usage: list_entry_from_pool_02baa150_cases.py OUT_DIR

A request gives its pool word at 0x460 to the allocator (0x0247c4e0, size 0x40, alignment 8). Without a request
the shared pool at 0x05940670 is used; when that is still zero, the maker (0x02fa2b10) fills it first. A failed
allocation returns zero. A successful one gets the lookup entry vtable and is filled by 0x02baa950 with a zero word.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02baa150'
SHARED_POOL = '0x05940670'
ALLOC, MAKE_POOL, FILL = '0x0247c4e0', '0x02fa2b10', '0x02baa950'
MASK64 = (1 << 64) - 1
REQUEST_SIZE = 0x470
ENTRY_SIZE = 0x40
POOL = 0x7777
SHARED = 0x5555
MADE = 0x4444


def u64(value):
    return (value & MASK64).to_bytes(8, 'little').hex()


def case(cid, request=True, mode=1, shared=None, alloc='entry', made=MADE):
    """One call. shared is None (the shared pool is zero, so the maker runs) or the pool value it holds.
    alloc is entry (the allocation succeeds) or zero (it fails)."""
    args = {'rdi': '0x0'}
    buffers = {'entry': {'size': ENTRY_SIZE}}
    memory = [{'addr': SHARED_POOL, 'bytes': u64(shared or 0)}]
    stubs = []
    if request:
        args['rsi'] = 'buf:request'
        buffers['request'] = {'size': REQUEST_SIZE}
        memory.append({'addr': 'buf:request+0x458', 'bytes': f'{mode:02x}'})
        memory.append({'addr': 'buf:request+0x460', 'bytes': u64(POOL)})
    else:
        args['rsi'] = '0x0'
        if shared is None:
            stubs.append({'address': MAKE_POOL, 'argc': 0, 'ret': hex(made)})
    stubs.append({'address': ALLOC, 'argc': 3, 'ret': 'buf:entry' if alloc == 'entry' else '0x0'})
    if alloc == 'entry':
        stubs.append({'address': FILL, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('request_pool_entry', request=True),
    case('request_pool_alloc_fails', request=True, alloc='zero'),
    case('request_mode_two_ignored', request=True, mode=2),
    case('request_mode_zero_ignored', request=True, mode=0),
    case('null_request_shared_set', request=False, shared=SHARED),
    case('null_request_shared_set_alloc_fails', request=False, shared=SHARED, alloc='zero'),
    case('null_request_shared_unset_made', request=False, shared=None),
    case('null_request_shared_unset_alloc_fails', request=False, shared=None, alloc='zero'),
    case('null_request_shared_unset_made_zero', request=False, shared=None, made=0),
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
