// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a key clone record: a virtual table and one copied word in an 0x18-byte record.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A key clone record of 0x18 bytes: its virtual table first, then the copied key word at +0x08.
 *
 */
struct KeyCloneRecord {
    const void *vtable;            /**< The record's virtual table address point, set when it is built. */
    uint64_t key_0x08;             /**< Copied from the source's word at +0x08. */
    uint8_t unknown_0x0010[0x8];   /**< Not written by the clone routine. */
};
static_assert(sizeof(KeyCloneRecord) == 0x18);
static_assert(offsetof(KeyCloneRecord, key_0x08) == 0x08);

}  // namespace misc
