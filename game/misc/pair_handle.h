// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the handle a pair lookup returns, which leads to the node the binding reads.
#pragma once

#include <cstddef>
#include <cstdint>

#include "pair_node.h"

namespace misc {

/**
 *
 * A handle: the node it leads to sits at +0x48.
 *
 */
struct PairHandle {
    uint8_t unknown_0x0000[0x48];
    PairNode *node_0x48; /**< Node the handle leads to. */
};
static_assert(offsetof(PairHandle, node_0x48) == 0x48);

}  // namespace misc
