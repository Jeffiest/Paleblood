#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic request submits for misc_submit_request (0x0040d180).

The request's node holds a tagged word; the queue is embedded in the owner at 0x70. The queue add
(0x0045d5a0), the flag read (0x0040fa50) and the hand-on call (0x0045dfc0) are stubs. Covers a flag
word whose low byte is nonzero (with and without upper bits), a flag word whose low byte is zero
(the hand-on call), and tagged words with clear, set and all tag bits.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040d180'
ADD_FN = '0x0045d5a0'
FLAG_FN = '0x0040fa50'
HANDON_FN = '0x0045dfc0'
OWNER_BYTES = 0x78
REQUEST_BYTES = 0x48
NODE_BYTES = 0x50
MASK64 = (1 << 64) - 1


def case(cid, tagged=0x1000, flags=0x1, handed=0x77):
    """One submit: the add stub, the flag stub, and the hand-on stub when the flag's low byte is zero."""
    stubs = [
        {'address': ADD_FN, 'argc': 2, 'argi': [0, 1]},
        {'address': FLAG_FN, 'argc': 1, 'argi': [0], 'ret': hex(flags & MASK64)},
    ]
    if (flags & 0xff) == 0:
        stubs.append({'address': HANDON_FN, 'argc': 1, 'argi': [0], 'ret': hex(handed & MASK64)})
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:owner', 'rsi': 'buf:request'},
        'buffers': {
            'owner': {'size': OWNER_BYTES, 'bytes': 'a5' * OWNER_BYTES},
            'request': {'size': REQUEST_BYTES, 'bytes': 'b6' * REQUEST_BYTES},
            'node': {'size': NODE_BYTES, 'bytes': 'c7' * NODE_BYTES},
        },
        'memory': [
            {'addr': 'buf:request+0x40', 'pointer': 'node'},
            {'addr': 'buf:node+0x48', 'bytes': struct.pack('<Q', tagged & MASK64).hex()},
        ],
        'imports': [],
        'stubs': stubs,
    }


CASES = [
    case('flag_low_byte_set', tagged=0x1000, flags=0x1),
    case('flag_upper_bits_low_byte_clear', tagged=0x1003, flags=0x100, handed=0x77),
    case('flag_low_byte_set_with_upper_bits', tagged=0x1000, flags=0x1ff),
    case('flag_zero_hands_on', tagged=0x2000, flags=0, handed=MASK64),
    case('tagged_all_bits_set', tagged=MASK64, flags=0x2),
    case('tagged_zero', tagged=0, flags=0x2),
    case('tagged_tag_bits_only_hands_on', tagged=0x3, flags=0x0, handed=0x1234),
    case('tagged_high_bit_hands_on', tagged=1 << 63, flags=0x100, handed=0x55),
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
