// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owner object that keeps a vector of 64-bit values and forwards updates to a child.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The vector of 64-bit values embedded in ValueOwner; its pointers delimit the stored values.
 *
 */
struct ValueVector {
    uint8_t unknown_0x00[0x08];
    uint64_t *begin;    /**< First stored value. */
    uint64_t *end;      /**< One past the last stored value. */
    uint64_t *capacity; /**< End of the allocated storage. */
};
static_assert(offsetof(ValueVector, begin) == 0x08);
static_assert(offsetof(ValueVector, end) == 0x10);
static_assert(offsetof(ValueVector, capacity) == 0x18);
static_assert(sizeof(ValueVector) == 0x20);

/** Size in bytes of one stored value. */
constexpr uint64_t value_size = 8;

struct ValueChild;

/**
 *
 * The virtual table of ValueChild; the handler is its slot 0x60.
 *
 */
struct ValueChildVtable {
    uint8_t unknown_0x0000[0x60];
    uint64_t (*handle_0x60)(ValueChild *child, uint64_t value); /**< Takes the value and returns a 64-bit result. */
};
static_assert(offsetof(ValueChildVtable, handle_0x60) == 0x60);

/**
 *
 * A child object that receives values from its owner through its virtual table.
 *
 */
struct ValueChild {
    const ValueChildVtable *vtable; /**< Virtual table pointer. */
};
static_assert(offsetof(ValueChild, vtable) == 0x00);

/**
 *
 * An owner that holds a vector of values, a child that handles forwarded values and a few words.
 *
 */
struct ValueOwner {
    uint8_t unknown_0x00[0x90];
    ValueChild *child_0x90;     /**< Forwarding target, or null when there is none. */
    uint8_t unknown_0x98[0x40];
    ValueVector values_0xd8;    /**< The vector that the push routine appends to. */
    uint8_t unknown_0xf8[0x38];
    uint64_t word_0x130;        /**< Last value stored by the setter at 0x02b3a500. */
    uint64_t word_0x138;        /**< Last value stored before forwarding to the child. */
    uint8_t unknown_0x140[0x08];
    uint64_t word_0x148;        /**< Stored by the setter at 0x02b3a6b0. */
    uint8_t unknown_0x150[0x10];
    uint32_t word_0x160;        /**< Stored by the setter at 0x02b3a6d0. */
};
static_assert(offsetof(ValueOwner, child_0x90) == 0x90);
static_assert(offsetof(ValueOwner, values_0xd8) == 0xd8);
static_assert(offsetof(ValueOwner, word_0x130) == 0x130);
static_assert(offsetof(ValueOwner, word_0x138) == 0x138);
static_assert(offsetof(ValueOwner, word_0x148) == 0x148);
static_assert(offsetof(ValueOwner, word_0x160) == 0x160);

}  // namespace misc
