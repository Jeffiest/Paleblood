// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a block of four bytes that a formatter reads one at a time.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A block of four bytes, at offsets 0x00 to 0x03.
 *
 */
struct ByteBlock4 {
    uint8_t byte_0x00;                  /**< The byte at offset 0x00. */
    uint8_t byte_0x01;                  /**< The byte at offset 0x01. */
    uint8_t byte_0x02;                  /**< The byte at offset 0x02. */
    uint8_t byte_0x03;                  /**< The byte at offset 0x03. */
};
static_assert(offsetof(ByteBlock4, byte_0x00) == 0x00 && offsetof(ByteBlock4, byte_0x01) == 0x01);
static_assert(offsetof(ByteBlock4, byte_0x02) == 0x02 && offsetof(ByteBlock4, byte_0x03) == 0x03);
static_assert(sizeof(ByteBlock4) == 0x04);

}  // namespace misc
