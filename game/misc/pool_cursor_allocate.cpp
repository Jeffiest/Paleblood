// SPDX-License-Identifier: GPL-2.0-or-later
#include "release_chain.h"

namespace {

/** Requests of this size or more bypass the cursor and get a block of their own. */
constexpr uint64_t direct_request_threshold = 0xff9;
/** Bytes asked of the allocator for a new region: the region's payload plus its link word. */
constexpr uint64_t region_block_size = 0x1ff8;
/** Bytes of a new region that the cursor hands out. */
constexpr uint64_t region_payload_size = 0x1ff0;
/** Bytes a block takes in front of its payload: the link to the next block. */
constexpr uint64_t block_link_size = sizeof(misc::ReleaseChainNode);
/** The allocation flags passed to the allocator; none are set. */
constexpr uint64_t no_allocation_flags = 0;

/**
 *
 * Takes a block of the given size from the chain's allocator and links it in at the head.
 *
 * Returns the address just past the link word, or null when the allocator returns no block.
 */
void *allocate_linked_block(misc::ReleaseChain *chain, uint64_t block_size)
{
    misc::ReleaseChainAllocator *allocator = chain->allocator;
    void *block = allocator->vtable->allocate(allocator, block_size, no_allocation_flags);
    if (block == nullptr) return nullptr;
    misc::ReleaseChainNode *node = static_cast<misc::ReleaseChainNode *>(block);
    node->next = chain->head;
    chain->head = node;
    return node + 1;
}

}  // namespace

/**
 *
 * Hands out a block of the requested size from the chain's cursor region, refilling the region when it is too small.
 *
 * A request of the direct threshold or more gets a block of its own, linked at the head of the chain.
 * Otherwise the cursor serves it while the region has room; when it does not, a new region is taken
 * from the allocator first. A refused allocation returns null and leaves the cursor as it was.
 */
extern "C" void *bb_misc_pool_cursor_allocate(misc::ReleaseChain *chain, uint64_t size)
{
    if (size >= direct_request_threshold) {
        return allocate_linked_block(chain, size + block_link_size);
    }
    if (chain->second_word < size) {
        void *region = allocate_linked_block(chain, region_block_size);
        if (region == nullptr) return nullptr;
        chain->first_word = reinterpret_cast<uint64_t>(region);
        chain->second_word = region_payload_size;
    }
    void *block = reinterpret_cast<void *>(chain->first_word);
    chain->first_word += size;
    chain->second_word -= size;
    return block;
}
