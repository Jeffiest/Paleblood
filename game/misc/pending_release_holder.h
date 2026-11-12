// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object holding one pending handle that is released through the release context once it is set.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * An object whose pending handle, at offset 0x20, is released and then cleared by the release routine.
 *
 */
struct PendingReleaseHolder {
    uint8_t unknown_0x0000[0x20];
    uint64_t pending_handle;      /**< Handle waiting to be released; zero when nothing is pending. */
};
static_assert(offsetof(PendingReleaseHolder, pending_handle) == 0x20);

}  // namespace misc
