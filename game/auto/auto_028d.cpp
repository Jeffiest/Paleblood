// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_028de4e0 reads.
 *
 */
struct Object028de4e0 {
    uint8_t unknown_0x0000[0x8];
    float value_0x0008; /**< Read by auto_return_float_field_028de4e0; meaning unknown. */
};
static_assert(offsetof(Object028de4e0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_028de4e0(const Object028de4e0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028df290 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028df290()
{
    return value_028df290;
}
