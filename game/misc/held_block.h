// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the block an owner holds and the child that the block points at.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct HeldBlockChild;

/**
 *
 * A held block: a child pointer at +0x20.
 *
 */
struct HeldBlock {
    uint8_t unknown_0x00[0x20];
    HeldBlockChild *child_0x20; /**< Null when the block has no child. */
};
static_assert(offsetof(HeldBlock, child_0x20) == 0x20);

/**
 *
 * A child of a held block: a 64-bit value at +0x10.
 *
 */
struct HeldBlockChild {
    uint8_t unknown_0x00[0x10];
    uint64_t value_0x10; /**< Nonzero when the child carries a value. */
};
static_assert(offsetof(HeldBlockChild, value_0x10) == 0x10);

}  // namespace misc
