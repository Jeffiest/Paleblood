#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic slot stores for misc_store_slot_word (0x026f7770), for tools/verify.py run.

usage: store_slot_word_cases.py OUT_DIR

The original moves the index (ESI, zero-extended) into RAX, stores the 32-bit value (EDX) at RDI + RAX*4 + 0x18,
and returns the index in RAX. Upper halves of RSI and RDX are not read, so the cases set garbage there. The buffer
is larger than the slot array needs, and filled with a marker, so a store past the intended slot shows up.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026f7770'
BUFFER_SIZE = 0x80
MARKER = 'a5' * BUFFER_SIZE
MASK64 = (1 << 64) - 1
UPPER_BITS_INDEX = 0x100000000   # added to the index: only its low 32 bits are the index
UPPER_BITS_VALUE = 0xffffffff00000000  # added to the value: only its low 32 bits are stored


def case(cid, index, value, upper_index=0, upper_value=0):
    """One store of value at index; the upper halves of RSI and RDX are set to garbage."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:record',
                     'rsi': hex((upper_index + index) & MASK64),
                     'rdx': hex((upper_value + value) & MASK64)},
            'buffers': {'record': {'size': BUFFER_SIZE, 'bytes': MARKER}},
            'memory': [],
            'imports': [],
            'stubs': []}


CASES = [
    case('index_zero_value_ordinary', 0, 0x12345678),
    case('index_one_value_all_ones', 1, 0xffffffff),
    case('index_five_value_high_bit', 5, 0x80000000),
    case('index_sixteen_value_zero', 0x10, 0),
    case('index_three_upper_bits_ignored', 3, 0x42, upper_index=UPPER_BITS_INDEX, upper_value=UPPER_BITS_VALUE),
]


def main():
    """Write deterministic synthetic stores to the requested directory."""
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
