// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an indexed pool: a sub-object whose address is passed on, and the list of its entries.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct RetainablePoolEntry;

/**
 *
 * The pool: a sub-object at +0x2a0 whose address is passed on, and the first entry of its list at +0x2a8.
 *
 */
struct IndexedPool {
    uint8_t unknown_0x0000[0x2a0];
    uint8_t sub_object[1];  /**< Only its address is passed on; its size is not known here. */
    RetainablePoolEntry *first_0x2a8; /**< The first entry of the list, or null when the list is empty. */
};
static_assert(offsetof(IndexedPool, sub_object) == 0x2a0 && offsetof(IndexedPool, first_0x2a8) == 0x2a8);

}  // namespace misc
