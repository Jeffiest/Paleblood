// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owner that holds one reference-counted object, and the object it holds.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A reference-counted object that an owner holds: its 32-bit count sits at +0x08.
 *
 */
struct HeldReference {
    uint8_t unknown_0x0000[0x08];
    uint32_t count_0x08;         /**< The reference count. */
};
static_assert(offsetof(HeldReference, count_0x08) == 0x08);

/**
 *
 * The owner: the held object, or null, at +0x1c0.
 *
 */
struct HeldReferenceOwner {
    uint8_t unknown_0x0000[0x1c0];
    HeldReference *held_0x1c0;   /**< The held object; null when the owner holds none. */
};
static_assert(offsetof(HeldReferenceOwner, held_0x1c0) == 0x1c0);

}  // namespace misc
