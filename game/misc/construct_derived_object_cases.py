#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_construct_derived_object (0x00c244a0), for tools/verify.py run.

usage: construct_derived_object_cases.py OUT_DIR

The object is a 16-byte block whose first word the constructor overwrites and whose second word
must stay as it was. The base constructor is stubbed (it changes nothing the case compares), and
the cases cover a zeroed object, one full of ones, and one holding a pointer, all with the same
object address argument.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00c244a0'
BASE_CONSTRUCTOR = '0x00cb46a0'


def case(cid, content):
    """content: the 16 hex bytes the object holds before the call."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:object'},
            'buffers': {'object': {'size': 16, 'bytes': content}},
            'memory': [],
            'imports': [],
            'stubs': [{'address': BASE_CONSTRUCTOR, 'argc': 1, 'ret': 0}]}


CASES = [
    case('object_zeroed', '00' * 16),
    case('object_all_ones', 'ff' * 16),
    case('object_holds_pointer', '1122334455667788' + 'a5' * 8),
    case('object_second_word_kept', '00' * 8 + '5a' * 8),
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
