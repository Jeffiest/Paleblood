#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic owner flags, registry and latch bytes for bb_misc_registry_latch_answer (0x01e583f0).

usage: misc_registry_latch_answer_cases.py OUT_DIR

The owner's flag bit 0x8 answers true at once. Otherwise a null registry global is reported by
name (the report returns), and the latch byte at 0x0593e891 answers whether it is nonzero.
"""
import json
import os
import sys

ADDRESS = '0x01e583f0'
REPORT = '0x024b55b0'
REGISTRY = '0x0593e880'
LATCH = '0x0593e891'
FLAG_OFFSET = 0x200


def case(cid, flags=0x00, registry=True, latch=0x00):
    """One call: the flag, then the registry report if it is missing, then the latch byte."""
    owner = bytearray(0x208)
    owner[FLAG_OFFSET] = flags
    buffers = {'owner': {'size': 0x208, 'bytes': owner.hex()},
               'registry': {'size': 0x10}}
    memory = [{'addr': LATCH, 'bytes': f'{latch:02x}'}]
    if registry:
        memory.append({'addr': REGISTRY, 'pointer': 'registry'})
    else:
        memory.append({'addr': REGISTRY, 'bytes': '00' * 8})
    stubs = []
    if not flags & 0x8 and not registry:
        stubs.append({'address': REPORT, 'argc': 4})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': stubs}


CASES = [
    case('flag_answers_true_registry_missing', flags=0x08, registry=False, latch=0x00),
    case('flag_answers_true_registry_present', flags=0x08, latch=0x00),
    case('other_flag_bits_registry_missing_latch_clear', flags=0xf7, registry=False, latch=0x00),
    case('registry_missing_latch_set_answers_true', registry=False, latch=0x01),
    case('registry_present_latch_clear_answers_false', latch=0x00),
    case('registry_present_latch_set_answers_true', latch=0x01),
    case('latch_other_bits_answers_true', latch=0x02),
    case('latch_high_bit_answers_true', latch=0x80),
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
