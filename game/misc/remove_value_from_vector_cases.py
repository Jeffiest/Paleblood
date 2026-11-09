#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic removals from an owner's value vector (address 0x02b3a4a0).

usage: remove_value_from_vector_cases.py OUT_DIR

The vector's begin and end pointers select the stored values in a buffer. The library byte move
(0x02fbe658) is a stub that receives the destination, source and byte count. Covers a match at
the first, middle and last slot, a repeated value (the first match is removed), a zero value, an
empty vector, and a value that is absent, where the game still moves the bytes past the end.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02b3a4a0'
MOVE_BYTES = '0x02fbe658'
OWNER_BYTES = 0x168
STORE_SLOTS = 4
VALUE_BYTES = 8
MASK64 = (1 << 64) - 1


def case(cid, values, value):
    """One removal from a vector holding the given values."""
    count = len(values)
    contents = b''.join(struct.pack('<Q', v & MASK64) for v in values)
    contents += b'\xcc' * (STORE_SLOTS * VALUE_BYTES - len(contents))
    end_offset = hex(count * VALUE_BYTES)
    memory = [{'addr': 'buf:owner+0xe0', 'pointer': 'store'},
              {'addr': 'buf:owner+0xe8', 'pointer': f'store+{end_offset}'}]
    stubs = [{'address': MOVE_BYTES, 'argc': 3, 'argi': [0, 1, 2]}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': hex(value & MASK64)},
            'buffers': {'owner': {'size': OWNER_BYTES, 'bytes': '4d' * OWNER_BYTES},
                        'store': {'size': STORE_SLOTS * VALUE_BYTES, 'bytes': contents.hex()}},
            'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('match_first_of_three', [0x11, 0x22, 0x33], 0x11),
    case('match_middle_of_three', [0x11, 0x22, 0x33], 0x22),
    case('match_last_of_three', [0x11, 0x22, 0x33], 0x33),
    case('match_only_element', [0x44], 0x44),
    case('repeated_value_first_removed', [0x55, 0x66, 0x55], 0x55),
    case('zero_value_matches_zero_entry', [0x00, 0x77, 0x88], 0x00),
    case('value_absent_moves_past_end', [0x11, 0x22, 0x33], 0x99),
    case('empty_vector_moves_past_begin', [], 0x12),
    case('sign_bit_value_matches', [0x1, 1 << 63, 0x2], 1 << 63),
    case('all_bits_value_absent', [0x1, 0x2], MASK64),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
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
