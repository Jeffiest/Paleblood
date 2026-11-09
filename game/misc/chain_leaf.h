// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the end of an object chain, which holds the flag byte that the chain reports.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The leaf of a chain: a block of unknown state followed by the flag byte the chain reports.
 *
 */
struct ChainLeaf {
    uint8_t unknown_0x0000[0x140];
    uint8_t flag_0x140; /**< The flag the chain reports. */
};
static_assert(offsetof(ChainLeaf, flag_0x140) == 0x140);

}  // namespace misc
