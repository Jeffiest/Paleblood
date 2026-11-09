#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic lookups for misc_lookup_value_or_zero (0x00406d50): a missing record zeroes the out
block whatever it held before, a found record copies its 16 bytes, including zero and all-ones
payloads, and the resolved key and the source take boundary values.

usage: lookup_value_or_zero_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00406d50'
RESOLVE = '0x00400300'
LOOKUP = '0x004de9c0'
MASK64 = (1 << 64) - 1
PATTERN = '0102030405060708090a0b0c0d0e0f10'


def case(cid, source=0x1234, resolved=0x7000, payload_value=PATTERN, found=True, prefill='aa' * 16):
    """One call. The out block starts with prefill bytes. When found, the lookup returns a record
    whose payload holds payload_value at +0x10; otherwise it returns null."""
    buffers = {'out': {'size': 0x10, 'bytes': prefill}}
    memory = []
    stubs = [{'address': RESOLVE, 'argc': 1, 'ret': hex(resolved & MASK64)}]
    if found:
        buffers['record'] = {'size': 0x10}
        buffers['payload'] = {'size': 0x20, 'bytes': '00' * 0x10 + payload_value}
        memory = [{'addr': 'buf:record+8', 'pointer': 'payload'}]
        stubs.append({'address': LOOKUP, 'argc': 2, 'ret': 'buf:record'})
    else:
        stubs.append({'address': LOOKUP, 'argc': 2, 'ret': 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:out', 'rsi': hex(source & MASK64)},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('missing_record_zeroes_out', found=False),
    case('missing_record_ignores_resolved', found=False, resolved=MASK64, source=0),
    case('missing_record_zero_key', found=False, resolved=0),
    case('found_copies_value', payload_value=PATTERN),
    case('found_zero_value', payload_value='00' * 16),
    case('found_all_ones_value', payload_value='ff' * 16, prefill='00' * 16),
    case('found_zero_key', resolved=0),
    case('found_high_bit_key', resolved=0x8000000000000000, source=0xffffffffffffffff),
    case('found_distinct_bytes', payload_value='f0e0d0c0b0a090807060504030201000'),
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
