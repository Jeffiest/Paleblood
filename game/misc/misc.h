// SPDX-License-Identifier: GPL-2.0-or-later
// Small holder objects that wrap an inner record with a value and an object pointer. Used by
// 0x0040d150, 0x0040d170 and 0x0040d270.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The method table of an object reached through an inner record.
 *
 */
struct ObjectVtable;

/**
 *
 * An object whose first word points at its method table.
 *
 */
struct Object {
    const ObjectVtable *vtable; /**< Method table of the object. */
};
static_assert(offsetof(Object, vtable) == 0x00);

/**
 *
 * Method table of an object: the forward method, which takes the object and the two arguments.
 *
 */
struct ObjectVtable {
    uint8_t unknown_0x0000[0x10];
    void (*forward)(Object *object, uint64_t first, int64_t second); /**< Method called by the holder's forward. */
};
static_assert(offsetof(ObjectVtable, forward) == 0x10);

/**
 *
 * An inner record: an object pointer at +0x18 and a value at +0x20.
 *
 */
struct Inner {
    uint8_t unknown_0x0000[0x18];
    Object *object; /**< Object that the record forwards calls to; may be null. */
    uint64_t value; /**< Value returned by the holder accessors. */
};
static_assert(offsetof(Inner, object) == 0x18);
static_assert(offsetof(Inner, value) == 0x20);

/**
 *
 * A holder whose inner record is reached at +0x10.
 *
 */
struct Holder {
    uint8_t unknown_0x0000[0x10];
    const Inner *inner; /**< Inner record that the holder reads. */
};
static_assert(offsetof(Holder, inner) == 0x10);

}  // namespace misc
