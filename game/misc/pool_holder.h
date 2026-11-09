// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a holder that refers to an indexed pool.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct IndexedPool;

/**
 *
 * A holder: its pool pointer at +0x8.
 *
 */
struct PoolHolder {
    uint8_t unknown_0x00[0x8];
    IndexedPool *pool_0x08; /**< The pool the holder works on. */
};
static_assert(offsetof(PoolHolder, pool_0x08) == 0x8);

}  // namespace misc
