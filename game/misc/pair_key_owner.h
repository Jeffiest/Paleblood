// SPDX-License-Identifier: GPL-2.0-or-later
// An object that matches a two-word pair against its two keys.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** The size of a pair that the match accepts; any other size never matches. */
constexpr int32_t pair_key_size = 0x10;

/**
 *
 * A pair of words, the first and second of which are matched against the owner's keys.
 *
 */
struct KeyPair {
    uint64_t first;  /**< Compared with the owner's first key. */
    uint64_t second; /**< Compared with the owner's second key unless the first word is zero. */
};

/**
 *
 * An object that holds the two keys a pair is matched against, at 0x18 and 0x20.
 *
 */
struct PairKeyOwner {
    uint8_t unknown_0x00[0x18];
    uint64_t first_key;  /**< The first key. */
    uint64_t second_key; /**< The second key. */
};
static_assert(offsetof(PairKeyOwner, first_key) == 0x18 && offsetof(PairKeyOwner, second_key) == 0x20);

/**
 *
 * Reports whether the pair has the pair size and matches the owner's keys.
 *
 * A zero first word matches when the first key is zero too, whatever the second word holds.
 */
inline bool pair_matches(const PairKeyOwner *owner, const KeyPair *pair, int32_t size)
{
    if (size != pair_key_size) return false;
    return pair->first == owner->first_key && (pair->first == 0 || pair->second == owner->second_key);
}

}  // namespace misc
