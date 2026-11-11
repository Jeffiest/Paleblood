// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_00f76a90 reads.
 *
 */
struct Object00f76a90 {
    uint8_t unknown_0x0000[0x3c];
    float value_0x003c; /**< Read by auto_return_float_field_00f76a90; meaning unknown. */
};
static_assert(offsetof(Object00f76a90, value_0x003c) == 0x3c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00f76a90(const Object00f76a90 *self)
{
    return self->value_0x003c;
}

/**
 *
 * The part of the object that auto_return_float_field_00f78530 reads.
 *
 */
struct Object00f78530 {
    uint8_t unknown_0x0000[0x1c];
    float value_0x001c; /**< Read by auto_return_float_field_00f78530; meaning unknown. */
};
static_assert(offsetof(Object00f78530, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00f78530(const Object00f78530 *self)
{
    return self->value_0x001c;
}
