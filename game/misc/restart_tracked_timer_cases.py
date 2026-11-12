#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_restart_tracked_timer (0x0225c6c0), for tools/verify.py run.

usage: restart_tracked_timer_cases.py OUT_DIR

Without a track manager (global 0x05940288) nothing happens. Otherwise the step gate (0x0593b120) must
be enabled and not frozen, suspended or locked. Then the timer's remaining time is set from the track's
start count (or the fallback float when the track has no record), and the step count is incremented.
When the hold count plus one exceeds five, a label is built in a temporary wide string on the default
allocator (0x05940670, created on first use through 0x02fa2b10): the allocator's info slot must report
the valid flag, or the engine's fatal report (0x024b55b0) runs and the label is built anyway; the text is
assigned through 0x02a295d0, reported through 0x01385b10 and freed through the allocator when it is on
the heap. The timer's after-step hook (slot 0x38) runs last on every step that passes the gate.

A missing gate is reported through the singleton check and then read through null, so that outcome is
declared unreachable, as is the second manager null test, which the first one already guards.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0225c6c0'
GATE_GLOBAL = '0x0593b120'
MANAGER_GLOBAL = '0x05940288'
DEFAULT_ALLOCATOR_GLOBAL = '0x05940670'
ASSIGN = '0x02a295d0'
REPORT = '0x01385b10'
ACQUIRE = '0x02fa2b10'
FATAL = '0x024b55b0'
INFO_ENTRY = '0x00400020'     # allocator vtable slot 0x20 (info)
FREE_ENTRY = '0x004000a0'     # allocator vtable slot 0x70 (free)
AFTER_ENTRY = '0x00400300'    # timer vtable slot 0x38 (after step)
GATE_SIZE = 0xa90
TIMER_SIZE = 0xe0
TRACK_SIZE = 0x928
MANAGER_SIZE = 0x20
START_OFFSET = 0x924
HEAP_CAPACITY = 0x10

UNREACHABLE = {
    '0x0225c6ff': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x0225c725'),
    '0x0225c75c': ('fallthrough', 'the manager was read non-null at 0x0225c6ec, so this second null test cannot fail'),
}


def f32(value):
    return struct.pack('<f', value).hex()


def u32(value):
    return (value & 0xffffffff).to_bytes(4, 'little').hex()


def u64(value):
    return (value & ((1 << 64) - 1)).to_bytes(8, 'little').hex()


