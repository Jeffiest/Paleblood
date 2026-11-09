#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic chains for the chain search (0x00406450): the head's test and its blocked word, the visitor,
the search flag on each entry, the mode byte (zero, set, and set only above the low byte), each entry's
element index and probe, its child and the spare child's probe, and a target that is a chain entry or not.
Each entry's probe and child are scripted per entry so that every stub is called once per visit."""
import json
from pathlib import Path
import struct
import sys

ADDRESS = '0x00406450'
MASK64 = (1 << 64) - 1
NODE_SIZE = 0x80
VTABLE_SIZE = 0x3f8
SUB_SIZE = 0x18
PROBE_SIZE = 0x08
PROBE_VTABLE_SIZE = 0x70
VISITOR_SIZE = 0x40
ENTRY_VTABLE_CAN = 0x1e0
ENTRY_VTABLE_CHILD = 0x3f0
SUB_PROBE = 0x10
PROBE_ACCEPT = 0x68
VISITOR_VISIT = 0x38
HEAD_NEXT = 0x38
HEAD_BLOCKED = 0x68
FLAGS = 0x6b
ELEMENT = 0x6d
KEY_STUB = '0x00402c60'
CAN = '0x00500400'
VISIT = '0x00500420'
SPARE = 'spare'
NODE_COUNT = 3


def guest(kind, index):
    """Guest address of one scripted method: kind 0 child, 1 probe, 2 accept for entry `index`."""
    if index == SPARE:
        base = 0x00500500
    else:
        base = 0x00500440 + 0x40 * index
    return hex(base + 0x10 * kind)


def word(value):
    return struct.pack('<H', value & 0xffff).hex()


def nd(linked=True, idx=2, accept=True, child=False, flags=None):
    """One chain entry: linked or not, its element index, whether its probe accepts, and whether its child exists."""
    if flags is None:
        flags = 0x04 if linked else 0x00
    return {'linked': linked, 'idx': idx, 'accept': accept, 'child': child, 'flags': flags}


def simulate(spec, calls):
    """Records the rets of each scripted call in order, following the original's control flow."""
    def record(address, ret):
        calls.setdefault(address, []).append(ret)

    record(CAN, 1 if spec['can'] else 0)
    if not spec['can']:
        return None
    record(KEY_STUB, 0)
    if spec['blocked']:
        return None
    record(VISIT, 1 if spec['visit'] else 0)
    if not spec['visit']:
        return None
    for i, node in enumerate(spec['nodes']):
        if not node['linked']:
            return None
        is_target = spec['target'] == f'n{i}'
        if (spec['mode'] & 0xff) != 0:
            if not is_target:
                return f'n{i}'
            continue
        if node['idx'] != 0:
            record(guest(1, i), f'buf:n{i}_probe')
            record(guest(2, i), 1 if node['accept'] else 0)
            if node['accept']:
                if not is_target:
                    return f'n{i}'
                continue
        if not node['child']:
            record(guest(0, i), 0)
            continue
        record(guest(0, i), 'buf:spare')
        record(guest(0, i), 'buf:spare')
        if spec['spare_idx'] == 0:
            continue
        record(guest(1, SPARE), 'buf:spare_probe')
        record(guest(2, SPARE), 1 if spec['spare_accept'] else 0)
        if spec['spare_accept'] and not is_target:
            return f'n{i}'
    return None


