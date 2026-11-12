// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: builds a counted word block: its virtual table, its kind and five counted word objects with default masks.
#include <cstdint>

#include "counted_word_block.h"

/**
 *
 * Sets the block's virtual table and kind, then gives each of its five counted word objects the counted word virtual
 * table, the default mask and a zero word. The word is cleared, the mask is set, and the padding after the kind is not
 * touched.
 *
 * Returns the default mask in RAX, the value the original leaves there last; the block is reached through a table of
 * pointers, so callers may read RAX.
 *
 */
extern "C" uint64_t bb_misc_build_counted_word_block_01e91810(misc::CountedWordBlock *block)
{
    block->vtable_0x00 = misc::counted_word_block_vtable.address();
    block->kind = misc::counted_word_block_kind;
    for (misc::CountedWordObject &slot : block->slots) {
        slot.vtable_0x00 = misc::counted_word_vtable.address();
        slot.mask_0x08 = misc::counted_word_default_mask;
        slot.word_0x0c = 0;
    }
    return misc::counted_word_default_mask;
}
