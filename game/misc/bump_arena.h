// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a bump arena whose cursor moves through a fixed region and whose pending block takes its offset.
#pragma once

#include <cstddef>
#include <cstdint>

#include "offset_store_block.h"

namespace misc {

/**
 *
 * A bump arena: the cursor at +0x10, the region size at +0x18, the region base at +0x20 and the pending block at +0x28.
 *
 */
struct BumpArena {
    uint8_t unknown_0x00[0x10];
    uintptr_t cursor_0x10;                /**< The next free address in the region. */
    uint64_t size_0x18;                   /**< The region's size, added to the base to give its end. */
    uintptr_t base_0x20;                  /**< The region's first address. */
    OffsetStoreBlock *pending_0x28;       /**< The most recent block, whose offset is stored by the next allocation. */
};
static_assert(offsetof(BumpArena, cursor_0x10) == 0x10);
static_assert(offsetof(BumpArena, size_0x18) == 0x18);
static_assert(offsetof(BumpArena, base_0x20) == 0x20);
static_assert(offsetof(BumpArena, pending_0x28) == 0x28);

}  // namespace misc
