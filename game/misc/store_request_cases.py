#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic request stores for misc_store_request (0x00400e90).

The owner either holds a pending request or does not. The handle lookup (0x00400300), the flag
callee (0x00482a70), the fill callee (0x004de720) and the tail call (0x00400ab0) are scripted stubs.
Covers both paths, flag bytes that start clear and set, zero and high-bit handles, aliased request
and pending storage, and tail results of zero and all ones.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00400e90'
LOOKUP_FN = '0x00400300'
FLAG_FN = '0x00482a70'
FILL_FN = '0x004de720'
TAIL_FN = '0x00400ab0'
OWNER_BYTES = 0x68
HANDLE_FIELD = 0x48
PENDING_FIELD = 0x60
PENDING_BYTES = 0x31
# The request that overlaps the pending copy reads 0x30 bytes from pending+0x8, past the record.
PENDING_BUFFER_BYTES = 0x40
REQUEST_BYTES = 0x30
MASK64 = (1 << 64) - 1
DEFAULT_HANDLE = 0x0000000000012345
REQUEST = bytes(range(0x10, 0x10 + REQUEST_BYTES)).hex()


def word(value):
    """A 64-bit little-endian value as hex bytes."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def case(cid, pending=True, handle=DEFAULT_HANDLE, tail=0x1234, flag='b6', request='buf:request'):
    """One store. The pending request is either held (with its flag byte) or absent."""
    stubs = [{'address': LOOKUP_FN, 'argc': 1, 'argi': [0], 'ret': hex(handle & MASK64)}]
    if pending:
        stubs.append({'address': FLAG_FN, 'argc': 2, 'argi': [0, 1]})
    else:
        stubs.append({'address': FILL_FN, 'argc': 2, 'argi': [0, 1]})
    stubs.append({'address': TAIL_FN, 'argc': 1, 'argi': [0], 'ret': hex(tail & MASK64)})
    fixture = {
        'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
        'args': {'rdi': 'buf:owner', 'rsi': request},
        'buffers': {
            'owner': {'size': OWNER_BYTES, 'bytes': 'a5' * OWNER_BYTES},
            'pending': {'size': PENDING_BUFFER_BYTES, 'bytes': flag * PENDING_BUFFER_BYTES},
            'request': {'size': REQUEST_BYTES, 'bytes': REQUEST},
        },
        'memory': [
            {'addr': f'buf:owner+{HANDLE_FIELD:#x}', 'bytes': word(handle)},
        ],
        'imports': [],
        'stubs': stubs,
    }
    if pending:
        fixture['memory'].append({'addr': f'buf:owner+{PENDING_FIELD:#x}', 'pointer': 'pending'})
    else:
        fixture['memory'].append({'addr': f'buf:owner+{PENDING_FIELD:#x}', 'bytes': word(0)})
    return fixture


CASES = [
    case('pending_copies_words_and_sets_flag'),
    case('pending_flag_already_set', flag='01'),
    case('pending_flag_clear_before_store', flag='00'),
    case('pending_zero_handle', handle=0),
    case('pending_high_bit_handle', handle=0x8000000000000001),
    case('pending_request_overlaps_pending_copy', request='buf:pending+0x8'),
    case('pending_request_aliases_pending', request='buf:pending'),
    case('pending_tail_all_ones', tail=MASK64),
    case('pending_tail_zero', tail=0),
    case('absent_passes_handle_and_request', pending=False),
    case('absent_zero_handle', pending=False, handle=0),
    case('absent_high_bit_handle', pending=False, handle=0x8000000000000001),
    case('absent_tail_all_ones', pending=False, tail=MASK64),
    case('absent_tail_zero', pending=False, tail=0),
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
