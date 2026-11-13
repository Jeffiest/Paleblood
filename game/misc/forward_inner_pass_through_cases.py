#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_forward_inner_pass_through (0x013bc560), for tools/verify.py run.

usage: forward_inner_pass_through_cases.py OUT_DIR

The holder carries the inner object pointer at +0x20. With no inner object the routine returns zero and
the original leaves RAX alone, so that case compares no return register. With one, the original tail-jumps
to the inner routine with every argument register passed through unchanged; the stub compares all six
argument slots and returns a fixed value.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013bc560'
INNER_ROUTINE = '0x013beae0'
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, inner=True):
    """One call with the inner pointer set or cleared and distinct values in every argument register."""
    buffers = {'holder': {'size': 0x28, 'bytes': '00' * 0x28}, 'inner': {'size': 0x40, 'bytes': '7e' * 0x40}}
    memory = [{'addr': 'buf:holder+32', 'pointer': 'inner'}] if inner else [
        {'addr': 'buf:holder+32', 'bytes': word(0)}]
    stubs = [{'address': INNER_ROUTINE, 'argc': 6, 'argi': [0, 1, 2, 3, 4, 5], 'ret': 0x5001}] if inner else []
    args = {'rdi': 'buf:holder', 'rsi': hex(0x1111111111111111), 'rdx': hex(0x2222222222222222),
            'rcx': hex(0x3333333333333333), 'r8': hex(0x4444444444444444), 'r9': hex(0x5555555555555555)}
    returns = 'i64' if inner else 'void'
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': returns, 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [case('inner_set'), case('inner_clear', inner=False)]


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
