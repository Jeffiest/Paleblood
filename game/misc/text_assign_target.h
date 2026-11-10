// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the text target that receives assigned characters through a holder.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Flag bit set in the target once characters have been assigned to it. */
constexpr uint8_t text_assigned_flag = 0x01;

/** Length value that asks the assignment to measure the source text itself. */
constexpr int64_t text_length_unmeasured = -1;

/**
 *
 * The holder the target points at: its first word is the storage that receives the characters.
 *
 */
struct TextAssignHolder {
    void *storage;                /**< Character storage, reallocated by the reserve step. */
};

/**
 *
 * The text target: the holder pointer at offset 0x08 and the flags byte at offset 0x18.
 *
 */
struct TextAssignTarget {
    uint8_t unknown_0x00[0x08];
    TextAssignHolder *holder;     /**< Holder whose storage receives the characters. */
    uint8_t unknown_0x10[0x08];
    uint8_t flags;                /**< Flag bits; the assigned bit is set by the assignment. */
};
static_assert(offsetof(TextAssignTarget, holder) == 0x08);
static_assert(offsetof(TextAssignTarget, flags) == 0x18);

}  // namespace misc
