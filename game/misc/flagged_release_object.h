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
    uint8_t unknown_0x08;
    uint8_t flag_0x09;                    /**< Any nonzero value frees the payload before the release. */
    uint8_t unknown_0x0a[0x16];
    void *payload_0x20;                   /**< The payload freed through the shared allocator when the flag is set. */
};
static_assert(offsetof(FlaggedReleaseObject, vtable) == 0x00);
static_assert(offsetof(FlaggedReleaseObject, flag_0x09) == 0x09);
static_assert(offsetof(FlaggedReleaseObject, payload_0x20) == 0x20);

}  // namespace misc
