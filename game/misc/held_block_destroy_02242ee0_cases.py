#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic held-block owner destructions for misc_held_block_destroy_02242ee0 (0x02242ee0), for tools/verify.py run.

usage: held_block_destroy_02242ee0_cases.py OUT_DIR

The owner is 0x30 bytes: its vtable word, the held block at +0x10, two words at +0x18 and +0x20 and the
allocator at +0x28. The allocator's free slot at 0x70 is a stub that receives the allocator and the
block. Covers a held block released and its words cleared, a nothing-held owner whose words are kept,
and garbage, zero and all-ones starting bytes.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02242ee0'
FREE = '0x004000a0'          # the allocator's free slot; stubbed (a real game entry)
FREE_SLOT = 0x70


def case(cid, held=True, fill='ee'):
    """One destruction of an owner whose held block is freed when set."""
    buffers = {'owner': {'size': 0x30, 'bytes': fill * 0x30}, 'alloc': {'size': 0x10},
               'alloc_vt': {'size': 0x78}, 'held': {'size': 0x40}}
    memory = [{'addr': 'buf:owner+40', 'pointer': 'alloc'},
              {'addr': 'buf:alloc+0', 'pointer': 'alloc_vt'},
              {'addr': f'buf:alloc_vt+{FREE_SLOT:#x}', 'guest': FREE}]
    stubs = []
    if held:
        memory.append({'addr': 'buf:owner+16', 'pointer': 'held'})
        stubs.append({'address': FREE, 'argc': 2})
    else:
        memory.append({'addr': 'buf:owner+16', 'bytes': '00' * 8})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('held_block_cleared'),
    case('held_block_all_ones', fill='ff'),
    case('held_block_zero_bytes', fill='00'),
    case('nothing_held_keeps_words'),
    case('nothing_held_zero_bytes', held=False, fill='00'),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        (output / (fixture['id'] + '.json')).write_text(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
