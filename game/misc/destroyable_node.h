// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a heap object whose vtable has a destroy slot that tears it down before its allocator frees it.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct DestroyableNode;

/**
 *
 * The vtable of a destroyable object: its destroy slot is at +0x8.
 *
 */
struct DestroyableVtable {
    uint8_t unknown_0x00[0x8];
    void (*destroy)(DestroyableNode *node);    /**< Tears the object down before it is freed. */
};
static_assert(offsetof(DestroyableVtable, destroy) == 0x8);

/**
 *
 * A heap object whose first word is its vtable, stored as is.
 *
 */
struct DestroyableNode {
    const DestroyableVtable *vtable;           /**< The object's vtable. */
};
static_assert(offsetof(DestroyableNode, vtable) == 0x0);

}  // namespace misc
