#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_init_rows_spaced_fields_5953fd0 (0x019220d0), for tools/verify.py run.

usage: init_rows_spaced_fields_5953fd0_cases.py OUT_DIR

The function fills the 68-byte record at 0x05953fd0 from the constant at 0x04cf5c10.
The constant is read-only data, so every call writes the same bytes: the cases differ in the old
bytes of the record, which must be replaced except in its gaps, where they must stay, and each has
marker bytes on both sides of the record that must survive. The function takes no arguments, so the
argument registers hold values that must be ignored.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x019220d0'
RECORD = 0x05953fd0
RECORD_BYTES = 68
BEFORE = 0x05953fc8
AFTER = 0x05954014
GARBAGE = {'rdi': '0x5a5a5a5a5a5a5a5a', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def ramp(seed):
    """Bytes that differ from their neighbours, so a wrong offset or width is visible."""
    return bytes(((i * 37 + seed) & 0xff) for i in range(RECORD_BYTES)).hex()


def case(cid, old='e5' * RECORD_BYTES, registers=None):
    """One call with old bytes in the record and marker bytes on both sides of it."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': dict(GARBAGE if registers is None else registers),
            'buffers': {}, 'imports': [], 'stubs': [],
            'memory': [{'addr': hex(BEFORE), 'bytes': 'a1' * 8},
                       {'addr': hex(AFTER), 'bytes': 'b2' * 12},
                       {'addr': hex(RECORD), 'bytes': old}]}


CASES = [
    case('old_record_bytes'),
    case('zero_record', old='00' * RECORD_BYTES),
    case('all_ones_record', old='ff' * RECORD_BYTES),
    case('ramp_record', old=ramp(0x42)),
    case('other_ramp_record', old=ramp(0x99)),
    case('sign_pattern_record', old='7f80' * (RECORD_BYTES // 2)),
    case('zero_registers', registers={k: '0x0' for k in GARBAGE}),
    case('zero_registers_zero_record', old='00' * RECORD_BYTES, registers={k: '0x0' for k in GARBAGE}),
]


def main():
    """Write one JSON case per call shape to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
