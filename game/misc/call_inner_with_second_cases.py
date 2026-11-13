#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_call_inner_with_second (0x013bc610), for tools/verify.py run.

usage: call_inner_with_second_cases.py OUT_DIR

The routine returns zero explicitly when the second argument is zero or the holder has no inner object.
With both present it calls the inner routine with the inner object and the second argument (the stub
compares both and returns a fixed value), then returns that value.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013bc610'
INNER_CALL = '0x013bdb70'
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, second=0x1234567890abcdef, inner=True):
    """One call with the second argument and the inner pointer set or cleared."""
    buffers = {'holder': {'size': 0x28, 'bytes': '00' * 0x28}, 'inner': {'size': 0x40, 'bytes': '7e' * 0x40}}
    memory = [{'addr': 'buf:holder+32', 'pointer': 'inner'}] if inner else [
        {'addr': 'buf:holder+32', 'bytes': word(0)}]
    taken = second != 0 and inner
    stubs = [{'address': INNER_CALL, 'argc': 2, 'argi': [0, 1], 'ret': 0x8001}] if taken else []
    args = {'rdi': 'buf:holder', 'rsi': hex(second)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('second_and_inner_set'),
    case('second_zero', second=0),
    case('inner_clear', inner=False),
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
