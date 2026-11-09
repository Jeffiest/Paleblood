// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object an owner holds, with the child it releases and the flags its release sets.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct OwnedObject;

/**
 *
 * The owned object's virtual table: the slot at +0x20 takes the object and a 64-bit argument.
 *
 */
struct OwnedObjectVtable {
    uint8_t unknown_0x0000[0x20];
    void (*slot_0x20)(OwnedObject *object, uint64_t argument); /**< Releases the object's state. */
};
static_assert(offsetof(OwnedObjectVtable, slot_0x20) == 0x20);

/**
 *
 * An object held by an owner: a child released first, a counter that picks the flag update, and flags.
 *
 */
struct OwnedObject {
    const OwnedObjectVtable *vtable; /**< Virtual table of the object. */
    uint8_t unknown_0x08[0x2];
    uint8_t flags_0x0a;              /**< Bit 2 is set by the release when the counter is set. */
    uint8_t unknown_0x0b[0xd];
    void *child_0x18;                /**< Released before the object when not null. */
    uint64_t value_0x20;             /**< Nonzero: the release clears bit 0 of flags_0x32. */
    uint8_t unknown_0x28[0xa];
    uint8_t flags_0x32;              /**< Bit 0 is cleared by the release when the counter is set. */
};
static_assert(offsetof(OwnedObject, flags_0x0a) == 0x0a && offsetof(OwnedObject, child_0x18) == 0x18);
static_assert(offsetof(OwnedObject, value_0x20) == 0x20 && offsetof(OwnedObject, flags_0x32) == 0x32);

}  // namespace misc
