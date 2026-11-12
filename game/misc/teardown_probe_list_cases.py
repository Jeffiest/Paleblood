#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_teardown_probe_list (0x02716a10), for tools/verify.py run.

usage: teardown_probe_list_cases.py OUT_DIR

The record's first probe (stub 0x0247ee80) is checked when it returns nonzero; the check reads a status
(stub 0x02fbfee8). A skip status changes nothing; any other status clears the pending byte at +0x70, and a
nonzero one reports through the fatal stub (0x024b55b0), twice for the first kind of status. The pending
byte is checked again after that, the same way. Then the link list at +0x18 is emptied: each link after the
head is released through the object's slot 0x70 (a stub), and the same slot is called once more with the
head, whose result is the function's result.
"""
import json
import os
import struct
import sys

ADDRESS = '0x02716a10'
PROBE_FIRST = '0x0247ee80'
PROBE_REPORT = '0x02fbfee8'
FATAL = '0x024b55b0'
RELEASE = '0x00400020'
SKIP = 0x80020010
FIRST_KIND = 0x80020016
RECORD_SIZE = 0x80
LINK_SIZE = 0x10
PENDING = 0x70
COUNT = 0x20


def u64(value):
    return (value & ((1 << 64) - 1)).to_bytes(8, 'little').hex()


def report_stubs(status):
    """The stub calls one probe report makes: the report, then the fatal reports unless it is skip or zero."""
    stubs = [{'address': PROBE_REPORT, 'argc': 1, 'ret': status}]
    if status == SKIP:
        return stubs
    if status != 0:
        if status == FIRST_KIND:
            stubs.append({'address': FATAL, 'argc': 3})
        stubs.append({'address': FATAL, 'argc': 3})
    return stubs


def case(cid, links=0, first_probe=0, status1=0, pending=0, status2=0, tail=0x1234):
    """links: how many links follow the head; the probe and report results are as given."""
    buffers = {'record': {'size': RECORD_SIZE}, 'head': {'size': LINK_SIZE}, 'object': {'size': 8},
               'object_vt': {'size': 0x78}}
    names = [f'link{i}' for i in range(links)]
    for name in names:
        buffers[name] = {'size': LINK_SIZE}
    chain = names + ['head']
    memory = [
        {'addr': f'buf:record+{0x18}', 'pointer': 'head'},
        {'addr': f'buf:record+{0x20}', 'bytes': u64(5)},
        {'addr': f'buf:record+{0x28}', 'pointer': 'object'},
        {'addr': f'buf:record+{PENDING}', 'bytes': f'{pending:02x}'},
        {'addr': 'buf:object', 'pointer': 'object_vt'},
        {'addr': f'buf:object_vt+{0x70}', 'guest': RELEASE},
        {'addr': 'buf:head+0', 'pointer': chain[0] if names else 'head'},
        {'addr': 'buf:head+8', 'pointer': chain[-2] if names else 'head'},
    ]
    for i, name in enumerate(names):
        nxt = chain[i + 1]
        prv = 'head' if i == 0 else names[i - 1]
        memory.append({'addr': f'buf:{name}+0', 'pointer': nxt})
        memory.append({'addr': f'buf:{name}+8', 'pointer': prv})
    stubs = [{'address': PROBE_FIRST, 'argc': 1, 'ret': first_probe}]
    pend = pending
    if first_probe:
        stubs += report_stubs(status1)
        if status1 != SKIP:
            pend = 0
    if pend:
        stubs += report_stubs(status2)
    for _ in names:
        stubs.append({'address': RELEASE, 'argc': 2, 'ret': 0})
    stubs.append({'address': RELEASE, 'argc': 2, 'ret': tail})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:record'}, 'buffers': {**buffers, 'record': {'size': RECORD_SIZE}},
            'memory': memory, 'stubs': stubs, 'imports': []}


CASES = [
    case('empty_no_probe', links=0),
    case('one_link_no_probe', links=1),
    case('several_links_no_probe', links=3, pending=0),
    case('probe_skip_keeps_pending', links=1, first_probe=1, status1=SKIP, pending=1),
    case('probe_zero_clears_pending', links=0, first_probe=1, status1=0, pending=1, tail=0),
    case('probe_other_status_reports_once', links=2, first_probe=1, status1=5, pending=0),
    case('probe_first_kind_reports_twice', links=1, first_probe=1, status1=FIRST_KIND, pending=0),
    case('pending_zero_status_reports_once', links=0, pending=1, status2=0),
    case('pending_skip_keeps_flag', links=2, pending=1, status2=SKIP),
    case('pending_other_status_reports', links=1, pending=1, status2=7),
    case('pending_first_kind_reports_twice', links=0, pending=1, status2=FIRST_KIND),
    case('first_status_clears_so_no_second', links=1, first_probe=1, status1=3, pending=1),
]


def main():
    """Write one JSON case per probe and list shape to the requested directory."""
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for fixture in CASES:
        with open(os.path.join(sys.argv[1], fixture['id'] + '.json'), 'w') as stream:
            json.dump(fixture, stream, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
