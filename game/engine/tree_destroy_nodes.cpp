// SPDX-License-Identifier: GPL-2.0-or-later
#include "msvc_tree.h"
#include "tree_owner.h"

#include <cstdint>

namespace {

/**
 *
 * The map's node type. Only the links and the nil flag are read here, so the key and value types
 * are placeholders.
 *
 */
using Node = engine::TreeNode<uint64_t, uint64_t>;

}  // namespace

/**
 *
 * Frees the nodes of a subtree, starting from the given node and walking down its left links.
 *
 * Each node first frees its right subtree (recursively), then is freed through the owner's allocator,
 * and the walk goes on to the left child saved before that free. The allocator is read from the owner
 * again for every node freed. A nil node (the head) ends the walk, so an empty subtree does nothing.
 */
extern "C" void bb_engine_tree_destroy_nodes(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_engine_tree_destroy_nodes(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}
