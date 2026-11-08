#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic StreamSet inputs: every combination of empty and open streams, with any close status."""
import json
from pathlib import Path
import sys

ADDRESS = '0x02e67d20'
CLOSE_STREAM = '0x02fbe7b8'
STREAM_VALUES = [0x1111222233334444, 0x5555666677778888, 0x99990000aaaabbbb]


def field_bytes(values):
    return ''.join(value.to_bytes(8, 'little').hex() for value in values)


def case(cid, present, status=0):
    """`present[i]` says whether stream i is open; the opaque stream values are never dereferenced."""
    values = [STREAM_VALUES[i] if present[i] else 0 for i in range(3)]
    # The original closes from the last field to the first.
    stubs = [{'address': CLOSE_STREAM, 'argc': 1, 'ret': hex(status)} for i in (2, 1, 0) if present[i]]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void',
            'args': {'rdi': 'buf:set'},
            'buffers': {'set': {'size': 0x18, 'bytes': field_bytes(values)},
                        'after': {'size': 8, 'bytes': 'cdcdcdcdcdcdcdcd'}},
            'imports': [], 'stubs': stubs}


CASES = []
for bits in range(8):
    present = [(bits >> i) & 1 == 1 for i in range(3)]
    CASES.append(case('streams_' + ''.join('1' if p else '0' for p in present), present))
CASES += [case('close_error_ignored', [True, True, True], status=0xffffffff),
          case('close_eof_ignored', [True, False, True], status=0xffffffffffffffff),
          case('close_positive_ignored', [False, True, False], status=7)]


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
