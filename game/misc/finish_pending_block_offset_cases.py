#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic records for misc_finish_pending_block_offset (0x01888fd0).

usage: finish_pending_block_offset_cases.py OUT_DIR

The record's 32-bit limit at +0x10 and the pending block at +0x28 are the inputs. With a pending block, the
block's 32-bit word at +0x04 gets the limit minus the block's address plus eight, and the pending pointer is
cleared. With no pending block, nothing is written and the return register is left alone (the original is a
plain return), so those cases set 'returns' to 'void'. Covers limits with the upper word set, zero, all ones
and a limit below the biased address (wrapping).
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01888fd0'
MASK32 = 0xffffffff


def case(cid, limit, pending=True, limit_high=0):
    """One call on a record. The block is a buffer whose offset word the call writes."""
    buffers = {'record': {'size': 0x40, 'bytes': 'aa' * 0x40},
               'block': {'size': 0x10, 'bytes': 'cc' * 0x10}}
    limit_word = struct.pack('<Q', ((limit_high & MASK32) << 32) | (limit & MASK32)).hex()
    memory = [{'addr': 'buf:record+0x10', 'bytes': limit_word}]
    if pending:
        memory.append({'addr': 'buf:record+0x28', 'pointer': 'block'})
    else:
        memory.append({'addr': 'buf:record+0x28', 'bytes': '00' * 8})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:record'}, 'buffers': buffers, 'memory': memory,
            'imports': [], 'stubs': []}


CASES = [
    case('no_pending_block_leaves_record', 0x12345678, pending=False),
    case('no_pending_block_limit_all_ones', MASK32, pending=False, limit_high=0x80000000),
    case('pending_block_ordinary_limit', 0x12345678),
    case('pending_block_zero_limit_wraps', 0),
    case('pending_block_all_ones_limit', MASK32),
    case('pending_block_limit_upper_word_ignored', 0x00000100, limit_high=0xdeadbeef),
    case('pending_block_high_bit_limit', 0x80000000, limit_high=0x11111111),
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