def case(cid, can=True, blocked=0, visit=True, mode=0, value=0x1122334455667788, nodes=(), target=None,
         spare_accept=True, spare_idx=2):
    """A head with the given chain of entries, the target (an entry's name, 'other' or none), and the mode."""
    nodes = list(nodes)
    spec = {'can': can, 'blocked': blocked, 'visit': visit, 'mode': mode, 'nodes': nodes, 'target': target,
            'spare_accept': spare_accept, 'spare_idx': spare_idx}
    buffers = {
        'head': {'size': NODE_SIZE, 'bytes': head_bytes(blocked)},
        'head_vt': {'size': VTABLE_SIZE, 'bytes': 'f0' * VTABLE_SIZE},
        'visitor': {'size': VISITOR_SIZE, 'bytes': '7e' * VISITOR_SIZE},
        'visitor_vt': {'size': VISITOR_SIZE, 'bytes': 'e7' * VISITOR_SIZE},
        'other': {'size': NODE_SIZE, 'bytes': 'ee' * NODE_SIZE},
        'spare': {'size': NODE_SIZE, 'bytes': spare_bytes(spare_idx)},
        'spare_sub': {'size': SUB_SIZE, 'bytes': 'd1' * SUB_SIZE},
        'spare_probe': {'size': PROBE_SIZE, 'bytes': 'd2' * PROBE_SIZE},
        'spare_probe_vt': {'size': PROBE_VTABLE_SIZE, 'bytes': 'd3' * PROBE_VTABLE_SIZE},
    }
    memory = [
        {'addr': 'buf:head+0x0', 'pointer': 'head_vt'},
        {'addr': f'buf:head_vt+{ENTRY_VTABLE_CAN:#x}', 'guest': CAN},
        {'addr': 'buf:visitor+0x0', 'pointer': 'visitor_vt'},
        {'addr': f'buf:visitor_vt+{VISITOR_VISIT:#x}', 'guest': VISIT},
        {'addr': f'buf:spare_sub+{SUB_PROBE:#x}', 'guest': guest(1, SPARE)},
        {'addr': 'buf:spare_probe+0x0', 'pointer': 'spare_probe_vt'},
        {'addr': f'buf:spare_probe_vt+{PROBE_ACCEPT:#x}', 'guest': guest(2, SPARE)},
    ]
    if spare_idx != 0:
        memory.append({'addr': f'buf:spare+{4 * spare_idx:#x}', 'pointer': 'spare_sub'})
    previous = 'head'
    for i, node in enumerate(nodes):
        name = f'n{i}'
        buffers[name] = {'size': NODE_SIZE, 'bytes': node_bytes(node)}
        buffers[f'{name}_vt'] = {'size': VTABLE_SIZE, 'bytes': 'f1' * VTABLE_SIZE}
        buffers[f'{name}_sub'] = {'size': SUB_SIZE, 'bytes': 'd4' * SUB_SIZE}
        buffers[f'{name}_probe'] = {'size': PROBE_SIZE, 'bytes': 'd5' * PROBE_SIZE}
        buffers[f'{name}_probe_vt'] = {'size': PROBE_VTABLE_SIZE, 'bytes': 'd6' * PROBE_VTABLE_SIZE}
        memory.append({'addr': f'buf:{previous}+{HEAD_NEXT:#x}', 'pointer': name})
        memory.append({'addr': f'buf:{name}+0x0', 'pointer': f'{name}_vt'})
        memory.append({'addr': f'buf:{name}_vt+{ENTRY_VTABLE_CHILD:#x}', 'guest': guest(0, i)})
        memory.append({'addr': f'buf:{name}_sub+{SUB_PROBE:#x}', 'guest': guest(1, i)})
        memory.append({'addr': f'buf:{name}_probe+0x0', 'pointer': f'{name}_probe_vt'})
        memory.append({'addr': f'buf:{name}_probe_vt+{PROBE_ACCEPT:#x}', 'guest': guest(2, i)})
        if node['idx'] != 0:
            memory.append({'addr': f'buf:{name}+{4 * node["idx"]:#x}', 'pointer': f'{name}_sub'})
        previous = name
    memory.append({'addr': f'buf:{previous}+{HEAD_NEXT:#x}', 'bytes': word(0) + '00' * 6})
    calls = {}
    simulate(spec, calls)
    stubs = []
    for address in sorted(calls):
        argc = {CAN: 1, VISIT: 4, KEY_STUB: 5}.get(address, 1)
        for ret in calls[address]:
            stubs.append({'address': address, 'argc': argc, 'ret': ret if not isinstance(ret, int) else hex(ret)})
    if target is None:
        r8 = '0x0'
    else:
        r8 = f'buf:{target}'
    return {
        'schema': 1,
        'address': ADDRESS,
        'id': cid,
        'returns': 'i64',
        'args': {'rdi': 'buf:head', 'rsi': 'buf:visitor', 'rdx': hex(value & MASK64),
                 'rcx': hex(mode & MASK64), 'r8': r8},
        'buffers': buffers,
        'memory': memory,
        'imports': [],
        'stubs': stubs,
    }


