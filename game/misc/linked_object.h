// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct LinkedObjectVtable;
struct RefItem;

/** Size of one member slot of a linked object: a pointer-sized block passed by address. */
constexpr size_t member_bytes = sizeof(void *);
/** Size of the second member slot: two pointer-sized blocks. */
constexpr size_t second_member_bytes = 2 * member_bytes;

/**
 *
 * An object that holds a reference item and three member objects that are destroyed with it.
 *
 */
struct LinkedObject {
    const LinkedObjectVtable *vtable; /**< The object's vtable, set when it is released. */
    uint8_t unknown_0x08[0x8];
    uint8_t tail_member[member_bytes];   /**< Member destroyed last; passed by address. */
    RefItem *held;                    /**< Reference item held by the object, or null. */
    uint8_t unknown_0x20[0x8];
    uint8_t second_member[second_member_bytes]; /**< Member destroyed second; passed by address. */
    uint8_t first_member[member_bytes];  /**< Member destroyed first; passed by address. */
};
static_assert(offsetof(LinkedObject, tail_member) == 0x10);
static_assert(offsetof(LinkedObject, held) == 0x18);
static_assert(offsetof(LinkedObject, second_member) == 0x28);
static_assert(offsetof(LinkedObject, first_member) == 0x38);

}  // namespace misc
