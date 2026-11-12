// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a word cursor, the word it was started from, and the block of items it reads its values from.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A block of items a word cursor reads: two header values, then the items themselves from +0x20.
 *
 */
struct WordCursorBlock {
    uint8_t unknown_0x00[0x18];
    uint32_t value_0x18;        /**< The first header value, read by the first getter. */
    uint32_t value_0x1c;        /**< The second header value, read by the second getter. */
    uint32_t items_0x20[1];     /**< The items; an index counts from the first one at +0x20. */
};
static_assert(offsetof(WordCursorBlock, value_0x18) == 0x18 && offsetof(WordCursorBlock, value_0x1c) == 0x1c);
static_assert(offsetof(WordCursorBlock, items_0x20) == 0x20);

/**
 *
 * A word cursor: the word it was started from, the block it reads, and the index it is at within that block.
 *
 */
struct WordCursor {
    uint32_t word_0x00;             /**< The word the cursor was started from. */
    uint8_t unknown_0x04[0x4];
    WordCursorBlock *block_0x08;    /**< The block the cursor reads, or null when it has none. */
    int32_t index_0x10;             /**< The index within the block; minus one when none is set. */
};
static_assert(offsetof(WordCursor, word_0x00) == 0x0 && offsetof(WordCursor, block_0x08) == 0x8);
static_assert(offsetof(WordCursor, index_0x10) == 0x10);

}  // namespace misc
