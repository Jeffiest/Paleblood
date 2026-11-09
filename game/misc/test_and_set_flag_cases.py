#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic flagged records for misc_test_and_set_flag (0x01888520).

usage: test_and_set_flag_cases.py OUT_DIR

The record is 0x10 bytes; only the flag byte at 0x0c is tested and written. Covers a clear flag (the
function sets it and reports clear), a set flag of 1, a set flag with the high bit, a set flag of 0xff, and
a record whose other bytes are all ones (they must stay as they are).
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x01888520'
SIZE = 0x10


def case(cid, flag_byte, others='aa'):
    """One call on a record with the flag byte at 0x0c and the other bytes filled with others."""
    body = others * 0x0c + f'{flag_byte:02x}' + others * 3
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8', 'args': {'rdi': 'buf:record'},
            'buffers': {'record': {'size': SIZE, 'bytes': body}}, 'memory': [], 'imports': [],
            'stubs': []}


CASES = [
    case('flag_clear', 0x00),
    case('flag_one', 0x01),
    case('flag_high_bit', 0x80),
    case('flag_all_ones', 0xff),
    case('flag_clear_other_bytes_ones', 0x00, others='ff'),
    case('flag_set_other_bytes_ones', 0x02, others='ff'),
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
