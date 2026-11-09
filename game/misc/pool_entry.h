// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct PoolOwner;
struct PoolExtra;

/**
 *
 * One entry of a slot pool: the owner it belongs to, the descriptor it uses, and its extras.
 *
 */
struct PoolEntry {
    uint8_t unknown_0x00[0x10];
    PoolOwner *owner;          /**< The owner whose descriptors measure this entry. */
    int32_t descriptor_index;  /**< Index of this entry's descriptor in the owner. */
    uint8_t unknown_0x1c[0x14];
    PoolExtra **extras;        /**< Extra objects the records refer to; a slot may be null. */
};
static_assert(offsetof(PoolEntry, owner) == 0x10);
static_assert(offsetof(PoolEntry, descriptor_index) == 0x18);
static_assert(offsetof(PoolEntry, extras) == 0x30);

}  // namespace misc
