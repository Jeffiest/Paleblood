#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic raises for misc_throw_prebuilt_error_02707380 (0x02707380), for tools/verify.py run.

usage: throw_prebuilt_error_02707380_cases.py OUT_DIR

The original loads the address of the prebuilt error object (0x04d40ada) into RDI and calls the throw helper
(0x02fbf1b8), which never returns, so the case ends in that call. The function has no branches and returns nothing.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02707380'
THROW = '0x02fbf1b8'
ERROR_OBJECT = '0x04d40ada'


def case(cid):
    """One raise: the throw helper is stubbed as a call that never returns, with the error object as its argument."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': {},
            'buffers': {}, 'memory': [], 'imports': [],
            'stubs': [{'address': THROW, 'argc': 1, 'argi': [0], 'noreturn': True}]}


CASES = [case('raises_prebuilt_error')]


def main():
    """Write the synthetic raise to the requested directory."""
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
