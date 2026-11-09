// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: layout of an object that holds one block until its owner releases it.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * An object that keeps one block at +0x10 for as long as it is alive.
 *
 */
struct HeldBlockOwner {
    uint8_t unknown_0x00[0x10];
    void *held_block; /**< Block released and cleared by the owner's release; null when none is held. */
};
static_assert(offsetof(HeldBlockOwner, held_block) == 0x10);

}  // namespace misc
