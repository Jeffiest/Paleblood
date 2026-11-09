// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The table of entries that an entry reference selects from.
 *
 */
struct RefTableEntry;

struct RefEntryTable {
    uint8_t unknown_0x00[0x20];
    RefTableEntry **entries; /**< The entries, indexed by an entry reference's index. */
};
static_assert(offsetof(RefEntryTable, entries) == 0x20);

}  // namespace misc
