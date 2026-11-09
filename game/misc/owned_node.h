// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a node of the owned state's lists, with the value each node holds.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A list node: the links on either side, then the value the node holds.
 *
 */
struct OwnedNode {
    OwnedNode *next;             /**< Next node, or the sentinel after the last. */
    OwnedNode *prev;             /**< Previous node, or the sentinel before the first. */
    uint8_t unknown_0x0010[0x8];
    void *value_0x0018;          /**< Value the node holds. */
};
static_assert(offsetof(OwnedNode, prev) == 0x8 && offsetof(OwnedNode, value_0x0018) == 0x18);

}  // namespace misc
