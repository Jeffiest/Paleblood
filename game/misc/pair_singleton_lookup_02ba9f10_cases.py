#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic pair fills for misc_pair_singleton_lookup_02ba9f10 (0x02ba9f10), for tools/verify.py run.

usage: pair_singleton_lookup_02ba9f10_cases.py OUT_DIR

A request that is present with a nonzero mode byte gives a null pair and no calls. Otherwise (no request, or
mode zero) the pair singleton at 0x05ac76e8 is taken, built when null (with the pending flag at 0x05ac76f0 and
the guard at 0x05ac7748), and the lookup at 0x02baa150 is called with the first argument and the request; its
result is the pair's second word.

The lazy set-up at 0x024ede50 never sets the singleton global, so the re-read after it stays null and the taken
outcome of that branch is declared unreachable.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02ba9f10'
SINGLETON_GLOBAL = '0x05ac76e8'
PENDING = '0x05ac76f0'
GUARD = '0x05ac7748'
LAZY, ACQUIRE, RELEASE, CONSTRUCT = '0x024ede50', '0x02fbe538', '0x02fbe558', '0x024b6d00'
LOOKUP = '0x02baa150'
MASK64 = (1 << 64) - 1
OUT_SIZE = 0x10
REQUEST_SIZE = 0x470
SINGLETON_SIZE = 0x50
ENTRY_SIZE = 0x40
FIRST = 0x6666

UNREACHABLE = {
    '0x02ba9f6c': ('taken', 'the call at 0x024ede50 never sets the singleton at 0x05ac76e8, so the re-read stays null'),
}


def u64(value):
    return (value & MASK64).to_bytes(8, 'little').hex()


def stub(address, argc, ret=None):
    entry = {'address': address, 'argc': argc}
    if ret is not None:
        entry['ret'] = ret
    return entry


def case(cid, request=True, mode=1, singleton='built', pending=0, guard=0, acquire=0, lookup='entry'):
    """One fill. request None means a null request; mode is the request byte at 0x458. singleton is built or
    null; lookup is entry (the lookup returns the entry buffer) or zero."""
    memory = []
    stubs = []
    if singleton == 'built':
        memory.append({'addr': SINGLETON_GLOBAL, 'pointer': 'singleton'})
    else:
        memory.append({'addr': SINGLETON_GLOBAL, 'bytes': '00' * 8})
    memory.append({'addr': PENDING, 'bytes': f'{pending:02x}'})
    memory.append({'addr': GUARD, 'bytes': f'{guard:02x}'})
    args = {'rdi': 'buf:out', 'rsi': hex(FIRST)}
    buffers = {'out': {'size': OUT_SIZE}, 'singleton': {'size': SINGLETON_SIZE}, 'entry': {'size': ENTRY_SIZE}}
    if request:
        args['rdx'] = 'buf:request'
        buffers['request'] = {'size': REQUEST_SIZE}
        memory.append({'addr': 'buf:request+0x458', 'bytes': f'{mode:02x}'})
    else:
        args['rdx'] = '0x0'
    if not (request and mode != 0):
        if singleton == 'null':
            stubs.append(stub(LAZY, 0))
            if guard == 0:
                stubs.append(stub(ACQUIRE, 1, hex(acquire)))
                if acquire != 0:
                    stubs.append(stub(RELEASE, 1))
            stubs.append(stub(CONSTRUCT, 1))
        stubs.append(stub(LOOKUP, 2, 'buf:entry' if lookup == 'entry' else '0x0'))
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('request_busy_gives_zero_pair', request=True, mode=1),
    case('request_mode_two_gives_zero_pair', request=True, mode=2),
    case('request_mode_zero_built', request=True, mode=0),
    case('null_request_built_entry', request=False),
    case('null_request_built_lookup_zero', request=False, lookup='zero'),
    case('mode_zero_built_lookup_zero', request=True, mode=0, lookup='zero'),
    case('null_request_singleton_guard_set', request=False, singleton='null', guard=1),
    case('null_request_singleton_guard_clear_acquire_fails', request=False, singleton='null', guard=0, acquire=0),
    case('null_request_singleton_guard_clear_acquire_succeeds', request=False, singleton='null', guard=0,
         acquire=1),
    case('null_request_singleton_pending_set', request=False, singleton='null', pending=1, guard=1),
    case('mode_zero_singleton_null_lookup_zero', request=True, mode=0, singleton='null', guard=1, lookup='zero'),
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
