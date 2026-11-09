// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases the block an owner holds, when one is held, and clears the owner's pointer.
#include "held_block_owner.h"

#include "runtime/original.h"

namespace {

using misc::HeldBlockOwner;

RT_ORIGINAL(0x01c00d20, fn_01c00d20, void(void *block));

}  // namespace

/**
 *
 * Releases the block held by the owner, if any, and clears the owner's held pointer.
 *
 * With no block held the owner is left untouched and nothing is released.
 *
 */
extern "C" void bb_misc_release_held_block(HeldBlockOwner *owner)
{
    if (owner->held_block == nullptr) return;
    fn_01c00d20(owner->held_block);
    owner->held_block = nullptr;
}
