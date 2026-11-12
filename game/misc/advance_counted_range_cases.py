#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_advance_counted_range (0x0225fbf0), for tools/verify.py run.

usage: advance_counted_range_cases.py OUT_DIR

An empty range (begin equal to end) returns its begin word. Otherwise the step gate (0x0593b120) must have
mode bit 0x02 set in its byte at 0xb14, or the plain route (0x0225fce0, route 0) runs and its result is returned.
With the bit set, the counter at 0x124 is compared (signed) with the track's threshold at 0x8b4 (five when the
track manager at 0x05940288 holds no track): below it the plain route runs and the counter goes up when its
result is nonzero; at or above it the reset route (route 1) runs and the counter clears when its result is
nonzero. A missing gate or manager is reported through the engine's singleton check and then read through
null, so those outcomes are declared unreachable.
"""
import json
import os
import sys

ADDRESS = '0x0225fbf0'
GATE_GLOBAL = '0x0593b120'
MANAGER_GLOBAL = '0x05940288'
ROUTE = '0x0225fce0'
GATE_SIZE = 0xb15
MANAGER_SIZE = 0x20
TRACK_SIZE = 0x928
RANGE_SIZE = 0x128
THRESHOLD = 0x8b4

UNREACHABLE = {
    '0x0225fc1b': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x0225fc41'),
    '0x0225fc57': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x0225fc7d'),
}


def u32(value):
    return (value & 0xffffffff).to_bytes(4, 'little').hex()


def u64(value):
    return (value & ((1 << 64) - 1)).to_bytes(8, 'little').hex()


def case(cid, begin=0x1000, end=0x2000, mode=0x02, counter=0, track=True, threshold=5, result=0,
         regs=None):
    """One advance. The route's stub returns result; regs are the caller's rdx, rcx, r8 and r9 values."""
    if regs is None:
        regs = {'rdx': '0x2222222222222222', 'rcx': '0x3333333333333333',
                'r8': '0x4444444444444444', 'r9': '0x5555555555555555'}
    args = {'rdi': 'buf:range'}
    args.update(regs)
    memory = [
        {'addr': GATE_GLOBAL, 'pointer': 'gate'},
        {'addr': f'buf:gate+{0xb14}', 'bytes': f'{mode:02x}'},
        {'addr': MANAGER_GLOBAL, 'pointer': 'manager'},
        {'addr': f'buf:range+{0xd0}', 'bytes': u64(begin)},
        {'addr': f'buf:range+{0xd8}', 'bytes': u64(end)},
        {'addr': f'buf:range+{0x124}', 'bytes': u32(counter)},
    ]
    if track:
        memory.append({'addr': f'buf:manager+{0x18}', 'pointer': 'track'})
        memory.append({'addr': f'buf:track+{THRESHOLD}', 'bytes': u32(threshold)})
    else:
        memory.append({'addr': f'buf:manager+{0x18}', 'bytes': '00' * 8})
    stubs = []
    if begin != end:
        stubs.append({'address': ROUTE, 'argc': 6, 'argi': [0, 1, 2, 3, 4, 5], 'ret': hex(result)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': args,
            'buffers': {'range': {'size': RANGE_SIZE}, 'gate': {'size': GATE_SIZE},
                        'manager': {'size': MANAGER_SIZE}, 'track': {'size': TRACK_SIZE}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('empty_range_returns_begin', begin=0x1234, end=0x1234, result=0),
    case('gate_mode_clear_plain_route', mode=0x00, result=0x77),
    case('below_threshold_nonzero_counts', counter=2, result=1),
    case('below_threshold_zero_keeps_counter', counter=2, result=0),
    case('at_threshold_nonzero_resets', counter=5, result=7),
    case('at_threshold_zero_keeps_counter', counter=5, result=0),
    case('track_missing_default_threshold', track=False, counter=4, result=1),
    case('track_missing_counter_at_default_resets', track=False, counter=5, result=1),
    case('negative_counter_is_below', counter=0xffffffff, result=1),
    case('high_threshold_is_negative_signed', counter=1, threshold=0x80000000, result=1),
    case('registers_pass_through_plain', mode=0x00, result=0x0102,
         regs={'rdx': '0xdeadbeef00000001', 'rcx': '0x0', 'r8': '0x7f7f7f7f7f7f7f7f',
               'r9': '0x0123456789abcdef'}),
    case('counter_max_is_reset', counter=0x7fffffff, result=1),
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
