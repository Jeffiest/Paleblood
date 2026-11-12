// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a 0x80-byte record that is cleared word by word and then tagged with the caller's value.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A record of fifteen words that a routine clears, followed by the tag word the routine stores last.
 *
 */
inline constexpr size_t cleared_word_count = 0x0f;

struct ClearedRecord {
    uint64_t words[cleared_word_count];   /**< Cleared to zero; the routine clears the last word first. */
    uint64_t tag_0x78;                    /**< Set to the value the routine is given as its first argument. */
};
static_assert(offsetof(ClearedRecord, words) == 0x0);
static_assert(offsetof(ClearedRecord, tag_0x78) == 0x78);
static_assert(sizeof(ClearedRecord) == 0x80);

}  // namespace misc
