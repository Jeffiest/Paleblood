// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object whose constructor stores its vtable and copies the fields of the object it names as its source.
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

/**
 *
 * An object with four fields that a constructor copies from its source object.
 *
 */
struct FieldCopyObject {
    const void *vtable;            /**< The field-copy vtable's address point. */
    uint8_t unknown_0x0008[0x08];
    uint64_t word_0x10;            /**< Copied from the source's word_0x10. */
    uint32_t dword_0x18;           /**< Copied from the source's dword_0x18. */
    uint8_t unknown_0x001c[0x04];
    uint64_t word_0x20;            /**< Copied from the source's word_0x20. */
    uint32_t dword_0x28;           /**< Copied from the source's dword_0x28. */
    uint8_t unknown_0x002c[0x04];
    const FieldCopyObject *source_0x30; /**< The object the fields are copied from; null when there is none. */
};
static_assert(offsetof(FieldCopyObject, vtable) == 0x00);
static_assert(offsetof(FieldCopyObject, word_0x10) == 0x10);
static_assert(offsetof(FieldCopyObject, dword_0x18) == 0x18);
static_assert(offsetof(FieldCopyObject, word_0x20) == 0x20);
static_assert(offsetof(FieldCopyObject, dword_0x28) == 0x28);
static_assert(offsetof(FieldCopyObject, source_0x30) == 0x30);
static_assert(sizeof(FieldCopyObject) == 0x38);

}  // namespace misc
