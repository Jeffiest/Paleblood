// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object with a vtable and an owned pointer at offset 0x10, released when the object is torn down.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The object: its vtable address point is stored at the start, and the block it owns sits at offset 0x10.
 *
 */
struct OwnedPointerObject {
    const void *vtable;           /**< The object's vtable address point. */
    uint8_t unknown_0x0008[0x8];
    void *owned;                  /**< The block the object owns, or null once released. */
};
static_assert(offsetof(OwnedPointerObject, vtable) == 0x0);
static_assert(offsetof(OwnedPointerObject, owned) == 0x10);

}  // namespace misc
