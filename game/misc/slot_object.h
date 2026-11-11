// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object whose vtable has a slot at 0x18 that takes one argument.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct SlotObject;

/**
 *
 * The vtable of a slot object, of which only the slot at 0x18 is used.
 *
 */
struct SlotObjectVtable {
    uint8_t unknown_0x0000[0x18];
    uint64_t (*slot_0x18)(SlotObject *self, uint64_t argument); /**< Slot at 0x18: takes the argument and returns its result. */
};
static_assert(offsetof(SlotObjectVtable, slot_0x18) == 0x18);

/**
 *
 * A slot object: the first word is its vtable pointer.
 *
 */
struct SlotObject {
    const SlotObjectVtable *vtable; /**< Dispatch table for the object's methods. */
};
static_assert(offsetof(SlotObject, vtable) == 0x00);

}  // namespace misc
