// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object with two base subobjects, a slot object and a flagged member.
#pragma once

#include <cstddef>
#include <cstdint>

#include "flagged_member.h"
#include "slot_object.h"

namespace misc {

/**
 *
 * An object with a primary base at 0x00 and a secondary base at 0x20. It holds a slot object at 0x28,
 * a value at 0x30 and a flagged member at 0x40; the vtable words are set when it is released.
 *
 */
struct TwoBaseObject {
    const void *primary_vtable;         /**< Vtable of the primary base, set when the object is released. */
    uint8_t unknown_0x0008[0x18];
    const void *secondary_vtable;       /**< Vtable of the secondary base, set when the object is released. */
    SlotObject *slot_object_0x28;       /**< Slot object called through its slot at 0x18, or null. */
    uint64_t value_0x30;                /**< Argument handed to the slot object's slot at 0x18. */
    uint8_t unknown_0x0038[0x08];
    FlaggedMember *member_0x40;         /**< Flagged member, or null. */
};
static_assert(offsetof(TwoBaseObject, primary_vtable) == 0x00);
static_assert(offsetof(TwoBaseObject, secondary_vtable) == 0x20);
static_assert(offsetof(TwoBaseObject, slot_object_0x28) == 0x28);
static_assert(offsetof(TwoBaseObject, value_0x30) == 0x30);
static_assert(offsetof(TwoBaseObject, member_0x40) == 0x40);

}  // namespace misc
