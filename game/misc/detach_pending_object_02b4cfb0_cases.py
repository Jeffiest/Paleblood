#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic detaches for misc_detach_pending_object_02b4cfb0 (0x02b4cfb0), for tools/verify.py run.

usage: detach_pending_object_02b4cfb0_cases.py OUT_DIR

The list head holds a chain of nodes and a pending object. The shared singleton (global 0x05ac7520) is
taken first, built when it is null. A chain that holds the singleton detaches the pending object: its slot 0
runs, then the target's slot 0x70 (or, without a target, the object 0x0247b720 returns for the pending object)
runs and its result is returned. Without a pending object nothing runs. Cases expect void where the original
leaves RAX as the caller had it (no detach), and an i64 result where the slot 0x70 routine supplies it.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b4cfb0'
G1, FLAG, GUARD = '0x05ac7520', '0x05ac7528', '0x05ac7580'
LAZY_SETUP, GUARD_ACQUIRE, GUARD_RELEASE, CONSTRUCT = '0x024ede50', '0x02fbe538', '0x02fbe558', '0x024b6d00'
OWNER_LOOKUP = '0x0247b720'
SLOT_00, SLOT_70 = '0x00400020', '0x004000a0'
MASK64 = (1 << 64) - 1
RESULT = 0x1357

# The lazy set-up at 0x024ede50 writes other globals, never the singleton, so the re-read stays null.
UNREACHABLE = {
    '0x02b4cff5': ('taken', 'the call at 0x024ede50 never sets the singleton at 0x05ac7520, so the re-read stays null'),
}

BUFFERS = {'list': {'size': 0x10}, 'pending': {'size': 0x10}, 'pending_vt': {'size': 0x78},
           'target': {'size': 0x10}, 'target_vt': {'size': 0x78},
           'made': {'size': 0x10}, 'made_vt': {'size': 0x78},
           'node1': {'size': 0x10}, 'node2': {'size': 0x10}, 'service': {'size': 0x50}}


def stub(address, argc, ret=None):
    """One scripted call; the return value is given when the caller reads it."""
    entry = {'address': address, 'argc': argc}
    if ret is not None:
        entry['ret'] = ret if isinstance(ret, str) else hex(ret & MASK64)
    return entry


def fake_vtables():
    """The vtables of the pending object, the target and the object the owner lookup returns."""
    return [{'addr': 'buf:pending+0', 'pointer': 'pending_vt'},
            {'addr': 'buf:pending_vt+0', 'guest': SLOT_00},
            {'addr': 'buf:target+0', 'pointer': 'target_vt'},
            {'addr': 'buf:target_vt+0x70', 'guest': SLOT_70},
            {'addr': 'buf:made+0', 'pointer': 'made_vt'},
            {'addr': 'buf:made_vt+0x70', 'guest': SLOT_70}]


def chain(first=None, second=None):
    """The list head and node links: the head points at first, first's link is second, second's link is null."""
    head = {'addr': 'buf:list+0', 'pointer': first} if first else {'addr': 'buf:list+0', 'bytes': '00' * 8}
    mem = [head]
    if first and second:
        mem.append({'addr': f'buf:{first}+8', 'pointer': second})
    elif first:
        mem.append({'addr': f'buf:{first}+8', 'bytes': '00' * 8})
    if second:
        mem.append({'addr': 'buf:node2+8', 'bytes': '00' * 8})
    return mem


def case(cid, links, target=False, pending=True, singleton=None, flag=0, guard=0, result=None, extra=(), stubs=()):
    """One call. links is the chain (chain()); singleton is None for the built-in service buffer, or the
    bytes of a null singleton; result None means the original's RAX is not compared (no detach)."""
    memory = list(fake_vtables()) + list(links) + list(extra)
    memory.append({'addr': 'buf:list+8', 'pointer': 'pending'} if pending else {'addr': 'buf:list+8', 'bytes': '00' * 8})
    memory.append({'addr': FLAG, 'bytes': f'{flag:02x}'})
    memory.append({'addr': GUARD, 'bytes': f'{guard:02x}'})
    if singleton is None:
        memory.append({'addr': G1, 'pointer': 'service'})
    else:
        memory.append({'addr': G1, 'bytes': singleton})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void' if result is None else 'i64',
            'args': {'rdi': '0x0', 'rsi': 'buf:list', 'rdx': 'buf:target' if target else '0x0'},
            'buffers': dict(BUFFERS), 'memory': memory, 'imports': [], 'stubs': list(stubs)}


def build_stubs(acquire_ret, guard_clear):
    """The calls of a first build of the singleton."""
    calls = [stub(LAZY_SETUP, 0)]
    if guard_clear:
        calls.append(stub(GUARD_ACQUIRE, 1, ret=acquire_ret))
        if acquire_ret != 0:
            calls.append(stub(GUARD_RELEASE, 1))
    calls.append(stub(CONSTRUCT, 1))
    return calls


def detach_stubs(owner_lookup):
    """The calls of a detach: the owner lookup (when there is no target), the pending slot 0, the slot 0x70 routine."""
    calls = [stub(OWNER_LOOKUP, 1, ret='buf:made')] if owner_lookup else []
    return calls + [stub(SLOT_00, 1), stub(SLOT_70, 2, ret=RESULT)]


NULL_SINGLETON = '00' * 8

CASES = [
    case('no_pending_object', chain('node1', 'node2'), pending=False),
    case('empty_chain_no_target', chain()),
    case('empty_chain_with_target', chain(), target=True),
    case('chain_without_singleton_with_target', chain('node1', 'node2'), target=True),
    case('chain_without_singleton_no_target', chain('node1', 'node2')),
    case('singleton_first_with_target', chain('service'), target=True, result=RESULT,
         stubs=detach_stubs(owner_lookup=False)),
    case('singleton_second_no_target', chain('node1', 'service'), result=RESULT,
         stubs=detach_stubs(owner_lookup=True)),
    case('build_guard_clear_acquire_fails', chain(), target=True, singleton=NULL_SINGLETON, flag=1, guard=0,
         stubs=build_stubs(0, True)),
    case('build_guard_clear_acquire_succeeds', chain('node1', 'node2'), singleton=NULL_SINGLETON, flag=0, guard=0,
         stubs=build_stubs(1, True)),
    case('build_guard_set', chain(), singleton=NULL_SINGLETON, flag=0, guard=1,
         stubs=build_stubs(0, False)),
]


def main():
    """Write deterministic synthetic detaches to the requested directory."""
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
