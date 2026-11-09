// SPDX-License-Identifier: GPL-2.0-or-later
#include "inline_text.h"

#include <cstdint>

namespace {

/** The library routine that releases the object's storage; its result is the routine's result. */
RT_ORIGINAL(0x02fbe588, release_object, uint64_t(void *object));

}  // namespace

/**
 *
 * Destroys a text object: sets its vtable, frees its heap storage when it has one, then hands the
 * object itself to the library release routine and returns what that routine returns.
 *
 * The heap storage is freed through the object's allocator, as in the reset routine.
 */
extern "C" uint64_t bb_misc_inline_text_destroy(misc::InlineText *text)
{
    text->vtable = misc::inline_text_vtable.address();
    if (text->capacity >= misc::inline_text_heap_capacity) {
        text->allocator->free(text->heap_data);
    }
    return release_object(text);
}
