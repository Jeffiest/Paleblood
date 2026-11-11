#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic keyed slot caches for the guard check that copies a word out (0x01e886c0): a held block, a first flag
that is clear, a second flag that is set, and the ordinary state. The guard reports return, so the routine goes on
and copies the word.

usage: check_guards_copy_word_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x01e886c0'
CACHE_SIZE = 0x14040
HELD = 0x14028
FLAG_FIRST = 0x14030
FLAG_SECOND = 0x14031
FATAL = '0x024b55b0'         # the engine's fatal report; it returns in the harness


def case(cid, source_word, held=False, first=1, second=0):
    """A cache with the given guard state, the word the routine copies, and an output word. The reports are stubbed;
    the routine returns the output."""
    memory = [{'addr': f'buf:cache+{FLAG_FIRST:#x}', 'bytes': f'{first:02x}'},
              {'addr': f'buf:cache+{FLAG_SECOND:#x}', 'bytes': f'{second:02x}'}]
    if held:
        memory.append({'addr': f'buf:cache+{HELD:#x}', 'pointer': 'held'})
    reports = int(held) + int(first == 0) + int(second != 0)
    stubs = [{'address': FATAL, 'argc': 6} for _ in range(reports)]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:output', 'rsi': 'buf:cache', 'rdx': 'buf:source',
                     'rcx': '0x0', 'r8': '0x0', 'r9': '0x0'},
            'buffers': {'output': {'size': 0x10},
                        'source': {'size': 0x08, 'bytes': struct.pack('<I', source_word).hex()},
                        'cache': {'size': CACHE_SIZE},
                        'held': {'size': 0x40}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('ordinary_state_copies_word', 0x12345678),
    case('held_block_reported', 0xdeadbeef, held=True),
    case('first_flag_clear_reported', 0x0badf00d, first=0),
    case('second_flag_set_reported', 0xffffffff, second=1),
    case('all_reports_zero_word', 0x0, held=True, first=0, second=1),
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
