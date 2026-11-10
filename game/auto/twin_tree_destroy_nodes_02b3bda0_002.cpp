// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as engine_tree_destroy_nodes, in game/engine/tree_destroy_nodes.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../engine/msvc_tree.h"
#include "../engine/tree_owner.h"
#include <cstdint>

// auto_tree_destroy_nodes_026f4500: engine_tree_destroy_nodes with other addresses.
namespace twin_026f4500 {

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
extern "C" void bb_auto_tree_destroy_nodes_026f4500(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_026f4500(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_026f4500
