// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the 0x60-byte state block an allocated block holder is given when its heap allocation succeeds.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The state block: a link and a counter cleared at its start, a threshold of minus one tenth, and a limit word.
 *
 */
struct AllocatedHolderState {
    void *link_0x00;        /**< Cleared when the state is made. */
    uint32_t count_0x08;    /**< Cleared when the state is made. */
    uint8_t flag_0x0c;      /**< Cleared when the state is made. */
    uint8_t unknown_0x0d[0x03];
    uint64_t word_0x10;     /**< Cleared when the state is made. */
    uint64_t word_0x18;     /**< Cleared when the state is made. */
    float threshold_0x20;   /**< Minus one tenth when the state is made. */
    uint32_t zero_0x24;     /**< Cleared when the state is made. */
    uint32_t limit_0x28;    /**< All ones when the state is made. */
    uint8_t flag_0x2c;      /**< Cleared when the state is made. */
    uint8_t unknown_0x2d[0x03];
    uint64_t word_0x30;     /**< Cleared when the state is made. */
    uint64_t word_0x38;     /**< Cleared when the state is made. */
    uint64_t word_0x40;     /**< Cleared when the state is made. */
    uint64_t word_0x48;     /**< Cleared when the state is made. */
    uint64_t word_0x50;     /**< Cleared when the state is made. */
    uint8_t unknown_0x58[0x08];
};
static_assert(offsetof(AllocatedHolderState, count_0x08) == 0x08 && offsetof(AllocatedHolderState, flag_0x0c) == 0x0c);
static_assert(offsetof(AllocatedHolderState, word_0x10) == 0x10 && offsetof(AllocatedHolderState, threshold_0x20) == 0x20);
static_assert(offsetof(AllocatedHolderState, limit_0x28) == 0x28 && offsetof(AllocatedHolderState, flag_0x2c) == 0x2c);
static_assert(offsetof(AllocatedHolderState, word_0x30) == 0x30 && offsetof(AllocatedHolderState, word_0x50) == 0x50);
static_assert(sizeof(AllocatedHolderState) == 0x60);

}  // namespace misc
