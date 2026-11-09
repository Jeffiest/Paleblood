#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic record initializations for misc_init_record_block (0x0040bf40).

The scratch service global (0x057e7320) points at a service whose allocate slot (0x50) is a stub that
returns a block. Covers a record whose bytes are all set, a record that starts zeroed, and a block
that starts with nonzero words, so the zeroing and the stores are visible.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x0040bf40'
ALLOCATE_FN = '0x00400020'
SERVICE_GLOBAL = '0x057e7320'
RECORD_BYTES = 0x18
SERVICE_VTABLE_BYTES = 0x58
ALLOCATE_SLOT = 0x50
BLOCK_BYTES = 8


def case(cid, record='ee', block='ff'):
    """One initialization: the record is the argument, the block is what the allocate stub returns."""
    return {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:record'},
        'buffers': {
            'record': {'size': RECORD_BYTES, 'bytes': record * RECORD_BYTES},
            'block': {'size': BLOCK_BYTES, 'bytes': block * BLOCK_BYTES},
            'service': {'size': 8},
            'service_vt': {'size': SERVICE_VTABLE_BYTES},
        },
        'memory': [
            {'addr': SERVICE_GLOBAL, 'pointer': 'service'},
            {'addr': 'buf:service', 'pointer': 'service_vt'},
            {'addr': f'buf:service_vt+{ALLOCATE_SLOT:#x}', 'guest': ALLOCATE_FN},
        ],
        'imports': [],
        'stubs': [{'address': ALLOCATE_FN, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:block'}],
    }


CASES = [
    case('record_all_set'),
    case('record_zero', record='00', block='00'),
    case('block_nonzero_words', record='5a', block='c3'),
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
