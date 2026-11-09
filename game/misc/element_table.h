// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a table of 0x20-byte elements, each identified by the 32-bit word it starts with.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * One element of an ElementTable: 0x20 bytes whose leading 32-bit word is its key.
 *
 */
struct TableElement {
    uint8_t unknown_0x00[0x20];
};
static_assert(sizeof(TableElement) == 0x20);

/**
 *
 * A counted array of TableElement with its own allocator and a few state words.
 *
 */
struct ElementTable {
    uint64_t value_0x00;      /**< State word cleared when the table is reset. */
    uint64_t value_0x08;      /**< State word cleared when the table is reset. */
    uint32_t value_0x10;      /**< State word cleared when the table is reset. */
    uint8_t unknown_0x14[0x4];
    TableElement *elements;   /**< The element array, element_count entries long. */
    uint32_t element_count;   /**< Number of entries in elements. */
    uint8_t unknown_0x24[0x4];
    uint64_t value_0x28;      /**< State word cleared when the table is reset. */
    uint32_t value_0x30;      /**< State word cleared when the table is reset. */
    uint8_t unknown_0x34[0x4];
    void *allocator;          /**< Allocator handle passed to the allocation and construction steps. */
    uint64_t value_0x40;      /**< State word cleared when the table is reset. */
};
static_assert(offsetof(ElementTable, value_0x00) == 0x00);
static_assert(offsetof(ElementTable, value_0x08) == 0x08);
static_assert(offsetof(ElementTable, value_0x10) == 0x10);
static_assert(offsetof(ElementTable, elements) == 0x18);
static_assert(offsetof(ElementTable, element_count) == 0x20);
static_assert(offsetof(ElementTable, value_0x28) == 0x28);
static_assert(offsetof(ElementTable, value_0x30) == 0x30);
static_assert(offsetof(ElementTable, allocator) == 0x38);
static_assert(offsetof(ElementTable, value_0x40) == 0x40);

}  // namespace misc
