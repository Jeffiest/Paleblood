// SPDX-License-Identifier: GPL-2.0-or-later
#include "release_chain.h"

/**
 *
 * Initializes a release chain with an empty head and the given allocator.
 *
 * Both leading words and the head are cleared, so the chain starts with no nodes, and the allocator
 * word takes the argument as it is.
 */
extern "C" void bb_misc_init_release_chain(misc::ReleaseChain *chain, misc::ReleaseChainAllocator *allocator)
{
    chain->allocator = allocator;
    chain->head = nullptr;
    chain->second_word = 0;
    chain->first_word = 0;
}
