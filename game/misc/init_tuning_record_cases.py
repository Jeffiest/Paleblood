#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic fixtures for misc_init_tuning_record (0x00cdcf10), for tools/verify.py run.

usage: init_tuning_record_cases.py OUT_DIR

The record is given several old contents, so every byte the initializer writes shows up in the
comparison, and bytes it leaves alone keep their old values. The two sub-record initializers are
stubbed with their two arguments; the header block is read from the read-only image.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00cdcf10'
FIRST_RECORD_INIT = '0x00ce7510'
TAIL_RECORD_INIT = '0x00cfb470'
RECORD_BYTES = 0x140


def case(cid, old_byte):
    """One call on a record whose every byte starts as old_byte."""
    stubs = [{'address': FIRST_RECORD_INIT, 'argc': 2},
             {'address': TAIL_RECORD_INIT, 'argc': 2}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:record'},
            'buffers': {'record': {'size': RECORD_BYTES, 'bytes': old_byte * RECORD_BYTES}},
            'memory': [], 'imports': [], 'stubs': stubs}


CASES = [
    case('zeroed_record', '00'),
    case('stale_record', 'a5'),
    case('all_ones_record', 'ff'),
]


def main():
    """Write deterministic fixtures to the requested directory."""
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
