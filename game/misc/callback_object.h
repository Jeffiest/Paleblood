// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a callback object, which holds a target to call on an object with an argument while armed.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Bit 30 of the flags word: the callback is armed and its target may be invoked. */
constexpr uint32_t callback_armed_bit = 0x40000000;

/** Low bit of the target: the target is a virtual slot's offset plus this bias, not an address. */
constexpr uint64_t callback_virtual_bit = 0x1;

/** Bias subtracted from a virtual target to get the slot's byte offset in the vtable. */
constexpr uint64_t callback_virtual_bias = 0x1;

/**
 *
 * A callback: its vtable, flags, the object it acts on, the argument, the target and the offset that
 * turns the object into the one the target is called on.
 *
 */
struct CallbackObject {
    const uint8_t *vtable;       /**< Virtual functions of the callback. */
    uint32_t flags_0x08;         /**< Bit 30 set: armed. */
    uint8_t unknown_0x0c[0x4];
    uint8_t *base_0x10;          /**< Object the target is called on, before the adjustment. */
    int32_t argument_0x18;       /**< Argument passed to the target. */
    uint8_t unknown_0x1c[0x4];
    uint64_t target_0x20;        /**< Function address, or a vtable offset plus one when the low bit is set. */
    int64_t adjustment_0x28;     /**< Added to the base to reach the object the target is called on. */
};
static_assert(offsetof(CallbackObject, flags_0x08) == 0x8 && offsetof(CallbackObject, base_0x10) == 0x10);
static_assert(offsetof(CallbackObject, argument_0x18) == 0x18 && offsetof(CallbackObject, target_0x20) == 0x20);
static_assert(offsetof(CallbackObject, adjustment_0x28) == 0x28);

}  // namespace misc
