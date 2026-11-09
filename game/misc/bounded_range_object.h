// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** The lowest value of a signed 64-bit word, stored in the range slots and the last word. */
constexpr uint64_t lowest_int64_value = 0x8000000000000000ull;

/** Number of range slots in a bounded range object. */
constexpr size_t range_slot_count = 9;

/**
 *
 * One range slot: the lowest value of a range, then a zero word that is cleared with it.
 *
 */
struct RangeSlot {
    uint64_t lowest_value;  /**< The lowest value of the range. */
    uint64_t zero_word;     /**< Zero. */
};
static_assert(sizeof(RangeSlot) == 0x10);

/**
 *
 * An object with two vtables: its own, and a secondary one at 0x10 that a second base uses. It holds
 * a zero word, nine range slots and a final lowest value.
 *
 */
struct BoundedRangeObject {
    const void *vtable;                 /**< The object's own vtable address point, set when it is built. */
    uint32_t refcount_word;             /**< Low 16 bits: references. High 16 bits: block size, or the default marker. */
    uint8_t unknown_0x0c[0x4];
    const void *secondary_vtable;       /**< The second base's vtable address point, at 0x10. */
    uint8_t unknown_0x18[0x8];
    uint64_t zero_0x20;                 /**< Zeroed when the object is built. */
    RangeSlot slots[range_slot_count]; /**< Range slots from 0x28 onwards. */
    uint64_t lowest_0xb8;               /**< The lowest value, set when the object is built. */
};
static_assert(offsetof(BoundedRangeObject, refcount_word) == 0x08);
static_assert(offsetof(BoundedRangeObject, secondary_vtable) == 0x10);
static_assert(offsetof(BoundedRangeObject, zero_0x20) == 0x20);
static_assert(offsetof(BoundedRangeObject, slots) == 0x28);
static_assert(offsetof(BoundedRangeObject, lowest_0xb8) == 0xb8);
static_assert(sizeof(BoundedRangeObject) == 0xc0);

/** Offset of the secondary base within the object: a second base's pointer is this far past the object. */
constexpr size_t secondary_base_offset = offsetof(BoundedRangeObject, secondary_vtable);

}  // namespace misc
