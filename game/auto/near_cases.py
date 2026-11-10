#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Cases for replacements generated from another function with the same instructions but other
addresses and constants.

usage: near_cases.py FUNCTION_NAME OUT_DIR [--script FILE]

A near-copy (near_copies.csv beside this file) has the instructions of its exemplar
(near_exemplars.csv), a hand-written replacement, with other addresses and other constants:
structure offsets, sizes, masks. Its row lists its addresses in the exemplar's order, and its
constants as words:
  @N=VALUE       the constant in position N of the function is VALUE
  KIND:OLD>NEW   a constant that is OLD in the exemplar is NEW here; KIND is d for a displacement
                 and i1, i2, i4 or i8 for a constant of that many bytes
The exemplar's case script is either a template (exchange "slots"), in which NEAR_SLOT_N stands for
the constant in position N, or the script written for the exemplar (exchange "text"), in which each
number that is one of the OLD constants is rewritten to the NEW one. Addresses are exchanged as for
a twin (twin_cases.py). --script keeps the rewritten script in FILE.
"""
import csv
import os
import re
import subprocess
import sys
import tempfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import twin_cases  # noqa: E402

SLOT = re.compile(r'\bNEAR_SLOT_([0-9]+)\b')
NUMBER = re.compile(r'(?<![0-9A-Za-z.])0[xX]([0-9a-fA-F]+)(?![0-9A-Za-z_.])'
                    r'|(?<![0-9A-Za-z_.])([0-9]+)(?![0-9A-Za-z_.])')
BYTE_BITS = 8


def constants_of(text):
    """({position: value}, [(kind, old, new)]) from the constants field of a near-copy's row."""
    slots, pairs = {}, []
    for word in text.split():
        if word.startswith('@'):
            position, _, value = word[1:].partition('=')
            slots[int(position)] = int(value, 16)
        else:
            kind, _, pair = word.partition(':')
            old, _, new = pair.partition('>')
            pairs.append((kind, int(old, 16), int(new, 16)))
    return slots, pairs


def spellings(kind, value):
    """The numbers a constant may be written as: itself (a displacement without its sign), and for a
    constant with its top bit set the size of the negative number it also is."""
    if kind == 'd':
        return [abs(value)]
    bits = BYTE_BITS * int(kind[1:])
    low = value & ((1 << bits) - 1)
    written = [low]
    if low >> (bits - 1) and (1 << bits) - low > 1:
        written.append((1 << bits) - low)
    return written


def swaps(pairs):
    """{number written for the exemplar: number to write for the near-copy}.

    Raises ValueError when exchanging numbers in a text cannot express the change.
    """
    table = {}
    for kind, old, new in pairs:
        if kind == 'd':
            if (old < 0) != (new < 0):
                raise ValueError('a displacement changes sign')
            both = [(abs(old), abs(new))]
        else:
            was, now = spellings(kind, old), spellings(kind, new)
            both = [(was[0], now[0])]
            if len(was) > 1 and len(now) > 1:
                both.append((was[1], now[1]))
        for written, wanted in both:
            if written <= 1:
                raise ValueError(f'the constant {written} is too common to exchange by its text')
            if table.setdefault(written, wanted) != wanted:
                raise ValueError(f'{written:#x} would become two different numbers')
    return table


def numbers(text):
    """Every number TEXT spells out, hexadecimal or decimal."""
    return {int(found.group(1), 16) if found.group(1) is not None else int(found.group(2))
            for found in NUMBER.finditer(text)}


def exchange_numbers(text, table):
    """TEXT with every number that is a key of TABLE replaced by its value, in the same notation."""

    def replace(match):
        digits = match.group(1)
        value = int(digits, 16) if digits is not None else int(match.group(2))
        if value not in table:
            return match.group(0)
        new = table[value]
        if digits is None:
            return str(new)
        padded = len(digits) > 1 and digits[0] == '0'
        return match.group(0)[:2] + (format(new, f'0{len(digits)}x') if padded else format(new, 'x'))

    return NUMBER.sub(replace, text)


def fill(text, slots):
    """TEXT with each NEAR_SLOT_N replaced by the constant in position N."""
    return SLOT.sub(lambda match: format(slots[int(match.group(1))], '#x'), text)


def rewrite(text, exemplar_name, name, exemplar, near, slots, table):
    """TEXT, written for the exemplar, rewritten for the near-copy.

    exemplar and near are (entry address, size, [addresses used]); slots is {position: value} for
    a template and table {old number: new number} for a text written for the exemplar.
    """
    text = twin_cases.rewrite(text, exemplar_name, name, exemplar, near)
    if table:
        text = exchange_numbers(text, table)
    return fill(text, slots)


def rows(name):
    """(near-copy row, exemplar row) for a near-copy's name."""
    with open(HERE / 'near_copies.csv', newline='') as stream:
        near = next((row for row in csv.DictReader(stream) if row['name'] == name), None)
    if near is None:
        raise SystemExit(f'{name} is not in near_copies.csv')
    with open(HERE / 'near_exemplars.csv', newline='') as stream:
        exemplar = next(row for row in csv.DictReader(stream) if row['name'] == near['exemplar'])
    return near, exemplar


def script_for(name):
    """The exemplar's case script rewritten for the near-copy, and the directory to import from."""
    near, exemplar = rows(name)
    source = HERE.parent.parent / exemplar['cases']
    size = int(exemplar['size'])
    old = (int(exemplar['address'], 16), size, twin_cases.addresses(exemplar['addresses']))
    new = (int(near['address'], 16), size, twin_cases.addresses(near['addresses']))
    slots, pairs = constants_of(near['constants'])
    table = swaps(pairs) if exemplar['exchange'] == 'text' else {}
    home = HERE.parent.parent / exemplar['home']
    return rewrite(source.read_text(), exemplar['name'], name, old, new, slots, table), home


def main():
    if len(sys.argv) not in (3, 5) or (len(sys.argv) == 5 and sys.argv[3] != '--script'):
        print(__doc__, file=sys.stderr)
        return 2
    name, out = sys.argv[1], sys.argv[2]
    text, home = script_for(name)
    with tempfile.TemporaryDirectory() as scratch:
        path = Path(sys.argv[4]) if len(sys.argv) == 5 else Path(scratch) / f'{name}_cases.py'
        path.write_text(text)
        # The script is run from another place: what it imports from beside the exemplar's script,
        # or from the repository's tools, has to stay in reach.
        reach = [str(home), str(HERE.parent.parent / 'tools'), os.environ.get('PYTHONPATH', '')]
        env = dict(os.environ, PYTHONPATH=os.pathsep.join(word for word in reach if word))
        return subprocess.run([sys.executable, str(path), out], env=env).returncode


if __name__ == '__main__':
    sys.exit(main())
