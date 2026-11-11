// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a70130 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a70130()
{
    return value_02a70130;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a704d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a704d0()
{
    return value_02a704d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a705b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a70f00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a74ae0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a74ae0()
{
    return value_02a74ae0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a74b40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a74b40()
{
    return value_02a74b40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a74f00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a74f00()
{
    return value_02a74f00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a74f60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a74f60()
{
    return value_02a74f60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a754d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a754d0()
{
    return value_02a754d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a756b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a756b0()
{
    return value_02a756b0;
}

/**
 *
 * The part of the object that auto_return_float_field_02a77da0 reads.
 *
 */
struct Object02a77da0 {
    uint8_t unknown_0x0000[0x70];
    float value_0x0070; /**< Read by auto_return_float_field_02a77da0; meaning unknown. */
};
static_assert(offsetof(Object02a77da0, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02a77da0(const Object02a77da0 *self)
{
    return self->value_0x0070;
}

/**
 *
 * The part of the object that auto_return_float_field_02a77db0 reads.
 *
 */
struct Object02a77db0 {
    uint8_t unknown_0x0000[0x74];
    float value_0x0074; /**< Read by auto_return_float_field_02a77db0; meaning unknown. */
};
static_assert(offsetof(Object02a77db0, value_0x0074) == 0x74);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02a77db0(const Object02a77db0 *self)
{
    return self->value_0x0074;
}

/**
 *
 * The part of the object that auto_return_field_02a77dc0 reads.
 *
 */
struct Object02a77dc0 {
    uint8_t unknown_0x0000[0x88];
    uint8_t value_0x0088; /**< Read by auto_return_field_02a77dc0; meaning unknown. */
};
static_assert(offsetof(Object02a77dc0, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02a77dc0(const Object02a77dc0 *self)
{
    return self->value_0x0088;
}

/**
 *
 * The part of the object that auto_return_field_02a77dd0 reads.
 *
 */
struct Object02a77dd0 {
    uint8_t unknown_0x0000[0x84];
    uint32_t value_0x0084; /**< Read by auto_return_field_02a77dd0; meaning unknown. */
};
static_assert(offsetof(Object02a77dd0, value_0x0084) == 0x84);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a77dd0(const Object02a77dd0 *self)
{
    return self->value_0x0084;
}

/**
 *
 * The part of the object that auto_return_field_02a77de0 reads.
 *
 */
struct Object02a77de0 {
    uint8_t unknown_0x0000[0x80];
    uint32_t value_0x0080; /**< Read by auto_return_field_02a77de0; meaning unknown. */
};
static_assert(offsetof(Object02a77de0, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a77de0(const Object02a77de0 *self)
{
    return self->value_0x0080;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a78990 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02a78990()
{
    return value_02a78990;
}

/**
 *
 * The part of the object that auto_return_member_address_02a7e3a0 reads.
 *
 */
struct Object02a7e3a0 {
    uint8_t unknown_0x0000[0xa0];
    uint8_t member_0x00a0; /**< Read by auto_return_member_address_02a7e3a0; meaning unknown. */
};
static_assert(offsetof(Object02a7e3a0, member_0x00a0) == 0xa0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a7e3a0(Object02a7e3a0 *self)
{
    return &self->member_0x00a0;
}

/**
 *
 * The part of the object that auto_return_member_address_02a7e3b0 reads.
 *
 */
struct Object02a7e3b0 {
    uint8_t unknown_0x0000[0xa0];
    uint8_t member_0x00a0; /**< Read by auto_return_member_address_02a7e3b0; meaning unknown. */
};
static_assert(offsetof(Object02a7e3b0, member_0x00a0) == 0xa0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a7e3b0(Object02a7e3b0 *self)
{
    return &self->member_0x00a0;
}
