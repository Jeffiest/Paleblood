// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object with a vtable and a counted word, whose constructors store its defaults and copy the
// fields of the object it names as its source.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace misc {

/**
 *
 * The vtable of a field-copy object, of which the objects point at the address point.
 *
 */
RT_GLOBAL(0x05676b00, field_copy_vtable, const uint8_t);

/** Value of FieldCopyObject::count_word_0x08 that the default constructor stores. */
constexpr uint32_t field_copy_default_count_word = 0xffff0001;
/** Value of the two limit words that the default constructor stores with their high bit set. */
constexpr uint32_t field_copy_limit_high_bit = 0x80000000;
/** Value that the default constructor stores in the two words that are set to all ones. */
constexpr uint32_t field_copy_all_ones = 0xffffffff;

/**
 *
 * An object with a vtable, a counted word, four fields that a copy constructor takes from its source,
 * and the fields that the default constructor sets.
 *
 */
struct FieldCopyObject {
    const void *vtable;             /**< The field-copy vtable's address point. */
    uint32_t count_word_0x08;       /**< Counted word: a high flag half and a count. */
    uint8_t unknown_0x000c[0x04];
    uint64_t word_0x10;             /**< Copied from the source's word_0x10. */
    uint32_t dword_0x18;            /**< Copied from the source's dword_0x18. */
    uint8_t unknown_0x001c[0x04];
    uint64_t word_0x20;             /**< Copied from the source's word_0x20. */
    uint32_t dword_0x28;            /**< Copied from the source's dword_0x28. */
    uint8_t unknown_0x002c[0x04];
    const FieldCopyObject *source_0x30; /**< The object the fields are copied from; null when there is none. */
    uint64_t pointer_0x38;          /**< Set to zero by the default constructor. */
    uint32_t zero_0x40;             /**< Set to zero by the default constructor. */
    uint32_t limit_high_0x44;       /**< Set to the high bit by the default constructor. */
    uint64_t pointer_0x48;          /**< Set to zero by the default constructor. */
    uint32_t zero_0x50;             /**< Set to zero by the default constructor. */
    uint32_t limit_high_0x54;       /**< Set to the high bit by the default constructor. */
    uint64_t pointer_0x58;          /**< Set to zero by the default constructor. */
    uint32_t zero_0x60;             /**< Set to zero by the default constructor. */
    uint32_t limit_high_0x64;       /**< Set to the high bit by the default constructor. */
    uint32_t ones_0x68;             /**< Set to all ones by the default constructor. */
    uint32_t ones_0x6c;             /**< Set to all ones by the default constructor. */
    uint32_t one_0x70;              /**< Set to one by the default constructor. */
    uint8_t unknown_0x0074[0x0c];
    uint64_t zero_0x80;             /**< Set to zero by the default constructor. */
    uint64_t zero_0x88;             /**< Set to zero by the default constructor. */
};
static_assert(offsetof(FieldCopyObject, vtable) == 0x00);
static_assert(offsetof(FieldCopyObject, count_word_0x08) == 0x08);
static_assert(offsetof(FieldCopyObject, word_0x10) == 0x10);
static_assert(offsetof(FieldCopyObject, dword_0x18) == 0x18);
static_assert(offsetof(FieldCopyObject, word_0x20) == 0x20);
static_assert(offsetof(FieldCopyObject, dword_0x28) == 0x28);
static_assert(offsetof(FieldCopyObject, source_0x30) == 0x30);
static_assert(offsetof(FieldCopyObject, pointer_0x38) == 0x38);
static_assert(offsetof(FieldCopyObject, limit_high_0x44) == 0x44);
static_assert(offsetof(FieldCopyObject, one_0x70) == 0x70);
static_assert(offsetof(FieldCopyObject, zero_0x80) == 0x80);
static_assert(sizeof(FieldCopyObject) == 0x90);

}  // namespace misc
