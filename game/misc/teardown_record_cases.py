#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic record teardowns for misc_teardown_record (0x0040bfa0).

The teardown (0x0040bfd0) is a stub, and the scratch service's release slot (0x68) is a stub that
returns a chosen result. Covers ordinary, zero, all-ones and high-bit results, and a record of zero bytes.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0040bfa0'
TEARDOWN_FN = '0x0040bfd0'
RELEASE_FN = '0x00400060'
SERVICE_GLOBAL = '0x057e7320'
RECORD_BYTES = 0x18
SERVICE_VTABLE_BYTES = 0x70
RELEASE_SLOT = 0x68
MASK64 = (1 << 64) - 1


def case(cid, result=0x1234, record='ee'):
    """One teardown: the teardown stub runs first, then the release stub returns the chosen result."""
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:record'},
        'buffers': {
            'record': {'size': RECORD_BYTES, 'bytes': record * RECORD_BYTES},
            'service': {'size': 8},
            'service_vt': {'size': SERVICE_VTABLE_BYTES},
        },
        'memory': [
            {'addr': SERVICE_GLOBAL, 'pointer': 'service'},
            {'addr': 'buf:service', 'pointer': 'service_vt'},
            {'addr': f'buf:service_vt+{RELEASE_SLOT:#x}', 'guest': RELEASE_FN},
        ],
        'imports': [],
        'stubs': [
            {'address': TEARDOWN_FN, 'argc': 1, 'argi': [0]},
            {'address': RELEASE_FN, 'argc': 2, 'argi': [0, 1], 'ret': hex(result & MASK64)},
        ],
    }


CASES = [
    case('ordinary_result'),
    case('zero_result', result=0),
    case('all_ones_result', result=MASK64),
    case('high_bit_result', result=1 << 63),
    case('zero_record_bytes', result=0x55, record='00'),
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
