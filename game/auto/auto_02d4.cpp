// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d446d0()
{
}

/**
 *
 * The part of the object that auto_return_float_field_02d44700 reads.
 *
 */
struct Object02d44700 {
    uint8_t unknown_0x0000[0x10];
    float value_0x0010; /**< Read by auto_return_float_field_02d44700; meaning unknown. */
};
static_assert(offsetof(Object02d44700, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d44700(const Object02d44700 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d447f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d44860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d44880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d448a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02d48870 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02d48870()
{
    return value_02d48870;
}

/**
 *
 * The part of the object that auto_return_field_02d48890 reads.
 *
 */
struct Object02d48890 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_02d48890; meaning unknown. */
};
static_assert(offsetof(Object02d48890, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02d48890(const Object02d48890 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02d488b0 reads.
 *
 */
struct Object02d488b0 {
    uint8_t unknown_0x0000[0x11];
    uint8_t value_0x0011; /**< Read by auto_return_field_02d488b0; meaning unknown. */
};
static_assert(offsetof(Object02d488b0, value_0x0011) == 0x11);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02d488b0(const Object02d488b0 *self)
{
    return self->value_0x0011;
}

/**
 *
 * The part of the object that auto_return_field_02d488c0 reads.
 *
 */
struct Object02d488c0 {
    uint8_t unknown_0x0000[0x12];
    uint8_t value_0x0012; /**< Read by auto_return_field_02d488c0; meaning unknown. */
};
static_assert(offsetof(Object02d488c0, value_0x0012) == 0x12);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02d488c0(const Object02d488c0 *self)
{
    return self->value_0x0012;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4a8a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4ca80()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02d4d280 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02d4d280()
{
    return value_02d4d280;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4d4a0()
{
}

/**
 *
 * The part of the object that auto_return_float_field_02d4d880 reads.
 *
 */
struct Object02d4d880 {
    uint8_t unknown_0x0000[0x110];
    float value_0x0110; /**< Read by auto_return_float_field_02d4d880; meaning unknown. */
};
static_assert(offsetof(Object02d4d880, value_0x0110) == 0x110);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d4d880(const Object02d4d880 *self)
{
    return self->value_0x0110;
}

/**
 *
 * The part of the object that auto_return_float_field_02d4d8b0 reads.
 *
 */
struct Object02d4d8b0 {
    uint8_t unknown_0x0000[0x120];
    float value_0x0120; /**< Read by auto_return_float_field_02d4d8b0; meaning unknown. */
};
static_assert(offsetof(Object02d4d8b0, value_0x0120) == 0x120);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d4d8b0(const Object02d4d8b0 *self)
{
    return self->value_0x0120;
}

/**
 *
 * The part of the object that auto_return_float_field_02d4d8d0 reads.
 *
 */
struct Object02d4d8d0 {
    uint8_t unknown_0x0000[0x160];
    float value_0x0160; /**< Read by auto_return_float_field_02d4d8d0; meaning unknown. */
};
static_assert(offsetof(Object02d4d8d0, value_0x0160) == 0x160);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d4d8d0(const Object02d4d8d0 *self)
{
    return self->value_0x0160;
}

/**
 *
 * The part of the object that auto_return_float_field_02d4d8e0 reads.
 *
 */
struct Object02d4d8e0 {
    uint8_t unknown_0x0000[0x158];
    float value_0x0158; /**< Read by auto_return_float_field_02d4d8e0; meaning unknown. */
};
static_assert(offsetof(Object02d4d8e0, value_0x0158) == 0x158);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d4d8e0(const Object02d4d8e0 *self)
{
    return self->value_0x0158;
}

/**
 *
 * The part of the object that auto_return_field_02d4d8f0 reads.
 *
 */
struct Object02d4d8f0 {
    uint8_t unknown_0x0000[0x154];
    uint32_t value_0x0154; /**< Read by auto_return_field_02d4d8f0; meaning unknown. */
};
static_assert(offsetof(Object02d4d8f0, value_0x0154) == 0x154);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02d4d8f0(const Object02d4d8f0 *self)
{
    return self->value_0x0154;
}

/**
 *
 * The part of the object that auto_return_float_field_02d4d900 reads.
 *
 */
struct Object02d4d900 {
    uint8_t unknown_0x0000[0x164];
    float value_0x0164; /**< Read by auto_return_float_field_02d4d900; meaning unknown. */
};
static_assert(offsetof(Object02d4d900, value_0x0164) == 0x164);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02d4d900(const Object02d4d900 *self)
{
    return self->value_0x0164;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4d940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4d960()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4d980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4e430()
{
}
