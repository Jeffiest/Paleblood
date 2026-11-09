// SPDX-License-Identifier: GPL-2.0-or-later
#include "record_table.h"

#include <cstdint>

namespace {

/** Result when no record of the table is at the given address. */
constexpr int32_t not_found = -1;

}  // namespace

/**
 *
 * Finds the index of a record in a table of 24-byte records, given the address of the record.
 *
 * The search counts down from the given address in steps of one record, so the record is found
 * when the table's storage starts exactly index records below it. The first index that matches
 * is returned; when the table is empty, or no index in range matches, the result is -1.
 */
extern "C" int32_t bb_misc_find_record_index(const misc::RecordTable *table, const void *record)
{
    const uintptr_t record_address = reinterpret_cast<uintptr_t>(record);
    const uintptr_t storage_address = reinterpret_cast<uintptr_t>(table->records);
    for (uint64_t index = 0; index < table->count; ++index) {
        if (storage_address == record_address - index * misc::record_stride) return static_cast<int32_t>(index);
    }
    return not_found;
}
