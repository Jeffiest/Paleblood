// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct RefItem;
struct RefChild;

/** Bits of a list capacity field that hold the capacity; the top two bits are flags. */
constexpr uint32_t list_capacity_mask = 0x3fffffff;

/**
 *
 * An object that holds reference items: the items it holds, the items attached to it, and the
 * children told when an item is attached or detached.
 *
 */
struct RefHolder {
    uint8_t unknown_0x00[0x10];
    RefItem **held;               /**< Items the holder keeps. */
    int32_t held_count;           /**< Number of held items. */
    uint32_t held_capacity;       /**< Capacity of held, in the low 30 bits. */
    RefItem **attached;           /**< Items attached to the holder, each counted once. */
    int32_t attached_count;       /**< Number of attached items. */
    uint32_t attached_capacity;   /**< Capacity of attached, in the low 30 bits. */
    uint8_t unknown_0x30[0x10];
    RefChild **children;          /**< Children told about attached and detached items. */
    int32_t child_count;          /**< Number of children. */
    uint32_t child_capacity;      /**< Capacity of children, in the low 30 bits. */
};
static_assert(offsetof(RefHolder, held) == 0x10);
static_assert(offsetof(RefHolder, attached) == 0x20);
static_assert(offsetof(RefHolder, attached_count) == 0x28);
static_assert(offsetof(RefHolder, children) == 0x40);
static_assert(offsetof(RefHolder, child_count) == 0x48);

}  // namespace misc
