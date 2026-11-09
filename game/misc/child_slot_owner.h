// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * An object that holds one child pointer at +0x08, which its methods hand to the library call they make.
 *
 */
struct ChildSlotOwner {
    uint8_t unknown_0x00[0x8];
    void *child_0x08;   /**< The child the owner's calls work on, or null when there is none. */
};
static_assert(offsetof(ChildSlotOwner, child_0x08) == 0x8);

}  // namespace misc
