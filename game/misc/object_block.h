// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a 0x140-byte block built for an object, which keeps a routine's value at +0x20.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A 0x140-byte block made for an object: the result of the object's routine at +0x20 is kept there.
 *
 */
struct ObjectBlock {
    uint8_t unknown_0x00[0x20];
    uint64_t slot_10_result;       /**< The value the object's result routine at +0x10 gave, stored as is. */
    uint8_t unknown_0x28[0x118];
};
static_assert(offsetof(ObjectBlock, slot_10_result) == 0x20);
static_assert(sizeof(ObjectBlock) == 0x140);

}  // namespace misc
