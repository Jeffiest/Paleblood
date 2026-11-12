// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A record that keeps a copy of its source word and a flag that is cleared by every refresh.
 *
 */
struct SlotRefreshRecord {
    uint8_t unknown_0x0000[0xd0];
    uint64_t source;                /**< The word that the refresh copies. */
    uint64_t copy;                  /**< The copy of the source word, taken by the refresh. */
    uint8_t unknown_0x00e0[0x40];
    uint8_t flag;                   /**< Cleared by every refresh. */
};
static_assert(offsetof(SlotRefreshRecord, source) == 0xd0);
static_assert(offsetof(SlotRefreshRecord, copy) == 0xd8);
static_assert(offsetof(SlotRefreshRecord, flag) == 0x120);

}  // namespace misc
