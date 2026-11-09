// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the pair service that resolves keys to handles, and the keys it holds.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The pair service: the key the slot lookup resolves sits at +0x108.
 *
 */
struct PairService {
    uint8_t unknown_0x0000[0x108];
    uint64_t key_0x108; /**< Key resolved by the slot lookup. */
};
static_assert(offsetof(PairService, key_0x108) == 0x108);

}  // namespace misc
