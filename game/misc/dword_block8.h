// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a block of eight four-byte words that a formatter reads one at a time.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A block of eight four-byte words, at offsets 0x00 to 0x1c in steps of four.
 *
 */
struct DwordBlock8 {
    uint32_t word_0x00;                 /**< The word at offset 0x00. */
    uint32_t word_0x04;                 /**< The word at offset 0x04. */
    uint32_t word_0x08;                 /**< The word at offset 0x08. */
    uint32_t word_0x0c;                 /**< The word at offset 0x0c. */
    uint32_t word_0x10;                 /**< The word at offset 0x10. */
    uint32_t word_0x14;                 /**< The word at offset 0x14. */
    uint32_t word_0x18;                 /**< The word at offset 0x18. */
    uint32_t word_0x1c;                 /**< The word at offset 0x1c. */
};
static_assert(offsetof(DwordBlock8, word_0x00) == 0x00 && offsetof(DwordBlock8, word_0x04) == 0x04);
static_assert(offsetof(DwordBlock8, word_0x08) == 0x08 && offsetof(DwordBlock8, word_0x0c) == 0x0c);
static_assert(offsetof(DwordBlock8, word_0x10) == 0x10 && offsetof(DwordBlock8, word_0x14) == 0x14);
static_assert(offsetof(DwordBlock8, word_0x18) == 0x18 && offsetof(DwordBlock8, word_0x1c) == 0x1c);
static_assert(sizeof(DwordBlock8) == 0x20);

}  // namespace misc
