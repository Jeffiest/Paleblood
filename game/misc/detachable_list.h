// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a list head holding its chain of nodes and the pending object a detach step takes off it.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct DetachableObject;

/**
 *
 * One node of the chain: the link to the following node is at +0x8.
 *
 */
struct DetachableNode {
    uint8_t unknown_0x00[0x08];
    DetachableNode *next_0x08;  /**< The following node, or null at the end of the chain. */
};
static_assert(offsetof(DetachableNode, next_0x08) == 0x08);

/**
 *
 * The list head: the first node of the chain at +0x0 and the pending object at +0x8.
 *
 */
struct DetachableListHead {
    DetachableNode *head_0x00;       /**< The first node of the chain. */
    DetachableObject *pending_0x08;  /**< The object taken off the chain, cleared once detached. */
};
static_assert(offsetof(DetachableListHead, pending_0x08) == 0x08);

}  // namespace misc
