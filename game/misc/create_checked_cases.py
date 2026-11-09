#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic factory results for misc_create_checked (0x0040b570): no object, an object that passes
its valid test, one that fails it with and without a report target, and a valid result whose
high half is set (only the low word is tested).

usage: create_checked_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0040b570'
CREATE = '0x00400d00'
VALID = '0x00400e00'
REPORT = '0x02788b20'
RELEASE = '0x0045a4c0'
MASK64 = (1 << 64) - 1


def case(cid, made=True, valid=0, target=False, first=0x11, second=0x22):
    """One call. made is whether the factory returns an object; valid is what its valid test
    returns; target is whether a report target is passed."""
    buffers = {'factory': {'size': 0x10}, 'fvt': {'size': 0x20}, 'made': {'size': 0x10},
               'mvt': {'size': 0x60}, 'context': {'size': 0x10}, 'target': {'size': 0x10}}
    memory = [{'addr': 'buf:factory', 'pointer': 'fvt'},
              {'addr': 'buf:fvt+16', 'guest': CREATE},
              {'addr': 'buf:made', 'pointer': 'mvt'},
              {'addr': 'buf:mvt+72', 'guest': VALID}]
    stubs = [{'address': CREATE, 'argc': 4, 'ret': 'buf:made' if made else 0}]
    if made:
        stubs.append({'address': VALID, 'argc': 1, 'ret': hex(valid & MASK64)})
    if not made:
        report_needed = target
    else:
        report_needed = target and valid != 0
    if report_needed:
        stubs.append({'address': REPORT, 'argc': 3})
    if made and valid != 0:
        stubs.append({'address': RELEASE, 'argc': 1})
    rdx = 'buf:target' if target else '0x0'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:factory', 'rsi': 'buf:context', 'rdx': rdx,
                     'rcx': hex(first), 'r8': hex(second)},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_object_no_target', made=False),
    case('no_object_reports', made=False, target=True),
    case('valid_object_returned', valid=0),
    case('invalid_object_released', valid=1),
    case('invalid_object_reported_released', valid=1, target=True),
    case('valid_high_half_set', valid=0x100000000),
    case('invalid_all_ones_reported', valid=MASK64, target=True, first=0xffffffff, second=0),
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
