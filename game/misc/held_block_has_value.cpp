// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reports whether the block an owner holds has a child carrying a value.
#include "held_block.h"
#include "held_block_owner.h"

/**
 *
 * Reports whether the owner's held block has a child whose value is nonzero.
 *
 * Without a held block, or without a child on it, the answer is false and nothing is read further.
 *
 */
extern "C" bool bb_misc_held_block_has_value(misc::HeldBlockOwner *owner)
{
    auto *block = static_cast<misc::HeldBlock *>(owner->held_block);
    if (block == nullptr) return false;
    misc::HeldBlockChild *child = block->child_0x20;
    if (child == nullptr) return false;
    return child->value_0x10 != 0;
}
