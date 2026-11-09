// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an owner that holds one child object whose query slot returns a 64-bit value.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct QueryChild;

/**
 *
 * The vtable of a query child: its query slot is at +0x30.
 *
 */
struct QueryChildVtable {
    uint8_t unknown_0x00[0x30];
    uint64_t (*query)(QueryChild *child); /**< Slot 0x30: returns the child's 64-bit answer. */
};
static_assert(offsetof(QueryChildVtable, query) == 0x30);

/**
 *
 * A child object whose first word is its vtable.
 *
 */
struct QueryChild {
    const QueryChildVtable *vtable; /**< The child's virtual functions. */
};
static_assert(offsetof(QueryChild, vtable) == 0x0);

/**
 *
 * An owner that holds at most one query child at +0x30.
 *
 */
struct QueryChildOwner {
    uint8_t unknown_0x00[0x30];
    QueryChild *child; /**< The child the owner holds, or null when it holds none. */
};
static_assert(offsetof(QueryChildOwner, child) == 0x30);

}  // namespace misc
