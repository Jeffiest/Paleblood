// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00ac5e80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00ac5e80()
{
    return value_00ac5e80;
}

/**
 *
 * The part of the object that auto_return_float_field_00acad20 reads.
 *
 */
struct Object00acad20 {
    uint8_t unknown_0x0000[0x30];
    float value_0x0030; /**< Read by auto_return_float_field_00acad20; meaning unknown. */
};
static_assert(offsetof(Object00acad20, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00acad20(const Object00acad20 *self)
{
    return self->value_0x0030;
}
