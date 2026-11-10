// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores a value into the holder and its owner's target, only when the owner's gating block is enabled.
#include <cstdint>

#include "gated_block.h"
#include "gated_holder.h"
#include "gated_owner.h"
#include "gated_settings.h"
#include "gated_target.h"

/**
 *
 * Stores the value in the holder, then in the target of the holder's owner, when the owner's gating block exists and
 * its enabled flag is set. Otherwise nothing is written.
 *
 */
extern "C" void bb_misc_gated_store_value(misc::GatedHolder *holder, uint32_t value)
{
    misc::GatedOwner *owner = holder->owner;
    misc::GatedBlock *block = owner->settings->block;
    if (block == nullptr || block->enabled_0x384 == 0) return;
    holder->value_0x20 = value;
    owner->target->value_0x04 = value;
}
