// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object with a vtable whose two routines a detach step calls: a destructor-like slot and a slot 0x70 routine.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct DetachableObject;

/**
 *
 * The vtable slots the detach step calls: slot 0 with the object, and slot 0x70 with an owner and the object.
 *
 */
struct DetachableObjectVtable {
    void (*slot_00)(DetachableObject *object);
    static constexpr auto gap_bytes = 0x68;
    uint8_t unknown_0x08[gap_bytes];
    uint64_t (*slot_70)(DetachableObject *owner, DetachableObject *object);
};
static_assert(offsetof(DetachableObjectVtable, slot_00) == 0x0);
static_assert(offsetof(DetachableObjectVtable, slot_70) == 0x70);

/**
 *
 * An object whose first word is its vtable, stored as is.
 *
 */
struct DetachableObject {
    const DetachableObjectVtable *vtable;  /**< The object's vtable. */
};
static_assert(offsetof(DetachableObject, vtable) == 0x0);

}  // namespace misc
