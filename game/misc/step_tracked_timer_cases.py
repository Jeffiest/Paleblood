#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_step_tracked_timer (0x0225c890), for tools/verify.py run.

usage: step_tracked_timer_cases.py OUT_DIR

The step gate (global 0x0593b120) must be enabled and not suspended, frozen or locked, or nothing
happens. Otherwise the remaining time drops by the step's delta; when the timer was armed or has run
out, a timer registered on a track (index other than minus one) is set on the track manager
(0x022a06d0) with a value taken from the gate's kind word, and the timer is reloaded from the track
record's frame count, or from the fallback float when the track has no record. The armed flag clears.

A missing gate or manager is reported through the engine's singleton check (0x024b55b0), which
returns; the function then reads through the null pointer, so those outcomes are declared unreachable.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0225c890'
GATE_GLOBAL = '0x0593b120'
MANAGER_GLOBAL = '0x05940288'
SET_TRACK = '0x022a06d0'
FATAL = '0x024b55b0'
GATE_SIZE = 0xa90
TIMER_SIZE = 0xe0
TRACK_SIZE = 0x928
TIMING_SIZE = 0x10
MANAGER_SIZE = 0x20
KIND_WITH_VALUE = 0x1d000000
KIND_OTHER = 0x1c000000

UNREACHABLE = {
    '0x0225c8c1': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x0225c8e8'),
    '0x0225c959': ('fallthrough', 'the gate was read non-null at 0x0225c8e8, so this second null test cannot fail'),
    '0x0225c996': ('fallthrough', 'the gate is non-null here (read at 0x0225c8e8), so this kind test cannot take the fallthrough'),
    '0x0225c9df': ('fallthrough', 'fatal error 0x024b55b0 then a call with null and a load through null at 0x0225ca48'),
    '0x0225ca22': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x0225ca48'),
}


def f32(value):
    return struct.pack('<f', value).hex()


def u32(value):
    return (value & 0xffffffff).to_bytes(4, 'little').hex()


def u64(value):
    return (value & ((1 << 64) - 1)).to_bytes(8, 'little').hex()


def case(cid, enabled=1, suspended=0, frozen=0, locked=0, armed=0, index=-1, remaining=1.0, delta=0.25,
         kind_word=0, kind_value=0x8877665544332211, frames=40, track_null=False):
    """One step: the gate flags and kind, the timer's armed flag, track index and remaining time, and the track's frames."""
    gate = {'size': GATE_SIZE}
    timer = {'size': TIMER_SIZE}
    timing = {'size': TIMING_SIZE}
    manager = {'size': MANAGER_SIZE}
    track = {'size': TRACK_SIZE}
    memory = [
        {'addr': GATE_GLOBAL, 'pointer': 'gate'},
        {'addr': MANAGER_GLOBAL, 'pointer': 'manager'},
        {'addr': f'buf:gate+{0x08}', 'bytes': f'{enabled:02x}'},
        {'addr': f'buf:gate+{0x9f6}', 'bytes': f'{suspended:02x}'},
        {'addr': f'buf:gate+{0x9f8}', 'bytes': f'{frozen:02x}'},
        {'addr': f'buf:gate+{0xa50}', 'bytes': f'{locked:02x}'},
        {'addr': f'buf:gate+{0xa78}', 'bytes': u32(kind_word)},
        {'addr': f'buf:gate+{0xa88}', 'bytes': u64(kind_value)},
        {'addr': f'buf:timer+{0xc8}', 'bytes': f'{armed:02x}'},
        {'addr': f'buf:timer+{0xcc}', 'bytes': u32(index)},
        {'addr': f'buf:timer+{0xd8}', 'bytes': f32(remaining)},
        {'addr': f'buf:timing+{0x08}', 'bytes': f32(delta)},
        {'addr': f'buf:track+{0x920}', 'bytes': u32(frames)},
    ]
    if track_null:
        memory.append({'addr': f'buf:manager+{0x18}', 'bytes': '00' * 8})
    else:
        memory.append({'addr': f'buf:manager+{0x18}', 'pointer': 'track'})
    stubs = []
    if enabled and not (suspended or frozen or locked) and (armed or remaining - delta < 0.0) and index != -1:
        stubs.append({'address': SET_TRACK, 'argc': 3, 'argi': [0, 1, 2]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:timer', 'rsi': 'buf:timing'},
            'buffers': {'gate': gate, 'timer': timer, 'timing': timing, 'manager': manager, 'track': track},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('gate_disabled_nothing_done', enabled=0, remaining=1.0, delta=0.25),
    case('gate_suspended_nothing_done', suspended=1),
    case('gate_frozen_nothing_done', frozen=1),
    case('gate_locked_nothing_done', locked=1),
    case('unarmed_positive_only_subtracts', remaining=1.0, delta=0.25),
    case('exact_zero_is_not_negative', remaining=0.25, delta=0.25),
    case('armed_no_track_reloads', armed=1, index=-1, remaining=1.0, delta=0.25),
    case('expired_no_track_reloads', armed=0, index=-1, remaining=0.1, delta=0.5),
    case('expired_track_kind_value', armed=0, index=7, remaining=0.1, delta=0.5,
         kind_word=KIND_WITH_VALUE | 0x12, kind_value=0x0102030405060708),
    case('armed_track_other_kind_passes_zero', armed=1, index=7, remaining=1.0, delta=0.25,
         kind_word=KIND_OTHER | 0x12, kind_value=0x0102030405060708),
    case('track_kind_low_bits_ignored', armed=1, index=3, remaining=1.0, delta=0.25,
         kind_word=KIND_WITH_VALUE | 0x00ffffff, kind_value=0x1234),
    case('track_index_negative_other_than_none', armed=1, index=-5, remaining=1.0, delta=0.25),
    case('track_null_uses_fallback', armed=1, index=-1, remaining=1.0, delta=0.25, track_null=True),
    case('track_null_expired_uses_fallback', armed=0, index=2, remaining=0.1, delta=0.5, track_null=True),
    case('full_word_frame_count', armed=1, index=-1, remaining=1.0, delta=0.25, frames=0xffffffff),
    case('zero_frame_count', armed=1, index=-1, remaining=1.0, delta=0.25, frames=0),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
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
