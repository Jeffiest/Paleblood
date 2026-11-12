// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the static record that describes one field of a registered type.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A static record describing one field of a registered type: its name, a value, and its layout.
 *
 */
struct TypeFieldRecord {
    const char *name;          /**< Name of the field, written at 0x00. */
    uint64_t zero_0x08;        /**< Written as zero. */
    uint64_t value_0x10;       /**< Copied from a constant in the executable. */
    uint8_t size_0x18;         /**< Size of the field in bytes. */
    uint8_t alignment_0x19;    /**< Alignment of the field in bytes. */
    uint16_t zero_0x1a;        /**< Written as zero. */
    uint16_t zero_0x1c;        /**< Written as zero. */
    uint16_t offset_0x1e;      /**< Offset of the field inside the instance. */
    uint64_t zero_0x20;        /**< Written as zero. */
};
static_assert(offsetof(TypeFieldRecord, name) == 0x00);
static_assert(offsetof(TypeFieldRecord, zero_0x08) == 0x08);
static_assert(offsetof(TypeFieldRecord, value_0x10) == 0x10);
static_assert(offsetof(TypeFieldRecord, size_0x18) == 0x18);
static_assert(offsetof(TypeFieldRecord, alignment_0x19) == 0x19);
static_assert(offsetof(TypeFieldRecord, zero_0x1a) == 0x1a);
static_assert(offsetof(TypeFieldRecord, zero_0x1c) == 0x1c);
static_assert(offsetof(TypeFieldRecord, offset_0x1e) == 0x1e);
static_assert(offsetof(TypeFieldRecord, zero_0x20) == 0x20);
static_assert(sizeof(TypeFieldRecord) == 0x28);

}  // namespace misc
