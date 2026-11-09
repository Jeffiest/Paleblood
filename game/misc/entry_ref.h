// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A reference to one entry of a table, with the indices of the children it visits.
 *
 */
struct EntryRef {
    uint8_t unknown_0x00[0x1c];
    int32_t entry_index;   /**< Index of the entry in the table. */
    uint8_t unknown_0x20[0x8];
    int32_t *child_indices; /**< Indices of the owner children to visit, in order. */
    int32_t child_index_count; /**< Number of child indices. */
};
static_assert(offsetof(EntryRef, entry_index) == 0x1c);
static_assert(offsetof(EntryRef, child_indices) == 0x28);
static_assert(offsetof(EntryRef, child_index_count) == 0x30);

}  // namespace misc
