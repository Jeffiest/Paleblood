// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A static descriptor that names two texts, two handlers and a vtable, and gives the length of its record.
 *
 */
struct TextDescriptor {
    const char *text;          /**< The descriptor's primary text. */
    const char *alt_text;      /**< The descriptor's secondary text. */
    const void *handler;       /**< The first handler routine. */
    const void *alt_handler;   /**< The second handler routine. */
    const void *vtable;        /**< The descriptor's virtual functions. */
    uint64_t length;           /**< The length of the record the descriptor describes. */
};
static_assert(offsetof(TextDescriptor, text) == 0x00);
static_assert(offsetof(TextDescriptor, alt_text) == 0x08);
static_assert(offsetof(TextDescriptor, handler) == 0x10);
static_assert(offsetof(TextDescriptor, alt_handler) == 0x18);
static_assert(offsetof(TextDescriptor, vtable) == 0x20);
static_assert(offsetof(TextDescriptor, length) == 0x28);

}  // namespace misc
