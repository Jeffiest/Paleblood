// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "linked_object.h"
#include "ref_item.h"

namespace misc {

struct DualHeldMemberVtable;

/**
 *
 * An object that holds two reference items and three member objects. Its kind word selects which of the
 * two held items a report reads first, and every member is destroyed when the object is released.
 *
 */
struct DualHeldMemberObject {
    const DualHeldMemberVtable *vtable;  /**< The object's vtable, set when it is built or released. */
    uint32_t refcount_word;              /**< Low 16 bits: references. High 16 bits: block size, or the default marker. */
    uint8_t unknown_0x0c[0x4];
    uint8_t member_0x10[member_bytes];   /**< Member destroyed last; passed by address. */
    uint32_t kind_0x18;                  /**< Kind word: zeroed when the object is built. */
    uint8_t unknown_0x1c[0x4];
    RefItem *held_0x20;                  /**< First held item, or null; released after the member at 0x30. */
    uint32_t word_0x28;                  /**< Zeroed when the object is built. */
    uint8_t unknown_0x2c[0x4];
    uint8_t member_0x30[member_bytes];   /**< Member destroyed second; passed by address. */
    RefItem *held_0x38;                  /**< Second held item, or null; released before the member at 0x30. */
    uint32_t word_0x40;                  /**< Zeroed when the object is built. */
    uint8_t unknown_0x44[0x4];
    uint8_t member_0x48[member_bytes];   /**< Member destroyed first; passed by address. */
    float half_0x50;                     /**< Set to one half when the object is built. */
    uint8_t flag_0x54;                   /**< Cleared when the object is built. */
    uint8_t unknown_0x55[0x3];
};
static_assert(offsetof(DualHeldMemberObject, refcount_word) == 0x08);
static_assert(offsetof(DualHeldMemberObject, member_0x10) == 0x10);
static_assert(offsetof(DualHeldMemberObject, kind_0x18) == 0x18);
static_assert(offsetof(DualHeldMemberObject, held_0x20) == 0x20);
static_assert(offsetof(DualHeldMemberObject, word_0x28) == 0x28);
static_assert(offsetof(DualHeldMemberObject, member_0x30) == 0x30);
static_assert(offsetof(DualHeldMemberObject, held_0x38) == 0x38);
static_assert(offsetof(DualHeldMemberObject, word_0x40) == 0x40);
static_assert(offsetof(DualHeldMemberObject, member_0x48) == 0x48);
static_assert(offsetof(DualHeldMemberObject, half_0x50) == 0x50);
static_assert(offsetof(DualHeldMemberObject, flag_0x54) == 0x54);
static_assert(sizeof(DualHeldMemberObject) == 0x58);

}  // namespace misc
