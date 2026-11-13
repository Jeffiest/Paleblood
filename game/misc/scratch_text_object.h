// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a text object built from a scratch record, which keeps the record's allocator and flag.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"

namespace misc {

/**
 *
 * The text object: a short word, a count and a capacity, then the allocator and flag taken from its scratch record.
 *
 */
struct ScratchTextObject {
    uint8_t unknown_0x0000[0x08];
    uint16_t short_word;           /**< Cleared when the object is built. */
    uint8_t unknown_0x000a[0x0e];
    uint64_t count;                /**< Cleared when the object is built. */
    uint64_t capacity;             /**< The small capacity the object starts with. */
    engine::Allocator *allocator;  /**< The allocator the record's block came from. */
    uint8_t flag;                  /**< The flag byte the record carried. */
};
static_assert(offsetof(ScratchTextObject, short_word) == 0x08);
static_assert(offsetof(ScratchTextObject, count) == 0x18);
static_assert(offsetof(ScratchTextObject, capacity) == 0x20);
static_assert(offsetof(ScratchTextObject, allocator) == 0x28);
static_assert(offsetof(ScratchTextObject, flag) == 0x30);

}  // namespace misc
