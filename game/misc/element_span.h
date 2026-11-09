// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a run of entries described by the address of its first entry and its entry count.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A run of entries: the first entry's address at +0x28 and the number of entries at +0x30.
 *
 */
struct ElementSpan {
    uint8_t unknown_0x00[0x28];
    uint64_t first_entry;      /**< The address of the first entry of the run. */
    uint32_t entry_count;      /**< The number of entries in the run. */
};
static_assert(offsetof(ElementSpan, first_entry) == 0x28);
static_assert(offsetof(ElementSpan, entry_count) == 0x30);

}  // namespace misc
