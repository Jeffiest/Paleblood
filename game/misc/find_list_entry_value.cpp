// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: finds the first entry of the object's list whose key equals the key given and returns its
// value. A key that no entry has gives zero.
#include <cstdint>

#include "node_list_object.h"

using misc::NodeListEntry;
using misc::NodeListObject;

/**
 *
 * Walks the object's list from its head and returns the value of the first entry whose key equals
 * the key word; when no entry has that key the result is zero.
 *
 */
extern "C" uint64_t bb_misc_find_list_entry_value(NodeListObject *object, const uint32_t *key)
{
    for (NodeListEntry *entry = object->head_0x0120; entry != nullptr; entry = entry->next_0x18) {
        if (entry->key_0x00 == *key) return entry->value_0x08;
    }
    return 0;
}
