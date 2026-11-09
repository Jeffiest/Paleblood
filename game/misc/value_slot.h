// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a slot that holds either a float or an integer number, with an optional reference and child.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ValueSlotChild;

/**
 *
 * A reference whose flag word says whether it is set.
 *
 */
struct ValueSlotRef {
    uint8_t unknown_0x00[0x10];
    int32_t flag_0x10; /**< Non-zero when the reference is set. */
};
static_assert(offsetof(ValueSlotRef, flag_0x10) == 0x10);

/**
 *
 * The virtual table of ValueSlotChild; the check slot is at 0x40.
 *
 */
struct ValueSlotChildVtable {
    uint8_t unknown_0x0000[0x40];
    uint8_t (*check_0x40)(ValueSlotChild *child);
};
static_assert(offsetof(ValueSlotChildVtable, check_0x40) == 0x40);

/**
 *
 * A child that answers whether it accepts the slot.
 *
 */
struct ValueSlotChild {
    const ValueSlotChildVtable *vtable; /**< Virtual table pointer. */
};

/**
 *
 * A slot holding a number as float bits or integer bits, chosen by its kind word.
 *
 */
struct ValueSlot {
    uint8_t unknown_0x00[0x20];
    const ValueSlotRef *ref_0x20; /**< Reference that may be set, or null. */
    uint8_t unknown_0x28[0x68];
    ValueSlotChild *child_0x90;   /**< Child that is asked when the reference does not settle the answer, or null. */
    uint8_t unknown_0x98[0x30];
    uint32_t bits_0xc8;           /**< The number, as the bits of a float or of a 32-bit integer. */
    uint8_t unknown_0xcc[0x04];
    int32_t kind_0xd0;            /**< 1 for a float, 2 for an integer, anything else for neither. */
};
static_assert(offsetof(ValueSlot, ref_0x20) == 0x20);
static_assert(offsetof(ValueSlot, child_0x90) == 0x90);
static_assert(offsetof(ValueSlot, bits_0xc8) == 0xc8);
static_assert(offsetof(ValueSlot, kind_0xd0) == 0xd0);

}  // namespace misc
