// SPDX-License-Identifier: GPL-2.0-or-later
#include "release_chain.h"

#include <cstdint>

namespace {

/** Bytes that a chain node takes in front of its payload: the link to the next node. */
constexpr uint64_t chain_link_size = sizeof(misc::ReleaseChainNode);

/** Word size that the aligned padding is rounded to, one less than a word is the rounding slack. */
constexpr uint64_t word_size = 8;

/** Mask that drops the low bits of an offset, keeping whole words. */
constexpr uint64_t whole_word_mask = ~(word_size - 1);

}  // namespace

/**
 *
 * Allocates a node for a release chain with an alignment, returning the address past the aligned offset.
 *
 * An alignment of zero asks the allocator for the payload plus the link, with no alignment. Otherwise
 * the padding is the alignment plus a word minus one, rounded down to a multiple of the alignment,
 * and the allocator is asked for the payload plus that padding. A node that is granted is linked in
 * at the head, and the result is the block plus the padding, rounded down to whole words. A refused
 * block leaves the chain alone and gives null.
 */
extern "C" void *bb_misc_allocate_aligned_chain_node(misc::ReleaseChain *chain, uint64_t payload_size,
                                                     uint64_t alignment)
{
    misc::ReleaseChainAllocator *allocator = chain->allocator;
    if (alignment == 0) {
        void *block = allocator->vtable->allocate(allocator, payload_size + chain_link_size, 0);
        if (block == nullptr) return nullptr;
        misc::ReleaseChainNode *node = static_cast<misc::ReleaseChainNode *>(block);
        node->next = chain->head;
        chain->head = node;
        return node + 1;
    }
    const uint64_t slack = alignment + word_size - 1;
    const uint64_t padding = slack - slack % alignment;
    void *block = allocator->vtable->allocate_aligned(allocator, payload_size + padding, alignment, 0);
    if (block == nullptr) return nullptr;
    misc::ReleaseChainNode *node = static_cast<misc::ReleaseChainNode *>(block);
    node->next = chain->head;
    chain->head = node;
    return reinterpret_cast<void *>(reinterpret_cast<uintptr_t>(block) + (padding & whole_word_mask));
}
