// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_009591b0 reads.
 *
 */
struct Object009591b0 {
    uint8_t unknown_0x0000[0xa0];
    float value_0x00a0; /**< Read by auto_return_float_field_009591b0; meaning unknown. */
};
static_assert(offsetof(Object009591b0, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009591b0(const Object009591b0 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * The part of the object that auto_return_float_field_009591c0 reads.
 *
 */
struct Object009591c0 {
    uint8_t unknown_0x0000[0xa4];
    float value_0x00a4; /**< Read by auto_return_float_field_009591c0; meaning unknown. */
};
static_assert(offsetof(Object009591c0, value_0x00a4) == 0xa4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009591c0(const Object009591c0 *self)
{
    return self->value_0x00a4;
}

/**
 *
 * The part of the object that auto_return_float_field_009591d0 reads.
 *
 */
struct Object009591d0 {
    uint8_t unknown_0x0000[0xa8];
    float value_0x00a8; /**< Read by auto_return_float_field_009591d0; meaning unknown. */
};
static_assert(offsetof(Object009591d0, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_009591d0(const Object009591d0 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_009591e0 reads.
 *
 */
struct Object009591e0 {
    uint8_t unknown_0x0000[0xac];
    uint32_t value_0x00ac; /**< Read by auto_return_field_009591e0; meaning unknown. */
};
static_assert(offsetof(Object009591e0, value_0x00ac) == 0xac);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_009591e0(const Object009591e0 *self)
{
    return self->value_0x00ac;
}

/**
 *
 * The part of the object that auto_return_float_field_00959820 reads.
 *
 */
struct Object00959820 {
    uint8_t unknown_0x0000[0x98];
    float value_0x0098; /**< Read by auto_return_float_field_00959820; meaning unknown. */
};
static_assert(offsetof(Object00959820, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00959820(const Object00959820 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_float_field_00959830 reads.
 *
 */
struct Object00959830 {
    uint8_t unknown_0x0000[0x94];
    float value_0x0094; /**< Read by auto_return_float_field_00959830; meaning unknown. */
};
static_assert(offsetof(Object00959830, value_0x0094) == 0x94);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00959830(const Object00959830 *self)
{
    return self->value_0x0094;
}

/**
 *
 * The part of the object that auto_return_field_00959840 reads.
 *
 */
struct Object00959840 {
    uint8_t unknown_0x0000[0x90];
    uint32_t value_0x0090; /**< Read by auto_return_field_00959840; meaning unknown. */
};
static_assert(offsetof(Object00959840, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00959840(const Object00959840 *self)
{
    return self->value_0x0090;
}
