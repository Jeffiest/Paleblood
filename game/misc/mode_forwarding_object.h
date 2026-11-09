// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object whose vtable slot at +0x90 takes a value and a 32-bit mode.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ModeForwardingObject;

/**
 *
 * The vtable of a mode forwarding object; only the slot at +0x90 is read by the forwarding routines.
 *
 */
struct ModeForwardingVtable {
    uint8_t unknown_0x0000[0x90];
    uint64_t (*slot_0x90)(ModeForwardingObject *object, uint64_t value, uint32_t mode); /**< Receives the value and the mode. */
};
static_assert(offsetof(ModeForwardingVtable, slot_0x90) == 0x90);

/**
 *
 * An object whose first word is its vtable, stored as is.
 *
 */
struct ModeForwardingObject {
    const ModeForwardingVtable *vtable;    /**< The object's vtable. */
};
static_assert(offsetof(ModeForwardingObject, vtable) == 0x0);

}  // namespace misc
