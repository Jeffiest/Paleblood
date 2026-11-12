// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: takes a new buffer of the requested size from the view's allocator and copies the source
// into it. The view keeps the buffer and, when one was taken, the size as its capacity.
#include <cstdint>

#include "capped_buffer_view.h"
#include "runtime/original.h"

namespace {

using misc::CappedBufferAllocator;
using misc::CappedBufferView;

RT_ORIGINAL(0x02fbe578, copy_bytes, void *(void *destination, const void *source, uint64_t count));

/** The flags the allocator is asked for: none. */
constexpr uint64_t no_allocation_flags = 0;

}  // namespace

/**
 *
 * Allocates a buffer of the size from the view's allocator and keeps it in the view. When the buffer
 * was taken, the size becomes the view's capacity and the source is copied into the buffer.
 *
 */
extern "C" void bb_misc_allocate_capped_buffer_copy(CappedBufferView *view, const void *source, uint32_t size)
{
    const uint64_t size_word = size;
    CappedBufferAllocator *allocator = view->allocator_0x38;
    void *buffer = allocator->vtable->allocate(allocator, size_word, no_allocation_flags);
    view->buffer_0xd8 = buffer;
    if (buffer != nullptr) {
        view->capacity_0xe0 = size;
        copy_bytes(buffer, source, size_word);
    }
}
