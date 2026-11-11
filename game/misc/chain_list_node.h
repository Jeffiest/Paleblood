// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a node of a chain list, with the links the list release relinks.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A chain list node: the next link at +0x00, a second link at +0x08 and the left link at +0x10.
 * An empty list's sentinel links to itself through all three.
 *
 */
struct ChainListNode {
    ChainListNode *next;      /**< The next link of the chain. */
    ChainListNode *link_0x08; /**< The first node of the chain, which a sentinel points to. */
    ChainListNode *left;      /**< The left link. */
};
static_assert(offsetof(ChainListNode, link_0x08) == 0x08 && offsetof(ChainListNode, left) == 0x10);

}  // namespace misc
