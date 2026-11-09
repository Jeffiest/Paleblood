#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic one-time flushes for misc_flush_owner_once (0x026f0530): a flush that already ran, one
with nothing to flush, and one with the flusher, the locator or both set.

usage: flush_owner_once_cases.py OUT_DIR
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x026f0530'
FLUSHER_CALL = '0x00400040'
LOCATE = '0x0122ee60'
FLUSH = '0x02ab5f50'
FINISH = '0x02aaf700'
OWNER_SIZE = 0x13c8
FLUSHER_SLOT = 0x13b0
LOCATOR_SLOT = 0x13b8
DONE = 0x13c0
FLUSHER_LINK = 0x60
HOLDER_SINK = 0x08
MASK64 = (1 << 64) - 1


def case(cid, done, flusher, locator):
    """One flush: the owner holds the flusher and the locator when they are set, and the holder's sink.
    The flusher's virtual table slot is a stubbed game function; the locator returns the second source.
    The flush routine takes the sink, the source's item and the target's slot, then the sink's finisher."""
    memory = [{'addr': 'buf:holder+%d' % HOLDER_SINK, 'pointer': 'sink'}]
    stubs = []
    if done:
        memory.append({'addr': 'buf:owner+%d' % DONE, 'bytes': '01'})
        return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
                'args': {'rdi': 'buf:owner', 'rsi': 'buf:holder'},
                'buffers': base_buffers(), 'memory': memory, 'stubs': [], 'imports': []}
    if flusher:
        memory.append({'addr': 'buf:owner+%d' % FLUSHER_SLOT, 'pointer': 'flusher'})
        memory.append({'addr': 'buf:flusher', 'pointer': 'flusher_vt'})
        memory.append({'addr': 'buf:flusher+%d' % FLUSHER_LINK, 'pointer': 'link'})
        memory.append({'addr': 'buf:link', 'pointer': 'source1'})
        memory.append({'addr': 'buf:flusher_vt+64', 'guest': FLUSHER_CALL})
        memory.append({'addr': 'buf:source1+8', 'pointer': 'target1'})
        stubs.append({'address': FLUSHER_CALL, 'argc': 1, 'argi': [0], 'ret': 0})
        stubs.append({'address': FLUSH, 'argc': 5, 'argi': [0, 1, 2, 3, 4], 'argf32': [0], 'ret': 0})
        stubs.append({'address': FINISH, 'argc': 1, 'argi': [0], 'ret': 0})
    if locator:
        memory.append({'addr': 'buf:owner+%d' % LOCATOR_SLOT, 'pointer': 'locator'})
        memory.append({'addr': 'buf:source2+8', 'pointer': 'target2'})
        stubs.append({'address': LOCATE, 'argc': 2, 'argi': [0, 1], 'ret': 'buf:source2'})
        stubs.append({'address': FLUSH, 'argc': 5, 'argi': [0, 1, 2, 3, 4], 'argf32': [0], 'ret': 0})
        stubs.append({'address': FINISH, 'argc': 1, 'argi': [0], 'ret': 0})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:owner', 'rsi': 'buf:holder'},
            'buffers': base_buffers(), 'memory': memory, 'stubs': stubs,
            'imports': []}


def base_buffers():
    """The buffers every flush uses."""
    return {'owner': {'size': OWNER_SIZE}, 'holder': {'size': 0x20}, 'sink': {'size': 0x20},
            'flusher': {'size': 0x80}, 'flusher_vt': {'size': 0x48}, 'link': {'size': 8},
            'source1': {'size': 0x20}, 'source2': {'size': 0x20},
            'target1': {'size': 0x20}, 'target2': {'size': 0x20},
            'locator': {'size': 0x20}}


CASES = [
    case('already_done', True, False, False),
    case('nothing_to_flush', False, False, False),
    case('flusher_only', False, True, False),
    case('locator_only', False, False, True),
    case('flusher_and_locator', False, True, True),
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
