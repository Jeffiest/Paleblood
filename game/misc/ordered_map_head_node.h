// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the head node of an ordered map, the sentinel every walk of the tree ends on.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The sentinel node of an ordered map: the three links point at the head itself while the map is empty.
 *
 */
struct OrderedMapHeadNode {
    OrderedMapHeadNode *left;   /**< The leftmost node, or the head itself while the map is empty. */
    OrderedMapHeadNode *parent; /**< The root node, or the head itself while the map is empty. */
    OrderedMapHeadNode *right;  /**< The rightmost node, or the head itself while the map is empty. */
    uint8_t color;              /**< The node's colour, where the black colour is 1. */
    bool is_nil;                /**< True for the head, which ends every walk of the map. */
    uint8_t unknown_0x1a[0x46];
};
static_assert(sizeof(OrderedMapHeadNode) == 0x60);
static_assert(offsetof(OrderedMapHeadNode, color) == 0x18 && offsetof(OrderedMapHeadNode, is_nil) == 0x19);

}  // namespace misc
