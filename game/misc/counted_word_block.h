// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a block of five counted word objects behind its own virtual table, with a kind word.
#pragma once

#include <cstddef>
#include <cstdint>

#include "counted_word_object.h"
#include "runtime/original.h"

namespace misc {

/** The virtual table a counted word block is built with, in read-only data. */
RT_GLOBAL(0x05799830, counted_word_block_vtable, const uint8_t);

/** The number of counted word objects a block holds. */
constexpr uint32_t counted_word_block_slot_count = 5;

/** The kind a freshly built block records. */
constexpr uint32_t counted_word_block_kind = 1;

/**
 *
 * A block that holds several counted word objects in its slots, with the virtual table it was built with and a kind.
 *
 * The four bytes after the kind are not written by the builder and are left as they are.
 *
 */
struct CountedWordBlock {
    const void *vtable_0x00;                                        /**< The virtual table the block was built with. */
    uint32_t kind;                                                  /**< The kind, set to one when built. */
    uint8_t unknown_0x000c[4];                                      /**< Padding the builder does not write. */
    CountedWordObject slots[counted_word_block_slot_count];          /**< The counted word objects, from offset 0x10. */
};
static_assert(offsetof(CountedWordBlock, vtable_0x00) == 0x0 && offsetof(CountedWordBlock, kind) == 0x8);
static_assert(offsetof(CountedWordBlock, slots) == 0x10);
static_assert(sizeof(CountedWordBlock) == 0x60);

/**
 *
 * The virtual table of a counted word object, whose first slot takes the object and the source it is applied from.
 *
 */
struct CountedWordObjectVtable {
    uint64_t (*apply_0x00)(CountedWordObject *object, const CountedWordSource *source); /**< Slot 0x00: applies the source. */
};
static_assert(offsetof(CountedWordObjectVtable, apply_0x00) == 0x0);

}  // namespace misc
