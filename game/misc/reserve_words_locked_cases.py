#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic locked reservations for misc_reserve_words_locked (0x02707120), for tools/verify.py run.

usage: reserve_words_locked_cases.py OUT_DIR

The function sets the thread flag (gs:[0x8]), tries the lock (a stub, the slot at gs:[0x10]), and when the lock is
free and the list holds at most 127 words (capacity minus begin, in words), it reserves room for 128 words through
the routine at 0x027077a0 (a stub). The flag is cleared on every path. The thread pointer is gs:[0]; the flag and lock
offsets are read through the words at 0x057e4318 and 0x057e4320.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x02707120'
LOCK = '0x02fbe8f8'                 # returns nonzero when the lock is held elsewhere
RESERVE = '0x027077a0'              # the reservation routine; a stub that records its arguments
FLAG_OFFSET_SLOT = 0x057e4318
LOCK_OFFSET_SLOT = 0x057e4320
FLAG_OFFSET = 0x8
LOCK_OFFSET = 0x10
TLS_BELOW = 0x20                    # the thread pointer; the flag is at +0x28 and the lock at +0x30
TLS_SIZE = 0x40
WORD = 8
MASK64 = (1 << 64) - 1


def u64(value):
    """Eight little-endian bytes of a value, as hex."""
    return (value & MASK64).to_bytes(8, 'little').hex()


def case(cid, words, lock=0):
    """One call on a list holding the given number of words, with the lock answered as given."""
    buffers = {'tls': {'size': TLS_SIZE},
               'list': {'size': 0x28},
               'words': {'size': 0x500, 'bytes': 'cc' * 0x500}}
    memory = [{'addr': f'buf:tls+{TLS_BELOW:#x}', 'pointer': f'tls+{TLS_BELOW:#x}'},
              {'addr': f'buf:tls+{TLS_BELOW + FLAG_OFFSET:#x}', 'bytes': '00000000'},
              {'addr': hex(FLAG_OFFSET_SLOT), 'bytes': u64(FLAG_OFFSET)},
              {'addr': hex(LOCK_OFFSET_SLOT), 'bytes': u64(LOCK_OFFSET)},
              {'addr': 'buf:list+0x8', 'pointer': 'words'},
              {'addr': 'buf:list+0x10', 'pointer': f'words+{words * WORD:#x}'},
              {'addr': 'buf:list+0x18', 'pointer': f'words+{words * WORD:#x}'}]
    stubs = [{'address': LOCK, 'argc': 1, 'argi': [0], 'ret': hex(lock & 0xffffffff)}]
    if lock == 0 and words <= 127:
        stubs.append({'address': RESERVE, 'argc': 2, 'argi': [0, 1]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:list'},
            'buffers': buffers, 'memory': memory, 'gs': f'buf:tls+{TLS_BELOW:#x}', 'imports': [], 'stubs': stubs}


CASES = [
    case('lock_held_elsewhere', words=3, lock=1),
    case('empty_list_reserves', words=0),
    case('list_of_127_words_reserves', words=127),
    case('list_of_128_words_left_alone', words=128),
]


def main():
    """Write deterministic synthetic reservations to the requested directory."""
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
