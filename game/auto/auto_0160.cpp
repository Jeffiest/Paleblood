// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_0160c9c0 reads.
 *
 */
struct Object0160c9c0 {
    uint8_t unknown_0x0000[0x18];
    float value_0x0018; /**< Read by auto_return_float_field_0160c9c0; meaning unknown. */
};
static_assert(offsetof(Object0160c9c0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_0160c9c0(const Object0160c9c0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_float_field_0160ca00 reads.
 *
 */
struct Object0160ca00 {
    uint8_t unknown_0x0000[0x10];
    float value_0x0010; /**< Read by auto_return_float_field_0160ca00; meaning unknown. */
};
static_assert(offsetof(Object0160ca00, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_0160ca00(const Object0160ca00 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_float_field_0160ca20 reads.
 *
 */
struct Object0160ca20 {
    uint8_t unknown_0x0000[0x14];
    float value_0x0014; /**< Read by auto_return_float_field_0160ca20; meaning unknown. */
};
static_assert(offsetof(Object0160ca20, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_0160ca20(const Object0160ca20 *self)
{
    return self->value_0x0014;
}
