#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic list growths for bb_misc_grow_word_block (0x02706ac0).

usage: grow_word_block_cases.py OUT_DIR

The list's storage is 8-byte words; the allocator's allocate slot (0x58, a scripted stub) returns a block or
refuses, and its free slot (0x70, a scripted stub) releases the old storage. A refused block either reaches the
throw helper (0x02fbe978, the thread flag set, which never returns) or the engine's fatal report (0x024b55b0,
flag clear, which returns). The thread pointer is gs:[0]; the flag and the throw slot are read through the
offsets stored at 0x057e4318 and 0x057e4320. Covers an empty list, words moved into a larger block, a one-word
list, an empty but allocated storage released, a zero count, and both refusal paths.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02706ac0'
ALLOCATE = '0x00400020'       # a real game entry the allocator's allocate slot points at
FREE = '0x004000a0'           # a real game entry the allocator's free slot points at
FATAL = '0x024b55b0'
THROW = '0x02fbe978'
FLAG_OFFSET_SLOT = '0x057e4318'
THROW_OFFSET_SLOT = '0x057e4320'
WORD = 0x08
TLS_BELOW = 0x20              # the thread pointer; the flag sits at +0x28 and the throw slot at +0x30
FLAG_OFFSET = 0x8
THROW_OFFSET = 0x10


def case(cid, begin_count, count, block=True, flag=0, free_result=0x77):
    """begin_count: words stored before the call (0 for an empty list with no storage); count: the requested
    word count; block: whether the allocator grants a block; flag: the thread flag value."""
    buffers = {'list': {'size': 0x28},
               'alloc': {'size': 8}, 'alloc_vt': {'size': 0x78},
               'tls': {'size': TLS_BELOW + 0x20, 'bytes': '00' * (TLS_BELOW + 0x20)},
               'block': {'size': 0x40, 'bytes': '5c' * 0x40}}
    memory = [{'addr': 'buf:list+32', 'pointer': 'alloc'},
              {'addr': 'buf:alloc', 'pointer': 'alloc_vt'},
              {'addr': 'buf:alloc_vt+88', 'guest': ALLOCATE},
              {'addr': 'buf:alloc_vt+112', 'guest': FREE},
              {'addr': f'buf:tls+{TLS_BELOW}', 'pointer': f'tls+{TLS_BELOW}'},
              {'addr': f'buf:tls+{TLS_BELOW + FLAG_OFFSET}', 'bytes': struct.pack('<I', flag).hex()},
              {'addr': FLAG_OFFSET_SLOT, 'bytes': struct.pack('<q', FLAG_OFFSET).hex()},
              {'addr': THROW_OFFSET_SLOT, 'bytes': struct.pack('<q', THROW_OFFSET).hex()}]
    stubs = []
    if begin_count:
        buffers['old'] = {'size': WORD * begin_count, 'bytes': 'ab' * (WORD * begin_count)}
        memory.append({'addr': 'buf:list+8', 'pointer': 'old'})
        memory.append({'addr': 'buf:list+16', 'pointer': f'old+{WORD * begin_count}'})
    else:
        memory.append({'addr': 'buf:list+8', 'bytes': '00' * 8})
        memory.append({'addr': 'buf:list+16', 'bytes': '00' * 8})
    memory.append({'addr': 'buf:list+24', 'bytes': '00' * 8})
    args = {'rdi': 'buf:list', 'rsi': hex(count)}
    if block:
        stubs.append({'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 'buf:block'})
    else:
        stubs.append({'address': ALLOCATE, 'argc': 3, 'argi': [0, 1, 2], 'ret': 0})
        if flag:
            stubs.append({'address': THROW, 'argc': 2, 'argi': [1], 'noreturn': True})
            return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
                    'buffers': buffers, 'memory': memory, 'gs': f'buf:tls+{TLS_BELOW}', 'stubs': stubs,
                    'imports': []}
        stubs.append({'address': FATAL, 'argc': 3, 'argi': [0, 1, 2]})
    if begin_count:
        stubs.append({'address': FREE, 'argc': 2, 'argi': [0, 1], 'ret': free_result})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'gs': f'buf:tls+{TLS_BELOW}', 'stubs': stubs, 'imports': []}


CASES = [
    case('empty_list_grows', begin_count=0, count=2),
    case('words_moved_and_old_freed', begin_count=2, count=4),
    case('one_word_grows_to_one', begin_count=1, count=1, free_result=0),
    case('empty_storage_released', begin_count=3, count=3),
    case('zero_count_empty_list', begin_count=0, count=0),
    case('refused_flag_clear_reports_and_frees', begin_count=1, count=2, block=False, flag=0),
    case('refused_flag_set_throws', begin_count=0, count=2, block=False, flag=1),
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
