// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a wide clone record: a virtual table, four copied words and a tail that the clone routine does not write.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A wide clone record of 0x38 bytes: its virtual table first, then the copied words at +0x08, +0x10, +0x20 and +0x28.
 *
 */
struct WideCloneRecord {
    const void *vtable;            /**< The record's virtual table address point, set when it is built. */
    uint64_t word_0x08;            /**< Copied from the source's word at +0x08. */
    uint64_t word_0x10;            /**< Copied from the source's word at +0x10. */
    uint8_t unknown_0x0018[0x8];   /**< Not written by the clone routine. */
    uint64_t word_0x20;            /**< Copied from the source's word at +0x20. */
    uint64_t word_0x28;            /**< Copied from the source's word at +0x28. */
    uint8_t unknown_0x0030[0x8];   /**< Not written by the clone routine. */
};
static_assert(sizeof(WideCloneRecord) == 0x38);
static_assert(offsetof(WideCloneRecord, word_0x28) == 0x28);

}  // namespace misc
