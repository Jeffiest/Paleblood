#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic held-block owner deletions for misc_held_block_delete_02242ea0 (0x02242ea0), for tools/verify.py run.

usage: held_block_delete_02242ea0_cases.py OUT_DIR

The owner is 0x30 bytes: its vtable word, the held block at +0x10 and the allocator at +0x28. The
allocator's free slot at 0x70 is a stub that receives the allocator and the block. The library routine
the original jumps to (0x02fbe588) is a stub whose result is returned. Covers a held block released
and a nothing-held owner, with results of zero, all ones, high bits and an ordinary value.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02242ea0'
FREE = '0x004000a0'          # the allocator's free slot; stubbed (a real game entry)
LIBRARY = '0x02fbe588'       # the library routine the original tail-jumps to; stubbed
FREE_SLOT = 0x70
MASK64 = (1 << 64) - 1


def case(cid, held=True, result=0, fill='ee'):
    """One deletion of an owner whose held block is freed when set, then the library result returned."""
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
    stubs.append({'address': LIBRARY, 'argc': 1, 'ret': hex(result & MASK64)})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:owner'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('held_block_result_zero', held=True, result=0),
    case('held_block_result_all_ones', held=True, result=MASK64, fill='ff'),
    case('nothing_held_result_high_bit', held=False, result=1 << 63),
    case('nothing_held_result_ordinary', held=False, result=0x2a),
    case('held_block_result_ordinary', held=True, result=0x1234),
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
