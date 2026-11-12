// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the four link words at the end of a block, which its clearing routine zeroes.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The leading part of a block, followed by four link words at its end that are cleared together.
 *
 */
struct TrailingLinkBlock {
    uint8_t unknown_0x0000[0x78];
    uint64_t link_a;   /**< Link word, cleared. */
    uint64_t link_b;   /**< Link word, cleared. */
    uint64_t link_c;   /**< Link word, cleared. */
    uint64_t link_d;   /**< Link word, cleared. */
};
static_assert(offsetof(TrailingLinkBlock, link_a) == 0x78);
static_assert(offsetof(TrailingLinkBlock, link_d) == 0x90);
static_assert(sizeof(TrailingLinkBlock) == 0x98);

}  // namespace misc
