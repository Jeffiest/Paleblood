// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a reference-counted object whose count shares its word with flag bits.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct PackedRefObject;

/**
 *
 * The virtual functions of a packed reference object: the destroy slot runs when the count drops to zero.
 *
 */
struct PackedRefVtable {
    void *unknown_slots[4];
    void (*destroy)(PackedRefObject *);  /**< Destroys the object. */
};
static_assert(offsetof(PackedRefVtable, destroy) == 0x20);

/**
 *
 * A reference-counted object whose 15-bit count sits in bits 15 to 29 of one word, with the other bits kept as flags.
 *
 */
struct PackedRefObject {
    const PackedRefVtable *vtable;  /**< Virtual functions. */
    uint32_t packed_count;          /**< Count in bits 15 to 29, flags elsewhere. */
};
static_assert(offsetof(PackedRefObject, packed_count) == 0x8);

constexpr uint32_t packed_count_shift = 15;
constexpr uint32_t packed_count_mask = 0x7fff;
constexpr uint32_t packed_count_field = packed_count_mask << packed_count_shift;
constexpr uint32_t packed_other_bits = ~packed_count_field;

}  // namespace misc
