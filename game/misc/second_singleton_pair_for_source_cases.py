#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic calls for misc_second_singleton_pair_for_source (0x02b4e260), for tools/verify.py run.

usage: second_singleton_pair_for_source_cases.py OUT_DIR

The source (an ObjectSource) is null, not ready or ready. A ready source fills the pair with zeros and
calls nothing. Otherwise the shared singleton is taken: already built, or built now with the pending flag
and the guard set or clear. Covers each of those, with the routine's result stored beside the singleton.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b4e260'
G1, PENDING, GUARD = '0x05ac7590', '0x05ac7598', '0x05ac75f0'
LAZY_SETUP, GUARD_ACQUIRE, GUARD_RELEASE, CONSTRUCT = '0x024ede50', '0x02fbe538', '0x02fbe558', '0x024b6d00'
ROUTINE = '0x02b4e4a0'
SOURCE_READY = 0x458
MASK64 = (1 << 64) - 1
FIRST = 0x1122334455667788

# The lazy set-up at 0x024ede50 writes 0x05aa5720 and its neighbours, never the singleton global,
# so the re-read after it stays null and the taken outcome cannot happen.
UNREACHABLE = {
    '0x02b4e2bc': ('taken', 'the call at 0x024ede50 never sets the singleton at 0x05ac7590, so the re-read stays null'),
}


def stub(address, argc, ret=None):
    """One scripted call, with its return value when the caller reads it."""
    entry = {'address': address, 'argc': argc}
    if ret is not None:
        entry['ret'] = hex(ret & MASK64)
    return entry


def case(cid, source, memory, stubs, pending=0, guard=0):
    """One call: rdi is the pair buffer, rsi the first argument, rdx the source (null or a buffer)."""
    args = {'rdi': 'buf:pair', 'rsi': hex(FIRST)}
    buffers = {'pair': {'size': 0x10, 'bytes': 'e5' * 0x10}, 'service': {'size': 0x50}}
    if source is None:
        args['rdx'] = '0x0'
    else:
        args['rdx'] = 'buf:source'
        buffers['source'] = {'size': 0x470, 'bytes': ('00' * SOURCE_READY) + ('01' if source == 'ready' else '00') + '00' * 0x11}
    mem = list(memory) + [{'addr': PENDING, 'bytes': f'{pending:02x}'}, {'addr': GUARD, 'bytes': f'{guard:02x}'}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': mem, 'imports': [], 'stubs': stubs}


SERVICE_BUFFER = [{'addr': G1, 'pointer': 'service'}]
ZERO_SINGLETON = [{'addr': G1, 'bytes': '00' * 8}]


def build_stubs(acquire_ret, guard_clear):
    """The calls of a first build: lazy set-up, the guard pair when the guard is clear, the constructor."""
    calls = [stub(LAZY_SETUP, 0)]
    if guard_clear:
        calls.append(stub(GUARD_ACQUIRE, 1, ret=acquire_ret))
        if acquire_ret != 0:
            calls.append(stub(GUARD_RELEASE, 1))
    calls.append(stub(CONSTRUCT, 1))
    return calls


CASES = [
    case('ready_source_zero_pair', 'ready', ZERO_SINGLETON, [], pending=1, guard=0),
    case('null_source_built_singleton', None, SERVICE_BUFFER, [stub(ROUTINE, 2, ret=0x1234)]),
    case('not_ready_source_built_singleton', 'not_ready', SERVICE_BUFFER, [stub(ROUTINE, 2, ret=0x5678)]),
    case('first_build_pending_guard_clear_acquire_fails', None, ZERO_SINGLETON,
         build_stubs(0, True) + [stub(ROUTINE, 2, ret=0x9abc)], pending=1, guard=0),
    case('first_build_guard_clear_acquire_succeeds', 'not_ready', ZERO_SINGLETON,
         build_stubs(1, True) + [stub(ROUTINE, 2, ret=0xdef0)], pending=0, guard=0),
    case('first_build_guard_set', None, ZERO_SINGLETON,
         build_stubs(0, False) + [stub(ROUTINE, 2, ret=0x2468)], pending=0, guard=1),
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