def head_bytes(blocked):
    """The head: its blocked word at +0x68 and the rest filled with a fixed pattern."""
    data = bytearray(b'\x6c' * NODE_SIZE)
    data[HEAD_BLOCKED:HEAD_BLOCKED + 2] = (blocked & 0xffff).to_bytes(2, 'little')
    return data.hex()


def node_bytes(node):
    """An entry: its flags and element index in the bytes, the rest a fixed pattern."""
    data = bytearray(b'\x4c' * NODE_SIZE)
    data[FLAGS] = node['flags'] & 0xff
    data[ELEMENT] = node['idx'] & 0xff
    return data.hex()


def spare_bytes(spare_idx):
    """The spare child: an element index of two and no flags."""
    data = bytearray(b'\x5b' * NODE_SIZE)
    data[FLAGS] = 0x00
    data[ELEMENT] = spare_idx
    return data.hex()


CASES = [
    case('can_search_false', can=False, nodes=[nd()]),
    case('blocked_word_set', blocked=1, nodes=[nd()]),
    case('blocked_high_byte_set', blocked=0x0100, nodes=[nd()]),
    case('visit_false', visit=False, nodes=[nd()]),
    case('empty_chain', nodes=[]),
    case('first_entry_unlinked', nodes=[nd(linked=False)]),
    case('mode_selects_first', mode=1, nodes=[nd(), nd()]),
    case('mode_skips_target', mode=1, target='n0', nodes=[nd(), nd()]),
    case('mode_high_byte_only_is_normal', mode=0x0100, nodes=[nd(idx=2, accept=False), nd(idx=2, accept=True)]),
    case('mode_low_byte_set_with_upper_bits', mode=0x0301, nodes=[nd(idx=2, accept=False), nd()]),
    case('accepted_entry_selected', nodes=[nd(idx=3, accept=True)]),
    case('accepted_target_passed_over', target='n0', nodes=[nd(idx=2, accept=True), nd(idx=2, accept=True)]),
    case('zero_index_child_null_then_accept', nodes=[nd(idx=0, child=False), nd(idx=3, accept=True)]),
    case('rejected_with_child_accepted', nodes=[nd(idx=2, accept=False, child=True)], spare_accept=True),
    case('rejected_with_child_rejected', nodes=[nd(idx=2, accept=False, child=True), nd(idx=2, accept=True)],
         spare_accept=False),
    case('child_accepted_target_passed_over', target='n0',
         nodes=[nd(idx=0, child=True), nd(idx=2, accept=True)], spare_accept=True),
    case('all_entries_rejected', nodes=[nd(idx=2, accept=False), nd(idx=2, accept=False)]),
    case('unlinked_entry_stops_search', nodes=[nd(idx=2, accept=False), nd(linked=False, accept=True)]),
    case('target_outside_chain', target='other', nodes=[nd(idx=2, accept=True)]),
    case('linked_flag_with_other_bits', nodes=[nd(idx=2, accept=True, flags=0xe4)]),
    case('unlinked_flag_with_other_bits', nodes=[nd(flags=0xfb)]),
    case('value_passed_to_key_stub', mode=1, value=0xdeadbeef00000001, nodes=[nd()]),
    case('child_without_element_index', nodes=[nd(idx=2, accept=False, child=True)], spare_idx=0),
    case('child_chain_second_entry', nodes=[nd(idx=0, child=True), nd(idx=0, child=True)], spare_accept=True),
]


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
