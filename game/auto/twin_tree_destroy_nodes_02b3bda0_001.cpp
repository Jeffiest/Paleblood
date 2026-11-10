// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as engine_tree_destroy_nodes, in game/engine/tree_destroy_nodes.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../engine/msvc_tree.h"
#include "../engine/tree_owner.h"
#include <cstdint>

// auto_tree_destroy_nodes_016b7550: engine_tree_destroy_nodes with other addresses.
namespace twin_016b7550 {

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
extern "C" void bb_auto_tree_destroy_nodes_016b7550(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_016b7550(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_016b7550

// auto_tree_destroy_nodes_016dfc80: engine_tree_destroy_nodes with other addresses.
namespace twin_016dfc80 {

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
extern "C" void bb_auto_tree_destroy_nodes_016dfc80(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_016dfc80(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_016dfc80

// auto_tree_destroy_nodes_016dfce0: engine_tree_destroy_nodes with other addresses.
namespace twin_016dfce0 {

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
extern "C" void bb_auto_tree_destroy_nodes_016dfce0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_016dfce0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_016dfce0

// auto_tree_destroy_nodes_016f1c10: engine_tree_destroy_nodes with other addresses.
namespace twin_016f1c10 {

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
extern "C" void bb_auto_tree_destroy_nodes_016f1c10(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_016f1c10(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_016f1c10

// auto_tree_destroy_nodes_017c4d20: engine_tree_destroy_nodes with other addresses.
namespace twin_017c4d20 {

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
extern "C" void bb_auto_tree_destroy_nodes_017c4d20(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_017c4d20(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_017c4d20

// auto_tree_destroy_nodes_017c8f00: engine_tree_destroy_nodes with other addresses.
namespace twin_017c8f00 {

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
extern "C" void bb_auto_tree_destroy_nodes_017c8f00(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_017c8f00(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_017c8f00

// auto_tree_destroy_nodes_017d22c0: engine_tree_destroy_nodes with other addresses.
namespace twin_017d22c0 {

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
extern "C" void bb_auto_tree_destroy_nodes_017d22c0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_017d22c0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_017d22c0

// auto_tree_destroy_nodes_017dd280: engine_tree_destroy_nodes with other addresses.
namespace twin_017dd280 {

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
extern "C" void bb_auto_tree_destroy_nodes_017dd280(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_017dd280(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_017dd280

// auto_tree_destroy_nodes_018904d0: engine_tree_destroy_nodes with other addresses.
namespace twin_018904d0 {

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
extern "C" void bb_auto_tree_destroy_nodes_018904d0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_018904d0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_018904d0

// auto_tree_destroy_nodes_01900d00: engine_tree_destroy_nodes with other addresses.
namespace twin_01900d00 {

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
extern "C" void bb_auto_tree_destroy_nodes_01900d00(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01900d00(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01900d00

// auto_tree_destroy_nodes_01957700: engine_tree_destroy_nodes with other addresses.
namespace twin_01957700 {

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
extern "C" void bb_auto_tree_destroy_nodes_01957700(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01957700(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01957700

// auto_tree_destroy_nodes_01957760: engine_tree_destroy_nodes with other addresses.
namespace twin_01957760 {

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
extern "C" void bb_auto_tree_destroy_nodes_01957760(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01957760(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01957760

// auto_tree_destroy_nodes_01964c70: engine_tree_destroy_nodes with other addresses.
namespace twin_01964c70 {

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
extern "C" void bb_auto_tree_destroy_nodes_01964c70(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01964c70(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01964c70

// auto_tree_destroy_nodes_01995650: engine_tree_destroy_nodes with other addresses.
namespace twin_01995650 {

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
extern "C" void bb_auto_tree_destroy_nodes_01995650(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01995650(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01995650

// auto_tree_destroy_nodes_019b7410: engine_tree_destroy_nodes with other addresses.
namespace twin_019b7410 {

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
extern "C" void bb_auto_tree_destroy_nodes_019b7410(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_019b7410(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_019b7410

// auto_tree_destroy_nodes_01bd2650: engine_tree_destroy_nodes with other addresses.
namespace twin_01bd2650 {

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
extern "C" void bb_auto_tree_destroy_nodes_01bd2650(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01bd2650(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01bd2650

// auto_tree_destroy_nodes_01c6d380: engine_tree_destroy_nodes with other addresses.
namespace twin_01c6d380 {

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
extern "C" void bb_auto_tree_destroy_nodes_01c6d380(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01c6d380(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01c6d380

// auto_tree_destroy_nodes_01c6d3e0: engine_tree_destroy_nodes with other addresses.
namespace twin_01c6d3e0 {

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
extern "C" void bb_auto_tree_destroy_nodes_01c6d3e0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01c6d3e0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01c6d3e0

// auto_tree_destroy_nodes_01c7cab0: engine_tree_destroy_nodes with other addresses.
namespace twin_01c7cab0 {

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
extern "C" void bb_auto_tree_destroy_nodes_01c7cab0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01c7cab0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01c7cab0

// auto_tree_destroy_nodes_01c7cb10: engine_tree_destroy_nodes with other addresses.
namespace twin_01c7cb10 {

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
extern "C" void bb_auto_tree_destroy_nodes_01c7cb10(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01c7cb10(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01c7cb10

// auto_tree_destroy_nodes_01c7cb70: engine_tree_destroy_nodes with other addresses.
namespace twin_01c7cb70 {

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
extern "C" void bb_auto_tree_destroy_nodes_01c7cb70(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01c7cb70(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01c7cb70

// auto_tree_destroy_nodes_01c93820: engine_tree_destroy_nodes with other addresses.
namespace twin_01c93820 {

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
extern "C" void bb_auto_tree_destroy_nodes_01c93820(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01c93820(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01c93820

// auto_tree_destroy_nodes_01db3a20: engine_tree_destroy_nodes with other addresses.
namespace twin_01db3a20 {

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
extern "C" void bb_auto_tree_destroy_nodes_01db3a20(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01db3a20(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01db3a20

// auto_tree_destroy_nodes_01db3de0: engine_tree_destroy_nodes with other addresses.
namespace twin_01db3de0 {

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
extern "C" void bb_auto_tree_destroy_nodes_01db3de0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01db3de0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01db3de0

// auto_tree_destroy_nodes_01dcfbf0: engine_tree_destroy_nodes with other addresses.
namespace twin_01dcfbf0 {

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
extern "C" void bb_auto_tree_destroy_nodes_01dcfbf0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01dcfbf0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01dcfbf0

// auto_tree_destroy_nodes_01dcfc50: engine_tree_destroy_nodes with other addresses.
namespace twin_01dcfc50 {

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
extern "C" void bb_auto_tree_destroy_nodes_01dcfc50(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01dcfc50(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01dcfc50

// auto_tree_destroy_nodes_01e20ec0: engine_tree_destroy_nodes with other addresses.
namespace twin_01e20ec0 {

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
extern "C" void bb_auto_tree_destroy_nodes_01e20ec0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01e20ec0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01e20ec0

// auto_tree_destroy_nodes_01e20f20: engine_tree_destroy_nodes with other addresses.
namespace twin_01e20f20 {

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
extern "C" void bb_auto_tree_destroy_nodes_01e20f20(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01e20f20(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01e20f20

// auto_tree_destroy_nodes_01e20f80: engine_tree_destroy_nodes with other addresses.
namespace twin_01e20f80 {

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
extern "C" void bb_auto_tree_destroy_nodes_01e20f80(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01e20f80(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01e20f80

// auto_tree_destroy_nodes_01e20fe0: engine_tree_destroy_nodes with other addresses.
namespace twin_01e20fe0 {

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
extern "C" void bb_auto_tree_destroy_nodes_01e20fe0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01e20fe0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01e20fe0

// auto_tree_destroy_nodes_01e21040: engine_tree_destroy_nodes with other addresses.
namespace twin_01e21040 {

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
extern "C" void bb_auto_tree_destroy_nodes_01e21040(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01e21040(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01e21040

// auto_tree_destroy_nodes_01ea2860: engine_tree_destroy_nodes with other addresses.
namespace twin_01ea2860 {

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
extern "C" void bb_auto_tree_destroy_nodes_01ea2860(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_01ea2860(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_01ea2860

// auto_tree_destroy_nodes_020b7160: engine_tree_destroy_nodes with other addresses.
namespace twin_020b7160 {

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
extern "C" void bb_auto_tree_destroy_nodes_020b7160(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_020b7160(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_020b7160

// auto_tree_destroy_nodes_020c4700: engine_tree_destroy_nodes with other addresses.
namespace twin_020c4700 {

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
extern "C" void bb_auto_tree_destroy_nodes_020c4700(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_020c4700(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_020c4700

// auto_tree_destroy_nodes_020f01b0: engine_tree_destroy_nodes with other addresses.
namespace twin_020f01b0 {

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
extern "C" void bb_auto_tree_destroy_nodes_020f01b0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_020f01b0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_020f01b0

// auto_tree_destroy_nodes_020f2e20: engine_tree_destroy_nodes with other addresses.
namespace twin_020f2e20 {

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
extern "C" void bb_auto_tree_destroy_nodes_020f2e20(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_020f2e20(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_020f2e20

// auto_tree_destroy_nodes_02112df0: engine_tree_destroy_nodes with other addresses.
namespace twin_02112df0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02112df0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02112df0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02112df0

// auto_tree_destroy_nodes_021d4ee0: engine_tree_destroy_nodes with other addresses.
namespace twin_021d4ee0 {

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
extern "C" void bb_auto_tree_destroy_nodes_021d4ee0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_021d4ee0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_021d4ee0

// auto_tree_destroy_nodes_022ae740: engine_tree_destroy_nodes with other addresses.
namespace twin_022ae740 {

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
extern "C" void bb_auto_tree_destroy_nodes_022ae740(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_022ae740(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_022ae740

// auto_tree_destroy_nodes_022aee90: engine_tree_destroy_nodes with other addresses.
namespace twin_022aee90 {

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
extern "C" void bb_auto_tree_destroy_nodes_022aee90(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_022aee90(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_022aee90

// auto_tree_destroy_nodes_023261a0: engine_tree_destroy_nodes with other addresses.
namespace twin_023261a0 {

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
extern "C" void bb_auto_tree_destroy_nodes_023261a0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_023261a0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_023261a0

// auto_tree_destroy_nodes_0232c8d0: engine_tree_destroy_nodes with other addresses.
namespace twin_0232c8d0 {

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
extern "C" void bb_auto_tree_destroy_nodes_0232c8d0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0232c8d0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0232c8d0

// auto_tree_destroy_nodes_0232f6d0: engine_tree_destroy_nodes with other addresses.
namespace twin_0232f6d0 {

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
extern "C" void bb_auto_tree_destroy_nodes_0232f6d0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0232f6d0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0232f6d0

// auto_tree_destroy_nodes_02366060: engine_tree_destroy_nodes with other addresses.
namespace twin_02366060 {

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
extern "C" void bb_auto_tree_destroy_nodes_02366060(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02366060(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02366060

// auto_tree_destroy_nodes_023660c0: engine_tree_destroy_nodes with other addresses.
namespace twin_023660c0 {

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
extern "C" void bb_auto_tree_destroy_nodes_023660c0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_023660c0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_023660c0

// auto_tree_destroy_nodes_0236f1f0: engine_tree_destroy_nodes with other addresses.
namespace twin_0236f1f0 {

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
extern "C" void bb_auto_tree_destroy_nodes_0236f1f0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0236f1f0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0236f1f0

// auto_tree_destroy_nodes_0237d410: engine_tree_destroy_nodes with other addresses.
namespace twin_0237d410 {

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
extern "C" void bb_auto_tree_destroy_nodes_0237d410(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0237d410(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0237d410

// auto_tree_destroy_nodes_0237dda0: engine_tree_destroy_nodes with other addresses.
namespace twin_0237dda0 {

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
extern "C" void bb_auto_tree_destroy_nodes_0237dda0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0237dda0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0237dda0

// auto_tree_destroy_nodes_023fa1b0: engine_tree_destroy_nodes with other addresses.
namespace twin_023fa1b0 {

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
extern "C" void bb_auto_tree_destroy_nodes_023fa1b0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_023fa1b0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_023fa1b0

// auto_tree_destroy_nodes_02455e80: engine_tree_destroy_nodes with other addresses.
namespace twin_02455e80 {

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
extern "C" void bb_auto_tree_destroy_nodes_02455e80(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02455e80(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02455e80

// auto_tree_destroy_nodes_0248fa70: engine_tree_destroy_nodes with other addresses.
namespace twin_0248fa70 {

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
extern "C" void bb_auto_tree_destroy_nodes_0248fa70(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0248fa70(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0248fa70

// auto_tree_destroy_nodes_02492ad0: engine_tree_destroy_nodes with other addresses.
namespace twin_02492ad0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02492ad0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02492ad0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02492ad0

// auto_tree_destroy_nodes_024a8360: engine_tree_destroy_nodes with other addresses.
namespace twin_024a8360 {

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
extern "C" void bb_auto_tree_destroy_nodes_024a8360(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_024a8360(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_024a8360

// auto_tree_destroy_nodes_024d3200: engine_tree_destroy_nodes with other addresses.
namespace twin_024d3200 {

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
extern "C" void bb_auto_tree_destroy_nodes_024d3200(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_024d3200(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_024d3200

// auto_tree_destroy_nodes_02500e20: engine_tree_destroy_nodes with other addresses.
namespace twin_02500e20 {

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
extern "C" void bb_auto_tree_destroy_nodes_02500e20(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02500e20(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02500e20

// auto_tree_destroy_nodes_02537970: engine_tree_destroy_nodes with other addresses.
namespace twin_02537970 {

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
extern "C" void bb_auto_tree_destroy_nodes_02537970(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02537970(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02537970

// auto_tree_destroy_nodes_025379d0: engine_tree_destroy_nodes with other addresses.
namespace twin_025379d0 {

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
extern "C" void bb_auto_tree_destroy_nodes_025379d0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_025379d0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_025379d0

// auto_tree_destroy_nodes_0255af40: engine_tree_destroy_nodes with other addresses.
namespace twin_0255af40 {

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
extern "C" void bb_auto_tree_destroy_nodes_0255af40(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0255af40(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0255af40

// auto_tree_destroy_nodes_02622d30: engine_tree_destroy_nodes with other addresses.
namespace twin_02622d30 {

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
extern "C" void bb_auto_tree_destroy_nodes_02622d30(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02622d30(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02622d30

// auto_tree_destroy_nodes_0265c090: engine_tree_destroy_nodes with other addresses.
namespace twin_0265c090 {

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
extern "C" void bb_auto_tree_destroy_nodes_0265c090(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0265c090(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0265c090

// auto_tree_destroy_nodes_0265d100: engine_tree_destroy_nodes with other addresses.
namespace twin_0265d100 {

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
extern "C" void bb_auto_tree_destroy_nodes_0265d100(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0265d100(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0265d100

// auto_tree_destroy_nodes_0268d060: engine_tree_destroy_nodes with other addresses.
namespace twin_0268d060 {

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
extern "C" void bb_auto_tree_destroy_nodes_0268d060(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0268d060(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0268d060

// auto_tree_destroy_nodes_0277bd00: engine_tree_destroy_nodes with other addresses.
namespace twin_0277bd00 {

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
extern "C" void bb_auto_tree_destroy_nodes_0277bd00(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0277bd00(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0277bd00

// auto_tree_destroy_nodes_0277bd60: engine_tree_destroy_nodes with other addresses.
namespace twin_0277bd60 {

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
extern "C" void bb_auto_tree_destroy_nodes_0277bd60(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0277bd60(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0277bd60

// auto_tree_destroy_nodes_0277c950: engine_tree_destroy_nodes with other addresses.
namespace twin_0277c950 {

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
extern "C" void bb_auto_tree_destroy_nodes_0277c950(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0277c950(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0277c950

// auto_tree_destroy_nodes_0277d500: engine_tree_destroy_nodes with other addresses.
namespace twin_0277d500 {

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
extern "C" void bb_auto_tree_destroy_nodes_0277d500(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_0277d500(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_0277d500

// auto_tree_destroy_nodes_02a4f1b0: engine_tree_destroy_nodes with other addresses.
namespace twin_02a4f1b0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02a4f1b0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02a4f1b0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02a4f1b0

// auto_tree_destroy_nodes_02a50620: engine_tree_destroy_nodes with other addresses.
namespace twin_02a50620 {

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
extern "C" void bb_auto_tree_destroy_nodes_02a50620(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02a50620(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02a50620

// auto_tree_destroy_nodes_02a50680: engine_tree_destroy_nodes with other addresses.
namespace twin_02a50680 {

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
extern "C" void bb_auto_tree_destroy_nodes_02a50680(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02a50680(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02a50680

// auto_tree_destroy_nodes_02a506e0: engine_tree_destroy_nodes with other addresses.
namespace twin_02a506e0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02a506e0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02a506e0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02a506e0

// auto_tree_destroy_nodes_02a73900: engine_tree_destroy_nodes with other addresses.
namespace twin_02a73900 {

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
extern "C" void bb_auto_tree_destroy_nodes_02a73900(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02a73900(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02a73900

// auto_tree_destroy_nodes_02a74300: engine_tree_destroy_nodes with other addresses.
namespace twin_02a74300 {

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
extern "C" void bb_auto_tree_destroy_nodes_02a74300(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02a74300(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02a74300

// auto_tree_destroy_nodes_02b30bf0: engine_tree_destroy_nodes with other addresses.
namespace twin_02b30bf0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02b30bf0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02b30bf0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02b30bf0

// auto_tree_destroy_nodes_02bbb6c0: engine_tree_destroy_nodes with other addresses.
namespace twin_02bbb6c0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02bbb6c0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02bbb6c0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02bbb6c0

// auto_tree_destroy_nodes_02bc9ea0: engine_tree_destroy_nodes with other addresses.
namespace twin_02bc9ea0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02bc9ea0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02bc9ea0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02bc9ea0

// auto_tree_destroy_nodes_02be6b80: engine_tree_destroy_nodes with other addresses.
namespace twin_02be6b80 {

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
extern "C" void bb_auto_tree_destroy_nodes_02be6b80(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02be6b80(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02be6b80

// auto_tree_destroy_nodes_02beec40: engine_tree_destroy_nodes with other addresses.
namespace twin_02beec40 {

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
extern "C" void bb_auto_tree_destroy_nodes_02beec40(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02beec40(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02beec40

// auto_tree_destroy_nodes_02bef8f0: engine_tree_destroy_nodes with other addresses.
namespace twin_02bef8f0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02bef8f0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02bef8f0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02bef8f0

// auto_tree_destroy_nodes_02c26b50: engine_tree_destroy_nodes with other addresses.
namespace twin_02c26b50 {

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
extern "C" void bb_auto_tree_destroy_nodes_02c26b50(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02c26b50(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02c26b50

// auto_tree_destroy_nodes_02c27500: engine_tree_destroy_nodes with other addresses.
namespace twin_02c27500 {

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
extern "C" void bb_auto_tree_destroy_nodes_02c27500(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02c27500(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02c27500

// auto_tree_destroy_nodes_02d2c540: engine_tree_destroy_nodes with other addresses.
namespace twin_02d2c540 {

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
extern "C" void bb_auto_tree_destroy_nodes_02d2c540(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02d2c540(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02d2c540

// auto_tree_destroy_nodes_02d65fa0: engine_tree_destroy_nodes with other addresses.
namespace twin_02d65fa0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02d65fa0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02d65fa0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02d65fa0

// auto_tree_destroy_nodes_02d67d90: engine_tree_destroy_nodes with other addresses.
namespace twin_02d67d90 {

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
extern "C" void bb_auto_tree_destroy_nodes_02d67d90(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02d67d90(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02d67d90

// auto_tree_destroy_nodes_02d75dc0: engine_tree_destroy_nodes with other addresses.
namespace twin_02d75dc0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02d75dc0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02d75dc0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02d75dc0

// auto_tree_destroy_nodes_02d78fc0: engine_tree_destroy_nodes with other addresses.
namespace twin_02d78fc0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02d78fc0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02d78fc0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02d78fc0

// auto_tree_destroy_nodes_02d79a20: engine_tree_destroy_nodes with other addresses.
namespace twin_02d79a20 {

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
extern "C" void bb_auto_tree_destroy_nodes_02d79a20(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02d79a20(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02d79a20

// auto_tree_destroy_nodes_02d7a4f0: engine_tree_destroy_nodes with other addresses.
namespace twin_02d7a4f0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02d7a4f0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02d7a4f0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02d7a4f0

// auto_tree_destroy_nodes_02d83c30: engine_tree_destroy_nodes with other addresses.
namespace twin_02d83c30 {

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
extern "C" void bb_auto_tree_destroy_nodes_02d83c30(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02d83c30(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02d83c30

// auto_tree_destroy_nodes_02d84600: engine_tree_destroy_nodes with other addresses.
namespace twin_02d84600 {

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
extern "C" void bb_auto_tree_destroy_nodes_02d84600(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02d84600(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02d84600

// auto_tree_destroy_nodes_02d852f0: engine_tree_destroy_nodes with other addresses.
namespace twin_02d852f0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02d852f0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02d852f0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02d852f0

// auto_tree_destroy_nodes_02da03d0: engine_tree_destroy_nodes with other addresses.
namespace twin_02da03d0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02da03d0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02da03d0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02da03d0

// auto_tree_destroy_nodes_02daa780: engine_tree_destroy_nodes with other addresses.
namespace twin_02daa780 {

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
extern "C" void bb_auto_tree_destroy_nodes_02daa780(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02daa780(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02daa780

// auto_tree_destroy_nodes_02db1dc0: engine_tree_destroy_nodes with other addresses.
namespace twin_02db1dc0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02db1dc0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02db1dc0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02db1dc0

// auto_tree_destroy_nodes_02db1e20: engine_tree_destroy_nodes with other addresses.
namespace twin_02db1e20 {

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
extern "C" void bb_auto_tree_destroy_nodes_02db1e20(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02db1e20(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02db1e20

// auto_tree_destroy_nodes_02db4240: engine_tree_destroy_nodes with other addresses.
namespace twin_02db4240 {

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
extern "C" void bb_auto_tree_destroy_nodes_02db4240(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02db4240(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02db4240

// auto_tree_destroy_nodes_02dbb9b0: engine_tree_destroy_nodes with other addresses.
namespace twin_02dbb9b0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02dbb9b0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02dbb9b0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02dbb9b0

// auto_tree_destroy_nodes_02dbd250: engine_tree_destroy_nodes with other addresses.
namespace twin_02dbd250 {

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
extern "C" void bb_auto_tree_destroy_nodes_02dbd250(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02dbd250(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02dbd250

// auto_tree_destroy_nodes_02dcf0b0: engine_tree_destroy_nodes with other addresses.
namespace twin_02dcf0b0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02dcf0b0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02dcf0b0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02dcf0b0

// auto_tree_destroy_nodes_02dd88f0: engine_tree_destroy_nodes with other addresses.
namespace twin_02dd88f0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02dd88f0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02dd88f0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02dd88f0

// auto_tree_destroy_nodes_02ddef00: engine_tree_destroy_nodes with other addresses.
namespace twin_02ddef00 {

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
extern "C" void bb_auto_tree_destroy_nodes_02ddef00(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02ddef00(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02ddef00

// auto_tree_destroy_nodes_02e5f850: engine_tree_destroy_nodes with other addresses.
namespace twin_02e5f850 {

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
extern "C" void bb_auto_tree_destroy_nodes_02e5f850(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02e5f850(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02e5f850

// auto_tree_destroy_nodes_02f0ab00: engine_tree_destroy_nodes with other addresses.
namespace twin_02f0ab00 {

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
extern "C" void bb_auto_tree_destroy_nodes_02f0ab00(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02f0ab00(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02f0ab00

// auto_tree_destroy_nodes_02f81de0: engine_tree_destroy_nodes with other addresses.
namespace twin_02f81de0 {

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
extern "C" void bb_auto_tree_destroy_nodes_02f81de0(engine::TreeOwner *owner, Node *node)
{
    while (!node->is_nil) {
        bb_auto_tree_destroy_nodes_02f81de0(owner, node->right);
        Node *left = node->left;
        owner->allocator->free(node);
        node = left;
    }
}

}  // namespace twin_02f81de0
