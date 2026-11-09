// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: layout of an object that holds one block until its owner releases it.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"

namespace misc {

/**
 *
 * An object that keeps one block at +0x10 for as long as it is alive, and the allocator that frees it at +0x28.
 *
 */
struct HeldBlockOwner {
    const void *vtable;   /**< Virtual table pointer, set by the owner's destructors. */
    uint8_t unknown_0x08[0x08];
    void *held_block;     /**< Block released and cleared by the owner's release; null when none is held. */
    uint64_t word_0x18;   /**< Cleared when a destructor releases the held block. */
    uint64_t word_0x20;   /**< Cleared when a destructor releases the held block. */
    engine::Allocator *allocator_0x28; /**< Frees the held block through its free slot. */
};
static_assert(offsetof(HeldBlockOwner, held_block) == 0x10);
static_assert(offsetof(HeldBlockOwner, word_0x18) == 0x18 && offsetof(HeldBlockOwner, word_0x20) == 0x20);
static_assert(offsetof(HeldBlockOwner, allocator_0x28) == 0x28);

}  // namespace misc
