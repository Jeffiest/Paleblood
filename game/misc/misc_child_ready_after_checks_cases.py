#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owners, globals and child answers for bb_misc_child_ready_after_checks (0x01e57940).

usage: misc_child_ready_after_checks_cases.py OUT_DIR

The owner flag bit 0x4 answers true at once. Otherwise a null registry global is reported (the
report returns), a set bypass latch answers true, and the child's ready query at vtable slot
+0x1b8 decides. A true ready is followed by the registry check again and the final latch's value.
"""
import json
import os
import sys

ADDRESS = '0x01e57940'
READY = '0x004000a0'
REPORT = '0x024b55b0'
FILE_NAME = '0x04d3b369'
MESSAGE = '0x04d3b3bd'
NAME = '0x04d35c4a'
REGISTRY = '0x0593e880'
FINAL = '0x0593e888'
BYPASS = '0x0593e890'
FLAG_OFFSET = 0x200
POINTER_BYTES = 8


def case(cid, flags=0x00, registry=True, bypass=0, child_ready=None, final=0):
    """One call: the flag, the registry and latches, and the child's answer decide the result."""
    buffers = {
        'owner': {'size': 0x208, 'bytes': '00' * FLAG_OFFSET + f'{flags:02x}'},
        'child': {'size': 8},
        'vt': {'size': 0x1c0},
        'registry': {'size': 0x10},
    }
    memory = [{'addr': 'buf:owner+8', 'pointer': 'child'},
              {'addr': 'buf:child', 'pointer': 'vt'},
              {'addr': 'buf:vt+440', 'guest': READY},
              {'addr': REGISTRY, 'bytes': ('00' * POINTER_BYTES) if not registry else ''},
              {'addr': BYPASS, 'bytes': f'{bypass:02x}'},
              {'addr': FINAL, 'bytes': f'{final:02x}'}]
    if registry:
        memory[3] = {'addr': REGISTRY, 'pointer': 'registry'}
    stubs = []
    fatal_count = 0
    if not flags & 0x4:
        if not registry:
            fatal_count += 1
        if not bypass:
            if child_ready is not None:
                stubs.append({'address': READY, 'argc': 1, 'ret': hex(child_ready)})
                if child_ready:
                    if not registry:
                        fatal_count += 1
    for _ in range(fatal_count):
        stubs.insert(0, {'address': REPORT, 'argc': 4})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('bypass_flag_answers_true_without_checks', flags=0x04, registry=False),
    case('bypass_flag_with_other_bits', flags=0xff, registry=False, child_ready=0),
    case('bypass_bit_clear_with_others_set', flags=0xfb, registry=True, child_ready=0),
    case('registry_set_latch_answers_true', bypass=1),
    case('registry_missing_latch_set_reports_then_true', registry=False, bypass=1),
    case('child_not_ready_answers_false', child_ready=0),
    case('child_ready_final_latch_set', child_ready=1, final=1),
    case('child_ready_final_latch_clear', child_ready=1, final=0),
    case('child_ready_registry_missing_reports_twice', registry=False, child_ready=1, final=1),
    case('child_ready_registry_missing_final_clear', registry=False, child_ready=1, final=0),
    case('child_answer_low_byte_nonzero', child_ready=0x80, final=0x02),
    case('child_answer_nonzero_bypass_clear', child_ready=0x100),
    case('latch_other_bits_still_answers_true', bypass=0x02, child_ready=0),
    case('final_latch_upper_bits_tested', child_ready=1, final=0x10),
]


def main():
    """Write one JSON case per scenario into the output directory."""
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
