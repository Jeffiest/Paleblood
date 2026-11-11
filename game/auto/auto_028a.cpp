// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_028a1270 reads.
 *
 */
struct Object028a1270 {
    uint8_t unknown_0x0000[0xc8];
    uint64_t value_0x00c8; /**< Read by auto_return_field_028a1270; meaning unknown. */
};
static_assert(offsetof(Object028a1270, value_0x00c8) == 0xc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028a1270(const Object028a1270 *self)
{
    return self->value_0x00c8;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a13c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1470 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1470()
{
    return value_028a1470;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1530 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1530()
{
    return value_028a1530;
}

/**
 *
 * The part of the object that auto_return_member_address_028a1580 reads.
 *
 */
struct Object028a1580 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_028a1580; meaning unknown. */
};
static_assert(offsetof(Object028a1580, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028a1580(Object028a1580 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1700 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1700()
{
    return value_028a1700;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a18e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a18e0()
{
    return value_028a18e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1ad0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1ad0()
{
    return value_028a1ad0;
}

/**
 *
 * The part of the object that auto_return_member_address_028a1b80 reads.
 *
 */
struct Object028a1b80 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_028a1b80; meaning unknown. */
};
static_assert(offsetof(Object028a1b80, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_028a1b80(Object028a1b80 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1bc0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1c00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1c00()
{
    return value_028a1c00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1ce0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1ce0()
{
    return value_028a1ce0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1da0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1da0()
{
    return value_028a1da0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1e80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1e80()
{
    return value_028a1e80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a1f00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a1f00()
{
    return value_028a1f00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a1f10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2050()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2070()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2120 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2120()
{
    return value_028a2120;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2140 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2140()
{
    return value_028a2140;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a21f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a21f0()
{
    return value_028a21f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2200 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2200()
{
    return value_028a2200;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2400 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2400()
{
    return value_028a2400;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2410 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2410()
{
    return value_028a2410;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2470 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2470()
{
    return value_028a2470;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2480 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2480()
{
    return value_028a2480;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a26d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a26d0()
{
    return value_028a26d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a26e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a26e0()
{
    return value_028a26e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2740 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2740()
{
    return value_028a2740;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2750 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2750()
{
    return value_028a2750;
}

/**
 *
 * The part of the object that auto_return_field_028a2880 reads.
 *
 */
struct Object028a2880 {
    uint8_t unknown_0x0000[0xc8];
    uint64_t value_0x00c8; /**< Read by auto_return_field_028a2880; meaning unknown. */
};
static_assert(offsetof(Object028a2880, value_0x00c8) == 0xc8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028a2880(const Object028a2880 *self)
{
    return self->value_0x00c8;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2c70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2c90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2cc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2cc0()
{
    return value_028a2cc0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028a2d10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2d80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2d80()
{
    return value_028a2d80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2f40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2f40()
{
    return value_028a2f40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a2ff0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a2ff0()
{
    return value_028a2ff0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a3190 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a3190()
{
    return value_028a3190;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a3240 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a3240()
{
    return value_028a3240;
}

/**
 *
 * The part of the object that auto_return_field_028a33e0 reads.
 *
 */
struct Object028a33e0 {
    uint8_t unknown_0x0000[0x6c];
    uint8_t value_0x006c; /**< Read by auto_return_field_028a33e0; meaning unknown. */
};
static_assert(offsetof(Object028a33e0, value_0x006c) == 0x6c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_028a33e0(const Object028a33e0 *self)
{
    return self->value_0x006c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a3610 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a3610()
{
    return value_028a3610;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a3620 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a3620()
{
    return value_028a3620;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a3680 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a3680()
{
    return value_028a3680;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028a36a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028a36a0()
{
    return value_028a36a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028a46a0()
{
}
