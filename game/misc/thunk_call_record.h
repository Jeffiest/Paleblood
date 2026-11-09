// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the record a member-function thunk passes to its target, kept on the caller's stack.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A 16-byte record: a kind word, a 32-bit value and a 64-bit value that the target reads.
 *
 */
struct ThunkCallRecord {
    uint32_t kind_0x00;                   /**< The kind of call the record describes. */
    uint32_t value_0x04;                  /**< The 32-bit value passed in by the caller. */
    uint64_t value_0x08;                  /**< The 64-bit value passed in by the caller. */
};
static_assert(sizeof(ThunkCallRecord) == 0x10);
static_assert(offsetof(ThunkCallRecord, value_0x04) == 0x04);
static_assert(offsetof(ThunkCallRecord, value_0x08) == 0x08);

}  // namespace misc
