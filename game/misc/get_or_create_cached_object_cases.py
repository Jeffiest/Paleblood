#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""Synthetic cases for misc_get_or_create_cached_object (0x004166b0), for tools/verify.py run.

usage: get_or_create_cached_object_cases.py OUT_DIR

The cache holds one object at +0x40 and its factory at +0x38. The factory is the cache itself: its
first word points at a vtable whose slot 0x28 is the create stub, so the stub's argument 0 is the
cache and it can store the object the create left behind at +0x40. The held object is released
through its vtable's slot 0x48 (the release stub) when the create leaves one behind.
"""
import json
import sys
from pathlib import Path

ADDRESS = '0x004166b0'
CREATE = '0x00400020'    # a real game entry for the factory's create slot (0x28)
RELEASE = '0x004000a0'   # a different real game entry for the object's release slot (0x48)
CACHE_SIZE = 0x48
OBJECT_OFFSET = 64
FACTORY_OFFSET = 56
REQUEST_KIND = (0, 4)
REQUEST_WORDS = (8, 0x20)


def case(cid, held, create_result, create_sets_held=False):
    """held: the object the cache holds on entry (True or False). create_result: True for a new object,
    False for null. create_sets_held: the create leaves the held object in the cache, so the replacement
    must release it."""
    buffers = {'cache': {'size': CACHE_SIZE, 'bytes': '00' * CACHE_SIZE},
               'vt': {'size': 0x30},
               'release_vt': {'size': 0x50},
               'held': {'size': 0x10},
               'new': {'size': 0x10}}
    memory = [{'addr': 'buf:cache+0', 'pointer': 'vt'},
              {'addr': 'buf:cache+' + str(FACTORY_OFFSET), 'pointer': 'cache'},
              {'addr': 'buf:vt+40', 'guest': CREATE},
              {'addr': 'buf:release_vt+72', 'guest': RELEASE},
              {'addr': 'buf:held+0', 'pointer': 'release_vt'}]
    if held:
        memory.append({'addr': 'buf:cache+' + str(OBJECT_OFFSET), 'pointer': 'held'})
    ret = 'buf:new' if create_result else 0
    create_stub = {'address': CREATE, 'argc': 3, 'argi': [0, 1], 'ret': ret,
                   'argmem': [{'arg': 2, 'offset': REQUEST_KIND[0], 'size': 4},
                              {'arg': 2, 'offset': REQUEST_WORDS[0], 'size': 0x38}]}
    if create_sets_held:
        create_stub['writes'] = [{'arg': 0, 'offset': OBJECT_OFFSET, 'pointer': 'held'}]
    stubs = []
    if not held:
        stubs.append(create_stub)
        if create_sets_held:
            stubs.append({'address': RELEASE, 'argc': 1, 'argi': [0]})
    return {'schema': 1, 'address': ADDRESS, 'id': cid, 'returns': 'i64',
            'args': {'rdi': 'buf:cache'}, 'buffers': buffers, 'memory': memory, 'stubs': stubs,
            'imports': []}


CASES = [
    case('held_object_returned', held=True, create_result=False),
    case('created_nothing_held', held=False, create_result=True),
    case('create_returns_null', held=False, create_result=False),
    case('create_replaces_held_object', held=False, create_result=True, create_sets_held=True),
    case('create_null_releases_held_object', held=False, create_result=False, create_sets_held=True),
]


def main():
    """Write deterministic synthetic inputs to the requested directory."""
    if len(sys.argv) != 2:
        print('usage: get_or_create_cached_object_cases.py OUT_DIR', file=sys.stderr)
        return 2
    output = Path(sys.argv[1])
    output.mkdir(parents=True, exist_ok=True)
    for fixture in CASES:
        with (output / (fixture['id'] + '.json')).open('w') as stream:
            stream.write(json.dumps(fixture, indent=1) + '\n')
    print(f'{len(CASES)} synthetic cases written to {output}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
