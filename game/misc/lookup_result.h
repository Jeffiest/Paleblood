// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the result of a key lookup, which names an entry index.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A key lookup's result: the index of the entry the key maps to.
 *
 */
struct LookupResult {
    uint8_t unknown_0x0000[0x8];
    uint32_t index_0x0008;       /**< Index of the entry in the array. */
};
static_assert(offsetof(LookupResult, index_0x0008) == 0x8);

}  // namespace misc
