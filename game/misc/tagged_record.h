// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a record that carries a vtable pointer, a zeroed body and one tag word.
#pragma once

#include <cstddef>
#include <cstdint>

/**
 *
 * The record handed out by the tagged-record initializers: a vtable pointer, a body that starts
 * zeroed, and the tag word stored last.
 *
 * The body spans from +0x08 to +0x78 and is cleared word by word by the initializers.
 */
struct TaggedRecord {
    static constexpr auto body_bytes = 0x70;
    const void *vtable;               /**< Vtable pointer, set to the record's static table. */
    uint8_t unknown_0x0008[body_bytes]; /**< Zeroed by the initializer. */
    uint64_t tag_0x0078;              /**< The tag word passed in by the caller. */
};
static_assert(offsetof(TaggedRecord, unknown_0x0008) == 0x08);
static_assert(offsetof(TaggedRecord, tag_0x0078) == 0x78);
static_assert(sizeof(TaggedRecord) == 0x80);
