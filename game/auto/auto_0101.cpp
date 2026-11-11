// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_01015e70 reads.
 *
 */
struct Object01015e70 {
    uint8_t unknown_0x0000[0x5c];
    float value_0x005c; /**< Read by auto_return_float_field_01015e70; meaning unknown. */
};
static_assert(offsetof(Object01015e70, value_0x005c) == 0x5c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01015e70(const Object01015e70 *self)
{
    return self->value_0x005c;
}

/**
 *
 * The part of the object that auto_return_float_field_01015e80 reads.
 *
 */
struct Object01015e80 {
    uint8_t unknown_0x0000[0x60];
    float value_0x0060; /**< Read by auto_return_float_field_01015e80; meaning unknown. */
};
static_assert(offsetof(Object01015e80, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01015e80(const Object01015e80 *self)
{
    return self->value_0x0060;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01016270 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01016270()
{
    return value_01016270;
}
