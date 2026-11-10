// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that owns at most one destroyable node, stored at +0x68.
#pragma once

#include <cstddef>
#include <cstdint>

#include "destroyable_node.h"

namespace misc {

/**
 *
 * An object whose node pointer at +0x68 is the one node it owns.
 *
 */
struct NodeHolder {
    uint8_t unknown_0x00[0x68];
    DestroyableNode *node; /**< The owned node, or null when the holder owns none. */
};
static_assert(offsetof(NodeHolder, node) == 0x68);

}  // namespace misc