def case(cid, manager=True, enabled=1, frozen=0, suspended=0, locked=0, hold=0, step=0,
         track=True, start=40, default_allocator=True, info_flags=0x20, heap=False, capacity=7,
         remaining=1.5):
    """One restart. The label path is taken when hold + 1 > 5 (unsigned); its stubs follow the calls in order."""
    gate = {'size': GATE_SIZE}
    timer = {'size': TIMER_SIZE}
    manager_buf = {'size': MANAGER_SIZE}
    track_buf = {'size': TRACK_SIZE}
    allocator = {'size': 0x10}
    alloc_vt = {'size': 0x80}
    timer_vt = {'size': 0x40}
    heap_text = {'size': 0x40}
    memory = [
        {'addr': GATE_GLOBAL, 'pointer': 'gate'},
        {'addr': f'buf:gate+{0x08}', 'bytes': f'{enabled:02x}'},
        {'addr': f'buf:gate+{0x9f6}', 'bytes': f'{suspended:02x}'},
        {'addr': f'buf:gate+{0x9f8}', 'bytes': f'{frozen:02x}'},
        {'addr': f'buf:gate+{0xa50}', 'bytes': f'{locked:02x}'},
        {'addr': 'buf:timer', 'pointer': 'timer_vt'},
        {'addr': f'buf:timer+{0x50}', 'bytes': u32(hold)},
        {'addr': f'buf:timer+{0x54}', 'bytes': u32(step)},
        {'addr': f'buf:timer+{0xd8}', 'bytes': f32(remaining)},
        {'addr': 'buf:timer_vt+56', 'guest': AFTER_ENTRY},
        {'addr': 'buf:allocator', 'pointer': 'alloc_vt'},
        {'addr': 'buf:alloc_vt+32', 'guest': INFO_ENTRY},
        {'addr': 'buf:alloc_vt+112', 'guest': FREE_ENTRY},
    ]
    if manager:
        memory.append({'addr': MANAGER_GLOBAL, 'pointer': 'manager'})
        memory.append({'addr': f'buf:manager+{0x18}', 'pointer': 'track'} if track else
                      {'addr': f'buf:manager+{0x18}', 'bytes': '00' * 8})
        memory.append({'addr': f'buf:track+{START_OFFSET}', 'bytes': u32(start)})
    else:
        memory.append({'addr': MANAGER_GLOBAL, 'bytes': '00' * 8})
    if default_allocator:
        memory.append({'addr': DEFAULT_ALLOCATOR_GLOBAL, 'pointer': 'allocator'})
    else:
        memory.append({'addr': DEFAULT_ALLOCATOR_GLOBAL, 'bytes': '00' * 8})

    stubs = []
    gate_passes = manager and enabled and not (frozen or suspended or locked)
    if gate_passes:
        if not default_allocator:
            stubs.append({'address': ACQUIRE, 'argc': 0, 'ret': 'buf:allocator'})
        if ((hold + 1) & 0xffffffff) > 5:
            stubs.append({'address': INFO_ENTRY, 'argc': 3, 'argi': [0, 1, 2],
                          'writes': [{'arg': 0, 'offset': 0, 'bytes': f'{info_flags:02x}'}]})
            if (info_flags & 0x20) == 0:
                stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 1, 2]})
            writes = []
            if heap:
                writes = [{'arg': 0, 'offset': 0x20, 'bytes': u64(capacity)},
                          {'arg': 0, 'offset': 0x08, 'pointer': 'heap_text'}]
            stubs.append({'address': ASSIGN, 'argc': 2, 'argi': [0, 1], 'writes': writes})
            stubs.append({'address': REPORT, 'argc': 2, 'argi': [0, 1]})
            if heap and capacity >= 8:
                stubs.append({'address': FREE_ENTRY, 'argc': 2, 'argi': [0, 1]})
        stubs.append({'address': AFTER_ENTRY, 'argc': 1, 'argi': [0]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:timer'},
            'buffers': {'gate': gate, 'timer': timer, 'manager': manager_buf, 'track': track_buf,
                        'allocator': allocator, 'alloc_vt': alloc_vt, 'timer_vt': timer_vt,
                        'heap_text': heap_text},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_manager_nothing_done', manager=False),
    case('gate_disabled_nothing_done', enabled=0),
    case('gate_frozen_nothing_done', frozen=1),
    case('gate_suspended_nothing_done', suspended=1),
    case('gate_locked_nothing_done', locked=1),
    case('hold_below_limit_only_restarts', hold=4),
    case('hold_at_limit_labels', hold=5),
    case('hold_negative_skips_label', hold=-1),
    case('hold_large_labels', hold=1000),
    case('track_missing_uses_fallback', track=False, hold=0),
    case('track_start_frames_used', start=77, hold=0),
    case('track_start_full_word', start=0xffffffff, hold=0),
    case('step_count_wraps', step=0x7fffffff, hold=0),
    case('default_allocator_acquired', default_allocator=False, hold=5),
    case('info_invalid_reports_then_labels', info_flags=0x00, hold=5),
    case('info_valid_bit_clear_reports', info_flags=0x1f, hold=5),
    case('info_all_flags_valid', info_flags=0xff, hold=5),
    case('label_on_heap_freed', heap=True, capacity=HEAP_CAPACITY, hold=5),
    case('label_capacity_eight_freed', heap=True, capacity=8, hold=5),
    case('label_capacity_seven_inline', heap=True, capacity=7, hold=5),
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
