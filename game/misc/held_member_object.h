// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "linked_object.h"
#include "ref_item.h"

namespace misc {

struct HeldMemberVtable;

/**
 *
 * An object that holds a reference item and four member objects, each passed by address and destroyed
 * when the object is released, with a tail member destroyed last.
 *
 */
struct HeldMemberObject {
    const HeldMemberVtable *vtable;      /**< The object's vtable, set when it is built or released. */
    uint32_t refcount_word;              /**< Low 16 bits: references. High 16 bits: block size, or the default marker. */
    uint8_t unknown_0x0c[0x4];
    uint8_t tail_member[member_bytes];   /**< Member destroyed last; passed by address. */
    RefItem *held;                       /**< Reference item held by the object, or null. */
    int32_t value_0x20;                  /**< Zeroed when the object is built. */
    uint8_t unknown_0x24[0x4];
    uint8_t member_0x28[member_bytes];   /**< Member destroyed fourth; passed by address. */
    uint32_t low_0x30;                   /**< Zeroed when the object is built. */
    uint8_t unknown_0x34[0x4];
    uint8_t member_0x38[member_bytes];   /**< Member destroyed third; passed by address. */
    uint32_t word_0x40;                  /**< Zeroed when the object is built. */
    float scale_0x44;                    /**< Set to one when the object is built. */
    uint8_t member_0x48[member_bytes];   /**< Member destroyed second; passed by address. */
    uint32_t zero_0x50;                  /**< Zeroed when the object is built. */
    float scale_0x54;                    /**< Set to one when the object is built. */
    uint8_t member_0x58[member_bytes];   /**< Member destroyed first; passed by address. */
    uint64_t zero_0x60;                  /**< Zeroed when the object is built. */
    uint64_t zero_0x68;                  /**< Zeroed when the object is built. */
    uint32_t value_0x70;                 /**< Set to 0x100 when the object is built. */
};
static_assert(offsetof(HeldMemberObject, refcount_word) == 0x08);
static_assert(offsetof(HeldMemberObject, tail_member) == 0x10);
static_assert(offsetof(HeldMemberObject, held) == 0x18);
static_assert(offsetof(HeldMemberObject, value_0x20) == 0x20);
static_assert(offsetof(HeldMemberObject, member_0x28) == 0x28);
static_assert(offsetof(HeldMemberObject, low_0x30) == 0x30);
static_assert(offsetof(HeldMemberObject, member_0x38) == 0x38);
static_assert(offsetof(HeldMemberObject, word_0x40) == 0x40);
static_assert(offsetof(HeldMemberObject, scale_0x44) == 0x44);
static_assert(offsetof(HeldMemberObject, member_0x48) == 0x48);
static_assert(offsetof(HeldMemberObject, zero_0x50) == 0x50);
static_assert(offsetof(HeldMemberObject, scale_0x54) == 0x54);
static_assert(offsetof(HeldMemberObject, member_0x58) == 0x58);
static_assert(offsetof(HeldMemberObject, zero_0x60) == 0x60);
static_assert(offsetof(HeldMemberObject, value_0x70) == 0x70);

}  // namespace misc
