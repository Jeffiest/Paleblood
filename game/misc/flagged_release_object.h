// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that is given the release vtable, and whose flagged payload is freed before the release.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * An object whose first word is its vtable, a flag byte at +0x09 and a payload pointer at +0x20.
 *
 */
struct FlaggedReleaseObject {
    const void *vtable;                   /**< The object's vtable, set before the flag is read. */
    uint8_t kind_0x08;                    /**< The kind byte the object is initialized with. */
    uint8_t flag_0x09;                    /**< Any nonzero value frees the payload before the release. */
    uint8_t unknown_0x0a[0x06];
    uint64_t word_0x10;                   /**< The payload word, which is the payload's address once it is set. */
    uint64_t size_0x18;                   /**< The size the payload was requested with. */
    void *payload_0x20;                   /**< The payload freed through the shared allocator when the flag is set. */
    uint64_t word_0x28;                   /**< Cleared when the object is initialized. */
};
static_assert(offsetof(FlaggedReleaseObject, vtable) == 0x00);
static_assert(offsetof(FlaggedReleaseObject, kind_0x08) == 0x08);
static_assert(offsetof(FlaggedReleaseObject, flag_0x09) == 0x09);
static_assert(offsetof(FlaggedReleaseObject, word_0x10) == 0x10);
static_assert(offsetof(FlaggedReleaseObject, size_0x18) == 0x18);
static_assert(offsetof(FlaggedReleaseObject, payload_0x20) == 0x20);
static_assert(offsetof(FlaggedReleaseObject, word_0x28) == 0x28);

}  // namespace misc
