// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls the gating block's routine, then clears the holder's value and its owner's target, only when the block is enabled.
#include <cstdint>

#include "gated_block.h"
#include "gated_holder.h"
#include "gated_owner.h"
#include "gated_settings.h"
#include "gated_target.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01e19f60, fn_01e19f60, void(misc::GatedBlock *block, const uint8_t *tag));
RT_GLOBAL(0x04d92c40, clear_tag, const uint8_t);

/** The value the clear writes: all bits set. */
constexpr uint32_t cleared_value = 0xffffffff;

}  // namespace

/**
 *
 * Calls the gating block's routine with the clear tag, then writes the cleared value into the holder and into the
 * target of the holder's owner. Nothing is called or written when the owner's block is missing or disabled.
 *
 * The owner is read again after the call, as the original reads it from the holder once more.
 *
 */
extern "C" void bb_misc_gated_clear_value(misc::GatedHolder *holder)
{
    misc::GatedBlock *block = holder->owner->settings->block;
    if (block == nullptr || block->enabled_0x384 == 0) return;
    fn_01e19f60(block, clear_tag.address());
    holder->value_0x20 = cleared_value;
    holder->owner->target->value_0x04 = cleared_value;
}
