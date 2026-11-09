// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a chain of nodes that is handed back to the scratch service, with its own value word.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A node of a release chain: the first word is the next node, or null at the end of the chain.
 *
 */
struct ReleaseChainNode {
    ReleaseChainNode *next;      /**< Next node of the chain, or null after the last one. */
};
static_assert(offsetof(ReleaseChainNode, next) == 0x00);

/**
 *
 * A release chain: two words cleared on initialization, the head node at 0x10 and the value at 0x18.
 *
 */
struct ReleaseChain {
    uint64_t first_word;         /**< Cleared on initialization. */
    uint64_t second_word;        /**< Cleared on initialization. */
    ReleaseChainNode *head;      /**< First node of the chain, released node by node. */
    uint64_t value;              /**< Value given when the chain is initialized. */
};
static_assert(offsetof(ReleaseChain, head) == 0x10);
static_assert(offsetof(ReleaseChain, value) == 0x18);

}  // namespace misc
