// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that holds one 32-bit value at offset 0x14, which a tail call passes on.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The object whose 32-bit value is handed to the library routine that its thunk tail-calls.
 *
 */
struct ThunkValueObject {
    uint8_t unknown_0x0000[0x14];
    uint32_t value;                /**< The value passed as the first argument. */
};
static_assert(offsetof(ThunkValueObject, value) == 0x14);

}  // namespace misc
