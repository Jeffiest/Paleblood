// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct LinkedObjectVtable;
struct RefItem;

/** Size of one member slot of a linked object: a pointer-sized block passed by address. */
constexpr size_t member_bytes = sizeof(void *);

/**
 *
 * An object that holds a reference item and member objects that are destroyed with it.
 *
 */
struct LinkedObject {
    const LinkedObjectVtable *vtable; /**< The object's vtable, set when it is built or released. */
    uint32_t refcount_word;           /**< The object's own count word: low 16 bits references, high 16 the flag. */
    uint8_t unknown_0x0c[0x4];
    uint8_t tail_member[member_bytes]; /**< Member destroyed last; passed by address. */
    RefItem *held;                    /**< Reference item held by the object, or null. */
    int32_t value_0x20;               /**< Value set when the object is built. */
    uint8_t unknown_0x24[0x4];
    uint8_t second_member[member_bytes]; /**< Member destroyed second; passed by address. */
    uint32_t low_0x30;                /**< Low half of the value stored at 0x30 when the object is built. */
    float scale_0x34;                 /**< Scale stored at 0x34 when the object is built. */
    uint8_t first_member[member_bytes]; /**< Member destroyed first; passed by address. */
    uint8_t flag_0x40;                /**< Flag cleared when the object is built. */
};
static_assert(offsetof(LinkedObject, refcount_word) == 0x8);
static_assert(offsetof(LinkedObject, tail_member) == 0x10);
static_assert(offsetof(LinkedObject, held) == 0x18);
static_assert(offsetof(LinkedObject, value_0x20) == 0x20);
static_assert(offsetof(LinkedObject, second_member) == 0x28);
static_assert(offsetof(LinkedObject, low_0x30) == 0x30);
static_assert(offsetof(LinkedObject, scale_0x34) == 0x34);
static_assert(offsetof(LinkedObject, first_member) == 0x38);
static_assert(offsetof(LinkedObject, flag_0x40) == 0x40);

}  // namespace misc
