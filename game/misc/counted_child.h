// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a reference-counted child with a weak count at offset 0x30, released by its holder.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/ref_object.h"

namespace misc {

/**
 *
 * A reference-counted child: its strong count is the engine's reference count, and its weak count sits at +0x30.
 *
 */
struct CountedChild {
    engine::RefObject strong;      /**< The strong count: its vtable and reference count. */
    uint8_t unknown_0x0010[0x20];  /**< The weak block that the weak release works on, starting at +0x10. */
    int32_t weak;                  /**< The weak count, dropped before the strong count. */
};
static_assert(offsetof(CountedChild, unknown_0x0010) == 0x10);
static_assert(offsetof(CountedChild, weak) == 0x30);

}  // namespace misc
