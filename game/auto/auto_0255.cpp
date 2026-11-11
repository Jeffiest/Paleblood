// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02551360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02553880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_025567a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02556f00 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02556f00()
{
    return value_02556f00;
}

/**
 *
 * The part of the object that auto_return_field_02558600 reads.
 *
 */
struct Object02558600 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02558600; meaning unknown. */
};
static_assert(offsetof(Object02558600, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02558600(const Object02558600 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_float_field_02558770 reads.
 *
 */
struct Object02558770 {
    uint8_t unknown_0x0000[0x10];
    float value_0x0010; /**< Read by auto_return_float_field_02558770; meaning unknown. */
};
static_assert(offsetof(Object02558770, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02558770(const Object02558770 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_float_field_02558780 reads.
 *
 */
struct Object02558780 {
    uint8_t unknown_0x0000[0x14];
    float value_0x0014; /**< Read by auto_return_float_field_02558780; meaning unknown. */
};
static_assert(offsetof(Object02558780, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02558780(const Object02558780 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_float_field_02558a70 reads.
 *
 */
struct Object02558a70 {
    uint8_t unknown_0x0000[0x10];
    float value_0x0010; /**< Read by auto_return_float_field_02558a70; meaning unknown. */
};
static_assert(offsetof(Object02558a70, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02558a70(const Object02558a70 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02558bc0 reads.
 *
 */
struct Object02558bc0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02558bc0; meaning unknown. */
};
static_assert(offsetof(Object02558bc0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02558bc0(const Object02558bc0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02559380()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0255fd70()
{
}
