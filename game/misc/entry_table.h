// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the entry table a record owns: a pointer to an entry array, whose header holds the last
// index, then entries of 0x28 bytes, each with a key, a slot index and two tagged references.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * An entry array: a header with the last index, followed by its entries.
 *
 */
struct EntryArray {
    uint8_t unknown_0x00[0x08];
    uint64_t last_index; /**< The last entry index, which is also the slot mask. */
};
static_assert(offsetof(EntryArray, last_index) == 0x08);
static_assert(sizeof(EntryArray) == 0x10);

/** The key that marks an entry as empty. */
constexpr int64_t empty_table_key = -2;

/**
 *
 * One entry: its key, the slot index the lookup compares, and two tagged references.
 *
 */
struct TableEntry {
    int64_t key;               /**< Empty entries hold empty_table_key. */
    uint64_t slot;             /**< The slot index that a lookup compares with the key's slot. */
    uint64_t second_reference; /**< Tagged pointer whose low bits are tag bits. */
    uint64_t first_reference;  /**< Tagged pointer whose low bits are tag bits. */
    uint8_t unknown_0x20[0x08];
};
static_assert(offsetof(TableEntry, slot) == 0x08);
static_assert(offsetof(TableEntry, second_reference) == 0x10);
static_assert(offsetof(TableEntry, first_reference) == 0x18);
static_assert(sizeof(TableEntry) == 0x28);

/**
 *
 * The table a record points at: its first word is the entry array, or null when none is held.
 *
 */
struct EntryTable {
    EntryArray *array;
};
static_assert(offsetof(EntryTable, array) == 0x00);

}  // namespace misc
