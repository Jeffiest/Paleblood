// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object with a vtable and a 32-bit value at offset 0xc, which its thunks pass on.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The object: its vtable address point is stored at the start, and its 32-bit value sits at offset 0xc.
 *
 */
struct ValueTailObject {
    const void *vtable;            /**< The object's vtable address point. */
    uint8_t unknown_0x0008[0x4];
    uint32_t value;                /**< The value the thunk passes on. */
};
static_assert(offsetof(ValueTailObject, vtable) == 0x0);
static_assert(offsetof(ValueTailObject, value) == 0xc);

}  // namespace misc
