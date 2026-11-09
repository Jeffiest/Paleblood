// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a node of a singly linked list whose entries are freed through their allocator.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ChainedNode;

/**
 *
 * A list node: its payload at +0x0 and the next node at +0x8.
 *
 */
struct ChainedNode {
    void *payload;             /**< The payload the node carries, passed on by the list's first pass. */
    ChainedNode *next;         /**< The following node, or null at the end of the list. */
};
static_assert(offsetof(ChainedNode, next) == 0x8);

}  // namespace misc
