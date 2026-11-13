// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that holds one inner object pointer at offset 0x20.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * An object whose inner object pointer sits at 0x20; the forwarding routines act on that inner object.
 *
 */
struct InnerHolder {
    uint8_t unknown_0x0000[0x20];
    void *inner;     /**< The inner object the forwarding routines act on; may be null. */
};
static_assert(offsetof(InnerHolder, inner) == 0x20);

}  // namespace misc
