// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object with a buffer that is stored inline below a capacity and on the heap from it on.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** The number of inline bytes the buffer keeps below the heap capacity. */
constexpr uint64_t inline_buffer_bytes = 0x10;

/**
 *
 * The buffer at +0x5180: a heap pointer when the capacity is eight or more, else the inline bytes.
 *
 */
union InlineOrHeapBuffer {
    void *heap;                                 /**< The heap buffer, used from the capacity of eight on. */
    uint8_t inline_bytes[inline_buffer_bytes];  /**< The inline buffer, used below the capacity of eight. */
};

/**
 *
 * An object that holds its buffer at +0x5180 and the capacity that decides between inline and heap at +0x5198.
 *
 */
struct InlineBufferHolder {
    uint8_t unknown_0x0000[0x5180];
    InlineOrHeapBuffer buffer_0x5180; /**< The inline or heap buffer. */
    uint8_t unknown_0x5190[0x8];
    uint64_t capacity_0x5198;         /**< The buffer's capacity, compared with eight. */
};
static_assert(offsetof(InlineBufferHolder, buffer_0x5180) == 0x5180);
static_assert(offsetof(InlineBufferHolder, capacity_0x5198) == 0x5198);

}  // namespace misc
