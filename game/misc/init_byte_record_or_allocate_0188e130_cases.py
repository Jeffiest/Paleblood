#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic byte-record initializations for bb_misc_init_byte_record_or_allocate_0188e130 (0x0188e130).

usage: init_byte_record_or_allocate_0188e130_cases.py OUT_DIR

The source record's byte at 0x08 is copied; the bytes after it must not be. An existing record is
filled in place. With no record, the allocate slot (0x02fbe9a8, 16 bytes) supplies one, or refuses and
the failure report (0x02fbf188) never returns.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0188e130'
ALLOCATE = '0x02fbe9a8'
REPORT = '0x02fbf188'
RECORD_SIZE = 0x10
PATTERN_RECORD = 'c5' * RECORD_SIZE


def source_bytes(value):
    """A source record whose byte at 0x08 is value and whose trailing bytes are not zero."""
    return '00' * 8 + format(value & 0xff, '02x') + 'ee' * 7


def case(cid, value, record=True, granted=True, record_bytes=PATTERN_RECORD):
    """One call. record says whether an existing record is passed in RSI; without one the allocate stub
    grants or refuses a block (and a refusal ends in the noreturn report)."""
    buffers = {'source': {'size': RECORD_SIZE, 'bytes': source_bytes(value)}}
    args = {'rdi': 'buf:source'}
    stubs = []
    if record:
        buffers['record'] = {'size': RECORD_SIZE, 'bytes': record_bytes}
        args['rsi'] = 'buf:record'
    else:
        args['rsi'] = '0x0'
        buffers['block'] = {'size': RECORD_SIZE, 'bytes': '5a' * RECORD_SIZE}
        stubs.append({'address': ALLOCATE, 'argc': 1, 'argi': [0],
                      'ret': 'buf:block' if granted else 0})
        if not granted:
            stubs.append({'address': REPORT, 'argc': 0, 'noreturn': True})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': args, 'buffers': buffers, 'memory': [], 'stubs': stubs, 'imports': []}


CASES = [
    case('record_copies_byte', value=0x5a),
    case('record_copies_zero', value=0x00, record_bytes='ff' * RECORD_SIZE),
    case('record_copies_all_ones', value=0xff),
    case('record_ignores_trailing_source_bytes', value=0x01),
    case('allocated_granted', value=0x3c, record=False, granted=True),
    case('allocated_granted_zero_source', value=0x00, record=False, granted=True),
    case('allocation_refused', value=0x3c, record=False, granted=False),
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
