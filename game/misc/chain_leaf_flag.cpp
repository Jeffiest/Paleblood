// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reports the flag at the end of a holder's chain: zero when the owner has no link, or the link has no leaf.
#include <cstdint>

#include "chain_holder.h"
#include "chain_leaf.h"
#include "chain_owner.h"
#include "chain_slot.h"

/**
 *
 * Returns the flag byte of the leaf that the holder's owner reports, zero-extended to 32 bits.
 *
 * The owner's link is looked up once to test that it exists, then again for its leaf. A missing link or a
 * missing leaf gives zero.
 *
 */
extern "C" uint32_t bb_misc_chain_leaf_flag(misc::ChainHolder *holder)
{
    misc::ChainOwner *owner = holder->owner;
    if (owner->vtable->find_slot(owner) == nullptr) return 0;
    misc::ChainSlot *slot = owner->vtable->find_slot(owner);
    if (slot->leaf == nullptr) return 0;
    return slot->leaf->flag_0x140;
}
