// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a text object with its vtable, up to 7 bytes stored inline and longer text on the heap.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "runtime/original.h"

namespace misc {

/** The class vtable of the text object, pointed at the address point. */
RT_GLOBAL(0x056c70f0, inline_text_vtable, const uint8_t);

/** Capacity from which the text lives on the heap rather than inline. */
constexpr uint64_t inline_text_heap_capacity = 8;

/** Capacity of a text object that holds its characters inline. */
constexpr uint64_t inline_text_inline_capacity = 7;

/**
 *
 * A text object: its vtable, then the heap pointer or the inline characters, the length, the
 * capacity and the allocator that frees the heap storage.
 *
 */
struct InlineText {
    const uint8_t *vtable;        /**< The class vtable, stored as is. */
    uint8_t unknown_0x08[0x10];
    union {
        void *heap_data;          /**< Heap storage, used when the capacity is 8 or more. */
        uint16_t inline_head;     /**< The first two inline bytes, cleared when the text is reset. */
    };
    uint8_t unknown_0x20[0x08];
    uint64_t length;              /**< Number of characters held. */
    uint64_t capacity;            /**< Capacity of the storage; 7 when the text is inline. */
    engine::Allocator *allocator; /**< Allocator that frees the heap storage. */
};
static_assert(offsetof(InlineText, heap_data) == 0x18);
static_assert(offsetof(InlineText, length) == 0x28);
static_assert(offsetof(InlineText, capacity) == 0x30);
static_assert(offsetof(InlineText, allocator) == 0x38);

}  // namespace misc
