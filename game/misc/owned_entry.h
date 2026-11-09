// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: one entry of the owned state's entry array.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * One 0x120-byte entry of the entry array; the array is indexed by the lookup's result.
 *
 */
struct OwnedEntry {
    uint8_t unknown_0x0000[0x120];
};
static_assert(sizeof(OwnedEntry) == 0x120);

}  // namespace misc
