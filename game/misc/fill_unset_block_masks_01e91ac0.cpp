// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies the mask of each counted word block slot that is unset from the source block where the source slot is set.
#include <cstdint>

#include "counted_word_block.h"

namespace {

constexpr uint64_t kLowByteMask = 0xff; /**< The low byte of the result, which carries the changed flag. */
constexpr uint64_t kChangedFlag = 1;    /**< The changed flag a slot that was copied leaves in the low byte. */

}  // namespace

/**
 *
 * For each of the block's five slots whose mask is unset while the source block's mask for that slot is set, copies the
 * source mask into the block. The first slot's copy leaves its source mask in the result before the flag is set; the
 * flag is set in the low byte of the result for every copy. A block with nothing to copy returns zero.
 *
 * The result is the value the original leaves in RAX, which callers may read.
 *
 */
extern "C" uint64_t bb_misc_fill_unset_block_masks_01e91ac0(misc::CountedWordBlock *block,
                                                           const misc::CountedWordBlock *source)
{
    uint64_t result = 0;
    for (uint32_t index = 0; index < misc::counted_word_block_slot_count; ++index) {
        misc::CountedWordObject &slot = block->slots[index];
        const uint32_t source_mask = source->slots[index].mask_0x08;
        if (slot.mask_0x08 != misc::counted_word_default_mask) continue;
        if (source_mask == misc::counted_word_default_mask) continue;
        if (index == 0) result = source_mask;
        slot.mask_0x08 = source_mask;
        result = (result & ~kLowByteMask) | kChangedFlag;
    }
    return result;
}
