// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "lookup_table.h"

/**
 *
 * Returns the address of a lookup table's second list field, without reading the table.
 *
 */
extern "C" uint64_t bb_misc_lookup_second_list_address(misc::LookupTable *table)
{
    return reinterpret_cast<uint64_t>(table) + offsetof(misc::LookupTable, second_entries);
}
