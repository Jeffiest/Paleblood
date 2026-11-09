// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct RefItem;

/**
 *
 * The virtual function a reference item provides: destroys it once its count reaches zero.
 *
 */
struct RefItemVtable {
    uint8_t unknown_0x00[0x20];
    void (*destroy)(RefItem *item); /**< Slot 0x20: destroys the item. */
};
static_assert(offsetof(RefItemVtable, destroy) == 0x20);

/** High half of RefItem::refcount_word: set when the item is counted. */
constexpr uint32_t ref_flag_mask = 0xffff0000;
/** The smallest word of a counted item: its high half is set. */
constexpr uint32_t ref_counted_threshold = 0x10000;

/**
 *
 * A reference-counted item: a count in the low half of a word, and a flag in the high half.
 *
 */
struct RefBranch;
struct RefItem {
    const RefItemVtable *vtable; /**< The item's virtual functions. */
    uint32_t refcount_word;      /**< Low 16 bits: references. High 16 bits: the counted flag. */
    uint8_t unknown_0x0c[0x14];
    RefBranch **branches;        /**< Branches of the item, each with its leaves. */
    int32_t branch_count;        /**< Number of branches. */
};
static_assert(offsetof(RefItem, refcount_word) == 0x8);
static_assert(offsetof(RefItem, branches) == 0x20);
static_assert(offsetof(RefItem, branch_count) == 0x28);

/**
 *
 * Adds one to the low half of an item's word with a compare-and-exchange loop; the flag is kept.
 *
 * The low half wraps on its own, so a count of 0xffff becomes 0 and the flag is still set.
 */
inline void increment_ref_count(uint32_t *word)
{
    uint32_t observed = *word;
    uint32_t desired;
    do {
        desired = (observed & ref_flag_mask) | static_cast<uint16_t>(observed + 1);
    } while (!__atomic_compare_exchange_n(word, &observed, desired, false, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST));
}

/**
 *
 * Subtracts one from the low half of an item's word with a compare-and-exchange loop and returns
 * the new low half; the flag is kept.
 *
 * A count of 0 wraps to 0xffff, so only a count that reaches exactly zero reads as zero.
 */
inline uint16_t decrement_ref_count(uint32_t *word)
{
    uint32_t observed = *word;
    uint32_t desired;
    do {
        desired = (observed & ref_flag_mask) | static_cast<uint16_t>(observed - 1);
    } while (!__atomic_compare_exchange_n(word, &observed, desired, false, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST));
    return static_cast<uint16_t>(desired);
}

}  // namespace misc
