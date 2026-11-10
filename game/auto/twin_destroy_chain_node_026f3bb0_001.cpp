// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_destroy_chain_node, in game/misc/destroy_chain_node.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "runtime/original.h"

// auto_destroy_chain_node_021f5fb0: misc_destroy_chain_node with other addresses.
namespace twin_021f5fb0 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x021f5fb0, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_021f5fb0(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_021f5fb0

// auto_destroy_chain_node_021f6030: misc_destroy_chain_node with other addresses.
namespace twin_021f6030 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x021f6030, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_021f6030(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_021f6030

// auto_destroy_chain_node_021f60b0: misc_destroy_chain_node with other addresses.
namespace twin_021f60b0 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x021f60b0, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_021f60b0(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_021f60b0

// auto_destroy_chain_node_021f6130: misc_destroy_chain_node with other addresses.
namespace twin_021f6130 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x021f6130, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_021f6130(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_021f6130

// auto_destroy_chain_node_021f61b0: misc_destroy_chain_node with other addresses.
namespace twin_021f61b0 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x021f61b0, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_021f61b0(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_021f61b0

// auto_destroy_chain_node_021f6310: misc_destroy_chain_node with other addresses.
namespace twin_021f6310 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x021f6310, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_021f6310(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_021f6310

// auto_destroy_chain_node_02622cb0: misc_destroy_chain_node with other addresses.
namespace twin_02622cb0 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x02622cb0, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_02622cb0(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_02622cb0

// auto_destroy_chain_node_0263def0: misc_destroy_chain_node with other addresses.
namespace twin_0263def0 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x0263def0, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_0263def0(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_0263def0

// auto_destroy_chain_node_027101e0: misc_destroy_chain_node with other addresses.
namespace twin_027101e0 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x027101e0, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_027101e0(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_027101e0

// auto_destroy_chain_node_02b2be40: misc_destroy_chain_node with other addresses.
namespace twin_02b2be40 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x02b2be40, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_02b2be40(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_02b2be40

// auto_destroy_chain_node_02b5c6d0: misc_destroy_chain_node with other addresses.
namespace twin_02b5c6d0 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x02b5c6d0, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_02b5c6d0(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_02b5c6d0

// auto_destroy_chain_node_02b5ce00: misc_destroy_chain_node with other addresses.
namespace twin_02b5ce00 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x02b5ce00, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_02b5ce00(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_02b5ce00

// auto_destroy_chain_node_02bc2d30: misc_destroy_chain_node with other addresses.
namespace twin_02bc2d30 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x02bc2d30, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_02bc2d30(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_02bc2d30

// auto_destroy_chain_node_02d636a0: misc_destroy_chain_node with other addresses.
namespace twin_02d636a0 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x02d636a0, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_02d636a0(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_02d636a0

// auto_destroy_chain_node_02d94550: misc_destroy_chain_node with other addresses.
namespace twin_02d94550 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x02d94550, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_02d94550(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_02d94550

// auto_destroy_chain_node_02d9a740: misc_destroy_chain_node with other addresses.
namespace twin_02d9a740 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x02d9a740, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_02d9a740(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_02d9a740

// auto_destroy_chain_node_02d9bdc0: misc_destroy_chain_node with other addresses.
namespace twin_02d9bdc0 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x02d9bdc0, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_02d9bdc0(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_02d9bdc0

// auto_destroy_chain_node_02da1e00: misc_destroy_chain_node with other addresses.
namespace twin_02da1e00 {

// Misc: destroys a chain of tree nodes, destroying each node's left child first and freeing each node.


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

RT_ORIGINAL(0x02da1e00, destroy_chain, void(ChainOwner *owner, ChainNode *node));

}  // namespace

/**
 *
 * Destroys the chain that starts at the node, unless the node is the nil sentinel. Each node first has its
 * left child destroyed, then its buffer freed when its capacity is at least eight, and then its fields
 * reset, and the node itself is freed through the owner's allocator. The chain goes on while the next
 * node is not the sentinel.
 *
 */
extern "C" void bb_auto_destroy_chain_node_02da1e00(ChainOwner *owner, ChainNode *node)
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

}  // namespace twin_02da1e00
