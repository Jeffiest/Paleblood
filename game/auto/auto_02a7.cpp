// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a70120()
{
    return 0;
}

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
 * The part of the object that auto_return_field_02a70200 reads.
 *
 */
struct Object02a70200 {
    uint8_t unknown_0x0000[0x70];
    uint32_t value_0x0070; /**< Read by auto_return_field_02a70200; meaning unknown. */
};
static_assert(offsetof(Object02a70200, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a70200(const Object02a70200 *self)
{
    return self->value_0x0070;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a70490 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a70490()
{
    return value_02a70490;
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
extern "C" uint64_t bb_auto_return_zero_02a705a0()
{
    return 0;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a70f20()
{
}

/**
 *
 * The part of the object that auto_return_field_02a71390 reads.
 *
 */
struct Object02a71390 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a71390; meaning unknown. */
};
static_assert(offsetof(Object02a71390, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a71390(const Object02a71390 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02a713a0 reads.
 *
 */
struct Object02a713a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02a713a0; meaning unknown. */
};
static_assert(offsetof(Object02a713a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a713a0(const Object02a713a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a713f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a71540 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02a71540()
{
    return value_02a71540;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a74970()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a74980()
{
}

/**
 *
 * The part of the object that auto_return_field_02a74aa0 reads.
 *
 */
struct Object02a74aa0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02a74aa0; meaning unknown. */
};
static_assert(offsetof(Object02a74aa0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a74aa0(const Object02a74aa0 *self)
{
    return self->value_0x0010;
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
constexpr uint32_t value_02a74af0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a74af0()
{
    return value_02a74af0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a74b30()
{
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a74b50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a74b60 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a74b60()
{
    return value_02a74b60;
}

/**
 *
 * The part of the object that auto_return_field_02a74ed0 reads.
 *
 */
struct Object02a74ed0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02a74ed0; meaning unknown. */
};
static_assert(offsetof(Object02a74ed0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a74ed0(const Object02a74ed0 *self)
{
    return self->value_0x0010;
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
constexpr uint32_t value_02a74f10 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a74f10()
{
    return value_02a74f10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a74f50()
{
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a74f70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a74f80 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a74f80()
{
    return value_02a74f80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a75340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a75350()
{
}

/**
 *
 * The part of the object that auto_return_field_02a75470 reads.
 *
 */
struct Object02a75470 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02a75470; meaning unknown. */
};
static_assert(offsetof(Object02a75470, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a75470(const Object02a75470 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a754a0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a754a0()
{
    return value_02a754a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a754b0()
{
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a754e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a754f0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a754f0()
{
    return value_02a754f0;
}

/**
 *
 * The part of the object that auto_return_field_02a75650 reads.
 *
 */
struct Object02a75650 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02a75650; meaning unknown. */
};
static_assert(offsetof(Object02a75650, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a75650(const Object02a75650 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a75680 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02a75680()
{
    return value_02a75680;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a75690()
{
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02a756c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02a756d0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02a756d0()
{
    return value_02a756d0;
}

/**
 *
 * The part of the object that auto_return_field_02a76100 reads.
 *
 */
struct Object02a76100 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02a76100; meaning unknown. */
};
static_assert(offsetof(Object02a76100, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a76100(const Object02a76100 *self)
{
    return self->value_0x0040;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a78780()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a78940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a78970()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a78980()
{
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
 * The part of the object that auto_return_field_02a7bb60 reads.
 *
 */
struct Object02a7bb60 {
    uint8_t unknown_0x0000[0x38];
    uint32_t value_0x0038; /**< Read by auto_return_field_02a7bb60; meaning unknown. */
};
static_assert(offsetof(Object02a7bb60, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02a7bb60(const Object02a7bb60 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_member_address_02a7e380 reads.
 *
 */
struct Object02a7e380 {
    uint8_t unknown_0x0000[0x78];
    uint8_t member_0x0078; /**< Read by auto_return_member_address_02a7e380; meaning unknown. */
};
static_assert(offsetof(Object02a7e380, member_0x0078) == 0x78);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a7e380(Object02a7e380 *self)
{
    return &self->member_0x0078;
}

/**
 *
 * The part of the object that auto_return_member_address_02a7e390 reads.
 *
 */
struct Object02a7e390 {
    uint8_t unknown_0x0000[0x78];
    uint8_t member_0x0078; /**< Read by auto_return_member_address_02a7e390; meaning unknown. */
};
static_assert(offsetof(Object02a7e390, member_0x0078) == 0x78);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a7e390(Object02a7e390 *self)
{
    return &self->member_0x0078;
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
