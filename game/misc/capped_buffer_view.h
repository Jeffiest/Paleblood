// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that refers to a buffer and the capacity the buffer may be copied up to.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The buffer view: a pointer to the bytes at +0xd8 and the capacity at +0xe0 that limits a copy.
 *
 */
struct CappedBufferView {
    uint8_t unknown_0x0000[0xd8];
    const void *buffer_0xd8;            /**< The bytes copied out, or null when there are none. */
    uint32_t capacity_0xe0;             /**< The most bytes a copy takes from the buffer. */
};
static_assert(offsetof(CappedBufferView, buffer_0xd8) == 0xd8);
static_assert(offsetof(CappedBufferView, capacity_0xe0) == 0xe0);

}  // namespace misc
