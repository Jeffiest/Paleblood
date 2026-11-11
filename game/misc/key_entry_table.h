// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a table of keyed entries, each with a value that a search compares against a key.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** The largest number of entries a table is laid out with; the table's real count is its last index. */
constexpr size_t max_key_entry_count = 0x100000;

/**
 *
 * An entry of a key table: its key at 0x00 (the empty marker is -2), its target at 0x10 and its value at 0x18.
 *
 */
struct KeyEntry {
    int64_t key;                        /**< The entry's key; the value -2 marks an empty entry. */
    uint8_t unknown_0x08[0x08];
    uint64_t target;                    /**< The target the search returns the address of. */
    uint32_t value;                     /**< The value the search compares against its key. */
    uint8_t unknown_0x1c[0x04];
};
static_assert(offsetof(KeyEntry, key) == 0x00);
static_assert(offsetof(KeyEntry, target) == 0x10);
static_assert(offsetof(KeyEntry, value) == 0x18);
static_assert(sizeof(KeyEntry) == 0x20);

/**
 *
 * A key table: its last index at 0x08 and its entries from 0x10 on, indices zero through the last index.
 *
 */
struct KeyEntryTable {
    uint8_t unknown_0x00[0x08];
    uint64_t last_index;                /**< Index of the last entry. */
    KeyEntry entries[max_key_entry_count]; /**< The entries, from index zero. */
};
static_assert(offsetof(KeyEntryTable, last_index) == 0x08);
static_assert(offsetof(KeyEntryTable, entries) == 0x10);

}  // namespace misc
