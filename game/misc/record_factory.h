// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct RecordFactory;

/**
 *
 * The factory's vtable. Its allocation slot at 0x58 hands out a block of the requested size and alignment.
 *
 */
struct RecordFactoryVtable {
    uint8_t unknown_0x0000[0x58];                          /**< Slots before the allocation slot. */
    void *(*allocate)(RecordFactory *factory, uint32_t size, uint32_t alignment); /**< Allocation slot at 0x58. */
};
static_assert(offsetof(RecordFactoryVtable, allocate) == 0x58);

/**
 *
 * An object that allocates records; its vtable is first.
 *
 */
struct RecordFactory {
    const RecordFactoryVtable *vtable; /**< The factory's vtable, set when it is built. */
};

}  // namespace misc
