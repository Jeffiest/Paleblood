// SPDX-License-Identifier: GPL-2.0-or-later
#include "subtree_node.h"

#include <cstdint>

/**
 *
 * Counts the leaves below a tree node: a leaf counts as one, and a group node counts the leaves of
 * each of its children in turn, so a group with no children counts zero.
 *
 * The walk recurses into every child, and the total is returned as a 64-bit count.
 */
extern "C" uint64_t bb_misc_count_subtree_leaves(const misc::SubtreeNode *node)
{
    if (node->leaf_flag != 0) {
        return 1;
    }
    uint64_t total = 0;
    for (uint32_t index = 0; index < node->child_count; ++index) {
        total += bb_misc_count_subtree_leaves(node->children[index]);
    }
    return total;
}
