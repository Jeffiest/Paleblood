// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * An object whose kind word selects which of two target functions handles a call.
 *
 */
struct DispatchKindObject {
    uint8_t unknown_0x00[0x18];
    uint32_t kind_0x18; /**< Kind word: selects the target, or none of them. */
};
static_assert(offsetof(DispatchKindObject, kind_0x18) == 0x18);

}  // namespace misc
