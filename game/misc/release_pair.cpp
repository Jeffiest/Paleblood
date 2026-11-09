// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases the two blocks of a pair, each only when it is set; the second release's result is returned.
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
    void *first; /**< First block, released when not null. */
    void *second; /**< Second block, released last when not null. */
};
static_assert(offsetof(BlockPair, second) == 0x08);

RT_ORIGINAL(0x0042e5d0, release_block, uint64_t(void *block));

}  // namespace

/**
 *
 * Releases the pair's blocks that are set, and returns the result of the last release.
 *
 * With no second block the result is the first release's result, or zero when neither block is set.
 *
 */
extern "C" uint64_t bb_misc_release_pair(BlockPair *pair)
{
    uint64_t result = 0;
    if (pair->first != nullptr) result = release_block(pair->first);
    if (pair->second != nullptr) return release_block(pair->second);
    return result;
}
