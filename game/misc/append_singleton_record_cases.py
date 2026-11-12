#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic calls for misc_append_singleton_record_02b50530 (0x02b50530), for tools/verify.py run.

usage: append_singleton_record_cases.py OUT_DIR

The source slot holds a source object whose slot 0 produces the value, or null, which makes the value
the record singleton: already built, or built now with the pending flag and the guard set or clear.
Every case compares the record list call (its argument and the record bytes it is given).
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b50530'
SINGLETON, PENDING, GUARD = '0x05ac7670', '0x05ac7678', '0x05ac76d0'
LAZY_SETUP, GUARD_ACQUIRE, GUARD_RELEASE, CONSTRUCT = '0x024ede50', '0x02fbe538', '0x02fbe558', '0x024b6d00'
APPEND = '0x02b50270'
FAKE_SLOT_00 = '0x00400020'
MASK64 = (1 << 64) - 1
SOURCE_VALUE = 0x1111

# The lazy set-up at 0x024ede50 writes 0x05aa5720 and its neighbours, never the singleton global,
# so the re-read after it stays null and the taken outcome cannot happen.
UNREACHABLE = {
    '0x02b5058c': ('taken', 'the call at 0x024ede50 never sets the singleton at 0x05ac7670, so the re-read stays null'),
}


def stub(address, argc, ret=None):
    """One scripted call, with its return value when the caller reads it."""
    entry = {'address': address, 'argc': argc}
    if ret is not None:
        entry['ret'] = hex(ret & MASK64)
    return entry


def case(cid, slot_bytes, memory, stubs, pending=0, guard=0):
    """One call: rdi is the owner (its list at 0x10), rsi the source slot, filled by the caller."""
    buffers = {'owner': {'size': 0x30, 'bytes': 'e5' * 0x30}, 'slot': {'size': 0x08, 'bytes': slot_bytes}}
    mem = list(memory) + [{'addr': PENDING, 'bytes': f'{pending:02x}'}, {'addr': GUARD, 'bytes': f'{guard:02x}'}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': 'buf:slot'},
            'buffers': buffers, 'memory': mem, 'imports': [], 'stubs': stubs + [stub(APPEND, 2)]}


def source_case(cid, value_stub_ret=SOURCE_VALUE):
    """The slot holds a source object: its slot 0 runs, and its value is recorded with the source."""
    memory = [{'addr': 'buf:slot', 'pointer': 'source'},
              {'addr': 'buf:source+0', 'pointer': 'source_vt'},
              {'addr': 'buf:source_vt+0', 'guest': FAKE_SLOT_00}]
    buffers_extra = {'source': {'size': 0x08}, 'source_vt': {'size': 0x08}}
    case_dict = case(cid, '00' * 8, memory, [stub(FAKE_SLOT_00, 1, ret=value_stub_ret)])
    case_dict['buffers'].update(buffers_extra)
    return case_dict


def singleton_built_case(cid):
    """The slot is null and the singleton global already holds a built singleton: no build runs."""
    memory = [{'addr': SINGLETON, 'pointer': 'singleton'}]
    case_dict = case(cid, '00' * 8, memory, [])
    case_dict['buffers']['singleton'] = {'size': 0x50, 'bytes': '00' * 0x50}
    return case_dict


def build_stubs(acquire_ret, guard_clear):
    """The calls of a first build: lazy set-up, the guard pair when the guard is clear, the constructor."""
    calls = [stub(LAZY_SETUP, 0)]
    if guard_clear:
        calls.append(stub(GUARD_ACQUIRE, 1, ret=acquire_ret))
        if acquire_ret != 0:
            calls.append(stub(GUARD_RELEASE, 1))
    calls.append(stub(CONSTRUCT, 1))
    return calls


def first_build_case(cid, acquire_ret, guard, pending):
    """The slot is null and the singleton is not built: the build runs, then the record takes its value."""
    memory = [{'addr': SINGLETON, 'bytes': '00' * 8}]
    return case(cid, '00' * 8, memory, build_stubs(acquire_ret, guard_clear=(guard == 0)),
                pending=pending, guard=guard)


CASES = [
    source_case('source_value_recorded'),
    source_case('source_value_zero', value_stub_ret=0),
    source_case('source_value_high_bits', value_stub_ret=0xdeadbeef00000001),
    singleton_built_case('null_source_built_singleton'),
    first_build_case('null_source_first_build_pending_guard_clear_acquire_fails', 0, 0, 1),
    first_build_case('null_source_first_build_guard_clear_acquire_succeeds', 1, 0, 0),
    first_build_case('null_source_first_build_guard_set', 0, 1, 0),
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
