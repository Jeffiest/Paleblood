// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies the object's buffer into a destination, limited to the smaller of the requested count
// and the object's capacity. The number copied is the result.
#include <cstdint>

#include "capped_buffer_view.h"
#include "runtime/original.h"

namespace {

using misc::CappedBufferView;

RT_ORIGINAL(0x02fbe578, copy_bytes, void *(void *destination, const void *source, uint64_t count));

}  // namespace

/**
 *
 * Copies the object's buffer into the destination when there is one and both the buffer and the
 * destination exist, limited to the smaller of the requested count and the object's capacity. The
 * result is that limited count, which is the capacity when nothing is copied.
 *
 */
extern "C" uint32_t bb_misc_copy_capped_buffer(CappedBufferView *view, uint8_t *destination, uint32_t count)
{
    uint32_t copied = view->capacity_0xe0;
    if (destination != nullptr) {
        if (copied > count) copied = count;
        if (view->buffer_0xd8 != nullptr) {
            copy_bytes(destination, view->buffer_0xd8, copied);
        }
    }
    return copied;
}
