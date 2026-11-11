// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00b623c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00b623c0()
{
    return value_00b623c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b680a0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b680a0()
{
    return value_00b680a0;
}

/**
 *
 * The part of the object that auto_return_field_00b6a020 reads.
 *
 */
struct Object00b6a020 {
    uint8_t unknown_0x0000[0x81];
    uint8_t value_0x0081; /**< Read by auto_return_field_00b6a020; meaning unknown. */
};
static_assert(offsetof(Object00b6a020, value_0x0081) == 0x81);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00b6a020(const Object00b6a020 *self)
{
    return self->value_0x0081;
}
