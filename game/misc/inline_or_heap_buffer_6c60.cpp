// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: gives the address of an object's buffer: the inline bytes below a capacity of eight, else the heap pointer.
#include <cstdint>

#include "inline_buffer_holder.h"

namespace {

/** The capacity from which the buffer lives on the heap rather than inline. */
constexpr uint64_t heap_capacity_min = 0x8;

}  // namespace

/**
 *
 * Returns the address of the inline bytes when the capacity is below eight, and otherwise the heap pointer
 * stored in the buffer. The object is not changed.
 *
 */
extern "C" uint64_t bb_misc_inline_or_heap_buffer_6c60(misc::InlineBufferHolder *holder)
{
    if (holder->capacity_0x5198 < heap_capacity_min) {
        return reinterpret_cast<uintptr_t>(holder->buffer_0x5180.inline_bytes);
    }
    return reinterpret_cast<uintptr_t>(holder->buffer_0x5180.heap);
}
