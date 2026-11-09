// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the result a lookup writes: the requested id and the entry it found, or null.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A lookup result: the requested id at +0x0 (set to minus one before the lookup) and the entry at +0x8.
 *
 */
struct LookupResult {
    int32_t requested_0x00;
    uint8_t unknown_0x04[0x4];
    void *entry_0x08; /**< The entry the lookup found, or null. */
};
static_assert(offsetof(LookupResult, entry_0x08) == 0x8);

}  // namespace misc
