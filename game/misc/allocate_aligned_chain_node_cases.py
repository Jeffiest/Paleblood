#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic aligned chain allocations for bb_misc_allocate_aligned_chain_node (0x00414cd0): no
alignment (slot 0x50), small, word and larger alignments with their padding, an alignment whose
padding wraps to zero, refused blocks, empty and non-empty chains. Both allocate slots are scripted
stubs; the aligned slot (0x58) receives the padded size and the alignment.

usage: allocate_aligned_chain_node_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00414cd0'
ALLOCATE = '0x00400020'          # real game entry for the allocate slot (0x50)
ALLOCATE_ALIGNED = '0x004000a0'  # a different real game entry for the aligned slot (0x58)
MASK64 = (1 << 64) - 1
CHAIN_SIZE = 0x20
BLOCK_SIZE = 0x200
OLD_HEAD_SIZE = 0x18


def case(cid, payload, alignment, granted, head=False):
    """One allocation. An alignment of zero goes through the plain allocate slot; any other goes
    through the aligned slot with the padded size. A refused block gives null."""
    buffers = {'chain': {'size': CHAIN_SIZE, 'bytes': 'a5' * CHAIN_SIZE},
               'allocator': {'size': 8},
               'alloc_vt': {'size': 0x60},
               'block': {'size': BLOCK_SIZE, 'bytes': '5a' * BLOCK_SIZE}}
    memory = [{'addr': 'buf:allocator', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc_vt+80', 'guest': ALLOCATE},
              {'addr': 'buf:alloc_vt+88', 'guest': ALLOCATE_ALIGNED},
              {'addr': 'buf:chain+24', 'pointer': 'allocator'}]
    if head:
        buffers['old_head'] = {'size': OLD_HEAD_SIZE, 'bytes': '3c' * OLD_HEAD_SIZE}
        memory.append({'addr': 'buf:chain+16', 'pointer': 'old_head'})
        memory.append({'addr': 'buf:old_head+0', 'bytes': '00' * 8})
    else:
        memory.append({'addr': 'buf:chain+16', 'bytes': '00' * 8})
    ret = 'buf:block' if granted else 0
    if alignment == 0:
        stubs = [{'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': ret}]
    else:
        stubs = [{'address': ALLOCATE_ALIGNED, 'argc': 4, 'argi': [0, 1, 2, 3], 'ret': ret}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:chain', 'rsi': hex(payload & MASK64), 'rdx': hex(alignment & MASK64)},
            'buffers': buffers, 'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('no_alignment_granted', payload=0x10, alignment=0, granted=True),
    case('no_alignment_refused', payload=0x10, alignment=0, granted=False),
    case('no_alignment_with_head', payload=0x20, alignment=0, granted=True, head=True),
    case('alignment_one', payload=0x10, alignment=1, granted=True),
    case('alignment_three_rounds_padding', payload=0x10, alignment=3, granted=True, head=True),
    case('alignment_eight', payload=0x10, alignment=8, granted=True),
    case('alignment_sixteen', payload=0x10, alignment=16, granted=True),
    case('alignment_256', payload=0x40, alignment=0x100, granted=True),
    case('alignment_refused', payload=0x10, alignment=16, granted=False),
    case('alignment_all_ones_padding_wraps', payload=0x10, alignment=MASK64, granted=True),
    case('alignment_zero_payload', payload=0, alignment=8, granted=True, head=True),
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
