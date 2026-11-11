#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""runtime/, test/ and tools/ must contain nothing specific to the game: no
title identity, no tracked function names, no tracked addresses. All of that
lives under game/ and symbols/.

usage: check_agnostic.py [--root DIR]
"""
from __future__ import annotations

import argparse
import csv
import os
import re
import sys

DEFAULT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SCOPE = ('runtime', 'test', 'tools')
SKIP_EXT = {'.pyc'}


# A whole identifier or number, as the boundaries of a tracked name or address are.
TOKEN = re.compile(r'[0-9A-Za-z_]+')


def words(root: str) -> tuple[list[tuple[str, re.Pattern]], dict[str, str]]:
    """Free-text words as patterns, and tracked names and addresses as an exact lookup.

    The tracked set holds tens of thousands of entries, so they are matched by looking each
    token of a line up in a dictionary rather than by one pattern per entry.
    """
    out = []
    exact: dict[str, str] = {}
    path = os.path.join(root, 'game', 'agnostic_words.txt')
    if os.path.isfile(path):
        with open(path) as f:
            for ln in f:
                w = ln.strip()
                if w and not w.startswith('#'):
                    out.append((w, re.compile(re.escape(w), re.I)))
    for rel, col, label in (('symbols/functions.csv', 'name', 'function name'),
                            ('symbols/functions.csv', 'address', 'address'),
                            ('game/hooks.csv', 'address', 'address'),
                            ('game/module_hooks.csv', 'offset', 'module offset'),
                            ('game/module_hooks.csv', 'first_bytes', 'module bytes')):
        p = os.path.join(root, rel)
        if not os.path.isfile(p):
            continue
        with open(p, newline='') as f:
            for r in csv.DictReader(f):
                v = r[col]
                exact.setdefault(v.lower(), f'{label} {v}')
    return out, exact


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument('--root', default=DEFAULT_ROOT)
    root = ap.parse_args().root
    pats, exact = words(root)
    errs = []
    for top in SCOPE:
        for dp, _, fs in os.walk(os.path.join(root, top)):
            if '__pycache__' in dp:
                continue
            for fn in fs:
                if os.path.splitext(fn)[1] in SKIP_EXT:
                    continue
                path = os.path.join(dp, fn)
                rel = os.path.relpath(path, root)
                try:
                    text = open(path, encoding='utf-8').read()
                except (UnicodeDecodeError, OSError):
                    continue
                for n, ln in enumerate(text.splitlines(), 1):
                    for label, pat in pats:
                        if pat.search(ln):
                            errs.append(f'{rel}:{n}: game-specific ({label})')
                    found = {exact[t.lower()] for t in TOKEN.findall(ln) if t.lower() in exact}
                    for label in sorted(found):
                        errs.append(f'{rel}:{n}: game-specific ({label})')
    for e in errs:
        print(f'agnostic: {e}', file=sys.stderr)
    return 1 if errs else 0


if __name__ == '__main__':
    sys.exit(main())
