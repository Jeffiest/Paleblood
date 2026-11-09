// SPDX-License-Identifier: GPL-2.0-or-later
#include "release_chain.h"

namespace {

/** Bytes that a chain node takes in front of its payload: the link to the next node. */
constexpr uint64_t chain_link_size = sizeof(misc::ReleaseChainNode);

}  // namespace

/**
 *
 * Allocates a node for a release chain from its allocator and links it in at the head.
 *
 * The allocator is asked for the payload size plus the link. When it returns no block the chain is
 * left alone and null is returned. Otherwise the block's first word takes the old head, the block
 * becomes the head, and the address just past the link is returned.
 */
extern "C" void *bb_misc_allocate_chain_node(misc::ReleaseChain *chain, uint64_t payload_size)
{
    misc::ReleaseChainAllocator *allocator = chain->allocator;
    void *block = allocator->vtable->allocate(allocator, payload_size + chain_link_size, 0);
    if (block == nullptr) return nullptr;
    misc::ReleaseChainNode *node = static_cast<misc::ReleaseChainNode *>(block);
    node->next = chain->head;
    chain->head = node;
    return node + 1;
}
