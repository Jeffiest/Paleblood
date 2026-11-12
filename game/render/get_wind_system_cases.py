#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic global values for bb_render_get_wind_system (0x02713690): no wind system yet, a system
at a buffer, and an arbitrary stored address.

usage: get_wind_system_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02713690'
WIND_SYSTEM_GLOBAL = '0x05940e00'
MASK64 = (1 << 64) - 1


def case(cid, memory_entry):
    """One call: the function returns the value the wind system global holds."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {}, 'buffers': {'system': {'size': 0x60, 'bytes': 'aa' * 0x60}},
            'memory': [memory_entry], 'imports': [], 'stubs': []}


CASES = [
    case('no_wind_system', {'addr': WIND_SYSTEM_GLOBAL, 'bytes': struct.pack('<Q', 0).hex()}),
    case('wind_system_at_buffer', {'addr': WIND_SYSTEM_GLOBAL, 'pointer': 'system'}),
    case('stored_address_kept_whole', {'addr': WIND_SYSTEM_GLOBAL,
                                       'bytes': struct.pack('<Q', 0xfedcba9876543210 & MASK64).hex()}),
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
