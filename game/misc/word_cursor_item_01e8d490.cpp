// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reads an item of a word cursor's block, or all ones when the cursor has no block.
#include <cstdint>

#include "word_cursor.h"

namespace {

constexpr uint32_t kNoItem = 0xffffffff;     /**< The value read when the cursor has no block. */

}  // namespace

/**
 *
 * Returns the item at the index of the cursor's block, or all ones when the cursor has no block. The index is taken
 * as its 32-bit value.
 *
 */
extern "C" uint32_t bb_misc_word_cursor_item_01e8d490(const misc::WordCursor *cursor, uint32_t index)
{
    const misc::WordCursorBlock *block = cursor->block_0x08;
    if (block == nullptr) return kNoItem;
    return block->items_0x20[index];
}
