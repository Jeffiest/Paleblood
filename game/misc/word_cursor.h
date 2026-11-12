// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a word cursor, the word it was started from, and the block of items it reads its values from.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A block of items a word cursor reads: two header values, then the items themselves from +0x20.
 *
 */
struct WordCursorBlock {
    uint8_t unknown_0x00[0x18];
    uint32_t value_0x18;        /**< The first header value, read by the first getter. */
    uint32_t value_0x1c;        /**< The second header value, read by the second getter. */
    uint32_t items_0x20[1];     /**< The items; an index counts from the first one at +0x20. */
};
static_assert(offsetof(WordCursorBlock, value_0x18) == 0x18 && offsetof(WordCursorBlock, value_0x1c) == 0x1c);
static_assert(offsetof(WordCursorBlock, items_0x20) == 0x20);

/**
 *
 * A word cursor: the word it was started from, the block it reads, and the index it is at within that block.
 *
 */
struct WordCursor {
    uint32_t word_0x00;             /**< The word the cursor was started from. */
    uint8_t unknown_0x04[0x4];
    WordCursorBlock *block_0x08;    /**< The block the cursor reads, or null when it has none. */
    int32_t index_0x10;             /**< The index within the block; minus one when none is set. */
};
static_assert(offsetof(WordCursor, word_0x00) == 0x0 && offsetof(WordCursor, block_0x08) == 0x8);
static_assert(offsetof(WordCursor, index_0x10) == 0x10);

/**
 *
 * The kind object a word cursor source names: its byte at +0x8c holds the two flag bits a block keeps.
 *
 */
struct WordCursorSourceKind {
    uint8_t unknown_0x00[0x8c];
    uint8_t bits_0x8c;             /**< Bit zero and bit one: the flag bits, stored swapped in the block. */
};
static_assert(offsetof(WordCursorSourceKind, bits_0x8c) == 0x8c);

/**
 *
 * One entry of a word cursor source: a value, and an item pointer that says whether the value is present.
 *
 */
struct WordCursorSourceEntry {
    uint32_t value_0x00;           /**< The value stored in the block when the item is present. */
    uint8_t unknown_0x04[0x4];
    const void *item_0x08;         /**< The item; null when the entry is absent. */
};
static_assert(sizeof(WordCursorSourceEntry) == 0x10);

/** The number of entries a word cursor source holds, one per item of its block. */
constexpr size_t kWordCursorSourceEntryCount = 6;

/**
 *
 * The source a word cursor block is filled from: a kind object, a value and six entries.
 *
 */
struct WordCursorSource {
    uint8_t unknown_0x00[0x8];
    const WordCursorSourceKind *kind_0x08; /**< The kind object whose flag bits are stored, or null for none. */
    uint32_t value_0x10;                   /**< The second header value of the block. */
    uint8_t unknown_0x14[0x4];
    WordCursorSourceEntry entries_0x18[kWordCursorSourceEntryCount]; /**< One entry per item of the block. */
};
static_assert(offsetof(WordCursorSource, kind_0x08) == 0x8 && offsetof(WordCursorSource, value_0x10) == 0x10);
static_assert(offsetof(WordCursorSource, entries_0x18) == 0x18);

}  // namespace misc
