// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object whose first word is its vtable, and a reference that holds such an object.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct VirtualObject;

/**
 *
 * The vtable slots the forwarding routines call; the other slots are not read here.
 *
 */
struct VirtualObjectVtable {
    uint8_t unknown_0x00[0x10];
    uint64_t (*slot_10)(VirtualObject *object);
    uint8_t unknown_0x18[0x08];
    uint64_t (*slot_20)(VirtualObject *object);
    union {
        uint64_t (*slot_28)(VirtualObject *object);                       /**< Called with the object only. */
        uint64_t (*slot_28_value)(VirtualObject *object, uint32_t value); /**< Called with a 32-bit value too. */
    };
    uint64_t (*slot_30)(VirtualObject *object);
    uint64_t (*slot_38)(VirtualObject *object);
    uint64_t (*slot_40)(VirtualObject *object);
};
static_assert(offsetof(VirtualObjectVtable, slot_10) == 0x10);
static_assert(offsetof(VirtualObjectVtable, slot_20) == 0x20);
static_assert(offsetof(VirtualObjectVtable, slot_28) == 0x28);
static_assert(offsetof(VirtualObjectVtable, slot_30) == 0x30);
static_assert(offsetof(VirtualObjectVtable, slot_38) == 0x38);
static_assert(offsetof(VirtualObjectVtable, slot_40) == 0x40);

/**
 *
 * An object whose first word is its vtable, stored as is.
 *
 */
struct VirtualObject {
    const VirtualObjectVtable *vtable;    /**< The object's vtable. */
};
static_assert(offsetof(VirtualObject, vtable) == 0x0);

/**
 *
 * A reference to a virtual object, with a context word that some routines pass on.
 *
 */
struct VirtualObjectRef {
    VirtualObject *object;                /**< The object the reference holds. */
    void *context;                        /**< Context pointer passed to the allocator or the helper. */
};
static_assert(offsetof(VirtualObjectRef, object) == 0x0);
static_assert(offsetof(VirtualObjectRef, context) == 0x8);

}  // namespace misc
