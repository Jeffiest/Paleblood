// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a pending block whose 32-bit offset word sits at +0x04.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A block whose 32-bit offset word at +0x04 is set when its record is finished.
 *
 */
struct OffsetStoreBlock {
    uint16_t first_tag_0x00;              /**< The first 16-bit tag written when the block is allocated. */
    uint16_t second_tag_0x02;             /**< The second 16-bit tag written when the block is allocated. */
    uint32_t offset_0x04;                 /**< The offset stored from the record's limit and this block's address. */
};
static_assert(offsetof(OffsetStoreBlock, offset_0x04) == 0x04);

}  // namespace misc
