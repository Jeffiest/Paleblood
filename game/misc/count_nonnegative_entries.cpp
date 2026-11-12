// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: counts the entries of a record whose signed value is not negative.
#include <cstdint>

#include "nonnegative_entry_record.h"

/**
 *
 * Counts the entries whose signed value has a clear sign bit, reading the low 32 bits of each entry.
 *
 * The result is the number of non-negative entries, from zero to the record's entry count.
 */
extern "C" uint32_t bb_misc_count_nonnegative_entries(const NonnegativeEntryRecord *record)
{
    uint32_t count = 0;
    for (const SignedEntry &entry : record->entries) {
        if (entry.value >= 0) ++count;
    }
    return count;
}
