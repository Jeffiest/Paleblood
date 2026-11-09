// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f00210()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f00220()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f00330 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f00330()
{
    return value_02f00330;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f00340()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f00350 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02f00350()
{
    return value_02f00350;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f003a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f003a0()
{
    return value_02f003a0;
}

/**
 *
 * The part of the object that auto_return_field_02f003b0 reads.
 *
 */
struct Object02f003b0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f003b0; meaning unknown. */
};
static_assert(offsetof(Object02f003b0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f003b0(const Object02f003b0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f00d40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f00d50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f00de0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f00de0()
{
    return value_02f00de0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f00df0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f00e00 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02f00e00()
{
    return value_02f00e00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f00e50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f00e50()
{
    return value_02f00e50;
}

/**
 *
 * The part of the object that auto_return_field_02f00e60 reads.
 *
 */
struct Object02f00e60 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f00e60; meaning unknown. */
};
static_assert(offsetof(Object02f00e60, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f00e60(const Object02f00e60 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f01370()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f01380()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f01480 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f01480()
{
    return value_02f01480;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f01490()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f014a0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f014a0()
{
    return value_02f014a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f014f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f014f0()
{
    return value_02f014f0;
}

/**
 *
 * The part of the object that auto_return_field_02f01500 reads.
 *
 */
struct Object02f01500 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f01500; meaning unknown. */
};
static_assert(offsetof(Object02f01500, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f01500(const Object02f01500 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f01a10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f01a20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f01aa0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f01aa0()
{
    return value_02f01aa0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f01ab0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f01ac0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f01b10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f01b10()
{
    return value_02f01b10;
}

/**
 *
 * The part of the object that auto_return_field_02f01b20 reads.
 *
 */
struct Object02f01b20 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f01b20; meaning unknown. */
};
static_assert(offsetof(Object02f01b20, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f01b20(const Object02f01b20 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f01d30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f01d30()
{
    return value_02f01d30;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f01e90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f01ea0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f01f10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f01f10()
{
    return value_02f01f10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f01f20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f01f20()
{
    return value_02f01f20;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f02270()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f02280()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f02380()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f02390()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f023a0 = 0x5;

extern "C" uint32_t bb_auto_return_constant_02f023a0()
{
    return value_02f023a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f02530 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f02530()
{
    return value_02f02530;
}

/**
 *
 * The part of the object that auto_return_field_02f02540 reads.
 *
 */
struct Object02f02540 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f02540; meaning unknown. */
};
static_assert(offsetof(Object02f02540, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f02540(const Object02f02540 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f02c70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f02c80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f02d00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f02d10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f02d20 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02f02d20()
{
    return value_02f02d20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f02eb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f02eb0()
{
    return value_02f02eb0;
}

/**
 *
 * The part of the object that auto_return_field_02f02ec0 reads.
 *
 */
struct Object02f02ec0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f02ec0; meaning unknown. */
};
static_assert(offsetof(Object02f02ec0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f02ec0(const Object02f02ec0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f033d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f033e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f03510 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f03510()
{
    return value_02f03510;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f03520()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f03530 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02f03530()
{
    return value_02f03530;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f036c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f036c0()
{
    return value_02f036c0;
}

/**
 *
 * The part of the object that auto_return_field_02f036d0 reads.
 *
 */
struct Object02f036d0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f036d0; meaning unknown. */
};
static_assert(offsetof(Object02f036d0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f036d0(const Object02f036d0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f03be0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f03bf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f03ca0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f03ca0()
{
    return value_02f03ca0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f03cb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f03cc0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02f03cc0()
{
    return value_02f03cc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f03e50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f03e50()
{
    return value_02f03e50;
}

/**
 *
 * The part of the object that auto_return_field_02f03e60 reads.
 *
 */
struct Object02f03e60 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f03e60; meaning unknown. */
};
static_assert(offsetof(Object02f03e60, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f03e60(const Object02f03e60 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f04370()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f04380()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f04460 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f04460()
{
    return value_02f04460;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f04470()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f04480 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f04480()
{
    return value_02f04480;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f04610 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f04610()
{
    return value_02f04610;
}

/**
 *
 * The part of the object that auto_return_field_02f04620 reads.
 *
 */
struct Object02f04620 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f04620; meaning unknown. */
};
static_assert(offsetof(Object02f04620, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f04620(const Object02f04620 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f04b30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f04b40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f04bb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f04bb0()
{
    return value_02f04bb0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f04bc0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f04bd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f04d60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f04d60()
{
    return value_02f04d60;
}

/**
 *
 * The part of the object that auto_return_field_02f04d70 reads.
 *
 */
struct Object02f04d70 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f04d70; meaning unknown. */
};
static_assert(offsetof(Object02f04d70, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f04d70(const Object02f04d70 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f04f80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f04f80()
{
    return value_02f04f80;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f050c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f050d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f05110 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f05110()
{
    return value_02f05110;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f05120 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f05120()
{
    return value_02f05120;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f05690()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f056a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f056b0 = 0x5;

extern "C" uint32_t bb_auto_return_constant_02f056b0()
{
    return value_02f056b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f05840 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f05840()
{
    return value_02f05840;
}

/**
 *
 * The part of the object that auto_return_field_02f05850 reads.
 *
 */
struct Object02f05850 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f05850; meaning unknown. */
};
static_assert(offsetof(Object02f05850, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f05850(const Object02f05850 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f05f00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f05f10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f05f20 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02f05f20()
{
    return value_02f05f20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f060b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f060b0()
{
    return value_02f060b0;
}

/**
 *
 * The part of the object that auto_return_field_02f060c0 reads.
 *
 */
struct Object02f060c0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f060c0; meaning unknown. */
};
static_assert(offsetof(Object02f060c0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f060c0(const Object02f060c0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f067d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f067d0()
{
    return value_02f067d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f067e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f067f0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02f067f0()
{
    return value_02f067f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f06980 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f06980()
{
    return value_02f06980;
}

/**
 *
 * The part of the object that auto_return_field_02f06990 reads.
 *
 */
struct Object02f06990 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f06990; meaning unknown. */
};
static_assert(offsetof(Object02f06990, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f06990(const Object02f06990 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f07050 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f07050()
{
    return value_02f07050;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f07060()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f07070 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f07070()
{
    return value_02f07070;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f07200 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f07200()
{
    return value_02f07200;
}

/**
 *
 * The part of the object that auto_return_field_02f07210 reads.
 *
 */
struct Object02f07210 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f07210; meaning unknown. */
};
static_assert(offsetof(Object02f07210, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f07210(const Object02f07210 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f07910()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f07920()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f07930 = 0x5;

extern "C" uint32_t bb_auto_return_constant_02f07930()
{
    return value_02f07930;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f07a20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f07a20()
{
    return value_02f07a20;
}

/**
 *
 * The part of the object that auto_return_field_02f07a30 reads.
 *
 */
struct Object02f07a30 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f07a30; meaning unknown. */
};
static_assert(offsetof(Object02f07a30, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f07a30(const Object02f07a30 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f08330()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f08340()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f08350 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02f08350()
{
    return value_02f08350;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f08440 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f08440()
{
    return value_02f08440;
}

/**
 *
 * The part of the object that auto_return_field_02f08450 reads.
 *
 */
struct Object02f08450 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f08450; meaning unknown. */
};
static_assert(offsetof(Object02f08450, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f08450(const Object02f08450 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f08b20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f08b20()
{
    return value_02f08b20;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f08b30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f08b40 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02f08b40()
{
    return value_02f08b40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f08c30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f08c30()
{
    return value_02f08c30;
}

/**
 *
 * The part of the object that auto_return_field_02f08c40 reads.
 *
 */
struct Object02f08c40 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f08c40; meaning unknown. */
};
static_assert(offsetof(Object02f08c40, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f08c40(const Object02f08c40 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f092d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f092d0()
{
    return value_02f092d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f092e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f092f0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f092f0()
{
    return value_02f092f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f093e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f093e0()
{
    return value_02f093e0;
}

/**
 *
 * The part of the object that auto_return_field_02f093f0 reads.
 *
 */
struct Object02f093f0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f093f0; meaning unknown. */
};
static_assert(offsetof(Object02f093f0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f093f0(const Object02f093f0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f09ab0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f09ab0()
{
    return value_02f09ab0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f09ac0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f09ad0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02f09ad0()
{
    return value_02f09ad0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f09e90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f09e90()
{
    return value_02f09e90;
}

/**
 *
 * The part of the object that auto_return_field_02f09ea0 reads.
 *
 */
struct Object02f09ea0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f09ea0; meaning unknown. */
};
static_assert(offsetof(Object02f09ea0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f09ea0(const Object02f09ea0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f0a520 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f0a520()
{
    return value_02f0a520;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f0a530()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f0a540 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f0a540()
{
    return value_02f0a540;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f0a900 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f0a900()
{
    return value_02f0a900;
}

/**
 *
 * The part of the object that auto_return_field_02f0a910 reads.
 *
 */
struct Object02f0a910 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02f0a910; meaning unknown. */
};
static_assert(offsetof(Object02f0a910, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f0a910(const Object02f0a910 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f0aae0()
{
}

/**
 *
 * The part of the object that auto_return_field_02f0cdd0 reads.
 *
 */
struct Object02f0cdd0 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02f0cdd0; meaning unknown. */
};
static_assert(offsetof(Object02f0cdd0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f0cdd0(const Object02f0cdd0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_member_address_02f0cde0 reads.
 *
 */
struct Object02f0cde0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02f0cde0; meaning unknown. */
};
static_assert(offsetof(Object02f0cde0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02f0cde0(Object02f0cde0 *self)
{
    return &self->member_0x0008;
}
