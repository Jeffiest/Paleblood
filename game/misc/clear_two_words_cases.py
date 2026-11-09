#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic records for the two-word clear at 0x0139b4e0, for tools/verify.py run.

usage: clear_two_words_cases.py OUT_DIR

The record is 16 bytes. Both words must become zero whatever they held before, and the
bytes of the record are compared after the call.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0139b4e0'


def case(cid, record_bytes):
    """One call on a 16-byte record with the given contents before the call."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:record'},
            'buffers': {'record': {'size': 16, 'bytes': record_bytes}},
            'imports': [], 'stubs': [], 'memory': []}


CASES = [
    case('words_ordinary', '1032547698badcfe1122334455667788'),
    case('words_already_zero', '00' * 16),
    case('words_all_ones', 'ff' * 16),
    case('words_high_bit_only', '00000000000000008000000000000000'),
]


def main():
    """Write deterministic fixtures to the requested directory."""
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
