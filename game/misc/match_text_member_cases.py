#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_match_text_member_013a0920 (0x013a0920), for tools/verify.py run.

usage: match_text_member_cases.py OUT_DIR

The holder carries an enable word at +0x00 and a member at +0x18. The copy stub writes the text
length (and heap or inline bytes) into the caller's record. The member matcher, value and text
objects are fake objects whose vtable slots point at real game entries that the case stubs. The
member can alias the holder (the member stub then clears a field of it), and so can the context,
so that a field is cleared between two checks. Covers a disabled holder, texts inline and on the
heap (null or set), a missing member, matcher, or value, a matched value, the fallback that accepts,
the report with an empty and a null text, and every holder check after a call.
"""
import json
import os
import struct
import sys

ADDRESS = '0x013a0920'
COPY = '0x013a3110'
MEMBER_MATCHER = '0x013abad0'
MEMBER_VALUE = '0x013abac0'
REGISTER_NAME = '0x013aeaf0'
SCRATCH_DESTROY = '0x013aebc0'
TEXT_LOOKUP = '0x0139d070'
REPORT = '0x013abd10'
STRLEN16 = '0x02fbf228'
GETTER, MATCH, FREE = '0x00400020', '0x00400300', '0x004000a0'
FIELD = {'enabled': (0, '00000000'), 'member': (0x18, '00' * 8)}


def u32(v):
    return struct.pack('<I', v & 0xffffffff).hex()


def u64(v):
    return struct.pack('<Q', v & (2 ** 64 - 1)).hex()


def case(cid, text_len=3, heap=True, enabled=1, member='buf', copy_disables=False, matcher=True,
         matcher_writes=None, value=True, matches=None, fallback=None, fallback_writes=None,
         context='buf', reported=True, reported_len=None):
    """One call; the parameters pick the path. member and context name 'buf', 'null' or 'holder' (aliased)."""
    b = {'holder': {'size': 0x20, 'bytes': u32(enabled)}, 'member': {'size': 8}, 'heap': {'size': 0x20},
         'copy_text': {'size': 0x10}, 'matcher': {'size': 8}, 'matcher_vt': {'size': 0xa8},
         'value': {'size': 8}, 'value_vt': {'size': 0x30}, 'alloc': {'size': 8}, 'alloc_vt': {'size': 0x78},
         'text': {'size': 0x10}, 'context': {'size': 0x10}}
    m = [{'addr': 'buf:matcher', 'pointer': 'matcher_vt'}, {'addr': 'buf:matcher_vt+160', 'guest': MATCH},
         {'addr': 'buf:value', 'pointer': 'value_vt'}, {'addr': 'buf:value_vt+40', 'guest': GETTER},
         {'addr': 'buf:alloc', 'pointer': 'alloc_vt'}, {'addr': 'buf:alloc_vt+112', 'guest': FREE}]
    if member == 'buf':
        m.append({'addr': 'buf:holder+24', 'pointer': 'member'})
    elif member == 'holder':
        m.append({'addr': 'buf:holder+24', 'pointer': 'holder'})
    else:
        m.append({'addr': 'buf:holder+24', 'bytes': '00' * 8})
    if context == 'holder':
        ctx = 'buf:holder'
    else:
        ctx = 'buf:context'
    # Field state of the holder as the stubs leave it (only aliasing makes a write land on it).
    st = {'enabled': enabled != 0 and not copy_disables, 'member': member != 'null'}

    stubs = []
    copy_writes = [{'arg': 0, 'offset': 0x20, 'bytes': u64(text_len)}, {'arg': 0, 'offset': 0x28, 'pointer': 'alloc'}]
    if text_len >= 8:
        copy_writes.append({'arg': 0, 'offset': 8, 'pointer': 'heap'} if heap else
                           {'arg': 0, 'offset': 8, 'bytes': '00' * 8})
    else:
        copy_writes.append({'arg': 0, 'offset': 8, 'bytes': '4142434445464748'})
    if copy_disables:
        copy_writes.append({'arg': 1, 'offset': 0, 'bytes': '00' * 4})
    stubs.append({'address': COPY, 'argc': 3, 'argi': [0, 1, 2], 'writes': copy_writes})

    has_text = text_len < 8 or heap
    matcher_ptr = False
    if has_text and st['enabled'] and st['member']:
        writes = []
        if matcher_writes is not None and member == 'holder':
            writes.append({'arg': 0, 'offset': FIELD[matcher_writes][0], 'bytes': FIELD[matcher_writes][1]})
            st[matcher_writes] = False
        stubs.append({'address': MEMBER_MATCHER, 'argc': 2, 'argi': [0, 1],
                      'ret': 'buf:matcher' if matcher else 0, 'writes': writes})
        matcher_ptr = matcher
    if text_len >= 8:
        stubs.append({'address': FREE, 'argc': 2, 'argi': [0, 1]})
    if matcher_ptr:
        stubs.append({'address': REGISTER_NAME, 'argc': 2, 'argi': [0, 1]})
        if st['enabled'] and st['member']:
            stubs.append({'address': MEMBER_VALUE, 'argc': 4, 'argi': [0, 1, 2, 3],
                          'ret': 'buf:value' if value else 0})
        stubs.append({'address': SCRATCH_DESTROY, 'argc': 1, 'argi': [0]})
    if not (matcher_ptr and st['enabled'] and st['member'] and value):
        return _finish(cid, b, m, stubs, ctx)
    stubs.append({'address': GETTER, 'argc': 1, 'argi': [0], 'ret': 'buf:text'})
    stubs.append({'address': MATCH, 'argc': 3, 'argi': [0, 1, 2], 'ret': 1 if matches else 0})
    if matches:
        return _finish(cid, b, m, stubs, ctx)
    stubs.append({'address': GETTER, 'argc': 1, 'argi': [0], 'ret': 'buf:text'})
    fb_writes = []
    if fallback_writes is not None and context == 'holder':
        off, zeros = FIELD[fallback_writes]
        fb_writes.append({'arg': 2, 'offset': off, 'bytes': zeros})
        st[fallback_writes] = False
    stubs.append({'address': TEXT_LOOKUP, 'argc': 3, 'argi': [0, 1, 2],
                  'ret': 1 if fallback else 0, 'writes': fb_writes})
    if fallback:
        return _finish(cid, b, m, stubs, ctx)
    stubs.append({'address': GETTER, 'argc': 1, 'argi': [0], 'ret': 'buf:text' if reported else 0})
    if not (st['enabled'] and st['member'] and reported):
        return _finish(cid, b, m, stubs, ctx)
    stubs.append({'address': STRLEN16, 'argc': 1, 'argi': [0], 'ret': reported_len or 0})
    if not reported_len:
        return _finish(cid, b, m, stubs, ctx)
    stubs.append({'address': REPORT, 'argc': 4, 'argi': [0, 1, 2, 3]})
    return _finish(cid, b, m, stubs, ctx)


def _finish(cid, b, m, stubs, ctx):
    """Assemble one case."""
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:holder', 'rsi': 0x1234, 'rdx': 0x5678, 'rcx': ctx},
            'buffers': b, 'memory': m, 'stubs': stubs, 'imports': []}


CASES = [
    case('disabled', enabled=0),
    case('heap_null_no_matcher', text_len=8, heap=False),
    case('inline_no_member', member='null'),
    case('inline_no_matcher', matcher=False),
    case('heap_no_matcher', text_len=9, matcher=False),
    case('copy_disables_holder', copy_disables=True),
    case('inline_no_value', value=False),
    case('inline_matches', matches=1),
    case('heap_matches', text_len=9, matches=1),
    case('fallback_accepts', matches=0, fallback=1),
    case('reported_text_length_set', matches=0, fallback=0, reported_len=5),
    case('reported_text_null', matches=0, fallback=0, reported=False),
    case('reported_text_empty', matches=0, fallback=0, reported_len=0),
    case('member_cleared_by_matcher', member='holder', matcher_writes='member', matches=0),
    case('enabled_cleared_by_matcher', member='holder', matcher_writes='enabled', matches=0),
    case('member_cleared_after_fallback', context='holder', matches=0, fallback=0, reported=True,
         fallback_writes='member', reported_len=5),
    case('enabled_cleared_after_fallback', context='holder', matches=0, fallback=0, reported=True,
         fallback_writes='enabled', reported_len=5),
]


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        return 2
    os.makedirs(sys.argv[1], exist_ok=True)
    for c in CASES:
        with open(os.path.join(sys.argv[1], f"{c['id']}.json"), 'w') as f:
            json.dump(c, f, indent=1)
    print(f'{len(CASES)} cases written to {sys.argv[1]}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
