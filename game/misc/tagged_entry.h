// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an entry found by the tag lookup: a signed tag byte at +0x1c.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A tagged entry: its signed tag byte at +0x1c.
 *
 */
struct TaggedEntry {
    uint8_t unknown_0x00[0x1c];
    int8_t tag_0x1c; /**< Sign extended into the cache's second index. */
};
static_assert(offsetof(TaggedEntry, tag_0x1c) == 0x1c);

}  // namespace misc
