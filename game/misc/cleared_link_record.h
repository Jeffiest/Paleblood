// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a record with its virtual table first and four link words at its end, cleared by its initializer.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A record whose initializer stores its virtual table and clears its four trailing link words.
 *
 */
struct ClearedLinkRecord {
    const void *vtable;             /**< Virtual table of the record, set by the initializer. */
    uint8_t unknown_0x0008[0xa8];
    uint64_t link_a;                /**< Link word, cleared. */
    uint64_t link_b;                /**< Link word, cleared. */
    uint64_t link_c;                /**< Link word, cleared. */
    uint64_t link_d;                /**< Link word, cleared. */
};
static_assert(offsetof(ClearedLinkRecord, vtable) == 0x00);
static_assert(offsetof(ClearedLinkRecord, link_a) == 0xb0);
static_assert(offsetof(ClearedLinkRecord, link_b) == 0xb8);
static_assert(offsetof(ClearedLinkRecord, link_c) == 0xc0);
static_assert(offsetof(ClearedLinkRecord, link_d) == 0xc8);
static_assert(sizeof(ClearedLinkRecord) == 0xd0);

}  // namespace misc
