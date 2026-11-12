// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a growable array slot holding its block, its element count and its capacity word.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Low bits of a capacity word that hold the capacity itself. */
constexpr uint32_t reserved_slot_capacity_mask = 0x3fffffff;
/** The capacity word of a slot that has no block yet: its sign bit is set. */
constexpr uint32_t reserved_slot_unallocated = 0x80000000;

/**
 *
 * One growable array: the address of its block, how many elements are in use, and the capacity
 * word, whose sign bit is set while the slot has no block.
 *
 */
struct ReservedSlot {
    void *block;            /**< Address of the block, written by the reservation. */
    int32_t count;          /**< Number of elements in use. */
    uint32_t capacity_word; /**< Capacity in the low 30 bits, sign bit set when unallocated. */
};
static_assert(offsetof(ReservedSlot, block) == 0x00);
static_assert(offsetof(ReservedSlot, count) == 0x08);
static_assert(offsetof(ReservedSlot, capacity_word) == 0x0c);
static_assert(sizeof(ReservedSlot) == 0x10);

}  // namespace misc
