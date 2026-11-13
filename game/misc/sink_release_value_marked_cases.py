#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_sink_release_value_marked (0x00419940), for tools/verify.py run.

usage: sink_release_value_marked_cases.py OUT_DIR

A sink with no target only marks its holder: the byte at +0x50 of the holder is set. With a target, the holder's
second lock is taken (0x02fbe598) and its value at +0x20 goes to the check (0x0042e620); the lock is released
(0x02fbe5a8), the value's slot 0xd8 takes the descriptor, the target's slot 0x30 is called, the value is released
(0x0042e5d0), and the holder is marked. A value that is null or rejected leaves a null value for the take call,
which faults in the original, so only the accepted value is scripted.
"""
import json
import os
import struct
import sys

ADDRESS = '0x00419940'
LOCK, UNLOCK = '0x02fbe598', '0x02fbe5a8'
CHECK = '0x0042e620'
RELEASE = '0x0042e5d0'
VALUE_TAKE = '0x00400d00'
TARGET_DONE = '0x00400b00'
SINK_SIZE, HOLDER_SIZE = 0x60, 0xc0
MASK64 = (1 << 64) - 1


def u64(v):
    return struct.pack('<Q', v & MASK64).hex()


def holder_buffer():
    return {'size': HOLDER_SIZE, 'bytes': 'c3' * HOLDER_SIZE}


def case_no_target():
    return {'schema': 1, 'address': ADDRESS, 'id': 'no_target_marks_holder', 'returns': 'void',
            'args': {'rdi': 'buf:sink'},
            'buffers': {'sink': {'size': SINK_SIZE, 'bytes': 'a1' * SINK_SIZE},
                        'holder': holder_buffer(), 'owner': {'size': 0x8, 'bytes': 'b2' * 8}},
            'memory': [{'addr': 'buf:sink+48', 'bytes': u64(0)},
                       {'addr': 'buf:sink+56', 'pointer': 'holder'},
                       {'addr': 'buf:sink+88', 'pointer': 'owner'},
                       {'addr': 'buf:holder+80', 'bytes': '00'}],
            'stubs': [], 'imports': []}


def case_accepted_value():
    return {'schema': 1, 'address': ADDRESS, 'id': 'accepted_value_taken_and_released', 'returns': 'void',
            'args': {'rdi': 'buf:sink'},
            'buffers': {'sink': {'size': SINK_SIZE, 'bytes': 'a1' * SINK_SIZE},
                        'holder': holder_buffer(), 'owner': {'size': 0x8, 'bytes': 'b2' * 8},
                        'target': {'size': 0x10, 'bytes': 'e3' * 0x10},
                        'target_vt': {'size': 0x38, 'bytes': 'f4' * 0x38},
                        'value': {'size': 0x10, 'bytes': 'c5' * 0x10},
                        'value_vt': {'size': 0xe0, 'bytes': 'd6' * 0xe0}},
            'memory': [{'addr': 'buf:sink+48', 'pointer': 'target'},
                       {'addr': 'buf:sink+56', 'pointer': 'holder'},
                       {'addr': 'buf:sink+88', 'pointer': 'owner'},
                       {'addr': 'buf:holder+32', 'pointer': 'value'},
                       {'addr': 'buf:holder+80', 'bytes': '00'},
                       {'addr': 'buf:target', 'pointer': 'target_vt'},
                       {'addr': 'buf:target_vt+48', 'guest': TARGET_DONE},
                       {'addr': 'buf:value', 'pointer': 'value_vt'},
                       {'addr': 'buf:value_vt+216', 'guest': VALUE_TAKE}],
            'stubs': [{'address': LOCK, 'argc': 1, 'argi': [0]},
                      {'address': CHECK, 'argc': 1, 'argi': [0], 'ret': 0x1},
                      {'address': UNLOCK, 'argc': 1, 'argi': [0], 'ret': 0},
                      {'address': VALUE_TAKE, 'argc': 3, 'argi': [0, 2]},
                      {'address': TARGET_DONE, 'argc': 1, 'argi': [0]},
                      {'address': RELEASE, 'argc': 1, 'argi': [0]}],
            'imports': []}


UNREACHABLE = {
    '0x0041999d': ('taken', 'a null value pointer faults at the virtual take call, so the null test never falls through here'),
    '0x004199a9': ('taken', 'a rejected value leaves a null pointer that faults at the virtual take call'),
    '0x004199dd': ('taken', 'the take call dereferenced the value just before, so it is never null here'),
}

CASES = [case_no_target(), case_accepted_value()]


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
