// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"

namespace misc {

/**
 *
 * The capacity a formatted name starts with, which is also the largest one that keeps its text inline.
 *
 */
constexpr uint64_t formatted_name_inline_capacity = 7;

/**
 *
 * The smallest capacity that means the text of a formatted name is on the heap.
 *
 */
constexpr uint64_t formatted_name_heap_capacity = 8;

/**
 *
 * The bytes of a formatted name that hold its characters inline, which is also the size of a heap pointer.
 *
 */
constexpr std::size_t formatted_name_text_bytes = 8;

/**
 *
 * The text of a formatted name: the characters inline while they are short, or the heap block holding them.
 *
 */
union FormattedNameText {
    char inline_text[formatted_name_text_bytes];   /**< Up to seven characters and their terminator, while the text is inline. */
    char *heap_text;       /**< The heap block holding the characters, once the text is on the heap. */
};
static_assert(sizeof(FormattedNameText) == 8);

/**
 *
 * A name a formatter builds in the caller's frame: its text, size, capacity and a flag set before formatting.
 *
 */
struct FormattedName {
    uint8_t unknown_0x00[0x8];
    FormattedNameText text_0x08;
    uint8_t unknown_0x10[0x8];
    uint64_t size_0x18;           /**< Zero before the formatter runs. */
    uint64_t capacity_0x20;       /**< Seven while the text is inline, at least eight once it is on the heap. */
    engine::Allocator *allocator_0x28;  /**< The allocator the heap text is freed through. */
    bool flag_0x30;               /**< Set before the formatter runs. */

    /**
     *
     * Reports whether the text has outgrown its inline buffer and sits on the heap.
     *
     */
    bool on_heap() const { return capacity_0x20 >= formatted_name_heap_capacity; }

    /**
     *
     * Returns the characters of the name, inline or on the heap, whichever holds them.
     *
     */
    char *text() { return on_heap() ? text_0x08.heap_text : text_0x08.inline_text; }
};
static_assert(offsetof(FormattedName, text_0x08) == 0x8 && offsetof(FormattedName, size_0x18) == 0x18);
static_assert(offsetof(FormattedName, capacity_0x20) == 0x20 && offsetof(FormattedName, flag_0x30) == 0x30);

}  // namespace misc
