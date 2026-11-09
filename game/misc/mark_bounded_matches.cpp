// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: query a source for two bounds, then mark the tree node that matches each bound that qualifies.
#include <cstddef>
#include <cstdint>
#include <cstdlib>

#include "runtime/original.h"

namespace {

/** The key searched when the threshold is at least the bound, the lower of the two keys. */
constexpr int32_t low_key = 0x3e9;
/** The key searched when the threshold is below the bound or the bound is not a number. */
constexpr int32_t high_key = 0x3ea;
/** The mode argument passed to the source's query. */
constexpr uint32_t query_mode = 2;
/** The count plus one must reach this value for the first bound to be used. */
constexpr uint32_t first_bound_minimum = 2;
/** The count plus one must exceed this value for the second bound to be used. */
constexpr uint32_t second_bound_exceeds = 1;

/** A tree node; the end node reuses the same layout and keeps the root in its root link. */
struct TreeNode {
    TreeNode *left;        /**< Taken when the node's key is not less than the search key. */
    TreeNode *root_link;   /**< On the end node, the link to the root. */
    TreeNode *right;       /**< Taken when the node's key is less than the search key. */
    uint8_t unknown_0x18;
    uint8_t is_nil;        /**< Nonzero on the leaf that ends a search. */
    uint8_t unknown_0x1a[2];
    int32_t key;           /**< Compared as a signed value. */
    uint8_t pending;       /**< Set on the matched node. */
};
static_assert(offsetof(TreeNode, root_link) == 0x08);
static_assert(offsetof(TreeNode, right) == 0x10);
static_assert(offsetof(TreeNode, is_nil) == 0x19);
static_assert(offsetof(TreeNode, key) == 0x1c);
static_assert(offsetof(TreeNode, pending) == 0x20);

/** Two (count, bound) pairs written by the source's query. */
struct SearchBounds {
    int32_t first_count;       /**< Plus one must reach two for the first bound to be used. */
    float first_value;         /**< The first bound, compared with the threshold. */
    uint8_t unknown_0x08[4];
    int32_t second_count;      /**< Plus one must exceed one for the second bound to be used. */
    float second_value;        /**< The second bound, compared with the threshold. */
};
static_assert(offsetof(SearchBounds, first_value) == 0x04);
static_assert(offsetof(SearchBounds, second_count) == 0x0c);
static_assert(offsetof(SearchBounds, second_value) == 0x10);

struct Source;

/** The source's query at slot 0xa8, which fills the bounds for the given mode. */
struct SourceVtable {
    uint8_t unknown_0x0000[0xa8];
    void (*query)(Source *source, SearchBounds *bounds, uint32_t mode);
};
static_assert(offsetof(SourceVtable, query) == 0xa8);

struct Source {
    const SourceVtable *vtable;
};

/** The holder: the source at +0x8 and the tree's end node at +0x18. */
struct SearchHolder {
    uint8_t unknown_0x0000[0x8];
    Source *source;
    uint8_t unknown_0x0010[0x8];
    TreeNode *end;
};
static_assert(offsetof(SearchHolder, source) == 0x8);
static_assert(offsetof(SearchHolder, end) == 0x18);

RT_GLOBAL(0x04cb89c8, search_threshold, float);
RT_GLOBAL(0x057e3be0, stack_guard_pointer, const uint64_t *);
RT_ORIGINAL(0x02fbe4f8, stack_check_failure, void());

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

/**
 *
 * Chooses the key by comparing the threshold with a bound, then sets the pending flag of its match.
 *
 * The lower key is used when the threshold is at least the bound. An unordered bound takes the
 * higher key. The end node is never flagged here.
 */
void mark_for_bound(SearchHolder *holder, float bound)
{
    const int32_t key = search_threshold.get() >= bound ? low_key : high_key;
    TreeNode *match = find_match(holder->end, key);
    if (match != holder->end) match->pending = 1;
}

}  // namespace

/**
 *
 * Queries the source for two bounds and marks the matches of the bounds that qualify.
 *
 * The first bound is used when its count plus one is at least two (unsigned), and the second when
 * its count plus one exceeds one. The stack guard copied on entry is compared again before returning.
 * A guard mismatch reports the original's stack check failure and aborts, as the original never returns.
 */
extern "C" void bb_misc_mark_bounded_matches(SearchHolder *holder)
{
    const uint64_t *const guard = stack_guard_pointer.get();
    const uint64_t canary = *guard;
    Source *source = holder->source;
    if (source != nullptr) {
        SearchBounds bounds;
        source->vtable->query(source, &bounds, query_mode);
        if (static_cast<uint32_t>(bounds.first_count) + 1u >= first_bound_minimum) mark_for_bound(holder, bounds.first_value);
        if (static_cast<uint32_t>(bounds.second_count) + 1u > second_bound_exceeds) mark_for_bound(holder, bounds.second_value);
    }
    if (*guard != canary) {
        stack_check_failure();
        std::abort();
    }
}
