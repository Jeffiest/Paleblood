#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic holders and requests for misc_forward_tagged_request (0x01888650).

usage: forward_tagged_request_cases.py OUT_DIR

The request's tag is its low 32 bits (must equal 2); the payload is the 64-bit word at 0x08. The holder's
32-bit count at 0x08 is forwarded. A request with another tag returns without a call. The library routine
receives the payload, the table address and the count, and its result is returned.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01888650'
ROUTINE = '0x02b62d00'
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, tag=2, payload=0x1122334455667788, count=5, result=0x1234, tag_word=None):
    """One call: the request carries tag in its low word; the routine's stub returns result. A tag other
    than 2 makes no call and leaves the return value to the caller."""
    tag_value = tag if tag_word is None else tag_word
    request = word(tag_value) + word(payload)
    holder = '00' * 8 + struct.pack('<I', count & 0xffffffff).hex() + '00' * 4
    forwarded = (tag_value & 0xffffffff) == 2
    stubs = []
    if forwarded:
        stubs.append({'address': ROUTINE, 'argc': 3, 'ret': hex(result & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64' if forwarded else 'void',
            'args': {'rdi': 'buf:holder', 'rsi': 'buf:request'},
            'buffers': {'holder': {'size': 0x10, 'bytes': holder},
                        'request': {'size': 0x10, 'bytes': request}},
            'memory': [], 'imports': [], 'stubs': stubs}


CASES = [
    case('tag_matches_ordinary'),
    case('tag_matches_count_zero', count=0),
    case('tag_matches_count_all_ones', count=0xffffffff),
    case('tag_matches_payload_zero', payload=0),
    case('tag_matches_payload_all_ones', payload=(1 << 64) - 1),
    case('tag_matches_result_zero', result=0),
    case('tag_matches_result_high_bit', result=1 << 63),
    case('tag_zero_no_call', tag=0),
    case('tag_one_no_call', tag=1),
    case('tag_three_no_call', tag=3),
    case('tag_upper_word_ignored', tag=2, tag_word=(1 << 32) | 2),
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
