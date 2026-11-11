// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a text argument handed to a builder: a kind word, then the text's address and its length.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A text argument: the kind word at 0x00, the text's first byte at 0x08 and the text's length at 0x10.
 *
 */
struct TextArgument {
    uint32_t kind_0x00;                 /**< The kind of argument; text arguments carry the text kind. */
    uint8_t unknown_0x04[0x04];
    const char *text_0x08;              /**< The first byte of the text. */
    uint64_t length_0x10;               /**< The number of bytes of text. */
};
static_assert(offsetof(TextArgument, kind_0x00) == 0x00);
static_assert(offsetof(TextArgument, text_0x08) == 0x08 && offsetof(TextArgument, length_0x10) == 0x10);
static_assert(sizeof(TextArgument) == 0x18);

}  // namespace misc
