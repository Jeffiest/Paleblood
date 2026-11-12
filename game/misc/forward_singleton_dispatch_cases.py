#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic calls for misc_forward_singleton_dispatch (0x02b4ca90), for tools/verify.py run.

usage: forward_singleton_dispatch_cases.py OUT_DIR

The singleton global at 0x05ac7520 is null, or already built, or points at a fake object whose
slot 0x10 clears the global, so the second build runs too. The built singleton uses the game's
vtable from the executable (its slots 0x10, 0x18 and 0x60 are real entries, stubbed here). Covers
the fast path, the first build with the guard set or clear, and a second build after a slot 0x10
call that clears the global, with the guard set or clear and the pending flag set or clear.
"""
import json
from pathlib import Path
import sys

ADDRESS = '0x02b4ca90'
G1, FLAG, GUARD, STORAGE = '0x05ac7520', '0x05ac7528', '0x05ac7580', '0x05ac7530'
EMPTY, ACQUIRE, RELEASE, CTOR = '0x024ede50', '0x02fbe538', '0x02fbe558', '0x024b6d00'
ELF_SLOT_10, ELF_SLOT_18, ELF_TAIL = '0x02b4cf40', '0x02b4cf50', '0x024b7660'
FAKE_SLOT_10, FAKE_SLOT_18, FAKE_TAIL = '0x00400020', '0x004000a0', '0x00400300'
MASK64 = (1 << 64) - 1

# A branch the real game never takes: the lazy set-up at 0x024ede50 writes 0x05aa5720 and its
# neighbours, never the singleton global, so the re-read after it stays null.
UNREACHABLE = {
    '0x02b4cad0': ('taken', 'the call at 0x024ede50 never sets the singleton at 0x05ac7520, so the re-read stays null'),
    '0x02b4cb75': ('taken', 'the call at 0x024ede50 never sets the singleton at 0x05ac7520, so the re-read stays null'),
}


def stub(address, argc, ret=None, writes=None):
    """One scripted call; the return value is optional for calls whose result the caller ignores."""
    entry = {'address': address, 'argc': argc}
    if ret is not None:
        entry['ret'] = hex(ret & MASK64)
    if writes:
        entry['writes'] = writes
    return entry


def base(cid, memory, stubs, flag, guard_bytes=None):
    """A case with the holder buffer and the fake service buffers; flag and guard are set in the image."""
    mem = list(memory)
    mem.append({'addr': FLAG, 'bytes': f'{flag:02x}'})
    if guard_bytes is not None:
        mem.append({'addr': GUARD, 'bytes': f'{guard_bytes:02x}'})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder'},
            'buffers': {'holder': {'size': 0x10}, 'service': {'size': 0x50}, 'service_vt': {'size': 0x78}},
            'memory': mem, 'imports': [], 'stubs': stubs}


def build_stubs(acquire_ret, guard_clear, released=False):
    """The calls of a first build: the lazy set-up, the guard pair if the guard is clear, the constructor."""
    calls = [stub(EMPTY, 0)]
    if guard_clear:
        calls.append(stub(ACQUIRE, 1, ret=acquire_ret))
        if acquire_ret != 0:
            calls.append(stub(RELEASE, 1))
    calls.append(stub(CTOR, 1))
    return calls


def fast_case():
    """The singleton is already built: both slot calls and the tail call go to fake routines."""
    memory = [{'addr': G1, 'pointer': 'service'},
              {'addr': 'buf:service+0', 'pointer': 'service_vt'},
              {'addr': 'buf:service_vt+0x10', 'guest': FAKE_SLOT_10},
              {'addr': 'buf:service_vt+0x18', 'guest': FAKE_SLOT_18},
              {'addr': 'buf:service_vt+0x60', 'guest': FAKE_TAIL}]
    stubs = [stub(FAKE_SLOT_10, 1, ret=0x5555), stub(FAKE_SLOT_18, 1, ret=0x6666),
             stub(FAKE_TAIL, 4, ret=0x7777)]
    return base('built_singleton_fast_path', memory, stubs, flag=0x00)


def first_build_case(cid, acquire_ret, guard, flag):
    """The singleton is null: the first build runs; the new singleton's slots are the game's own."""
    memory = [{'addr': G1, 'bytes': '00' * 8}]
    stubs = build_stubs(acquire_ret, guard_clear=(guard == 0))
    stubs += [stub(ELF_SLOT_10, 1, ret=0x2222), stub(ELF_SLOT_18, 1, ret=0x3333),
              stub(ELF_TAIL, 4, ret=0x4444)]
    return base(cid, memory, stubs, flag=flag, guard_bytes=guard)


def rebuild_case(cid, acquire_ret, guard, flag):
    """The singleton is set when the first slot runs, and its call clears the global (so the second
    build runs). The guard byte is the low byte of the slot 0x60 pointer until the call writes it,
    so the stub writes the guard value the case wants; the tail routine is a fake one."""
    clear_global = {'arg': 0, 'offset': 0, 'bytes': '00' * 8}
    set_guard = {'arg': 0, 'offset': 0x60, 'bytes': f'{guard:02x}'}
    memory = [{'addr': G1, 'guest': G1},
              {'addr': STORAGE, 'guest': FAKE_SLOT_10},
              {'addr': GUARD, 'guest': FAKE_TAIL},
              {'addr': FLAG, 'bytes': f'{flag:02x}'}]
    stubs = [stub(FAKE_SLOT_10, 1, ret=0x1111, writes=[clear_global, set_guard])]
    stubs += build_stubs(acquire_ret, guard_clear=(guard == 0))
    stubs += [stub(ELF_SLOT_18, 1, ret=0x3333), stub(FAKE_TAIL, 4, ret=0x7777)]
    case = {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder'},
            'buffers': {'holder': {'size': 0x10}},
            'memory': memory, 'imports': [], 'stubs': stubs}
    return case


CASES = [
    fast_case(),
    first_build_case('first_build_guard_clear_acquire_fails', 0, 0, 1),
    first_build_case('first_build_guard_clear_acquire_succeeds', 1, 0, 0),
    first_build_case('first_build_guard_set', 0, 1, 0),
    rebuild_case('rebuild_guard_clear_acquire_fails', 0, 0, 0),
    rebuild_case('rebuild_guard_clear_acquire_succeeds', 1, 0, 1),
    rebuild_case('rebuild_guard_set', 0, 1, 0),
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
