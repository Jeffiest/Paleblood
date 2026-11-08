#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for template-generated replacements (listed in templates.csv beside this file).
usage: template_cases.py FUNCTION_NAME OUT_DIR"""
import csv
import json
import sys
from pathlib import Path

row = next(r for r in csv.DictReader(open(Path(__file__).with_name('templates.csv'))) if r['name'] == sys.argv[1])
out = Path(sys.argv[2])
out.mkdir(parents=True, exist_ok=True)
GARBAGE = {'rdi': '0x5a5a5a5a5a5a5a5a', 'rsi': '0x1111111111111111', 'rdx': '0xffffffffffffffff',
           'rcx': '0x0', 'r8': '0x8080808080808080', 'r9': '0x7f'}


def fill(size, kind):
    """Object contents: a ramp catches a wrong offset or width, the others catch extension and NaN handling."""
    patterns = {
        'ramp': lambda i: (i * 37 + 11) & 0xff,
        'ones': lambda i: 0xff,
        'zero': lambda i: 0,
        'sign': lambda i: 0x80 if i % 2 else 0x7f,
        'nan': lambda i: (0x01, 0x00, 0xc0, 0xff)[i % 4],
    }
    return bytes(patterns[kind](i) for i in range(size)).hex()


cases = []


def case(cid, args, buffers=None):
    cases.append({'schema': 1, 'address': row['address'], 'id': cid, 'returns': row['returns'], 'args': args,
                  'buffers': buffers or {}, 'imports': [], 'stubs': []})


if row['pattern'] in ('empty', 'return_zero', 'return_constant'):
    case('garbage_registers', dict(GARBAGE))
    case('zero_registers', {k: '0x0' for k in GARBAGE})
    case('object_pointer', {'rdi': 'buf:object'}, {'object': {'size': 64, 'bytes': fill(64, 'ramp')}})
else:
    size = int(row['offset'] or 0) + int(row['width'] or 1) + 16
    for kind in ('ramp', 'ones', 'zero', 'sign', 'nan'):
        case(f'object_{kind}', {'rdi': 'buf:object', 'rsi': GARBAGE['rsi']},
             {'object': {'size': size, 'bytes': fill(size, kind)}})
for c in cases:
    (out / f"{c['id']}.json").write_text(json.dumps(c, indent=1) + '\n')
print(f'{len(cases)} synthetic cases written to {out}')
