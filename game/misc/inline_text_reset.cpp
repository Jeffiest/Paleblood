// SPDX-License-Identifier: GPL-2.0-or-later
#include "inline_text.h"

#include <cstdint>

/**
 *
 * Empties a text object: sets its vtable, frees its heap storage when it has one, and makes it an
 * inline text again with no characters.
 *
 * The heap storage is freed through the object's allocator. Only the low two bytes of the inline
 * area are cleared, as the original does, and the upper bytes of that area are left as they were.
 */
extern "C" void bb_misc_inline_text_reset(misc::InlineText *text)
{
    text->vtable = misc::inline_text_vtable.address();
    if (text->capacity >= misc::inline_text_heap_capacity) {
        text->allocator->free(text->heap_data);
    }
    text->capacity = misc::inline_text_inline_capacity;
    text->length = 0;
    text->inline_head = 0;
}
