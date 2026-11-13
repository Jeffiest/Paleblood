#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_visit_list_payloads (0x013bc580), for tools/verify.py run.

usage: visit_list_payloads_cases.py OUT_DIR

The list holds its sentinel at +0x08; the sentinel's first word is the first node and each node's first
word is the next node, with the payload at +0x10. A payload's first word is its vtable, whose slot at
0x18 points at a real game entry that the case stubs and that receives the payload and the argument.
Covers an empty list, one payload, one node without a payload, and a mix of both. The routine returns
nothing.
"""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x013bc580'
VISIT = '0x00400300'
MASK64 = (1 << 64) - 1


def word(value):
    """Encode a complete eight-byte value."""
    return struct.pack('<Q', value & MASK64).hex()


def case(cid, payloads, argument=0x0123456789abcdef):
    """One call on a list whose nodes carry a payload or none, in the order given."""
    buffers = {'list': {'size': 0x10, 'bytes': '00' * 0x10},
               'sentinel': {'size': 0x18, 'bytes': '00' * 0x18}}
    memory = [{'addr': 'buf:list+8', 'pointer': 'sentinel'}]
    names = [f'node{i}' for i in range(len(payloads))]
    for name in names:
        buffers[name] = {'size': 0x18, 'bytes': '00' * 0x18}
    memory.append({'addr': 'buf:sentinel+0', 'pointer': names[0] if names else 'sentinel'})
    stubs = []
    for i, name in enumerate(names):
        following = names[i + 1] if i + 1 < len(names) else 'sentinel'
        memory.append({'addr': f'buf:{name}+0', 'pointer': following})
        if payloads[i]:
            payload = f'payload{i}'
            vtable = f'vtable{i}'
            buffers[payload] = {'size': 0x20, 'bytes': '00' * 0x20}
            buffers[vtable] = {'size': 0x30, 'bytes': '00' * 0x30}
            memory.append({'addr': f'buf:{payload}+0', 'pointer': vtable})
            memory.append({'addr': f'buf:{vtable}+24', 'guest': VISIT})
            memory.append({'addr': f'buf:{name}+16', 'pointer': payload})
            stubs.append({'address': VISIT, 'argc': 2, 'argi': [0, 1]})
        else:
            memory.append({'addr': f'buf:{name}+16', 'bytes': word(0)})
    args = {'rdi': 'buf:list', 'rsi': hex(argument)}
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': memory, 'imports': [], 'stubs': stubs}


CASES = [
    case('empty_list', []),
    case('one_payload', [True]),
    case('one_without_payload', [False]),
    case('mixed_nodes', [True, False, True]),
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
