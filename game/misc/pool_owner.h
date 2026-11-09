// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct PoolChild;
struct PoolDescriptor;

/**
 *
 * The object that owns the children and the descriptors that pool entries are measured with.
 *
 */
struct PoolOwner {
    uint8_t unknown_0x00[0x48];
    PoolChild **children;          /**< The children the descriptors index into. */
    uint8_t unknown_0x50[0x8];
    PoolDescriptor **descriptors;  /**< Descriptors, selected by an entry's index. */
};
static_assert(offsetof(PoolOwner, children) == 0x48);
static_assert(offsetof(PoolOwner, descriptors) == 0x58);

}  // namespace misc
