// SPDX-License-Identifier: GPL-2.0-or-later
#include "held_block_owner.h"

#include "runtime/original.h"

namespace {

using misc::HeldBlockOwner;

// The virtual table the owner's destructors store.
RT_GLOBAL(0x0574f2a0, held_block_vtable, const uint8_t);
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Deleting destructor of an owner that holds one block: stores its virtual table, releases the held
 * block through its allocator when one is held, then hands the owner to the library routine and
 * returns that routine's result.
 *
 */
extern "C" uint64_t bb_misc_held_block_delete_02242ea0(HeldBlockOwner *owner)
{
    owner->vtable = held_block_vtable.address();
    if (owner->held_block != nullptr) owner->allocator_0x28->free(owner->held_block);
    return fn_02fbe588(owner);
}
