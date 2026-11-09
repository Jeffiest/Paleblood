#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic removals from a holder's value vector (address 0x026f04e0).

usage: remove_stored_value_if_present_cases.py OUT_DIR

The holder's begin and end pointers select the stored values in a buffer. The library byte move
(0x02fbe658) is a stub that receives the destination, the source and the byte count. Covers a match
at the first, middle and last slot, a repeated value (the first match is removed), a zero value, a
value that is absent (no move), and an empty vector (no move).
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x026f04e0'
MOVE_BYTES = '0x02fbe658'
HOLDER_BEGIN = 0x10
HOLDER_END = 0x18
HOLDER_SIZE = 0x20
STORE_SLOTS = 4
VALUE_BYTES = 8
MASK64 = (1 << 64) - 1


def case(cid, values, value):
    """One removal from a vector holding the given values. The move is scripted only when the value is
    stored, with the destination at the match, the source one slot later and the remaining bytes."""
    count = len(values)
    contents = b''.join(struct.pack('<Q', v & MASK64) for v in values)
    contents += b'\xcc' * (STORE_SLOTS * VALUE_BYTES - len(contents))
    end_offset = count * VALUE_BYTES
    stubs = []
    if value in values:
        stubs.append({'address': MOVE_BYTES, 'argc': 3, 'argi': [0, 1, 2], 'ret': 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder', 'rsi': hex(value & MASK64)},
            'buffers': {'holder': {'size': HOLDER_SIZE},
                        'store': {'size': STORE_SLOTS * VALUE_BYTES, 'bytes': contents.hex()}},
            'memory': [{'addr': 'buf:holder+%d' % HOLDER_BEGIN, 'pointer': 'store'},
                       {'addr': 'buf:holder+%d' % HOLDER_END, 'pointer': 'store+%d' % end_offset}],
            'stubs': stubs,
            'imports': []}


CASES = [
    case('match_first_slot', [5, 6, 7], 5),
    case('match_middle_slot', [5, 6, 7], 6),
    case('match_last_slot', [5, 6, 7], 7),
    case('repeated_removes_first', [4, 4, 9], 4),
    case('zero_value_stored', [0, 3], 0),
    case('absent_value_no_move', [1, 2, 3], 9),
    case('empty_vector_no_move', [], 0),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
