#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic counted handles for misc_unpack_and_release (0x0040b4e0): an unpack that succeeds or
fails, a block with several references or only one, a block whose count is already zero, and a
handle whose tag bits are set.

usage: unpack_and_release_cases.py OUT_DIR
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x0040b4e0'
READ_HANDLE = '0x0045c700'
UNPACK = '0x00465400'
DESTROY_DISPATCH = '0x00400f00'
DISPATCH_ADDRESS = '0x057e7320'
MASK64 = (1 << 64) - 1


def case(cid, ok=True, unpacked=0x77, count=2, tag=0x3):
    """One call. The handle stub is given the text of the second argument and writes the block
    address with the tag bits set; the unpack stub fills its three words (the value first) and
    returns ok. The dispatcher is called only when the count was one."""
    stubs = [{'address': READ_HANDLE, 'argc': 2, 'writes': [{'arg': 0, 'pointer': f'block+{tag}',
                                                             'offset': 0}]},
             {'address': UNPACK, 'argc': 2, 'ret': 1 if ok else 0,
              'writes': [{'arg': 0, 'bytes': struct.pack('<Q', unpacked & MASK64).hex() + 'b1' * 8 + 'c2' * 8}]}]
    if count == 1:
        stubs.append({'address': DESTROY_DISPATCH, 'argc': 2})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': {'rdi': '0x5a5a5a5a', 'rsi': 'buf:text'},
            'buffers': {'text': {'size': 0x10, 'bytes': '61622e63' + '00' * 0xc},
                        'block': {'size': 0x20,
                                  'bytes': '00' * 8 + struct.pack('<I', count & 0xffffffff).hex() + '00' * 0x14},
                        'disp': {'size': 0x8},
                        'dvt': {'size': 0x80}},
            'memory': [{'addr': DISPATCH_ADDRESS, 'pointer': 'disp'},
                       {'addr': 'buf:disp', 'pointer': 'dvt'},
                       {'addr': 'buf:dvt+104', 'guest': DESTROY_DISPATCH}],
            'stubs': stubs, 'imports': []}


CASES = [
    case('ok_several_references'),
    case('ok_last_reference', count=1),
    case('failed_several_references', ok=False),
    case('failed_last_reference', ok=False, count=1),
    case('zero_count_no_dispatch', count=0),
    case('untagged_handle', tag=0x0, count=1),
    case('unpacked_all_ones', unpacked=MASK64),
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
