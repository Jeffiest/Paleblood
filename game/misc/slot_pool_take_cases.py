#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot pools for the claim of a free slot (bb_misc_slot_pool_take, 0x00b68940).

usage: slot_pool_take_cases.py OUT_DIR

Pools of 64-bit values with used flags, a spin count and scripted try-lock, blocking lock and
unlock results. Covers the spin loop with each outcome, the blocking lock, a claimed slot skipped
over, every slot claimed, no slots, a negative slot count, and results whose upper bits are set
(the calls are tested through their 32-bit result only).
"""
import json
import os
import struct
import sys

ADDRESS = '0x00b68940'
TRY_LOCK = '0x02fbe7e8'
LOCK = '0x02fbe598'
UNLOCK = '0x02fbe5a8'
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1
VALUES = [0x1032547698badcfe, 0x1122334455667788, 0xfedcba9876543210, 0x0123456789abcdef]


def qword(value):
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, slot_count=3, used=(0, 0, 0), spin=0, tries=(), blocking=0, unlock=0,
         values=VALUES, try_high=0, unlock_high=0):
    """One call: the used flags and values are buffers; each lock call returns its scripted result."""
    if len(tries) != spin and not (spin and any(result == 0 for result in tries)):
        raise ValueError('one try-lock result is scripted per attempt made')
    stubs = []
    # One try-lock per attempt until one succeeds (result 0); a blocking lock follows only when none did.
    for result in tries:
        stubs.append({'address': TRY_LOCK, 'argc': 1, 'ret': hex((result | try_high) & MASK64)})
        if result == 0:
            break
    if not any(result == 0 for result in tries):
        stubs.append({'address': LOCK, 'argc': 1, 'ret': hex(blocking & MASK64)})
    stubs.append({'address': UNLOCK, 'argc': 1, 'ret': hex((unlock | unlock_high) & MASK64)})
    slots = max(slot_count, 0)
    value_bytes = b''.join(struct.pack('<Q', v & MASK64) for v in values[:max(slots, 1)])
    used_bytes = bytes(used[:max(slots, 1)]) if used else bytes(1)
    buffers = {
        'pool': {'size': 0x80, 'bytes': '00' * 0x80},
        'values': {'size': len(value_bytes), 'bytes': value_bytes.hex()},
        'used': {'size': len(used_bytes), 'bytes': used_bytes.hex()},
    }
    memory = [
        {'addr': 'buf:pool+0x50', 'pointer': 'values'},
        {'addr': 'buf:pool+0x60', 'pointer': 'used'},
        {'addr': 'buf:pool+0x58', 'bytes': struct.pack('<i', slot_count).hex()},
        {'addr': 'buf:pool+0x68', 'bytes': struct.pack('<i', slot_count).hex()},
        {'addr': 'buf:pool+0x78', 'bytes': struct.pack('<I', spin).hex()},
    ]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': 'buf:pool'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('first_slot_free_blocking_lock'),
    case('second_slot_free', used=(1, 0, 0)),
    case('skips_claimed_slots', used=(1, 1, 0)),
    case('last_slot_free', used=(1, 1, 0), slot_count=3),
    case('all_slots_claimed', used=(1, 1, 1)),
    case('no_slots', slot_count=0, used=()),
    case('negative_slot_count', slot_count=-1, used=()),
    case('spin_first_try_takes_lock', spin=3, tries=(0,)),
    case('spin_last_try_takes_lock', spin=2, tries=(1, 0)),
    case('spin_all_fail_then_blocking', spin=2, tries=(1, 1)),
    case('spin_one_attempt_fails_then_blocking', spin=1, tries=(1,), used=(1, 0, 0)),
    case('spin_no_slot_free', spin=2, tries=(1, 0), used=(1, 1, 1)),
    case('try_upper_bits_ignored', spin=1, tries=(0,), try_high=1 << 32),
    case('try_failure_upper_bits_still_fail', spin=1, tries=(1,), try_high=0x100000000 | 1),
    case('unlock_upper_bits_ignored', unlock_high=1 << 40),
    case('blocking_upper_bits_ignored', blocking=1 << 40),
    case('values_all_bits_returned', values=[MASK64, 0, 0x8000000000000000, 1]),
    case('zero_value_returned', values=[0, 1, 2, 3]),
    case('used_flag_high_byte_claimed', used=(0x80, 0, 0)),
]


# A failed lock or unlock reports the error and stops at an int3, a fault that verify cannot compare.
UNREACHABLE = {
    '0x00b6898e': ('taken', 'blocking lock failure: the original reports and stops at int3 (signal 5)'),
    '0x00b689c4': ('taken', 'unlock failure after a claim: the original reports and stops at int3 (signal 5)'),
    '0x00b689e0': ('taken', 'unlock failure with every slot claimed: the original stops at int3 (signal 5)'),
}


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
