// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "block_releaser.h"

namespace misc {

/**
 *
 * The per-thread block record the game keeps in thread-local storage; it holds the thread's releaser.
 *
 */
struct ThreadBlock {
    uint8_t unknown_0x00[0x58];
    BlockReleaser *releaser; /**< The releaser that frees this thread's blocks. */
};
static_assert(offsetof(ThreadBlock, releaser) == 0x58);

}  // namespace misc
