// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a cache of two indices, taken from a pool context.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct PoolContext;

/**
 *
 * The index cache: the pool context it reads, then the two indices refreshed from it.
 *
 */
struct IndexCache {
    uint8_t unknown_0x00[0x8];
    PoolContext *context_0x08; /**< The pool context the indices are read from. */
    uint32_t index_0x10;       /**< The first index; all ones when none is found. */
    int32_t index_0x14;        /**< The second index, sign extended from a byte; minus one when none. */
};
static_assert(offsetof(IndexCache, context_0x08) == 0x8 && offsetof(IndexCache, index_0x10) == 0x10);
static_assert(offsetof(IndexCache, index_0x14) == 0x14);

}  // namespace misc
