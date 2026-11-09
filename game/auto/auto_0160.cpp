// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016000c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016000d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01600460 reads.
 *
 */
struct Object01600460 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_01600460; meaning unknown. */
};
static_assert(offsetof(Object01600460, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01600460(const Object01600460 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01600560()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01600570()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01609ba0()
{
}

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

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0160f4b0()
{
}

/**
 *
 * The part of the object that auto_return_field_0160f8c0 reads.
 *
 */
struct Object0160f8c0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_0160f8c0; meaning unknown. */
};
static_assert(offsetof(Object0160f8c0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0160f8c0(const Object0160f8c0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0160f930()
{
}
