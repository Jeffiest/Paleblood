#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_assign_text_from_node20 (0x00418e90), for tools/verify.py run.

usage: assign_text_from_node20_cases.py OUT_DIR

The source's node sits at +0x40; its tagged word at +0x48 is untagged (low two bits cleared), moved by 0x0c
and resolved by 0x00454060 to a text address, which 0x0045c700 assigns to the target. The target is returned.
"""
import json
import struct
import sys
from pathlib import Path

ADDRESS = '0x00418e90'
RESOLVE, ASSIGN = '0x00454060', '0x0045c700'
NODE_OFFSET = 0x20
SOURCE_SIZE = 0x28
NODE_SIZE = 0x50
TAG_OFFSET = 0x48
MASK64 = (1 << 64) - 1


def case(cid, tagged, text_ret='buf:text'):
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:target', 'rsi': 'buf:source'},
            'buffers': {'target': {'size': 0x10, 'bytes': 'a5' * 0x10},
                        'source': {'size': SOURCE_SIZE, 'bytes': '5a' * SOURCE_SIZE},
                        'node': {'size': NODE_SIZE, 'bytes': '3c' * NODE_SIZE},
                        'text': {'size': 0x40, 'bytes': '6b' * 0x40}},
            'memory': [{'addr': 'buf:source+' + str(NODE_OFFSET), 'pointer': 'node'},
                       {'addr': 'buf:node+' + str(TAG_OFFSET), 'bytes': struct.pack('<Q', tagged & MASK64).hex()}],
            'stubs': [{'address': RESOLVE, 'argc': 1, 'argi': [0], 'ret': text_ret},
                      {'address': ASSIGN, 'argc': 2, 'argi': [0, 1]}],
            'imports': []}


CASES = [
    case('tag_bits_clear', tagged=0x70001000),
    case('tag_bits_all_set', tagged=0x7000100f),
    case('tag_bit_one_only', tagged=0x70001001),
    case('high_address_bits', tagged=0xabcdef0000000002),
    case('zero_word_gives_record_offset', tagged=0),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: assign_text_from_node20_cases.py OUT_DIR', file=sys.stderr)
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
