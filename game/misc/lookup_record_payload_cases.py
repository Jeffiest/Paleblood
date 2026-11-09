#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic record lookups for misc_lookup_record_payload (0x0040be60).

The table's find slot at 0x20 is a stub that returns a harness record or null, and the release stub
records the record it receives. Covers a missing record (no release), tag bits alone, aligned and
unaligned words, the top bit, and words that wrap when the payload offset is added.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040be60'
FIND_FN = '0x00400140'
RELEASE_FN = '0x00400160'
LOOKUP_ID = 0x15
RECORD_BYTES = 0x18
WORD_OFFSET = 0x10
TABLE_FIND_OFFSET = 0x20
SENTINEL = 0xa5
WORDS = [
    ('word_zero', 0x0),
    ('tag_bits_only', 0x3),
    ('aligned_word', 0x1000),
    ('unaligned_word', 0x1007),
    ('tag_bits_with_high_word', 0x100000003),
    ('top_bit_set', 0x8000000000000000),
    ('all_bits_set', 0xffffffffffffffff),
    ('wrapping_word', 0xfffffffffffffffb),
]


def case(cid, word):
    """One lookup that finds a record whose tagged word is word."""
    record = bytearray([SENTINEL]) * RECORD_BYTES
    record[WORD_OFFSET:WORD_OFFSET + 8] = struct.pack('<Q', word)
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': 'buf:table'},
        'buffers': {'table': {'size': 8, 'bytes': '00' * 8},
                    'vtable': {'size': 0x28, 'bytes': '00' * 0x28},
                    'record': {'size': RECORD_BYTES, 'bytes': bytes(record).hex()}},
        'memory': [
            {'addr': 'buf:table', 'pointer': 'vtable'},
            {'addr': f'buf:vtable+{TABLE_FIND_OFFSET}', 'guest': FIND_FN},
        ],
        'imports': [],
        'stubs': [
            {'address': FIND_FN, 'argc': 2, 'argi': [0, 1], 'ret': 'buf:record'},
            {'address': RELEASE_FN, 'argc': 1, 'argi': [0]},
        ],
    }


def missing_case():
    """No record has the id: the lookup gives zero and nothing is released."""
    fixture = case('missing_record', 0)
    fixture['buffers'].pop('record')
    fixture['stubs'] = [{'address': FIND_FN, 'argc': 2, 'argi': [0, 1], 'ret': '0x0'}]
    fixture['id'] = 'missing_record'
    return fixture


CASES = [missing_case()] + [case(cid, word) for cid, word in WORDS]


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
