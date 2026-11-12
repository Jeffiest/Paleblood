// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: applies a counted word source to a counted word block: fills the block's kind, applies the source to its objects.
#include <cstdint>

#include "counted_word_block.h"

namespace {

constexpr int32_t kKindFillKind = 4; /**< The kind the source is asked to fill into the block's kind word. */

}  // namespace

/**
 *
 * Asks the source to fill the block's kind word, applies the source to the block's first four objects through their
 * virtual tables, and then applies it to the last object. The last application is a tail call in the original, so its
 * result is the function's result.
 *
 * Returns the result of the last application in RAX, which the original leaves there.
 *
 */
extern "C" uint64_t bb_misc_apply_source_to_counted_block_01e91b50(misc::CountedWordBlock *block,
                                                                  misc::CountedWordSource *source)
{
    source->vtable->fill_0x20(source, &block->kind, kKindFillKind);
    for (uint32_t index = 0; index + 1 < misc::counted_word_block_slot_count; ++index) {
        misc::CountedWordObject &slot = block->slots[index];
        static_cast<const misc::CountedWordObjectVtable *>(slot.vtable_0x00)->apply_0x00(&slot, source);
    }
    misc::CountedWordObject &last = block->slots[misc::counted_word_block_slot_count - 1];
    return static_cast<const misc::CountedWordObjectVtable *>(last.vtable_0x00)->apply_0x00(&last, source);
}
