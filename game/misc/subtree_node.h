// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a node of a tree whose group nodes hold an array of child pointers and whose leaves are marked.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct SubtreeNode;

/**
 *
 * A tree node: the leaf flag at +0x0, the child array at +0x18 and the child count at +0x20.
 *
 * A group node has a zero flag and holds its children; any other flag value marks a leaf.
 *
 */
struct SubtreeNode {
    uint64_t leaf_flag;            /**< Zero for a group node, non-zero for a leaf. */
    uint8_t unknown_0x08[0x10];
    SubtreeNode **children;        /**< The array of child pointers of a group node. */
    uint32_t child_count;          /**< The number of children of a group node. */
};
static_assert(offsetof(SubtreeNode, leaf_flag) == 0x00);
static_assert(offsetof(SubtreeNode, children) == 0x18);
static_assert(offsetof(SubtreeNode, child_count) == 0x20);

}  // namespace misc
