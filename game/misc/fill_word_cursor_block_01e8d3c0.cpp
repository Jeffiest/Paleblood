// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills a word cursor's block from a source: its flag bits, its value and six entries, each absent one as all ones.
#include <cstddef>
#include <cstdint>

#include "word_cursor.h"

namespace {

constexpr uint32_t kNoItem = 0xffffffff;      /**< The item stored for an entry that has no item. */
constexpr uint32_t kLowBitMask = 0x1;         /**< Masks one flag bit of the kind byte. */
constexpr uint32_t kSwapShift = 0x1;          /**< Moves the high flag bit down to the low position, and back up. */

/**
 *
 * The two flag bits the block keeps from a kind object: its low bit moves up one place and its high bit moves down.
 * A missing kind object gives no flags.
 *
 */
uint32_t flags_of_kind(const misc::WordCursorSourceKind *kind)
{
    if (kind == nullptr) return 0;
    const uint32_t bits = kind->bits_0x8c;
    const uint32_t low_bit = bits & kLowBitMask;
    const uint32_t high_bit = (bits >> kSwapShift) & kLowBitMask;
    return high_bit | (low_bit << kSwapShift);
}

}  // namespace

/**
 *
 * Fills the block of the cursor from the source. The block takes the source's flags and value, then each entry's value
 * when the entry has an item, and all ones when it has none. A cursor without a block is left alone.
 *
 * Returns the block, as the original leaves it in RAX.
 *
 */
extern "C" uint64_t bb_misc_fill_word_cursor_block_01e8d3c0(misc::WordCursor *cursor,
                                                           const misc::WordCursorSource *source)
{
    misc::WordCursorBlock *block = cursor->block_0x08;
    if (block == nullptr) return 0;
    block->value_0x18 = flags_of_kind(source->kind_0x08);
    block->value_0x1c = source->value_0x10;
    for (size_t index = 0; index < misc::kWordCursorSourceEntryCount; ++index) {
        const misc::WordCursorSourceEntry &entry = source->entries_0x18[index];
        block->items_0x20[index] = entry.item_0x08 != nullptr ? entry.value_0x00 : kNoItem;
    }
    return reinterpret_cast<uint64_t>(block);
}
