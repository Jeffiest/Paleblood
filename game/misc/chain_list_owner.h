// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a chain list, with its sentinel, its node count and the allocator that frees its nodes.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"

namespace misc {

struct ChainListNode;

/**
 *
 * A chain list: the sentinel at +0x08, the node count at +0x10 and the node allocator at +0x18.
 *
 */
struct ChainListOwner {
    uint8_t unknown_0x0000[0x08];
    ChainListNode *sentinel;           /**< The sentinel node that ends the chain. */
    uint64_t count_0x10;               /**< The node count, zeroed when the list is released. */
    engine::Allocator *node_allocator; /**< Frees the nodes, the sentinel included. */
};
static_assert(offsetof(ChainListOwner, sentinel) == 0x08 && offsetof(ChainListOwner, count_0x10) == 0x10);
static_assert(offsetof(ChainListOwner, node_allocator) == 0x18 && sizeof(ChainListOwner) == 0x20);

}  // namespace misc
