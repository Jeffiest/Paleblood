#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Edge cases for misc_tagged_entry_merge (0x0046b420), for tools/verify.py run.

usage: tagged_entry_merge_cases.py OUT_DIR

A destination entry is filled from a base copy (stubbed) and then from every field the source's
flag word marks as present. Covers each flag alone and together, the option bits that drop the
destination's identity (bit differs or not, identity present or not), the one-time empty-text
set-up (done, needed and won, needed and lost), the reference-counted identity and shared block
(present and absent on either side), and the second text (empty, and copied).
"""
import json
import os
import struct
import sys

A = {k: v for k, v in dict(
    base_copy='0x0046ab40', set_text='0x0046ad00', text_size='0x0045ce40', text_copy='0x0045d6a0',
    text_clear='0x0045dfc0', retain='0x0045a4b0', release='0x0045a4c0', shared_release='0x0045a510',
    construct='0x0045c6f0', guard_acquire='0x02fbe538', register='0x02fbe548', guard_release='0x02fbe558').items()}

KEY, WEIGHT, TEXT, LEVEL, OPT1, OPT2, OPT4, OPT8, SECOND, SHARED, TAG, IDENT = (
    0x1, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x80, 0x100, 0x200, 0x400, 0x800)


def f32(v):
    return struct.pack('<f', v) if isinstance(v, float) else struct.pack('<I', v)


def entry(flags, opts=0, key=0x11223344, weight=1.5, level=0x0abc, text=0x1002):
    d = bytearray(b'\xa5' * 0x50)
    d[0x10:0x18] = struct.pack('<Q', text)
    d[0x20:0x28] = struct.pack('<Q', text + 0x100)
    d[0x40:0x44] = struct.pack('<I', key)
    d[0x44:0x48] = f32(weight)
    d[0x48:0x4a] = struct.pack('<H', level)
    d[0x4a] = opts
    d[0x4c:0x4e] = struct.pack('<H', flags)
    return d


def case(cid, sflags, dflags=0, sopts=0, dopts=0, s_ident=False, d_ident=False, s_shared=False, d_shared=False,
         guard=1, acquire=1, sizes=(5, 5), weight=1.5, key=0x11223344, dkey=0x55667788, vanish=False):
    sizes = list(sizes)
    s = entry(sflags, sopts, key=key, weight=weight)
    d = entry(dflags, dopts, key=dkey, weight=9.5, level=0x0111, text=0x2002)
    b = {'src': {'size': 0x50, 'bytes': s.hex()}, 'dst': {'size': 0x50, 'bytes': d.hex()}, 'base': {'size': 0x50},
         'sid': {'size': 8}, 'did': {'size': 8}, 'ssh': {'size': 16, 'bytes': ('55000000' '07000000' + '00' * 8)},
         'dsh': {'size': 16, 'bytes': ('66000000' '09000000' + '00' * 8)}}
    m = [{'addr': '0x057e9958', 'bytes': bytes([guard]).hex()}, {'addr': '0x057e9950', 'bytes': '00' * 8}]
    for name, field, present in (('sid', 0x38, s_ident), ('ssh', 0x30, s_shared)):
        target = 'src+0x30' if vanish and name == 'sid' else name
        m.append({'addr': f'buf:src+{field}', 'pointer': target} if present else {'addr': f'buf:src+{field}', 'bytes': '00' * 8})
    for name, field, present in (('did', 0x38, d_ident), ('dsh', 0x30, d_shared)):
        m.append({'addr': f'buf:dst+{field}', 'pointer': name} if present else {'addr': f'buf:dst+{field}', 'bytes': '00' * 8})
    st = [{'address': A['base_copy'], 'argc': 3}]
    dident = d_ident
    dfl = dflags

    def drop_identity(opt_mask, shift):
        nonlocal dident, dfl
        if dfl & IDENT:
            sset = bool(sopts & opt_mask)
            dset = bool((dopts_now & opt_mask) >> shift)
            if sset != dset:
                if dident:
                    st.append({'address': A['release'], 'argc': 1})
                dident = False
                dfl &= ~IDENT
        dfl |= {1: OPT1, 2: OPT2}[opt_mask]

    dopts_now = dopts
    if sflags & OPT1:
        drop_identity(1, 0)
    if sflags & OPT2:
        drop_identity(2, 1)
    if sflags & TEXT:
        if not guard:
            st.append({'address': A['guard_acquire'], 'argc': 1, 'ret': acquire})
            if acquire:
                st += [{'address': A['construct'], 'argc': 1}, {'address': A['register'], 'argc': 3},
                       {'address': A['guard_release'], 'argc': 1}]
        st.append({'address': A['set_text'], 'argc': 2})
    if sflags & IDENT:
        if s_ident and vanish:
            # the first retain clears the source's identity field (the object it points at lies in the source)
            st.append({'address': A['retain'], 'argc': 1, 'writes': [{'arg': 0, 'offset': 8, 'bytes': '00' * 8}]})
        elif s_ident:
            st += [{'address': A['retain'], 'argc': 1}, {'address': A['release'], 'argc': 1},
                   {'address': A['retain'], 'argc': 1}]
        if dident:
            st.append({'address': A['release'], 'argc': 1})
    if sflags & SECOND:
        st.append({'address': A['text_size'], 'argc': 1, 'ret': sizes[0]})
        if sizes[0] == 0:
            st.append({'address': A['text_clear'], 'argc': 1})
        else:
            st.append({'address': A['text_size'], 'argc': 1, 'ret': sizes[1]})
            if sizes[1]:
                st.append({'address': A['text_copy'], 'argc': 2})
    if sflags & SHARED:
        if s_shared:
            st.append({'address': A['shared_release'], 'argc': 1})
        if d_shared:
            st.append({'address': A['shared_release'], 'argc': 1})
    return {'schema': 1, 'address': '0x0046b420', 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:dst', 'rsi': 'buf:base', 'rdx': 'buf:src'}, 'buffers': b, 'memory': m,
            'stubs': st, 'imports': []}


ALL = KEY | WEIGHT | LEVEL | OPT1 | OPT2 | OPT4 | OPT8 | TAG
CASES = [
    case('nothing', 0),
    case('key', KEY), case('tag_byte', TAG), case('level', LEVEL),
    case('weight', WEIGHT, weight=3.7), case('weight_negative', WEIGHT, weight=-2.9),
    case('weight_wraps', WEIGHT, weight=40000.0), case('weight_huge', WEIGHT, weight=1e10),
    case('weight_nan', WEIGHT, weight=0x7fc00000),
    case('opt4_set', OPT4, sopts=4, dopts=0xfb), case('opt4_clear', OPT4, sopts=0xfb, dopts=4),
    case('opt8_set', OPT8, sopts=8, dopts=0xf7), case('opt8_clear', OPT8, sopts=0xf7, dopts=8),
    case('opt1_set_no_identity_flag', OPT1, sopts=1, dopts=0),
    case('opt1_clear_no_identity_flag', OPT1, sopts=0xfe, dopts=1),
    case('opt1_same_with_identity', OPT1, dflags=IDENT, sopts=1, dopts=1, d_ident=True),
    case('opt1_differs_with_identity', OPT1, dflags=IDENT, sopts=1, dopts=0, d_ident=True),
    case('opt1_differs_identity_null', OPT1, dflags=IDENT, sopts=0, dopts=1),
    case('opt1_clear_same', OPT1, dflags=IDENT, sopts=0, dopts=0, d_ident=True),
    case('opt2_set_no_identity_flag', OPT2, sopts=2, dopts=0),
    case('opt2_clear_no_identity_flag', OPT2, sopts=0xfd, dopts=2),
    case('opt2_same_with_identity', OPT2, dflags=IDENT, sopts=2, dopts=2, d_ident=True),
    case('opt2_differs_with_identity', OPT2, dflags=IDENT, sopts=2, dopts=0, d_ident=True),
    case('opt2_differs_identity_null', OPT2, dflags=IDENT, sopts=0, dopts=2),
    case('opt2_clear_same', OPT2, dflags=IDENT, sopts=0, dopts=0, d_ident=True),
    case('opt1_and_opt2_drop_once', OPT1 | OPT2, dflags=IDENT, sopts=3, dopts=0, d_ident=True),
    case('text_ready', TEXT, guard=1), case('text_setup_won', TEXT, guard=0, acquire=1),
    case('text_setup_lost', TEXT, guard=0, acquire=0),
    case('identity_both', IDENT, s_ident=True, d_ident=True), case('identity_src_only', IDENT, s_ident=True),
    case('identity_vanishes_after_retain', IDENT, s_ident=True, d_ident=True, vanish=True),
    case('identity_dst_only', IDENT, d_ident=True), case('identity_neither', IDENT),
    case('second_empty', SECOND, sizes=(0, 0)), case('second_copied', SECOND, sizes=(5, 5)),
    case('second_gone_after_check', SECOND, sizes=(5, 0)),
    case('shared_both', SHARED, s_shared=True, d_shared=True), case('shared_src_only', SHARED, s_shared=True),
    case('shared_dst_only', SHARED, d_shared=True), case('shared_neither', SHARED),
    case('everything', ALL | TEXT | IDENT | SECOND | SHARED, dflags=IDENT, sopts=0xff, dopts=0, s_ident=True,
         d_ident=True, s_shared=True, d_shared=True, guard=0),
    case('everything_clear', ALL | TEXT | IDENT | SECOND | SHARED, dflags=IDENT | SECOND, sopts=0, dopts=0xff,
         d_ident=True, sizes=(0, 0)),
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
