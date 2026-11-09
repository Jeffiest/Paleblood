// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct TableChild;

/**
 *
 * The owner of a table entry: its children and their count.
 *
 */
struct TableOwner {
    uint8_t unknown_0x00[0xb8];
    TableChild **children; /**< The owner's children. */
    int32_t child_count;   /**< Number of children. */
};
static_assert(offsetof(TableOwner, children) == 0xb8);
static_assert(offsetof(TableOwner, child_count) == 0xc0);

}  // namespace misc
