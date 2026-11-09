#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic tracked objects for misc_finish_tracked_update (0x00406be0): the pending bit clear or
set, the target flag, the keep argument's low byte, empty and filled pending slots, a sub-result of
-1, references that drop to zero, a null held object, and a held object that the target-clearing
helper releases in place.

usage: finish_tracked_update_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00406be0'
SELF_SIZE = 0x70
TARGET_SIZE = 0x40
MASK64 = (1 << 64) - 1
RESOLVE = '0x00400300'
TARGET_FLAG_CLEAR = '0x004de620'
TARGET_FLAG_SET = '0x004de720'
TARGET_PAIR = '0x004de6a0'
DEFER = '0x004deb80'
SUB_CHECK = '0x004f3e80'
SUB_UPDATE = '0x004f4410'
RELEASE = '0x0045a510'
DESTROY = '0x00482790'
PENDING = '0x0042b850'
DISPATCH = '0x00400600'


def count(value):
    """An 8-byte little-endian reference count."""
    return struct.pack('<q', value).hex()


def stub(address, argc, ret=None, writes=None):
    """One scripted call, with an optional return value and writes."""
    entry = {'address': address, 'argc': argc}
    if ret is not None:
        entry['ret'] = ret
    if writes is not None:
        entry['writes'] = writes
    return entry


def zero_pointer(offset):
    """A pending slot that stays empty."""
    return {'arg': 0, 'offset': offset, 'bytes': '00' * 8}


def case(cid, flags=0x80, keep=1, held_null=False, held_count=1, first_null=False, first_count=2,
         target_flag=0, trick=False, third_null=False, second_null=False, sub_result=5):
    """One call on a tracked object. The helper stubs follow the order of the calls the update
    makes: the reference taken on the held object, the target dispatch, the pending helper, the
    subobject refresh when keep's low byte and the third slot are set, and the releases."""
    if trick:
        held_count = 0
    buffers = {
        'self': {'size': SELF_SIZE},
        'source': {'size': 0x18},
        'value': {'size': 0x10},
        'target': {'size': TARGET_SIZE, 'bytes': '00' * 0x30 + f'{target_flag:02x}' + '00' * 0x0f},
        'first': {'size': 0x10, 'bytes': '00' * 8 + count(first_count)},
        'held': {'size': 0x10, 'bytes': '00' * 8 + count(held_count)},
        'second': {'size': 0x10},
        'third': {'size': 0x100},
        'dvt': {'size': 0x80},
        'dispatcher': {'size': 0x8},
    }
    memory = [
        {'addr': 'buf:self+32', 'pointer': 'source'},
        {'addr': 'buf:self+96', 'pointer': 'target'},
        {'addr': 'buf:self+107', 'bytes': f'{flags:02x}'},
        {'addr': 'buf:source+16', 'pointer': 'value'},
        {'addr': 'buf:dvt+104', 'guest': DISPATCH},
        {'addr': 'buf:dispatcher', 'pointer': 'dvt'},
        {'addr': '0x057e7320', 'pointer': 'dispatcher'},
    ]
    stubs = []
    if flags & 0x80:
        if held_null:
            held_ret = 0
        elif trick:
            held_ret = 'buf:self+96'
        else:
            held_ret = 'buf:held'
        stubs.append(stub(RESOLVE, 1, ret=held_ret))
        if target_flag:
            stubs.append(stub(TARGET_FLAG_SET, 1))
        else:
            writes = [{'arg': 0, 'bytes': '00' * 8}] if trick else None
            stubs.append(stub(TARGET_FLAG_CLEAR, 1, writes=writes))
            stubs.append(stub(TARGET_PAIR, 2))
        if not trick:
            stubs.append(stub(DISPATCH, 2))
        writes = [
            {'arg': 0, 'offset': 0, 'pointer': 'first'} if not first_null else zero_pointer(0),
            {'arg': 0, 'offset': 8, 'pointer': 'second'} if not second_null else zero_pointer(8),
            {'arg': 0, 'offset': 16, 'pointer': 'third'} if not third_null else zero_pointer(16),
        ]
        stubs.append(stub(PENDING, 3, writes=writes))
        if keep & 0xff and not third_null:
            stubs.append(stub(SUB_CHECK, 2, ret=hex(sub_result & MASK64)))
            if sub_result != -1:
                stubs.append(stub(SUB_UPDATE, 3))
        stubs.append(stub(DEFER, 2, ret=0))
        if not third_null:
            stubs.append(stub(RELEASE, 1))
        if not second_null:
            stubs.append(stub(RELEASE, 1))
        if not first_null and first_count - 1 == 0:
            stubs.append(stub(DESTROY, 1))
        if not held_null and held_count == 0:
            stubs.append(stub(DESTROY, 1))
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:self', 'rsi': hex(keep & MASK64)},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('pending_clear_no_calls', flags=0x7f),
    case('pending_clear_zero_flags', flags=0x00, keep=0),
    case('pending_full_path'),
    case('pending_target_flag_set', target_flag=1),
    case('keep_low_byte_zero', keep=0x100),
    case('keep_high_bits_low_byte_one', keep=0xffffff01),
    case('third_null_skips_refresh', third_null=True),
    case('sub_result_minus_one', sub_result=-1),
    case('second_null', second_null=True),
    case('first_null', first_null=True, first_count=1),
    case('first_released_at_zero', first_count=1),
    case('held_null', held_null=True),
    case('held_released_at_zero', held_count=0),
    case('target_cleared_during_release', trick=True, target_flag=0),
    case('keep_zero_third_set', keep=0),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
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
