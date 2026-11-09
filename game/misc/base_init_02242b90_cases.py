#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic constructions for misc_base_init_02242b90 (0x02242b90).

usage: base_init_02242b90_cases.py OUT_DIR

The setup step (0x00f2d8b0) is a stub that receives the object and leaves it unchanged; the object then
gets the other class's vtable. Covers garbage, zero and all-ones starting bytes.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02242b90'
SETUP = '0x00f2d8b0'


def case(cid, fill='ee'):
    """One construction: the setup stub runs first on the object, then the vtable is stored."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:obj'}, 'buffers': {'obj': {'size': 0x28, 'bytes': fill * 0x28}},
            'memory': [], 'imports': [], 'stubs': [{'address': SETUP, 'argc': 1}]}


CASES = [case('garbage_bytes'), case('zero_bytes', fill='00'), case('all_ones_bytes', fill='ff')]


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
