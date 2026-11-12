// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** Number of 64-bit words in a QuadWordRecord. */
constexpr int quad_word_count = 4;

/**
 *
 * A record of four 64-bit words that some callers clear together.
 *
 */
struct QuadWordRecord {
    uint64_t words[quad_word_count]; /**< Cleared to zero; the words carry no further meaning here. */
};
static_assert(sizeof(QuadWordRecord) == quad_word_count * sizeof(uint64_t));

}  // namespace misc
