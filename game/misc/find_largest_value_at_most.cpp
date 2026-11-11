// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "key_entry_table.h"

namespace {

/** The key that marks an empty entry. */
constexpr int64_t empty_key = -2;

}  // namespace

/**
 *
 * Finds the non-empty entry with the largest value that does not exceed the key, returns the address of its
 * target, and stores the value through the output when one is given.
 *
 * Entries are scanned from index zero through the last index, and a later entry with an equal value wins.
 * When no entry qualifies the stored value is zero and the result is null.
 */
extern "C" void *bb_misc_find_largest_value_at_most(misc::KeyEntryTable *const *table_holder, uint32_t key,
                                                    uint32_t *value_out)
{
    const misc::KeyEntryTable *table = *table_holder;
    uint32_t best_value = 0;
    void *found = nullptr;
    if (table != nullptr) {
        for (uint64_t index = 0; index <= table->last_index; ++index) {
            const misc::KeyEntry *entry = &table->entries[index];
            if (entry->key == empty_key) continue;
            if (entry->value < best_value || entry->value > key) continue;
            best_value = entry->value;
            found = const_cast<uint64_t *>(&entry->target);
        }
    }
    if (value_out != nullptr) *value_out = best_value;
    return found;
}
