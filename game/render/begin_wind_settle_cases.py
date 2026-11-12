#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic wind system settles for bb_render_begin_wind_settle (0x027136a0): the request byte is read
from DIL only; the settling is started only when a system exists and the byte is one.

usage: begin_wind_settle_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x027136a0'
WIND_SYSTEM_GLOBAL = '0x05940e00'
RESET_PENDING = 0x4c
SETTLING = 0x4d
SETTLE_COUNT = 0x50
SYSTEM_BYTES = 0x60
MASK64 = (1 << 64) - 1


def case(cid, rdi, system=True):
    """One call with the request in RDI; the system buffer is the global's target when system is set."""
    memory = [{'addr': WIND_SYSTEM_GLOBAL,
               'pointer': 'system' if system else None}] if system else \
             [{'addr': WIND_SYSTEM_GLOBAL, 'bytes': struct.pack('<Q', 0).hex()}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': hex(rdi & MASK64)},
            'buffers': {'system': {'size': SYSTEM_BYTES, 'bytes': 'aa' * SYSTEM_BYTES}},
            'memory': memory, 'imports': [], 'stubs': []}


CASES = [
    case('request_one_starts_settling', 1),
    case('request_zero_leaves_system', 0),
    case('request_two_leaves_system', 2),
    case('request_high_bits_low_byte_one', 0xfedcba9876543101),
    case('request_high_bits_low_byte_zero', 0xffffffffffffff00),
    case('no_wind_system_nothing_written', 1, system=False),
    case('no_wind_system_and_request_zero', 0, system=False),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(f'usage: {Path(__file__).name} OUT_DIR', file=sys.stderr)
        return 2
    destination = Path(sys.argv[1])
    destination.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (destination / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {destination}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
