// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an owner that keeps a 32-bit record tag at offset 0x78.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The owner whose record tag is cleared when its vtable slot runs; the tag sits after the owner's first 0x78 bytes.
 *
 */
struct RecordTagOwner {
    uint8_t unknown_0x0000[0x78];
    int32_t tag;                   /**< The record tag the owner keeps. */
};
static_assert(offsetof(RecordTagOwner, tag) == 0x78);

}  // namespace misc
