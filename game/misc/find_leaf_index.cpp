// SPDX-License-Identifier: GPL-2.0-or-later
#include "subtree_node.h"
#include "runtime/original.h"

#include <cstdint>

namespace {

/** The result of a search that does not find its target. */
constexpr int32_t not_found = -1;

/** The leaf count routine, which gives the number of leaves below a node. */
RT_ORIGINAL(0x02b3d9b0, count_subtree_leaves, uint64_t(const misc::SubtreeNode *node));

}  // namespace

/**
 *
 * Finds the position of a target node among the leaves below a tree node, counting leaves in order.
 *
 * A leaf is found when it is the target, at position zero. In a group node each child is searched
 * in turn; when a child holds the target its position is offset by the leaves counted before it,
 * otherwise those leaves are counted and added. The result is 32 bits wide and negative one when
 * the target is not below the node.
 */
extern "C" int32_t bb_misc_find_leaf_index(const misc::SubtreeNode *node, const misc::SubtreeNode *target)
{
    if (node->leaf_flag != 0) {
        return node == target ? 0 : not_found;
    }
    uint32_t leaves_before = 0;
    for (uint32_t index = 0; index < node->child_count; ++index) {
        const misc::SubtreeNode *child = node->children[index];
        const int32_t found = bb_misc_find_leaf_index(child, target);
        if (found != not_found) {
            return static_cast<int32_t>(static_cast<uint32_t>(found) + leaves_before);
        }
        leaves_before += static_cast<uint32_t>(count_subtree_leaves(child));
    }
    return not_found;
}
