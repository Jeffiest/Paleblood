// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reports whether a marked record with the given key is in the record table's ring.
#include <cstdint>

#include "../engine/engine.h"
#include "record_registry.h"

/**
 *
 * Walks the record ring of the registry's table and returns true for the first record that is marked and has
 * the key. An empty table, a null record and an unmarked record never match.
 *
 */
extern "C" bool bb_misc_has_marked_record(int32_t key)
{
    misc::RecordRegistry *registry = engine::require(misc::record_registry, misc::record_registry_name.address());
    misc::RecordTable *table = registry->table;
    if (table->count_0x38 == 0) return false;

    misc::ObjectQueueNode *const sentinel = table->sentinel;
    for (misc::ObjectQueueNode *node = sentinel->next; node != sentinel; node = node->next) {
        misc::QueuedObject *record = node->object;
        if (record != nullptr && record->marked_0x0c != 0 && record->key_0x08 == static_cast<uint32_t>(key)) {
            return true;
        }
    }
    return false;
}
