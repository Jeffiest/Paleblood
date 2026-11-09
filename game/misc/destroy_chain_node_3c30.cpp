// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "runtime/original.h"

namespace {

using engine::Allocator;

/** A tree node: a link to the next node, a left child, a nil flag, a buffer and its capacity. */
struct ChainNode {
    ChainNode *next;      /**< The next node of the chain. */
    uint8_t unknown_0x08[0x08];
    ChainNode *left;      /**< The left child, destroyed before the node. */
    uint8_t unknown_0x18[0x01];
    uint8_t is_nil;       /**< Non-zero for the sentinel that ends a chain. */
    uint8_t unknown_0x1a[0x0e];
    union {
        void *buffer;         /**< The node's buffer, freed when the capacity is large enough. */
        uint16_t cleared_word; /**< The low half of the buffer word, cleared once the buffer is handled. */
    };
    uint8_t unknown_0x30[0x08];
    uint64_t cleared_0x38;     /**< Set to zero. */
    uint64_t capacity;         /**< Buffers from this capacity up are freed. */
    Allocator *buffer_allocator; /**< Frees the node's buffer. */
};
static_assert(offsetof(ChainNode, next) == 0x00 && offsetof(ChainNode, left) == 0x10);
static_assert(offsetof(ChainNode, is_nil) == 0x19 && offsetof(ChainNode, buffer) == 0x28);
static_assert(offsetof(ChainNode, cleared_0x38) == 0x38 && offsetof(ChainNode, capacity) == 0x40);
static_assert(offsetof(ChainNode, buffer_allocator) == 0x48 && sizeof(ChainNode) == 0x50);

/** The owner of the chain: the allocator that frees the nodes at +0x18. */
struct ChainOwner {
    uint8_t unknown_0x00[0x18];
    Allocator *node_allocator; /**< Frees the nodes. */
};
static_assert(offsetof(ChainOwner, node_allocator) == 0x18);

/** The capacity from which a node's buffer is freed, and the small capacity a node is reset to. */
constexpr uint64_t buffer_capacity_min = 0x8;
constexpr uint64_t reset_capacity = 0x7;

RT_ORIGINAL(0x026f3c30, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_misc_destroy_chain_node_3c30(ChainOwner *owner, ChainNode *node)
{
    if (node->is_nil != 0) return;
    ChainNode *current = node;
    while (true) {
        destroy_chain(owner, current->left);
        ChainNode *next = current->next;
        if (current->capacity >= buffer_capacity_min) current->buffer_allocator->free(current->buffer);
        current->capacity = reset_capacity;
        current->cleared_0x38 = 0;
        current->cleared_word = 0;
        owner->node_allocator->free(current);
        current = next;
        if (current->is_nil != 0) return;
    }
}
