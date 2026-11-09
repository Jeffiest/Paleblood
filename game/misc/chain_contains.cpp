// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tells whether a node is one of the nodes that follow a head in its chain.
#include <cstddef>
#include <cstdint>

namespace {

/**
 *
 * A chain node: the pointer to the next node sits at +0x38.
 *
 */
struct ChainNode {
    uint8_t unknown_0x0000[0x38];
    const ChainNode *next; /**< Next node in the chain, or null at its end. */
};
static_assert(offsetof(ChainNode, next) == 0x38);

}  // namespace

/**
 *
 * Returns whether the target is one of the nodes after the head.
 *
 * The head itself is never compared, so a target equal to the head gives false unless the chain loops back to it.
 *
 */
extern "C" bool bb_misc_chain_contains(const ChainNode *target, const ChainNode *head)
{
    for (const ChainNode *node = head->next; node != nullptr; node = node->next) {
        if (node == target) return true;
    }
    return false;
}
