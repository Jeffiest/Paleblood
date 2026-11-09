#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic base-object constructions for misc_base_init_02242980 (0x02242980).

usage: base_init_02242980_cases.py OUT_DIR

The object is 0x28 bytes. The constructor has no branches and no calls: it stores the base class's
address point, and the bytes after the vtable must stay as they are. Covers garbage, zero and all-ones
starting bytes.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02242980'


def case(cid, fill='ee'):
    """One construction of an object whose bytes all start as fill."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:obj'}, 'buffers': {'obj': {'size': 0x28, 'bytes': fill * 0x28}},
            'memory': [], 'imports': [], 'stubs': []}


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
