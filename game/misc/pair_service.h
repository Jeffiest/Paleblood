// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the pair service that resolves keys to handles, and the keys it holds.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The pair service: its keys sit at +0xf8, +0x100 and +0x108.
 *
 */
struct PairService {
    uint8_t unknown_0x0000[0xf8];
    uint64_t key_0xf8;  /**< First key resolved by the slot lookups. */
    uint64_t key_0x100; /**< Second key resolved by the slot lookups. */
    uint64_t key_0x108; /**< Key resolved by the slot lookup. */
};
static_assert(offsetof(PairService, key_0xf8) == 0xf8);
static_assert(offsetof(PairService, key_0x100) == 0x100);
static_assert(offsetof(PairService, key_0x108) == 0x108);

}  // namespace misc
