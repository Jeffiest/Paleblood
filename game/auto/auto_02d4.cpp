// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d42bc0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d42bd0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d42be0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d42bf0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d43e60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d43e70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d43eb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d43ec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d44670()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d44680()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d44690 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02d44690()
{
    return value_02d44690;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d446a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d446b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d446c0()
{
    return 0;
}

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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d446f0()
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
 * The part of the object that auto_return_field_02d447c0 reads.
 *
 */
struct Object02d447c0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02d447c0; meaning unknown. */
};
static_assert(offsetof(Object02d447c0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d447c0(const Object02d447c0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d447d0()
{
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
 * The part of the object that auto_return_field_02d44820 reads.
 *
 */
struct Object02d44820 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02d44820; meaning unknown. */
};
static_assert(offsetof(Object02d44820, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d44820(const Object02d44820 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d44830()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d44840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d44850()
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d448c0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d44fe0 = 0x9;

extern "C" uint32_t bb_auto_return_constant_02d44fe0()
{
    return value_02d44fe0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d48230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d48430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d48440()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d48450()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d48460()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d48470()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d48850()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d48860()
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d48880()
{
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
extern "C" void bb_auto_empty_02d488d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d488e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d488f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d48900()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d48910()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d48920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d48930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d49560()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d49570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d49580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4a4e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4a4f0()
{
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
 * The part of the object that auto_return_field_02d4aa50 reads.
 *
 */
struct Object02d4aa50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d4aa50; meaning unknown. */
};
static_assert(offsetof(Object02d4aa50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d4aa50(const Object02d4aa50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02d4aa60 reads.
 *
 */
struct Object02d4aa60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d4aa60; meaning unknown. */
};
static_assert(offsetof(Object02d4aa60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d4aa60(const Object02d4aa60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d4aab0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d4ac00 = 0x198;

extern "C" uint32_t bb_auto_return_constant_02d4ac00()
{
    return value_02d4ac00;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4d270()
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d4d440()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02d4d450 reads.
 *
 */
struct Object02d4d450 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02d4d450; meaning unknown. */
};
static_assert(offsetof(Object02d4d450, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d4d450(const Object02d4d450 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02d4d460 reads.
 *
 */
struct Object02d4d460 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02d4d460; meaning unknown. */
};
static_assert(offsetof(Object02d4d460, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d4d460(const Object02d4d460 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02d4d480 reads.
 *
 */
struct Object02d4d480 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02d4d480; meaning unknown. */
};
static_assert(offsetof(Object02d4d480, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d4d480(const Object02d4d480 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d4d490()
{
    return 0;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d4d910()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4d920()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d4d930()
{
    return 0;
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
extern "C" void bb_auto_empty_02d4dc40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4dc50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4dc60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4dc70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d4e410()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d4e420()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d4e430()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d4e500()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d4e510()
{
    return 0;
}
