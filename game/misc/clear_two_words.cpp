// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: clear both 64-bit words of a two-word record.
#include <cstddef>
#include <cstdint>

namespace {

constexpr int word_bytes = 8;

/** A record of two 64-bit words, both cleared together. */
struct ClearableWordPair {
    uint64_t first_0x00;  /**< Cleared to zero. */
    uint64_t second_0x08; /**< Cleared to zero. */
};
static_assert(offsetof(ClearableWordPair, second_0x08) == word_bytes);
static_assert(sizeof(ClearableWordPair) == 2 * word_bytes);

}  // namespace

/**
 *
 * Sets both 64-bit words of the record to zero.
 *
 * The record is written in place and nothing else is touched.
 */
extern "C" void bb_misc_clear_two_words(ClearableWordPair *pair)
{
    pair->second_0x08 = 0;
    pair->first_0x00 = 0;
}
