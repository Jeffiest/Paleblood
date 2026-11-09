#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic probe sources for misc_read_probe_flag (0x01e53500): a result with no detail, and a
detail whose flag byte is zero, one, all ones, or set with the other bits clear."""
import json
from pathlib import Path
import sys

ADDRESS = '0x01e53500'
PROBE_SLOT = '0x00400040'


def case(cid, detail=True, flag=0):
    """A holder for a source whose probe returns a result, with or without a detail."""
    buffers = {'holder': {'size': 0x10, 'bytes': '00' * 0x10},
               'source': {'size': 0x8, 'bytes': '00' * 0x8},
               'source_vt': {'size': 0x170, 'bytes': '00' * 0x170},
               'result': {'size': 0x10, 'bytes': '00' * 0x10},
               'probe_detail': {'size': 0x140, 'bytes': '00' * 0x140}}
    memory = [
        {'addr': 'buf:holder+8', 'pointer': 'source'},
        {'addr': 'buf:source', 'pointer': 'source_vt'},
        {'addr': 'buf:source_vt+360', 'guest': PROBE_SLOT},
        {'addr': 'buf:result+8', 'pointer': 'probe_detail'} if detail
        else {'addr': 'buf:result+8', 'bytes': '00' * 8},
        {'addr': 'buf:probe_detail+313', 'bytes': f'{flag & 0xff:02x}'},
    ]
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i32',
        'args': {'rdi': 'buf:holder'},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': [{'address': PROBE_SLOT, 'argc': 1, 'ret': 'buf:result'}],
    }


CASES = [
    case('no_detail', detail=False),
    case('flag_zero', flag=0),
    case('flag_one', flag=1),
    case('flag_all_ones', flag=0xff),
    case('flag_high_bit_only', flag=0x80),
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
