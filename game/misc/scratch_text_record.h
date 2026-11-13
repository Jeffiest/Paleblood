// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the scratch text record a routine fills on its stack before copying it into a text object.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"

namespace misc {

/**
 *
 * The scratch record: the block that holds the text (freed through the allocator when it is large), the
 * record's capacity, the allocator, and a flag byte the text object keeps.
 *
 */
struct ScratchTextRecord {
    uint8_t unknown_0x0000[0x08];
    void *data;                    /**< The block holding the text. */
    uint8_t unknown_0x0010[0x08];
    uint8_t unknown_0x0018[0x08];
    uint64_t capacity;             /**< The capacity of the block; a block of eight bytes or more is heap-held. */
    engine::Allocator *allocator;  /**< The allocator the block came from. */
    uint8_t flag;                  /**< A flag byte the text object takes over. */
    uint8_t unknown_0x0031[0x07];
};
static_assert(offsetof(ScratchTextRecord, data) == 0x08);
static_assert(offsetof(ScratchTextRecord, capacity) == 0x20);
static_assert(offsetof(ScratchTextRecord, allocator) == 0x28);
static_assert(offsetof(ScratchTextRecord, flag) == 0x30);

}  // namespace misc
