// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that owns one heap block at +0x28, released through the allocator that the block reports.
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace misc {

/**
 *
 * The vtable address point the holder's destructors store in the object.
 *
 */
RT_GLOBAL(0x057358b0, allocated_block_holder_vtable, const uint8_t);

/**
 *
 * An object whose vtable is first, with its block at +0x28.
 *
 */
struct AllocatedBlockHolder {
    const void *vtable;               /**< Set by the holder's destructors to its vtable address point. */
    uint8_t unknown_0x08[0x20];
    void *block_0x28;                 /**< The heap block the holder owns, or null when it owns none. */
};
static_assert(offsetof(AllocatedBlockHolder, block_0x28) == 0x28);

}  // namespace misc
