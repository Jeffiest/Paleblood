// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

// Characters a text slot holds inline, the length of its inline buffer including the terminator.
constexpr uint64_t text_block_inline_capacity = 8;

/**
 *
 * One text slot of a text block: inline characters or a heap buffer, the length and the capacity,
 * and a flag byte whose 0x02 bit marks a heap buffer the slot owns.
 *
 */
struct TextBlockSlot {
    union {
        char16_t inline_text[text_block_inline_capacity]; /**< The characters while they fit inline. */
        char16_t *heap;                                   /**< The characters once they do not. */
    };
    uint64_t size;                                        /**< At 0x10: the length in characters. */
    uint64_t capacity;                                    /**< At 0x18: the room; 8 or more means heap. */
    uint8_t unknown_0x20[0x81];
    uint8_t flags;                                        /**< At 0xa1: bit 0x02 marks an owned heap buffer. */
    uint8_t unknown_0xa2[0x0e];
};
static_assert(offsetof(TextBlockSlot, size) == 0x10);
static_assert(offsetof(TextBlockSlot, capacity) == 0x18);
static_assert(offsetof(TextBlockSlot, flags) == 0xa1);
static_assert(sizeof(TextBlockSlot) == 0xb0);

/**
 *
 * A text block: a vtable and three text slots, the first at 0x20, the second at 0xd0 and the third
 * at 0x180.
 *
 */
constexpr uint64_t text_block_slot_count = 3;
constexpr uint64_t text_block_first_slot = 0;
constexpr uint64_t text_block_second_slot = 1;
constexpr uint64_t text_block_third_slot = 2;

struct TextBlockRecord {
    uintptr_t vtable;                               /**< At 0x00: the address of the block's vtable. */
    uint8_t unknown_0x08[0x18];
    TextBlockSlot slots[text_block_slot_count];     /**< The three text slots. */
};
static_assert(offsetof(TextBlockRecord, vtable) == 0x00);
static_assert(offsetof(TextBlockRecord, slots) == 0x20);

}  // namespace misc
