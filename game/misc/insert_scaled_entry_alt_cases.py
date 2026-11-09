#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_insert_scaled_entry_alt (0x0040c240), for tools/verify.py run.

usage: insert_scaled_entry_cases.py OUT_DIR

The owner holds its entry table at +0x10. The key is built from the source, a lookup (0x0278aa10)
says whether it is present, and an absent key takes a value built from the second argument, which
is inserted with the scale and flags. Each reference is an object whose count is at +0x8; a count
of one is released through the scratch service in the original's order. The lookup, the builders
and the insert are scripted; the scale is the float in xmm0 and the flags the low word of ecx.
Covers a missing table, a null source, found and absent keys, each count of one or more, the
release order, and high bits of the flags and scale that the original ignores or keeps.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040c240'
BUILD_KEY = '0x0045cd00'
LOOKUP = '0x0278aa10'
BUILD_VALUE = '0x0045cae0'
INSERT = '0x0278a040'
RELEASE = '0x00400060'
STACK_FAIL = '0x02fbe4f8'
SERVICE_GLOBAL = '0x057e7320'
GUARD_VALUE = 0x0123456789abcdef
MASK64 = (1 << 64) - 1
MASK32 = (1 << 32) - 1


def u32(value):
    """Four little-endian bytes."""
    return struct.pack('<I', value & MASK32).hex()


def u64(value):
    """Eight little-endian bytes."""
    return struct.pack('<Q', value & MASK64).hex()


def reference(count):
    """A counted object: its count is a 32-bit word at +0x8."""
    return '00' * 8 + u32(count) + '00' * 4


def case(cid, table=True, source=True, found=False, key_count=2, value_count=2, handle_count=2,
         flags=0x1, scale=1.0, xmm0=None, rcx_high=0):
    """One insert. The order of the scripted calls and releases follows the original's."""
    buffers = {
        'owner': {'size': 0x18},
        'table': {'size': 8},
        'source': {'size': 8, 'bytes': '5a' * 8},
        'value': {'size': 8, 'bytes': '6b' * 8},
        'key_obj': {'size': 0x10, 'bytes': reference(key_count)},
        'value_obj': {'size': 0x10, 'bytes': reference(value_count)},
        'handle_obj': {'size': 0x10, 'bytes': reference(handle_count)},
        'service': {'size': 8},
        'service_vt': {'size': 0x70},
        'guard': {'size': 8, 'bytes': u64(GUARD_VALUE)},
    }
    memory = [
        {'addr': SERVICE_GLOBAL, 'pointer': 'service'},
        {'addr': 'buf:service', 'pointer': 'service_vt'},
        {'addr': 'buf:service_vt+0x68', 'guest': RELEASE},
        {'addr': '0x057e3be0', 'pointer': 'guard'},
    ]
    if table:
        memory.append({'addr': 'buf:owner+0x10', 'pointer': 'table'})
    stubs = []
    if table and source:
        stubs.append({'address': BUILD_KEY, 'argc': 2, 'argi': [0, 1],
                      'writes': [{'arg': 0, 'pointer': 'key_obj', 'size': 8}]})
        stubs.append({'address': LOOKUP, 'argc': 2, 'argi': [0, 1], 'ret': '0x1' if found else '0x0'})
    if table and source and not found:
        stubs.append({'address': BUILD_KEY, 'argc': 2, 'argi': [0, 1],
                      'writes': [{'arg': 0, 'pointer': 'value_obj', 'size': 8}]})
        stubs.append({'address': BUILD_VALUE, 'argc': 2, 'argi': [0, 1],
                      'writes': [{'arg': 0, 'pointer': 'handle_obj', 'size': 8}]})
        stubs.append({'address': INSERT, 'argc': 3, 'argi': [0, 1, 2]})
    releases = []
    if not found and table and source and value_count == 1:
        releases.append('value')
    if not found and table and source and handle_count == 1:
        releases.append('handle')
    if table and source and key_count == 1:
        releases.append('key')
    for _ in releases:
        stubs.append({'address': RELEASE, 'argc': 2, 'argi': [0, 1], 'ret': 0})
    rcx = (rcx_high << 32) | (flags & MASK32)
    args = {'rdi': 'buf:owner', 'rsi': 'buf:source' if source else '0x0', 'rdx': 'buf:value',
            'rcx': hex(rcx & MASK64), 'xmm0': xmm0 if xmm0 is not None else '0000803f'}
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8', 'args': args,
        'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs,
    }


CASES = [
    case('table_null', table=False),
    case('source_null', source=False),
    case('found_key_last_reference', found=True, key_count=1),
    case('found_key_shared', found=True, key_count=2),
    case('absent_all_shared', key_count=2, value_count=2, handle_count=2),
    case('absent_all_last', key_count=1, value_count=1, handle_count=1),
    case('absent_value_last_only', key_count=2, value_count=1, handle_count=2),
    case('absent_handle_last_only', key_count=2, value_count=2, handle_count=1),
    case('absent_key_last_only', key_count=1, value_count=2, handle_count=2),
    case('absent_mixed_key_and_handle', key_count=1, value_count=2, handle_count=1),
    case('scale_nan_flags_all_ones', flags=0xffffffff, xmm0='0000c07f'),
    case('flags_upper_word_ignored', flags=0x5, rcx_high=0xabcdef01),
    case('scale_negative_zero', flags=0x0, xmm0='00000080'),
    case('scale_one_upper_xmm_lanes_ignored', flags=0x3, xmm0='0000803f' + '11' * 4),
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
