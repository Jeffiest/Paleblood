// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "formatted_name.h"

namespace misc {

/**
 *
 * A diagnostic text: its characters inline or on the heap, then their count and the capacity that says which.
 *
 */
struct DiagnosticText {
    FormattedNameText text_0x00;     /**< The characters inline, or the heap block once the capacity is eight or more. */
    uint64_t size_0x08;              /**< The number of characters. */
    uint8_t unknown_0x10[0x8];       /**< Not read by the diagnostic line. */
    uint64_t capacity_0x18;          /**< Seven while the text is inline, at least eight once it is on the heap. */

    /**
     *
     * Reports whether the text has outgrown its inline buffer and sits on the heap.
     *
     */
    bool on_heap() const { return capacity_0x18 >= formatted_name_heap_capacity; }

    /**
     *
     * Returns the characters of the text, inline or on the heap, whichever holds them.
     *
     */
    const char *text() const { return on_heap() ? text_0x00.heap_text : text_0x00.inline_text; }
};
static_assert(sizeof(DiagnosticText) == 0x20);

}  // namespace misc
