// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: clear the pending flag of the tree entry matching each of four keys, or of the end node when none matches.
#include <cstddef>
#include <cstdint>

namespace {

/** The first search key. */
constexpr int32_t first_key = 0x3e9;
/** The second search key. */
constexpr int32_t second_key = 0x3ef;
/** The third search key. */
constexpr int32_t third_key = 0x3ea;
/** The fourth search key. */
constexpr int32_t fourth_key = 0x3f0;

/** A tree node; the end node reuses the same layout and keeps the root in its root link. */
struct TreeNode {
    TreeNode *left;        /**< Taken when the node's key is not less than the search key. */
    TreeNode *root_link;   /**< On the end node, the link to the root. */
    TreeNode *right;       /**< Taken when the node's key is less than the search key. */
    uint8_t unknown_0x18;
    uint8_t is_nil;        /**< Nonzero on the leaf that ends a search. */
    uint8_t unknown_0x1a[2];
    int32_t key;           /**< Compared as a signed value. */
    uint8_t pending;       /**< Cleared on the matched node, or on the end node when none matches. */
};
static_assert(offsetof(TreeNode, root_link) == 0x08);
static_assert(offsetof(TreeNode, right) == 0x10);
static_assert(offsetof(TreeNode, is_nil) == 0x19);
static_assert(offsetof(TreeNode, key) == 0x1c);
static_assert(offsetof(TreeNode, pending) == 0x20);

/** The tree header; its end link at +0x18 points to the end node. */
struct Tree {
    uint8_t unknown_0x0000[0x18];
    TreeNode *end;
};
static_assert(offsetof(Tree, end) == 0x18);

/**
 *
 * Finds the node whose key equals the search key, or the end node when there is none.
 *
 * The walk goes right when a node's key is below the search key and left otherwise, and remembers
 * the last node it went left from. That node matches only when its key is not above the search key.
 */
TreeNode *find_match(TreeNode *end, int32_t key)
{
    TreeNode *candidate = end;
    TreeNode *node = end->root_link;
    while (node->is_nil == 0) {
        if (node->key < key) {
            node = node->right;
        } else {
            candidate = node;
            node = node->left;
        }
    }
    if (candidate == end || candidate->key > key) return end;
    return candidate;
}

}  // namespace

/**
 *
 * Clears the pending flag of the match for each of the four keys, in order.
 *
 * Each search starts from the end node's root link, and a search that finds nothing clears the
 * end node's flag instead.
 */
extern "C" void bb_misc_clear_pending_four_keys(Tree *tree)
{
    TreeNode *end = tree->end;
    find_match(end, first_key)->pending = 0;
    find_match(end, second_key)->pending = 0;
    find_match(end, third_key)->pending = 0;
    find_match(end, fourth_key)->pending = 0;
}
