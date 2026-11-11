// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_015625f0 reads.
 *
 */
struct Object015625f0 {
    uint8_t unknown_0x0000[0xc];
    uint8_t value_0x000c; /**< Read by auto_return_field_015625f0; meaning unknown. */
};
static_assert(offsetof(Object015625f0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_015625f0(const Object015625f0 *self)
{
    return self->value_0x000c;
}
