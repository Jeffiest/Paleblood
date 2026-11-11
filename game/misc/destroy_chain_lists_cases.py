#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic object releases for misc_destroy_chain_lists (0x026f4330), for tools/verify.py run.

usage: destroy_chain_lists_cases.py OUT_DIR

The object is 0xc8 bytes: its vtable pointer at +0x00 and six chain lists of 0x20 bytes from +0x08 to +0xc8,
released in the order +0xa8, +0x88, +0x68, +0x48, +0x28, +0x08. Each list has a sentinel at +0x08 (its first
node at +0x08 of the sentinel), a count at +0x10 and a node allocator at +0x18. Each release calls the chain
destroy routine (a stub), relinks the sentinel to itself, zeroes the count and frees the sentinel through the
allocator's free slot (a stub at a real game entry). All six allocators share one vtable. Covers an empty
set of chains, every list holding a chain, and a mix of the two.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026f4330'
FREE_NODE = '0x00400020'      # the allocators' free slot; stubbed (a real game entry)
FREE_SLOT = 0x70
HOLDER_SIZE = 0xc8
NODE_SIZE = 0x20
LISTS = [  # (list offset, chain destroy routine), in the order the original releases them
    (0xa8, '0x026f3db0'),
    (0x88, '0x026f3d30'),
    (0x68, '0x026f3cb0'),
    (0x48, '0x026f3c30'),
    (0x28, '0x026f3bb0'),
    (0x08, '0x026f3e30'),
]


def case(cid, with_chains):
    """One release. With chains, each list's first node is a separate buffer; otherwise it is the sentinel."""
    buffers = {
        'holder': {'size': HOLDER_SIZE, 'bytes': 'aa' * HOLDER_SIZE},
        'alloc_vt': {'size': 0x78},
    }
    memory = [{'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': FREE_NODE}]
    stubs = []
    for index, (offset, destroy) in enumerate(LISTS):
        sentinel = f'sent_{index}'
        allocator = f'alloc_{index}'
        first = f'chain_{index}' if with_chains and index % 2 == 0 else sentinel
        buffers[sentinel] = {'size': NODE_SIZE, 'bytes': 'bb' * NODE_SIZE}
        buffers[allocator] = {'size': 0x10}
        if first != sentinel:
            buffers[first] = {'size': NODE_SIZE, 'bytes': 'cc' * NODE_SIZE}
        memory.append({'addr': f'buf:holder+{offset + 0x08:#x}', 'pointer': sentinel})
        memory.append({'addr': f'buf:holder+{offset + 0x18:#x}', 'pointer': allocator})
        memory.append({'addr': f'buf:{sentinel}+0x08', 'pointer': first})
        memory.append({'addr': f'buf:{allocator}+0', 'pointer': 'alloc_vt'})
        stubs.append({'address': destroy, 'argc': 2})
        stubs.append({'address': FREE_NODE, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:holder'},
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('all_lists_empty', False),
    case('all_lists_with_chains', True),
]


def main():
    """Write deterministic synthetic releases to the requested directory."""
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
