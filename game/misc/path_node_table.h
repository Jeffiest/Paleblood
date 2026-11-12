// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the hashed node table that a path walk reads, and the id list the walk fills with node values.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Flag of PathNode::flags that marks the last node of a path. */
constexpr uint8_t path_node_terminal = 0x04;
/** Flag of PathNode::flags that makes a path's first node contribute its own value. */
constexpr uint8_t path_node_value = 0x08;
/** Link value of a node that has no successor. */
constexpr int16_t path_node_no_link = -1;

/**
 *
 * A node of a path: its value, the index of the next node, and flag bits.
 *
 */
struct PathNode {
    uint8_t unknown_0x0000[0x08];
    int32_t value_0x08;       /**< The value a list receives for this node. */
    int16_t link_0x0c;        /**< Index of the next node, or path_node_no_link. */
    uint8_t flags_0x0e;       /**< path_node_terminal and path_node_value bits. */
    uint8_t unknown_0x000f;
};
static_assert(offsetof(PathNode, value_0x08) == 0x08);
static_assert(offsetof(PathNode, link_0x0c) == 0x0c);
static_assert(offsetof(PathNode, flags_0x0e) == 0x0e);
static_assert(sizeof(PathNode) == 0x10);

/**
 *
 * The table a path walk starts from: the node array and the bucket data the lookup uses.
 *
 */
struct PathNodeTable {
    PathNode *nodes_0x00;     /**< Nodes, indexed by their link values. */
    uint8_t unknown_0x0008[0x18];
};
static_assert(offsetof(PathNodeTable, nodes_0x00) == 0x00);

/**
 *
 * A list of ids that a path walk fills: its data, its count, and its capacity.
 *
 */
struct PathIdList {
    int32_t *data_0x00;        /**< Array of values, four bytes each. */
    int32_t count_0x08;        /**< Number of values in the array. */
    uint32_t capacity_0x0c;    /**< Capacity of the array in the low 30 bits. */
};
static_assert(offsetof(PathIdList, data_0x00) == 0x00);
static_assert(offsetof(PathIdList, count_0x08) == 0x08);
static_assert(offsetof(PathIdList, capacity_0x0c) == 0x0c);
static_assert(sizeof(PathIdList) == 0x10);

}  // namespace misc
