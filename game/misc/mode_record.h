// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a record that supplies a value and a pointer to a 32-bit mode.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A record holding the value that a forwarding routine passes on, and a pointer to its 32-bit mode.
 *
 */
struct ModeRecord {
    uint8_t unknown_0x00[0x18];
    uint64_t value_0x18;                  /**< The value passed on as the second argument. */
    const uint32_t *mode_0x20;            /**< Points to the 32-bit mode passed on as the third argument. */
};
static_assert(offsetof(ModeRecord, value_0x18) == 0x18);
static_assert(offsetof(ModeRecord, mode_0x20) == 0x20);

}  // namespace misc
