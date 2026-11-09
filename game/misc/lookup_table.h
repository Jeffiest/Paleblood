// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * One entry of a lookup table: a tagged link whose low bit is a flag, and a word.
 *
 */
struct LookupEntry {
    uint64_t link;           /**< Tagged link at 0x00: its low bit is a flag and is not part of the address. */
    uint32_t word;           /**< Word at 0x08. */
    uint8_t unknown_0x0c[0x4];
};
static_assert(offsetof(LookupEntry, link) == 0x00);
static_assert(offsetof(LookupEntry, word) == 0x08);
static_assert(sizeof(LookupEntry) == 0x10);

/**
 *
 * A table that holds three lists of entries, each with its count.
 *
 */
struct LookupTable {
    uint8_t unknown_0x00[0x70];
    LookupEntry *entries;        /**< The first list, at 0x70. */
    int32_t count;               /**< Number of entries in the first list, at 0x78. */
    uint8_t unknown_0x7c[0x4];
    LookupEntry *second_entries; /**< The second list, at 0x80. */
    int32_t second_count;        /**< Number of entries in the second list, at 0x88. */
    uint8_t unknown_0x8c[0x4];
    LookupEntry *third_entries;  /**< The third list, at 0x90. */
    int32_t third_count;         /**< Number of entries in the third list, at 0x98. */
};
static_assert(offsetof(LookupTable, entries) == 0x70);
static_assert(offsetof(LookupTable, count) == 0x78);
static_assert(offsetof(LookupTable, second_entries) == 0x80);
static_assert(offsetof(LookupTable, second_count) == 0x88);
static_assert(offsetof(LookupTable, third_entries) == 0x90);
static_assert(offsetof(LookupTable, third_count) == 0x98);

}  // namespace misc
