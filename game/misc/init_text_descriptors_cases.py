#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""The static text descriptor fill at misc_init_text_descriptors (0x00d47a70), for tools/verify.py run.

usage: init_text_descriptors_cases.py OUT_DIR

The function takes no arguments. It calls the record constructor at 0x0081e9b0 twice: first with the record at
0x0584e328, the text at 0x04bc8044, the link at 0x05801a70, size 0x28, six register values and eight stack
slots (zero except the table at 0x0567e2d0 and the kind 2), then with 0x0584e3a8, 0x04bc8081, size 0x30, the
table at 0x0567e320 and kind 6. Each call's stack slots 1, 3, 6 and 7 are 32-bit. Between the two it calls the
marker routine at 0x00836830 with a local record address and flag zero. The descriptors at 0x0584e378 and
0x0584e3f8 are then written with their texts, handlers, vtables and lengths. The function returns nothing: RAX
at the end holds the stack-guard word, so no return value is compared.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x00d47a70'
BUILD_RECORD = '0x0081e9b0'
CLEAR_MARKER = '0x00836830'
GARBAGE = {'rdi': '0x1111111111111111', 'rsi': '0x2222222222222222', 'rdx': '0x3333333333333333',
           'rcx': '0x4444444444444444', 'r8': '0x5555555555555555', 'r9': '0x6666666666666666'}
# Stack slots 1, 3, 6 and 7 are stored as 32-bit values, so only their low dwords are compared.
RECORD_STUB = {'address': BUILD_RECORD, 'argc': 14, 'argi': [0, 1, 2, 3, 4, 5, 6, 8, 10, 11],
               'argu32': [7, 9, 12, 13]}
MARKER_STUB = {'address': CLEAR_MARKER, 'argc': 2, 'argi': [1]}


def case(cid, registers=None):
    """One call; the constructors and the marker routine are stubbed in call order."""
    args = dict(GARBAGE if registers is None else registers)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': {'marker': {'size': 8, 'bytes': '00' * 8}},
            'memory': [], 'imports': [],
            'stubs': [dict(RECORD_STUB), dict(RECORD_STUB), dict(MARKER_STUB)]}


CASES = [
    case('fill_both_descriptors'),
    case('registers_zero', registers={k: '0x0' for k in GARBAGE}),
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
