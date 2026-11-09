// SPDX-License-Identifier: GPL-2.0-or-later
#include "held_block_owner.h"

#include "runtime/original.h"

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x0574f2a0, held_block_vtable, const uint8_t);

}  // namespace

/**
 *
 * Destroys an owner that holds one block: stores its virtual table, then, when a block is held,
 * releases it through the owner's allocator and clears the held block and the two words after it.
 *
 * With no block held the owner keeps its other words as they are.
 *
 */
extern "C" void bb_misc_held_block_destroy_02242ee0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block == nullptr) return;
    owner->allocator_0x28->free(owner->held_block);
    owner->word_0x20 = 0;
    owner->word_0x18 = 0;
    owner->held_block = nullptr;
}
