// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00a20860 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00a20860()
{
    return value_00a20860;
}

/**
 *
 * The part of the object that auto_return_float_field_00a2c260 reads.
 *
 */
struct Object00a2c260 {
    uint8_t unknown_0x0000[0x40];
    float value_0x0040; /**< Read by auto_return_float_field_00a2c260; meaning unknown. */
};
static_assert(offsetof(Object00a2c260, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00a2c260(const Object00a2c260 *self)
{
    return self->value_0x0040;
}
