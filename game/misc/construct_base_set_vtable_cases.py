#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_construct_base_set_vtable (0x013bc1d0), for tools/verify.py run.

usage: construct_base_set_vtable_cases.py OUT_DIR

The object's first word is the vtable pointer. The base construction stub receives the object and
leaves it alone; the routine then stores the derived table address (0x056f3d20) in that word. The
routine has no branch, so one case covers it with an object whose words are set to a sentinel. The
routine returns nothing, and the caller does not read the register it leaves.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x013bc1d0'
BASE_CONSTRUCT = '0x013e5c10'


def case(cid):
    """One call on a zeroed object block with a sentinel in the vtable word."""
    buffers = {'obj': {'size': 0x40, 'bytes': 'c3' * 0x40}}
    stubs = [{'address': BASE_CONSTRUCT, 'argc': 1, 'argi': [0]}]
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {'rdi': 'buf:obj'},
            'buffers': buffers, 'memory': [], 'imports': [], 'stubs': stubs}


CASES = [case('object_constructed')]


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
