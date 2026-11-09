// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a text object that is shared through a reference count, which the last reference releases.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A shared text object: its 32-bit reference count at +0x8, which the last reference releases.
 *
 */
struct ReferencedText {
    uint8_t unknown_0x0000[0x08];
    int32_t references; /**< The number of references held. */
};
static_assert(offsetof(ReferencedText, references) == 0x08);

}  // namespace misc
