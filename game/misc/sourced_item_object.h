// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object with two vtables that keeps a 32-byte copy of a source record and a counted item it holds.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace misc {

/**
 *
 * The vtable block of the sourced item object: the primary base's address point is 0x10 into it.
 *
 */
RT_GLOBAL(0x05677240, sourced_item_vtable, const uint8_t);

/** Offset of the secondary base's vtable from the start of the vtable block. */
constexpr size_t sourced_item_secondary_vtable_offset = 0x60;
/** Size word that a new object is given: the default size marker with a count of one. */
constexpr uint32_t sourced_item_default_size_word = 0xffff0001;
/** Value that a new object stores at 0x50. */
constexpr uint64_t sourced_item_high_bit = 0x8000000000000000;
/** Value that a new object stores at 0x58. */
constexpr uint64_t sourced_item_marker = 0x3a83126f00000000;
/** Value that a new object stores at 0x60, as a 32-bit word. */
constexpr uint32_t sourced_item_minus_one = 0xffffffff;

/**
 *
 * The 32-byte record that a sourced item object copies from its source.
 *
 */
struct SourcedItemSource {
    uint64_t low_0x00;   /**< First half of the 16-byte block that is copied. */
    uint64_t high_0x08;  /**< Second half of the 16-byte block that is copied. */
    uint64_t qword_0x10; /**< Copied to the object's qword at 0x30. */
    uint64_t tail_0x18;  /**< Copied to the object's qword at 0x38, whole. */
};
static_assert(offsetof(SourcedItemSource, tail_0x18) == 0x18);
static_assert(sizeof(SourcedItemSource) == 0x20);

/**
 *
 * An object with a primary base at its start and a secondary base at 0x10, which keeps a copy of a
 * source record at 0x20 and a counted item at 0x40.
 *
 */
struct SourcedItemObject {
    const void *primary_vtable;   /**< Primary base's vtable address point, at 0x00. */
    uint32_t size_word_0x08;      /**< Block size in the high half, and a count in the low half, at 0x08. */
    uint8_t unknown_0x000c[0x04];
    const void *secondary_vtable; /**< Secondary base's vtable, at 0x10. */
    uint8_t unknown_0x0018[0x08];
    uint64_t low_0x20;            /**< Copied from the source's first half. */
    uint64_t high_0x28;           /**< Copied from the source's second half. */
    uint64_t qword_0x30;          /**< Copied from the source's qword. */
    uint64_t tail_0x38;           /**< Copied from the source's tail. */
    RefItem *held_0x40;           /**< Counted item the object holds; null when there is none. */
    uint64_t zero_0x48;           /**< Set to zero when the object is made. */
    uint64_t high_bit_0x50;       /**< Set to the high bit when the object is made. */
    uint64_t marker_0x58;         /**< Set to the marker when the object is made. */
    uint32_t minus_one_0x60;      /**< Set to all ones when the object is made. */
    uint8_t unknown_0x0064[0x04];
    uint64_t zero_0x68;           /**< Set to zero when the object is made. */
    uint64_t zero_0x70;           /**< Set to zero when the object is made. */
};
static_assert(offsetof(SourcedItemObject, secondary_vtable) == 0x10);
static_assert(offsetof(SourcedItemObject, low_0x20) == 0x20);
static_assert(offsetof(SourcedItemObject, held_0x40) == 0x40);
static_assert(offsetof(SourcedItemObject, zero_0x70) == 0x70);
static_assert(sizeof(SourcedItemObject) == 0x78);

}  // namespace misc
