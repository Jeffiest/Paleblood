// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: takes a node of 0x38 bytes from the holder's pool and moves the holder's pending words into
// it. The pending words are cleared in the holder. A node comes from the pool's cursor while enough
// bytes remain, and otherwise from the slow allocator; when that gives none, nothing is moved.
#include <cstdint>

#include "misc.h"

namespace {

/** A taken node: its first word is zero, then the moved words and a trailing zero word. */
struct TakenNode {
    uint64_t zero_0x00;
    uint32_t value_0x08;    /**< The holder's word at 0x380. */
    uint32_t value_0x0c;    /**< The holder's word at 0x378. */
    uint32_t value_0x10;    /**< The holder's count, at 0x37c. */
    uint8_t unknown_0x14[0x04];
    uint64_t value_0x18;    /**< The holder's word at 0x390. */
    uint64_t value_0x20;    /**< The holder's word at 0x3a8. */
    uint64_t value_0x28;    /**< The holder's first node, at 0x398. */
    uint64_t zero_0x30;
};
static_assert(offsetof(TakenNode, value_0x08) == 0x08);
static_assert(offsetof(TakenNode, value_0x0c) == 0x0c);
static_assert(offsetof(TakenNode, value_0x10) == 0x10);
static_assert(offsetof(TakenNode, value_0x18) == 0x18);
static_assert(offsetof(TakenNode, value_0x20) == 0x20);
static_assert(offsetof(TakenNode, value_0x28) == 0x28);
static_assert(offsetof(TakenNode, zero_0x30) == 0x30);
static_assert(sizeof(TakenNode) == 0x38);

}  // namespace

/**
 *
 * Takes a node from the holder's pool and moves the holder's pending words into it, then clears them.
 *
 * Returns the node, or null when the pool could not give one; in that case the holder is unchanged.
 *
 */
extern "C" TakenNode *bb_misc_take_pending_node(misc::PooledHolder *holder)
{
    constexpr uint32_t node_size = static_cast<uint32_t>(sizeof(TakenNode));

    misc::NodePool *pool = holder->pool;
    misc::PoolNode *node;
    if (pool->remaining < node_size) {
        node = misc::fn_00414be0(&pool->cursor, node_size);
    } else {
        node = pool->cursor;
        pool->cursor = reinterpret_cast<misc::PoolNode *>(reinterpret_cast<uint8_t *>(node) + node_size);
        pool->remaining -= node_size;
    }
    if (node == nullptr) return nullptr;

    TakenNode *taken = reinterpret_cast<TakenNode *>(node);
    taken->zero_0x00 = 0;
    taken->value_0x10 = holder->count;
    taken->value_0x08 = holder->value_0x380;
    taken->value_0x0c = holder->value_0x378;
    taken->value_0x18 = holder->value_0x390;
    taken->value_0x20 = holder->value_0x3a8;
    taken->value_0x28 = reinterpret_cast<uint64_t>(holder->first);
    taken->zero_0x30 = 0;

    holder->value_0x378 = 0;
    holder->count = 0;
    holder->value_0x380 = 0;
    holder->value_0x3a8 = 0;
    holder->first = nullptr;
    holder->value_0x390 = 0;
    return taken;
}
