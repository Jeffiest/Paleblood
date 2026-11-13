// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a path text: its signed length, and its characters from the twelfth byte on.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** The low two bits of a path reference are a tag, not part of its address. */
constexpr uint64_t path_reference_tag_mask = 0x3;

/**
 *
 * A path text: the signed count of its characters, then the characters themselves. The count is read as a
 * signed 32-bit value and the first character sits at offset 0x0c.
 *
 */
struct PathText {
    int32_t length;                 /**< The number of characters; zero or less means empty. */
    uint8_t unknown_0x0004[0x8];
    uint8_t text[1];                /**< The characters, the first at offset 0x0c; more follow past this byte. */
};
static_assert(offsetof(PathText, text) == 0x0c);

}  // namespace misc
