// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct TableOwner;
struct TableObject;

/**
 *
 * An entry of a table: its owner, its size, and two lists of objects.
 *
 */
struct RefTableEntry {
    uint8_t unknown_0x00[0x10];
    TableOwner *owner;         /**< The owner whose children are visited. */
    uint8_t unknown_0x18[0x8];
    int32_t size;              /**< Size the entry is checked against. */
    uint8_t unknown_0x24[0xac];
    TableObject **first_list;  /**< First list of objects. */
    int32_t first_count;       /**< Number of objects in the first list. */
    uint8_t unknown_0xdc[0x4];
    TableObject **second_list; /**< Second list of objects. */
    int32_t second_count;      /**< Number of objects in the second list. */
};
static_assert(offsetof(RefTableEntry, owner) == 0x10);
static_assert(offsetof(RefTableEntry, size) == 0x20);
static_assert(offsetof(RefTableEntry, first_list) == 0xd0);
static_assert(offsetof(RefTableEntry, first_count) == 0xd8);
static_assert(offsetof(RefTableEntry, second_list) == 0xe0);
static_assert(offsetof(RefTableEntry, second_count) == 0xe8);

}  // namespace misc
