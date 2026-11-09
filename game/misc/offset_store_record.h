// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a record that holds a 32-bit limit and the pending block whose offset word is set from it.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct OffsetStoreBlock;

/**
 *
 * A record with a 32-bit limit at +0x10 and the pending block at +0x28, cleared once its offset is stored.
 *
 */
struct OffsetStoreRecord {
    uint8_t unknown_0x00[0x10];
    uint32_t limit_0x10;                  /**< The 32-bit limit that the block offset is measured from. */
    uint8_t unknown_0x14[0x14];
    OffsetStoreBlock *pending_0x28;       /**< The pending block, or null when none is waiting. */
};
static_assert(offsetof(OffsetStoreRecord, limit_0x10) == 0x10);
static_assert(offsetof(OffsetStoreRecord, pending_0x28) == 0x28);

}  // namespace misc
