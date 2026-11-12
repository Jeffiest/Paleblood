#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic calls for misc_release_chain_member_02b50b80 (0x02b50b80), for tools/verify.py run.

usage: release_chain_member_cases.py OUT_DIR

The holder has a chain (its first object, or null) and an object (or null). The pair singleton is built
now, already built, or not built with the guard set or clear. The target is null (the wrap routine makes one)
or a buffer whose slot 0x70 is stubbed. Covers each branch: no object, a chain that reaches the singleton or
not, a null or given target, and the first build with the guard set or clear.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b50b80'
INSTANCE, PENDING, GUARD, STORAGE = '0x05ac7600', '0x05ac7608', '0x05ac7660', '0x05ac7610'
LAZY_SETUP, GUARD_ACQUIRE, GUARD_RELEASE, CONSTRUCT = '0x024ede50', '0x02fbe538', '0x02fbe558', '0x024b6d00'
WRAP = '0x0247b720'
SLOT_00 = '0x00400020'
SLOT_70 = '0x004000a0'
MASK64 = (1 << 64) - 1
STORAGE_BYTES = (0x05ac7610).to_bytes(8, 'little').hex()

# After the lazy set-up at 0x024ede50 the singleton global stays null, so the re-read cannot be set.
UNREACHABLE = {
    '0x02b50bc5': ('taken', 'the call at 0x024ede50 never sets the singleton at 0x05ac7600, so the re-read stays null'),
}


def stub(address, argc, ret=None):
    """One scripted call, with its return value when the caller reads it."""
    entry = {'address': address, 'argc': argc}
    if ret is not None:
        entry['ret'] = ret if isinstance(ret, str) else hex(ret & MASK64)
    return entry


def case(cid, stubs, memory=(), chain_hex='00' * 8, rdx=None, pending=0, guard=0, instance_set=True,
         extra_buffers=None):
    """One call: rsi is the holder, rdx the target (null or a buffer), rdi unused."""
    args = {'rdi': '0x0', 'rsi': 'buf:holder', 'rdx': '0x0' if rdx is None else 'buf:target'}
    buffers = {
        'holder': {'size': 0x10, 'bytes': chain_hex + '00' * 8},
        'object': {'size': 0x10, 'bytes': '00' * 0x10},
        'object_vt': {'size': 0x08, 'bytes': '00' * 0x08},
        'target': {'size': 0x10, 'bytes': '00' * 0x10},
        'target_vt': {'size': 0x78, 'bytes': '00' * 0x78},
        'singleton': {'size': 0x50, 'bytes': '00' * 0x50},
        'other': {'size': 0x10, 'bytes': '00' * 0x10},
        'made_vt': {'size': 0x78, 'bytes': '00' * 0x78},
        'made': {'size': 0x10, 'bytes': '00' * 0x10},
    }
    if extra_buffers:
        buffers.update(extra_buffers)
    mem = [{'addr': 'buf:object+0', 'pointer': 'object_vt'},
           {'addr': 'buf:object_vt+0', 'guest': SLOT_00},
           {'addr': 'buf:target+0', 'pointer': 'target_vt'},
           {'addr': 'buf:target_vt+0x70', 'guest': SLOT_70},
           {'addr': 'buf:made+0', 'pointer': 'made_vt'},
           {'addr': 'buf:made_vt+0x70', 'guest': SLOT_70},
           {'addr': PENDING, 'bytes': f'{pending:02x}'},
           {'addr': GUARD, 'bytes': f'{guard:02x}'}]
    if instance_set:
        mem.append({'addr': INSTANCE, 'pointer': 'singleton'})
    mem += list(memory)
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'void', 'args': args,
            'buffers': buffers, 'memory': mem, 'imports': [], 'stubs': stubs}


def object_set(chain_memory=(), extra=()):
    """The holder's object word points at the object buffer; the chain is given by memory entries."""
    return [{'addr': 'buf:holder+8', 'pointer': 'object'}] + list(chain_memory) + list(extra)


def build_stubs(acquire_ret, guard_clear):
    """The calls of a first build: lazy set-up, the guard pair if the guard is clear, the constructor."""
    calls = [stub(LAZY_SETUP, 0)]
    if guard_clear:
        calls.append(stub(GUARD_ACQUIRE, 1, ret=acquire_ret))
        if acquire_ret != 0:
            calls.append(stub(GUARD_RELEASE, 1))
    calls.append(stub(CONSTRUCT, 1))
    return calls


def object_calls():
    """The object's slot 0 runs on the found object."""
    return [stub(SLOT_00, 1)]


def target_calls():
    """The target's slot 0x70 takes the found object."""
    return [stub(SLOT_70, 2)]


CASES = [
    case('object_null_returns', [], instance_set=False),
    case('chain_empty_target_null', [], memory=object_set(), instance_set=True),
    case('chain_without_singleton_target_given', [], rdx=True,
         memory=object_set([{'addr': 'buf:holder+0', 'pointer': 'other'}])),
    case('chain_singleton_target_given', object_calls() + target_calls(), rdx=True,
         memory=object_set([{'addr': 'buf:holder+0', 'pointer': 'singleton'}])),
    case('chain_singleton_target_null_wrapped', [stub(WRAP, 1, ret='buf:made')] + object_calls() +
         [stub(SLOT_70, 2)],
         memory=object_set([{'addr': 'buf:holder+0', 'pointer': 'singleton'}])),
    case('chain_second_node_is_singleton', object_calls() + target_calls(), rdx=True,
         memory=object_set([{'addr': 'buf:holder+0', 'pointer': 'other'},
                            {'addr': 'buf:other+8', 'pointer': 'singleton'}])),
    case('chain_without_singleton_target_null', [],
         memory=object_set([{'addr': 'buf:holder+0', 'pointer': 'other'}])),
    case('first_build_guard_clear_acquire_fails_no_singleton_in_chain', build_stubs(0, True),
         memory=object_set(), instance_set=False, pending=1, guard=0),
    case('first_build_guard_clear_acquire_succeeds_no_singleton_in_chain', build_stubs(1, True),
         memory=object_set(), instance_set=False, pending=0, guard=0),
    case('first_build_guard_set_target_null', build_stubs(0, False), memory=object_set(),
         instance_set=False, pending=0, guard=1),
]


def main():
    """Write deterministic synthetic calls to the requested directory."""
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
