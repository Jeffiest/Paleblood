// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores a new pair of blocks, retaining the new blocks first and releasing the old ones after.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/**
 *
 * A pair of block pointers: the first at +0x0 and the second at +0x8.
 *
 */
struct BlockPair {
    void *first; /**< First block of the pair. */
    void *second; /**< Second block of the pair. */
};
static_assert(offsetof(BlockPair, second) == 0x08);

RT_ORIGINAL(0x0042e5c0, retain_block, void(void *block));
RT_ORIGINAL(0x0042e5d0, release_block, void(void *block));

}  // namespace

/**
 *
 * Stores the new first and second blocks in the pair, after retaining the new blocks that are set and releasing
 * the old blocks that are set.
 *
 */
extern "C" void bb_misc_store_pair(BlockPair *pair, void *first, void *second)
{
    if (first != nullptr) retain_block(first);
    if (second != nullptr) retain_block(second);
    if (pair->first != nullptr) release_block(pair->first);
    if (pair->second != nullptr) release_block(pair->second);
    pair->first = first;
    pair->second = second;
}
