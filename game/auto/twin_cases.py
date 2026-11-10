#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Cases for replacements generated from another function with the same instructions.

usage: twin_cases.py FUNCTION_NAME OUT_DIR [--script FILE]

A twin (twins.csv beside this file) has the same instructions as its exemplar, a hand-written
replacement (twin_exemplars.csv), except for the addresses of the code and data it uses. Its cases
are the exemplar's cases with those addresses exchanged: the exemplar's case script is read, each
address in it is rewritten, and the result is run. --script keeps the rewritten script in FILE.
"""
import csv
import os
import re
import subprocess
import sys
import tempfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
NEARBY = 0x400
HEX_RUN = re.compile(r'(?<![0-9A-Za-z])(0[xX])?([0-9a-fA-F]{6,16})(?![0-9A-Za-z])')


def addresses(text):
    """The address list of a CSV field: hexadecimal numbers separated by spaces."""
    return [int(word, 16) for word in text.split()]


def exchange(text, exemplar, twin):
    """TEXT with the exemplar's addresses replaced by the twin's.

    exemplar and twin are (entry address, size, [addresses used]) with the lists in the same order.
    An address is recognised as 0x..., or as six to eight bare hexadecimal digits (as in a name).
    An address that is not in the list but lies inside the exemplar, or just above one of its
    addresses (a member of that object), keeps its distance from the twin's counterpart.
    """
    start, size, used = exemplar
    known = dict(zip(used, twin[2]))
    known[start] = twin[0]

    def replace(match):
        prefix, digits = match.group(1) or '', match.group(2)
        if not prefix and len(digits) > 8:
            return match.group(0)
        value = int(digits, 16)
        if value in known:
            new = known[value]
        elif not prefix and len(digits) < 8:
            return match.group(0)
        elif start < value < start + size:
            new = twin[0] + value - start
        else:
            below = [address for address in used if 0 < value - address <= NEARBY]
            if not below:
                return match.group(0)
            new = known[max(below)] + value - max(below)
        padded = len(digits) > 1 and digits[0] == '0'
        return prefix + (format(new, f'0{len(digits)}x') if padded else format(new, 'x'))

    return HEX_RUN.sub(replace, text)


def rewrite(text, exemplar_name, name, exemplar, twin):
    """TEXT, written for the exemplar, rewritten for the twin: its name and its addresses."""
    marker = '\x00\x00'
    text = re.sub(rf'(?:(?<=bb_)|\b){re.escape(exemplar_name)}\b', marker, text)
    return exchange(text, exemplar, twin).replace(marker, name)


def rows(name):
    """(twin row, exemplar row) for a twin's name."""
    with open(HERE / 'twins.csv', newline='') as stream:
        twin = next((row for row in csv.DictReader(stream) if row['name'] == name), None)
    if twin is None:
        raise SystemExit(f'{name} is not in twins.csv')
    with open(HERE / 'twin_exemplars.csv', newline='') as stream:
        exemplar = next(row for row in csv.DictReader(stream) if row['name'] == twin['exemplar'])
    return twin, exemplar


def script_for(name):
    """The exemplar's case script rewritten for the twin, and the directory the script came from."""
    twin, exemplar = rows(name)
    source = HERE.parent.parent / exemplar['cases']
    old = (int(exemplar['address'], 16), int(exemplar['size']), addresses(exemplar['addresses']))
    new = (int(twin['address'], 16), int(exemplar['size']), addresses(twin['addresses']))
    return rewrite(source.read_text(), exemplar['name'], name, old, new), source.parent


def main():
    if len(sys.argv) not in (3, 5) or (len(sys.argv) == 5 and sys.argv[3] != '--script'):
        print(__doc__, file=sys.stderr)
        return 2
    name, out = sys.argv[1], sys.argv[2]
    text, home = script_for(name)
    with tempfile.TemporaryDirectory() as scratch:
        path = Path(sys.argv[4]) if len(sys.argv) == 5 else Path(scratch) / f'{name}_cases.py'
        path.write_text(text)
        # The script is run from another place: what it imports from beside itself, or from the
        # repository's tools, has to stay in reach.
        reach = [str(home), str(HERE.parent.parent / 'tools'), os.environ.get('PYTHONPATH', '')]
        env = dict(os.environ, PYTHONPATH=os.pathsep.join(word for word in reach if word))
        return subprocess.run([sys.executable, str(path), out], env=env).returncode


if __name__ == '__main__':
    sys.exit(main())
