// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object whose two tail words are written by its setters.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The two tail words of an object: a value at +0x38 and a second word at +0x40.
 *
 */
struct TailSlots {
    uint8_t unknown_0x00[0x38];
    uint64_t value_0x38; /**< Value stored by the setter that takes it. */
    uint64_t value_0x40; /**< Second tail word, stored as given or cleared. */
};
static_assert(offsetof(TailSlots, value_0x38) == 0x38);
static_assert(offsetof(TailSlots, value_0x40) == 0x40);

}  // namespace misc
