// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: three 32-bit words, as the source of a copy and as the words of a target record that receives them.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * Three 32-bit words read from a source record, copied into a target record.
 *
 */
struct WordTripleSource {
    uint32_t word_0x00;      /**< Copied to the target's first word. */
    uint32_t word_0x04;      /**< Copied to the target's second word. */
    uint32_t word_0x08;      /**< Copied to the target's third word. */
};
static_assert(offsetof(WordTripleSource, word_0x08) == 0x08);
static_assert(sizeof(WordTripleSource) == 0xc);

/**
 *
 * A target record: three 32-bit words after an 8-byte header that the copy leaves alone.
 *
 */
struct WordTripleTarget {
    uint8_t unknown_0x00[0x08];
    uint32_t word_0x08;      /**< Receives the source's first word, or a call's result. */
    uint32_t word_0x0c;      /**< Receives the source's second word, or a call's result. */
    uint32_t word_0x10;      /**< Receives the source's third word, or a call's result. */
};
static_assert(offsetof(WordTripleTarget, word_0x08) == 0x08);
static_assert(offsetof(WordTripleTarget, word_0x0c) == 0x0c);
static_assert(offsetof(WordTripleTarget, word_0x10) == 0x10);

}  // namespace misc
