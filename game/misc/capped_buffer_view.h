// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that refers to a buffer and the capacity the buffer may be copied up to, and the
// allocator a new buffer is taken from.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct CappedBufferAllocator;

/**
 *
 * The virtual functions of the allocator: slot 0x50 allocates a block of a size with flags.
 *
 */
struct CappedBufferAllocatorVtable {
    uint8_t unknown_0x0000[0x50];
    void *(*allocate)(CappedBufferAllocator *allocator, uint64_t size, uint64_t flags); /**< Slot at 0x50. */
};
static_assert(offsetof(CappedBufferAllocatorVtable, allocate) == 0x50);

struct CappedBufferAllocator {
    const CappedBufferAllocatorVtable *vtable; /**< Dispatch table for the allocator's methods. */
};

/**
 *
 * The buffer view: an allocator at +0x38, a pointer to the bytes at +0xd8 and the capacity at +0xe0
 * that limits a copy.
 *
 */
struct CappedBufferView {
    uint8_t unknown_0x0000[0x38];
    CappedBufferAllocator *allocator_0x38; /**< The allocator a new buffer is taken from. */
    uint8_t unknown_0x0040[0x98];
    const void *buffer_0xd8;            /**< The bytes copied out, or null when there are none. */
    uint32_t capacity_0xe0;             /**< The most bytes a copy takes from the buffer. */
};
static_assert(offsetof(CappedBufferView, allocator_0x38) == 0x38);
static_assert(offsetof(CappedBufferView, buffer_0xd8) == 0xd8);
static_assert(offsetof(CappedBufferView, capacity_0xe0) == 0xe0);

}  // namespace misc
