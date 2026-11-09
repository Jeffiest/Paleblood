// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owner of a pair binding, which holds its primary and fallback nodes.
#pragma once

#include <cstddef>
#include <cstdint>

#include "pair_node.h"

namespace misc {

/**
 *
 * The owner: its fallback node sits at +0x150 and its primary node at +0x158.
 *
 */
struct PairOwner {
    uint8_t unknown_0x0000[0x150];
    PairNode *fallback_0x150; /**< Node used when neither the selected nor the primary node is set. */
    PairNode *primary_0x158;  /**< Node used when a selector is absent. */
};
static_assert(offsetof(PairOwner, fallback_0x150) == 0x150);
static_assert(offsetof(PairOwner, primary_0x158) == 0x158);

}  // namespace misc
