#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic timed-record initializations for bb_misc_init_timed_record (0x0189e970).

usage: init_float_pair_record_cases.py OUT_DIR

The base init (0x01884e90) is a scripted stub that writes nothing. The record is 0x78 bytes, filled with a
pattern so every byte the function must set or leave alone is visible. Its return value is the packed timer
pair the original leaves in RAX. Covers a record filled with ones and one filled with zeros.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0189e970'
BASE_INIT = '0x01884e90'
RECORD_SIZE = 0x78


def case(cid, record_bytes):
    """One initialization of a record with the given starting bytes."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:record', 'rsi': '0x1111111111111111', 'rdx': '0x2222222222222222',
                     'rcx': '0x3333333333333333'},
            'buffers': {'record': {'size': RECORD_SIZE, 'bytes': record_bytes}},
            'memory': [],
            'stubs': [{'address': BASE_INIT, 'argc': 4, 'argi': [0, 1, 2, 3]}],
            'imports': []}


CASES = [
    case('record_filled_with_ones', record_bytes='ff' * RECORD_SIZE),
    case('record_filled_with_zeros', record_bytes='00' * RECORD_SIZE),
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
