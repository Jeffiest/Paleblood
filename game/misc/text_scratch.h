// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a text copy made for one lookup, with inline characters below eight and heap storage from eight on.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"

namespace misc {

/** Length from which the copied characters live on the heap rather than inline. */
constexpr uint64_t text_scratch_heap_capacity = 8;

/** Bytes of the inline storage: the characters sit from offset 0x08 up to the length at 0x20. */
constexpr uint64_t text_scratch_inline_bytes = 0x18;

/**
 *
 * A copied text: the heap pointer or the inline characters at offset 0x08, the length, and the
 * allocator that frees the heap storage.
 *
 */
struct TextScratch {
    uint8_t unknown_0x00[0x08];
    union {
        void *heap_data;          /**< Heap storage, used when the length is 8 or more. */
        uint8_t inline_data[text_scratch_inline_bytes]; /**< Inline characters, used below a length of 8. */
    };
    uint64_t length;              /**< Number of characters copied. */
    engine::Allocator *allocator; /**< Allocator that frees the heap storage. */
};
static_assert(offsetof(TextScratch, heap_data) == 0x08);
static_assert(offsetof(TextScratch, length) == 0x20);
static_assert(offsetof(TextScratch, allocator) == 0x28);

}  // namespace misc
