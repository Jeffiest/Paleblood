#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic scans (0x02255440): the scan source not in its ready state (nothing runs), the ready state with an empty
list, a taken item that is unflagged with rank three or five, flagged (bit 0x02), ranking six, or null, and a refused
walk. The scan record is initialised and finished around the walk; each call is stubbed in call order. A missing
scan source is not a case: the fatal error is followed by a load through the null source, which faults.

usage: accepted_item_rank_flag_test_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02255440'
SOURCE_GLOBAL = '0x05940290'
BEGIN = '0x0108fb30'
FINISH = '0x010a1570'
ACCEPTS = '0x010a1c70'
RANK = '0x00400170'          # a real game function entry, stubbed as each item's rank slot
ITEM_SIZE = 0x100
ITEM_VT_RANK_SLOT = 0x58
FLAGS_OFFSET = 0xed
MASK32 = (1 << 32) - 1
MASK64 = (1 << 64) - 1


def case(cid, state=6, items=()):
    """One scan. Each item is (answer, rank, flags, null): the accept routine's raw answer, the item's rank, its flag
    byte, and whether the item pointer is null. The walk stops at the first answer with a nonzero low byte."""
    buffers = {'source': {'size': 0x130}, 'lst': {'size': 0x20}, 'list': {'size': max(1, len(items)) * 8},
               'item_vt': {'size': ITEM_VT_RANK_SLOT + 8}}
    memory = [{'addr': SOURCE_GLOBAL, 'pointer': 'source'},
              {'addr': 'buf:source+0x124', 'bytes': (state & MASK32).to_bytes(4, 'little').hex()},
              {'addr': f'buf:item_vt+{ITEM_VT_RANK_SLOT:#x}', 'guest': RANK},
              {'addr': 'buf:lst+0x10', 'pointer': 'list'}]
    end = f'list+{len(items) * 8:#x}' if items else 'list'
    memory.append({'addr': 'buf:lst+0x18', 'pointer': end})
    stubs = []
    if state == 6:
        stubs.append({'address': BEGIN, 'argc': 1})
        for index, (answer, rank, flags, null) in enumerate(items):
            if null:
                memory.append({'addr': f'buf:list+{index * 8:#x}', 'bytes': '00' * 8})
            else:
                body = bytearray(b'\xee' * ITEM_SIZE)
                body[FLAGS_OFFSET] = flags & 0xff
                buffers[f'item_{index}'] = {'size': ITEM_SIZE, 'bytes': body.hex()}
                memory.append({'addr': f'buf:item_{index}+0x0', 'pointer': 'item_vt'})
                memory.append({'addr': f'buf:list+{index * 8:#x}', 'pointer': f'item_{index}'})
            stubs.append({'address': ACCEPTS, 'argc': 2, 'ret': hex(answer & MASK64)})
            if answer & 0xff:
                stubs.append({'address': FINISH, 'argc': 1})
                if not null:
                    stubs.append({'address': RANK, 'argc': 1, 'ret': hex(((rank & MASK32) | 0xcd00000000) & MASK64)})
                break
        else:
            stubs.append({'address': FINISH, 'argc': 1})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i8',
            'args': {'rdi': 'buf:lst'}, 'buffers': buffers, 'memory': memory, 'imports': [],
            'stubs': stubs}


CASES = [
    case('source_not_ready', state=5, items=[(1, 3, 0x00, False)]),
    case('ready_empty'),
    case('unflagged_rank_three', items=[(1, 3, 0x00, False)]),
    case('flagged_rank_three', items=[(1, 3, 0x02, False)]),
    case('unflagged_rank_five', items=[(1, 5, 0x00, False)]),
    case('rank_six_fails', items=[(1, 6, 0x00, False)]),
    case('other_bits_only_unflagged', items=[(1, 1, 0xfd, False)]),
    case('accepted_null_fails', items=[(1, 0, 0x00, True)]),
    case('refused_then_none', items=[(0, 3, 0x00, False), (0, 3, 0x00, False)]),
    case('second_accepted_unflagged', items=[(0, 9, 0x02, False), (1, 4, 0x00, False)]),
    case('negative_rank_unflagged', items=[(1, -2, 0x00, False)]),
]


# A missing scan source runs the fatal error and then faults at the state load, so that outcome is not reached;
# the source is checked non-null before the second test, which therefore never falls through.
UNREACHABLE = {'0x0225546f': ('fallthrough', 'fatal error 0x024b55b0 then a load through null at 0x02255495'),
               '0x022554a5': ('fallthrough', 'the scan source was loaded and dereferenced before this test')}

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
    sys.exit(main())
