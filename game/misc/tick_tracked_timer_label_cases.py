#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_tick_tracked_timer_label (0x0225faf0), for tools/verify.py run.

usage: tick_tracked_timer_label_cases.py OUT_DIR

The function clears the timer's reset word at 0x124, calls the timer's after-step hook (vtable slot 0x38),
counts the step, and when the hold count plus one exceeds six, builds a label in a temporary wide string on
the default allocator (0x05940670, created through 0x02fa2b10 on first use). The allocator's info slot must
report the valid flag, or the engine's fatal report (0x024b55b0) runs and the label is built anyway. The text
goes through 0x02a295d0, is reported through 0x01385b10, and is freed through the allocator when on the heap.
"""
import json
import os
import struct
import sys

ADDRESS = '0x0225faf0'
DEFAULT_ALLOCATOR_GLOBAL = '0x05940670'
ASSIGN = '0x02a295d0'
REPORT = '0x01385b10'
ACQUIRE = '0x02fa2b10'
FATAL = '0x024b55b0'
INFO_ENTRY = '0x00400020'     # allocator vtable slot 0x20 (info)
FREE_ENTRY = '0x004000a0'     # allocator vtable slot 0x70 (free)
AFTER_ENTRY = '0x00400300'    # timer vtable slot 0x38 (after step)
TIMER_SIZE = 0x130
RESET = 0x124
HEAP_CAPACITY = 0x10

UNREACHABLE = {}


def u32(value):
    return (value & 0xffffffff).to_bytes(4, 'little').hex()


def u64(value):
    return (value & ((1 << 64) - 1)).to_bytes(8, 'little').hex()


def case(cid, hold=0, step=0, reset=0xffffffff, default_allocator=True, info_flags=0x20, heap=False, capacity=7):
    """One tick: the hold and step counts, the reset word before the call, and the label-path options."""
    memory = [
        {'addr': 'buf:timer', 'pointer': 'timer_vt'},
        {'addr': f'buf:timer+{0x50}', 'bytes': u32(hold)},
        {'addr': f'buf:timer+{0x54}', 'bytes': u32(step)},
        {'addr': f'buf:timer+{RESET}', 'bytes': u32(reset)},
        {'addr': 'buf:timer_vt+56', 'guest': AFTER_ENTRY},
        {'addr': 'buf:allocator', 'pointer': 'alloc_vt'},
        {'addr': 'buf:alloc_vt+32', 'guest': INFO_ENTRY},
        {'addr': 'buf:alloc_vt+112', 'guest': FREE_ENTRY},
    ]
    if default_allocator:
        memory.append({'addr': DEFAULT_ALLOCATOR_GLOBAL, 'pointer': 'allocator'})
    else:
        memory.append({'addr': DEFAULT_ALLOCATOR_GLOBAL, 'bytes': '00' * 8})

    stubs = [{'address': AFTER_ENTRY, 'argc': 1, 'argi': [0]}]
    if ((hold + 1) & 0xffffffff) > 6:
        if not default_allocator:
            stubs.append({'address': ACQUIRE, 'argc': 0, 'ret': 'buf:allocator'})
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
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:timer'},
            'buffers': {'timer': {'size': TIMER_SIZE}, 'timer_vt': {'size': 0x40},
                        'allocator': {'size': 0x10}, 'alloc_vt': {'size': 0x80}, 'heap_text': {'size': 0x40}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('hold_below_limit_only_after_step', hold=5),
    case('hold_at_limit_labels', hold=6),
    case('hold_negative_skips_label', hold=-1),
    case('hold_large_labels', hold=1000),
    case('reset_word_cleared_from_zero', hold=0, reset=0),
    case('step_count_wraps', step=0x7fffffff, hold=0),
    case('default_allocator_acquired', default_allocator=False, hold=6),
    case('info_invalid_reports_then_labels', info_flags=0x00, hold=6),
    case('info_all_flags_valid', info_flags=0xff, hold=6),
    case('label_on_heap_freed', heap=True, capacity=HEAP_CAPACITY, hold=6),
    case('label_capacity_eight_freed', heap=True, capacity=8, hold=6),
    case('label_capacity_seven_inline', heap=True, capacity=7, hold=6),
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
