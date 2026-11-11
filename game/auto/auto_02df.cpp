// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02df72a0 reads.
 *
 */
struct Object02df72a0 {
    uint8_t unknown_0x0000[0xd8];
    uint64_t value_0x00d8; /**< Read by auto_return_field_02df72a0; meaning unknown. */
};
static_assert(offsetof(Object02df72a0, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02df72a0(const Object02df72a0 *self)
{
    return self->value_0x00d8;
}
