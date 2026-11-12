// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a narrow clone record: a virtual table and three copied words in a 0x30-byte record.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A narrow clone record of 0x30 bytes: its virtual table first, then the copied words at +0x08, +0x10 and +0x20.
 *
 */
struct NarrowCloneRecord {
    const void *vtable;            /**< The record's virtual table address point, set when it is built. */
    uint64_t word_0x08;            /**< Copied from the source's word at +0x08. */
    uint64_t word_0x10;            /**< Copied from the source's word at +0x10. */
    uint8_t unknown_0x0018[0x8];   /**< Not written by the clone routine. */
    uint64_t word_0x20;            /**< Copied from the source's word at +0x20. */
    uint8_t unknown_0x0028[0x8];   /**< Not written by the clone routine. */
};
static_assert(sizeof(NarrowCloneRecord) == 0x30);
static_assert(offsetof(NarrowCloneRecord, word_0x20) == 0x20);

}  // namespace misc
