// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "ref_item.h"

namespace misc {

/** The state byte an object takes when it is made with its flag set. */
constexpr uint8_t dual_member_active_state = 0x02;
/** Sizes of the two member blocks. */
constexpr size_t first_member_size = 0x28;
constexpr size_t second_member_size = 0x08;

/**
 *
 * An object with two member blocks, each set up by its own initialiser, and two words that the constructors clear.
 *
 */
struct DualMemberObject {
    const void *vtable;                   /**< The object's virtual functions, set by its constructor. */
    uint8_t unknown_0x0008[0x3b];
    uint8_t state_byte;                   /**< Set to the active state when the object is made with its flag. */
    uint8_t unknown_0x0044[0x0c];
    uint8_t first_member[first_member_size];           /**< The first member block, set up by its initialiser. */
    uint64_t cleared_word_a;              /**< Cleared when the object is made. */
    uint8_t unknown_0x0080[0x08];
    uint8_t second_member[second_member_size];          /**< The second member block, set up by its initialiser. */
    RefItem *cleared_word_b;              /**< The reference-counted item the object holds; null when the object is made. */
};
static_assert(offsetof(DualMemberObject, vtable) == 0x00);
static_assert(offsetof(DualMemberObject, state_byte) == 0x43);
static_assert(offsetof(DualMemberObject, first_member) == 0x50);
static_assert(offsetof(DualMemberObject, cleared_word_a) == 0x78);
static_assert(offsetof(DualMemberObject, second_member) == 0x88);
static_assert(offsetof(DualMemberObject, cleared_word_b) == 0x90);

}  // namespace misc
