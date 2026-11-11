// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_00f3c1a0 reads.
 *
 */
struct Object00f3c1a0 {
    uint8_t unknown_0x0000[0x20];
    float value_0x0020; /**< Read by auto_return_float_field_00f3c1a0; meaning unknown. */
};
static_assert(offsetof(Object00f3c1a0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00f3c1a0(const Object00f3c1a0 *self)
{
    return self->value_0x0020;
}
