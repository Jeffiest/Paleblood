// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the address of a record's entry by index, or null when the index is past the last entry.
#include <cstdint>

#include "nonnegative_entry_record.h"

/**
 *
 * Returns the address of the entry at the index, or null when the index is above the last entry.
 *
 * The index is taken as unsigned 32 bits, so a negative index is past the last entry too.
 */
extern "C" SignedEntry *bb_misc_entry_address_by_index(NonnegativeEntryRecord *record, uint32_t index)
{
    constexpr uint32_t last_index = signed_entry_count - 1;
    if (index > last_index) return nullptr;
    return &record->entries[index];
}
