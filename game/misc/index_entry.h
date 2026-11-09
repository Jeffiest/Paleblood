// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an index entry found by a lookup: an index at +0x4 and two keys at +0x64 and +0x68.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * An index entry: its index at +0x4, the key it is filed under at +0x64, and the key it matches at +0x68.
 *
 */
struct IndexEntry {
    uint8_t unknown_0x00[0x4];
    uint32_t index_0x04;   /**< The index the first lookup's cache takes. */
    uint8_t unknown_0x08[0x5c];
    uint32_t key_0x64;     /**< Masked to 28 bits when it is used as the second lookup's id. */
    uint32_t key_0x68;     /**< Searched for in the node list. */
};
static_assert(offsetof(IndexEntry, index_0x04) == 0x4 && offsetof(IndexEntry, key_0x64) == 0x64);
static_assert(offsetof(IndexEntry, key_0x68) == 0x68);

}  // namespace misc
