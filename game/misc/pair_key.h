// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the key holding the two selectors that pick the nodes a pair binding uses.
#pragma once

#include <cstddef>
#include <cstdint>

#include "pair_selector.h"

namespace misc {

/**
 *
 * The key a pair binding reads: its first selector sits at +0x2d0 and its second at +0x2d8.
 *
 */
struct PairKey {
    uint8_t unknown_0x0000[0x2d0];
    PairSelector first_0x2d0;  /**< Selects the first handle. */
    PairSelector second_0x2d8; /**< Selects the second handle. */
};
static_assert(offsetof(PairKey, first_0x2d0) == 0x2d0);
static_assert(offsetof(PairKey, second_0x2d8) == 0x2d8);

}  // namespace misc
