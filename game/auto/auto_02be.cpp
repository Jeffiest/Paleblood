// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02be1300 reads.
 *
 */
struct Object02be1300 {
    uint8_t unknown_0x0000[0x3c];
    uint32_t value_0x003c; /**< Read by auto_return_field_02be1300; meaning unknown. */
};
static_assert(offsetof(Object02be1300, value_0x003c) == 0x3c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be1300(const Object02be1300 *self)
{
    return self->value_0x003c;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02be3880()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02be3890()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02be5b90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02be5b90()
{
    return value_02be5b90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02be5ba0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02be5ba0()
{
    return value_02be5ba0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02be5bb0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02be5bc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02be5bc0()
{
    return value_02be5bc0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02be5bd0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02be5c40 reads.
 *
 */
struct Object02be5c40 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02be5c40; meaning unknown. */
};
static_assert(offsetof(Object02be5c40, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be5c40(const Object02be5c40 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02be60a0 reads.
 *
 */
struct Object02be60a0 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02be60a0; meaning unknown. */
};
static_assert(offsetof(Object02be60a0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be60a0(const Object02be60a0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02be60b0 reads.
 *
 */
struct Object02be60b0 {
    uint8_t unknown_0x0000[0x24];
    uint32_t value_0x0024; /**< Read by auto_return_field_02be60b0; meaning unknown. */
};
static_assert(offsetof(Object02be60b0, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be60b0(const Object02be60b0 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_02be60c0 reads.
 *
 */
struct Object02be60c0 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_02be60c0; meaning unknown. */
};
static_assert(offsetof(Object02be60c0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be60c0(const Object02be60c0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_float_field_02be60d0 reads.
 *
 */
struct Object02be60d0 {
    uint8_t unknown_0x0000[0x2c];
    float value_0x002c; /**< Read by auto_return_float_field_02be60d0; meaning unknown. */
};
static_assert(offsetof(Object02be60d0, value_0x002c) == 0x2c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be60d0(const Object02be60d0 *self)
{
    return self->value_0x002c;
}

/**
 *
 * The part of the object that auto_return_float_field_02be60e0 reads.
 *
 */
struct Object02be60e0 {
    uint8_t unknown_0x0000[0x34];
    float value_0x0034; /**< Read by auto_return_float_field_02be60e0; meaning unknown. */
};
static_assert(offsetof(Object02be60e0, value_0x0034) == 0x34);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be60e0(const Object02be60e0 *self)
{
    return self->value_0x0034;
}

/**
 *
 * The part of the object that auto_return_float_field_02be60f0 reads.
 *
 */
struct Object02be60f0 {
    uint8_t unknown_0x0000[0x38];
    float value_0x0038; /**< Read by auto_return_float_field_02be60f0; meaning unknown. */
};
static_assert(offsetof(Object02be60f0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be60f0(const Object02be60f0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_02be6100 reads.
 *
 */
struct Object02be6100 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_02be6100; meaning unknown. */
};
static_assert(offsetof(Object02be6100, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be6100(const Object02be6100 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_02be6110 reads.
 *
 */
struct Object02be6110 {
    uint8_t unknown_0x0000[0x3c];
    uint32_t value_0x003c; /**< Read by auto_return_field_02be6110; meaning unknown. */
};
static_assert(offsetof(Object02be6110, value_0x003c) == 0x3c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be6110(const Object02be6110 *self)
{
    return self->value_0x003c;
}

/**
 *
 * The part of the object that auto_return_member_address_02be6120 reads.
 *
 */
struct Object02be6120 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02be6120; meaning unknown. */
};
static_assert(offsetof(Object02be6120, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be6120(Object02be6120 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_02be6150 reads.
 *
 */
struct Object02be6150 {
    uint8_t unknown_0x0000[0x120];
    uint8_t member_0x0120; /**< Read by auto_return_member_address_02be6150; meaning unknown. */
};
static_assert(offsetof(Object02be6150, member_0x0120) == 0x120);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be6150(Object02be6150 *self)
{
    return &self->member_0x0120;
}

/**
 *
 * The part of the object that auto_return_member_address_02be6160 reads.
 *
 */
struct Object02be6160 {
    uint8_t unknown_0x0000[0x140];
    uint8_t member_0x0140; /**< Read by auto_return_member_address_02be6160; meaning unknown. */
};
static_assert(offsetof(Object02be6160, member_0x0140) == 0x140);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be6160(Object02be6160 *self)
{
    return &self->member_0x0140;
}

/**
 *
 * The part of the object that auto_return_member_address_02be6170 reads.
 *
 */
struct Object02be6170 {
    uint8_t unknown_0x0000[0x158];
    uint8_t member_0x0158; /**< Read by auto_return_member_address_02be6170; meaning unknown. */
};
static_assert(offsetof(Object02be6170, member_0x0158) == 0x158);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be6170(Object02be6170 *self)
{
    return &self->member_0x0158;
}

/**
 *
 * The part of the object that auto_return_member_address_02be6180 reads.
 *
 */
struct Object02be6180 {
    uint8_t unknown_0x0000[0x170];
    uint8_t member_0x0170; /**< Read by auto_return_member_address_02be6180; meaning unknown. */
};
static_assert(offsetof(Object02be6180, member_0x0170) == 0x170);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be6180(Object02be6180 *self)
{
    return &self->member_0x0170;
}

/**
 *
 * The part of the object that auto_return_field_02be62a0 reads.
 *
 */
struct Object02be62a0 {
    uint8_t unknown_0x0000[0x40];
    uint8_t value_0x0040; /**< Read by auto_return_field_02be62a0; meaning unknown. */
};
static_assert(offsetof(Object02be62a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02be62a0(const Object02be62a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02be62b0 reads.
 *
 */
struct Object02be62b0 {
    uint8_t unknown_0x0000[0x44];
    uint32_t value_0x0044; /**< Read by auto_return_field_02be62b0; meaning unknown. */
};
static_assert(offsetof(Object02be62b0, value_0x0044) == 0x44);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be62b0(const Object02be62b0 *self)
{
    return self->value_0x0044;
}

/**
 *
 * The part of the object that auto_return_member_address_02be62c0 reads.
 *
 */
struct Object02be62c0 {
    uint8_t unknown_0x0000[0x48];
    uint8_t member_0x0048; /**< Read by auto_return_member_address_02be62c0; meaning unknown. */
};
static_assert(offsetof(Object02be62c0, member_0x0048) == 0x48);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be62c0(Object02be62c0 *self)
{
    return &self->member_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_02be62d0 reads.
 *
 */
struct Object02be62d0 {
    uint8_t unknown_0x0000[0x188];
    uint64_t value_0x0188; /**< Read by auto_return_field_02be62d0; meaning unknown. */
};
static_assert(offsetof(Object02be62d0, value_0x0188) == 0x188);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02be62d0(const Object02be62d0 *self)
{
    return self->value_0x0188;
}

/**
 *
 * The part of the object that auto_return_member_address_02be6320 reads.
 *
 */
struct Object02be6320 {
    uint8_t unknown_0x0000[0x190];
    uint8_t member_0x0190; /**< Read by auto_return_member_address_02be6320; meaning unknown. */
};
static_assert(offsetof(Object02be6320, member_0x0190) == 0x190);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be6320(Object02be6320 *self)
{
    return &self->member_0x0190;
}

/**
 *
 * The part of the object that auto_return_field_02be64b0 reads.
 *
 */
struct Object02be64b0 {
    uint8_t unknown_0x0000[0x1d0];
    uint64_t value_0x01d0; /**< Read by auto_return_field_02be64b0; meaning unknown. */
};
static_assert(offsetof(Object02be64b0, value_0x01d0) == 0x1d0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02be64b0(const Object02be64b0 *self)
{
    return self->value_0x01d0;
}

/**
 *
 * The part of the object that auto_return_field_02be79c0 reads.
 *
 */
struct Object02be79c0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02be79c0; meaning unknown. */
};
static_assert(offsetof(Object02be79c0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be79c0(const Object02be79c0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02be79d0 reads.
 *
 */
struct Object02be79d0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02be79d0; meaning unknown. */
};
static_assert(offsetof(Object02be79d0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be79d0(const Object02be79d0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_member_address_02be79e0 reads.
 *
 */
struct Object02be79e0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02be79e0; meaning unknown. */
};
static_assert(offsetof(Object02be79e0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be79e0(Object02be79e0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02be7dc0 reads.
 *
 */
struct Object02be7dc0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02be7dc0; meaning unknown. */
};
static_assert(offsetof(Object02be7dc0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be7dc0(const Object02be7dc0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02be81a0 reads.
 *
 */
struct Object02be81a0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02be81a0; meaning unknown. */
};
static_assert(offsetof(Object02be81a0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be81a0(const Object02be81a0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02be8760 reads.
 *
 */
struct Object02be8760 {
    uint8_t unknown_0x0000[0x108];
    uint32_t value_0x0108; /**< Read by auto_return_field_02be8760; meaning unknown. */
};
static_assert(offsetof(Object02be8760, value_0x0108) == 0x108);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be8760(const Object02be8760 *self)
{
    return self->value_0x0108;
}

/**
 *
 * The part of the object that auto_return_float_field_02be8770 reads.
 *
 */
struct Object02be8770 {
    uint8_t unknown_0x0000[0x10c];
    float value_0x010c; /**< Read by auto_return_float_field_02be8770; meaning unknown. */
};
static_assert(offsetof(Object02be8770, value_0x010c) == 0x10c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be8770(const Object02be8770 *self)
{
    return self->value_0x010c;
}

/**
 *
 * The part of the object that auto_return_field_02be8780 reads.
 *
 */
struct Object02be8780 {
    uint8_t unknown_0x0000[0x110];
    uint8_t value_0x0110; /**< Read by auto_return_field_02be8780; meaning unknown. */
};
static_assert(offsetof(Object02be8780, value_0x0110) == 0x110);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02be8780(const Object02be8780 *self)
{
    return self->value_0x0110;
}

/**
 *
 * The part of the object that auto_return_field_02be8790 reads.
 *
 */
struct Object02be8790 {
    uint8_t unknown_0x0000[0x111];
    uint8_t value_0x0111; /**< Read by auto_return_field_02be8790; meaning unknown. */
};
static_assert(offsetof(Object02be8790, value_0x0111) == 0x111);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02be8790(const Object02be8790 *self)
{
    return self->value_0x0111;
}

/**
 *
 * The part of the object that auto_return_field_02be87a0 reads.
 *
 */
struct Object02be87a0 {
    uint8_t unknown_0x0000[0x114];
    uint32_t value_0x0114; /**< Read by auto_return_field_02be87a0; meaning unknown. */
};
static_assert(offsetof(Object02be87a0, value_0x0114) == 0x114);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be87a0(const Object02be87a0 *self)
{
    return self->value_0x0114;
}

/**
 *
 * The part of the object that auto_return_float_field_02be87b0 reads.
 *
 */
struct Object02be87b0 {
    uint8_t unknown_0x0000[0x118];
    float value_0x0118; /**< Read by auto_return_float_field_02be87b0; meaning unknown. */
};
static_assert(offsetof(Object02be87b0, value_0x0118) == 0x118);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be87b0(const Object02be87b0 *self)
{
    return self->value_0x0118;
}

/**
 *
 * The part of the object that auto_return_field_02be87c0 reads.
 *
 */
struct Object02be87c0 {
    uint8_t unknown_0x0000[0x124];
    uint8_t value_0x0124; /**< Read by auto_return_field_02be87c0; meaning unknown. */
};
static_assert(offsetof(Object02be87c0, value_0x0124) == 0x124);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be87c0(const Object02be87c0 *self)
{
    return self->value_0x0124;
}

/**
 *
 * The part of the object that auto_return_field_02be87d0 reads.
 *
 */
struct Object02be87d0 {
    uint8_t unknown_0x0000[0x128];
    uint32_t value_0x0128; /**< Read by auto_return_field_02be87d0; meaning unknown. */
};
static_assert(offsetof(Object02be87d0, value_0x0128) == 0x128);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be87d0(const Object02be87d0 *self)
{
    return self->value_0x0128;
}

/**
 *
 * The part of the object that auto_return_float_field_02be87e0 reads.
 *
 */
struct Object02be87e0 {
    uint8_t unknown_0x0000[0x12c];
    float value_0x012c; /**< Read by auto_return_float_field_02be87e0; meaning unknown. */
};
static_assert(offsetof(Object02be87e0, value_0x012c) == 0x12c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be87e0(const Object02be87e0 *self)
{
    return self->value_0x012c;
}

/**
 *
 * The part of the object that auto_return_float_field_02be87f0 reads.
 *
 */
struct Object02be87f0 {
    uint8_t unknown_0x0000[0x130];
    float value_0x0130; /**< Read by auto_return_float_field_02be87f0; meaning unknown. */
};
static_assert(offsetof(Object02be87f0, value_0x0130) == 0x130);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be87f0(const Object02be87f0 *self)
{
    return self->value_0x0130;
}

/**
 *
 * The part of the object that auto_return_float_field_02be8800 reads.
 *
 */
struct Object02be8800 {
    uint8_t unknown_0x0000[0x134];
    float value_0x0134; /**< Read by auto_return_float_field_02be8800; meaning unknown. */
};
static_assert(offsetof(Object02be8800, value_0x0134) == 0x134);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be8800(const Object02be8800 *self)
{
    return self->value_0x0134;
}

/**
 *
 * The part of the object that auto_return_field_02be8810 reads.
 *
 */
struct Object02be8810 {
    uint8_t unknown_0x0000[0x138];
    uint64_t value_0x0138; /**< Read by auto_return_field_02be8810; meaning unknown. */
};
static_assert(offsetof(Object02be8810, value_0x0138) == 0x138);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02be8810(const Object02be8810 *self)
{
    return self->value_0x0138;
}

/**
 *
 * The part of the object that auto_return_member_address_02be8820 reads.
 *
 */
struct Object02be8820 {
    uint8_t unknown_0x0000[0x140];
    uint8_t member_0x0140; /**< Read by auto_return_member_address_02be8820; meaning unknown. */
};
static_assert(offsetof(Object02be8820, member_0x0140) == 0x140);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be8820(Object02be8820 *self)
{
    return &self->member_0x0140;
}

/**
 *
 * The part of the object that auto_return_field_02be8830 reads.
 *
 */
struct Object02be8830 {
    uint8_t unknown_0x0000[0x178];
    uint64_t value_0x0178; /**< Read by auto_return_field_02be8830; meaning unknown. */
};
static_assert(offsetof(Object02be8830, value_0x0178) == 0x178);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02be8830(const Object02be8830 *self)
{
    return self->value_0x0178;
}

/**
 *
 * The part of the object that auto_return_field_02be89d0 reads.
 *
 */
struct Object02be89d0 {
    uint8_t unknown_0x0000[0x120];
    uint32_t value_0x0120; /**< Read by auto_return_field_02be89d0; meaning unknown. */
};
static_assert(offsetof(Object02be89d0, value_0x0120) == 0x120);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be89d0(const Object02be89d0 *self)
{
    return self->value_0x0120;
}

/**
 *
 * The part of the object that auto_return_member_address_02be89e0 reads.
 *
 */
struct Object02be89e0 {
    uint8_t unknown_0x0000[0x180];
    uint8_t member_0x0180; /**< Read by auto_return_member_address_02be89e0; meaning unknown. */
};
static_assert(offsetof(Object02be89e0, member_0x0180) == 0x180);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be89e0(Object02be89e0 *self)
{
    return &self->member_0x0180;
}

/**
 *
 * The part of the object that auto_return_field_02be8da0 reads.
 *
 */
struct Object02be8da0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02be8da0; meaning unknown. */
};
static_assert(offsetof(Object02be8da0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be8da0(const Object02be8da0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02be8f30()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02be8f80 reads.
 *
 */
struct Object02be8f80 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02be8f80; meaning unknown. */
};
static_assert(offsetof(Object02be8f80, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be8f80(Object02be8f80 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_02be8f90 reads.
 *
 */
struct Object02be8f90 {
    uint8_t unknown_0x0000[0x14];
    uint8_t member_0x0014; /**< Read by auto_return_member_address_02be8f90; meaning unknown. */
};
static_assert(offsetof(Object02be8f90, member_0x0014) == 0x14);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be8f90(Object02be8f90 *self)
{
    return &self->member_0x0014;
}

/**
 *
 * The part of the object that auto_return_member_address_02be8fa0 reads.
 *
 */
struct Object02be8fa0 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_02be8fa0; meaning unknown. */
};
static_assert(offsetof(Object02be8fa0, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be8fa0(Object02be8fa0 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02be8fb0 reads.
 *
 */
struct Object02be8fb0 {
    uint8_t unknown_0x0000[0x2c];
    uint8_t value_0x002c; /**< Read by auto_return_field_02be8fb0; meaning unknown. */
};
static_assert(offsetof(Object02be8fb0, value_0x002c) == 0x2c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02be8fb0(const Object02be8fb0 *self)
{
    return self->value_0x002c;
}

/**
 *
 * The part of the object that auto_return_field_02be93a0 reads.
 *
 */
struct Object02be93a0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02be93a0; meaning unknown. */
};
static_assert(offsetof(Object02be93a0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be93a0(const Object02be93a0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02be93d0 reads.
 *
 */
struct Object02be93d0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02be93d0; meaning unknown. */
};
static_assert(offsetof(Object02be93d0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be93d0(const Object02be93d0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02be93e0 reads.
 *
 */
struct Object02be93e0 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_02be93e0; meaning unknown. */
};
static_assert(offsetof(Object02be93e0, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be93e0(const Object02be93e0 *self)
{
    return self->value_0x0014;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02be94d0()
{
}

/**
 *
 * The part of the object that auto_return_field_02be9570 reads.
 *
 */
struct Object02be9570 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02be9570; meaning unknown. */
};
static_assert(offsetof(Object02be9570, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be9570(const Object02be9570 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02be9580 reads.
 *
 */
struct Object02be9580 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_02be9580; meaning unknown. */
};
static_assert(offsetof(Object02be9580, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be9580(const Object02be9580 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_02be9590 reads.
 *
 */
struct Object02be9590 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02be9590; meaning unknown. */
};
static_assert(offsetof(Object02be9590, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be9590(const Object02be9590 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_float_field_02be95a0 reads.
 *
 */
struct Object02be95a0 {
    uint8_t unknown_0x0000[0x18];
    float value_0x0018; /**< Read by auto_return_float_field_02be95a0; meaning unknown. */
};
static_assert(offsetof(Object02be95a0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be95a0(const Object02be95a0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_float_field_02be95b0 reads.
 *
 */
struct Object02be95b0 {
    uint8_t unknown_0x0000[0x1c];
    float value_0x001c; /**< Read by auto_return_float_field_02be95b0; meaning unknown. */
};
static_assert(offsetof(Object02be95b0, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be95b0(const Object02be95b0 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_float_field_02be95c0 reads.
 *
 */
struct Object02be95c0 {
    uint8_t unknown_0x0000[0x20];
    float value_0x0020; /**< Read by auto_return_float_field_02be95c0; meaning unknown. */
};
static_assert(offsetof(Object02be95c0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be95c0(const Object02be95c0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_float_field_02be95d0 reads.
 *
 */
struct Object02be95d0 {
    uint8_t unknown_0x0000[0x24];
    float value_0x0024; /**< Read by auto_return_float_field_02be95d0; meaning unknown. */
};
static_assert(offsetof(Object02be95d0, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be95d0(const Object02be95d0 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_float_field_02be95e0 reads.
 *
 */
struct Object02be95e0 {
    uint8_t unknown_0x0000[0x28];
    float value_0x0028; /**< Read by auto_return_float_field_02be95e0; meaning unknown. */
};
static_assert(offsetof(Object02be95e0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be95e0(const Object02be95e0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02be9700()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02be9710 reads.
 *
 */
struct Object02be9710 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02be9710; meaning unknown. */
};
static_assert(offsetof(Object02be9710, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be9710(Object02be9710 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_02be9720 reads.
 *
 */
struct Object02be9720 {
    uint8_t unknown_0x0000[0x14];
    uint8_t member_0x0014; /**< Read by auto_return_member_address_02be9720; meaning unknown. */
};
static_assert(offsetof(Object02be9720, member_0x0014) == 0x14);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be9720(Object02be9720 *self)
{
    return &self->member_0x0014;
}

/**
 *
 * The part of the object that auto_return_member_address_02be9730 reads.
 *
 */
struct Object02be9730 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_02be9730; meaning unknown. */
};
static_assert(offsetof(Object02be9730, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02be9730(Object02be9730 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02be9b40 reads.
 *
 */
struct Object02be9b40 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02be9b40; meaning unknown. */
};
static_assert(offsetof(Object02be9b40, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be9b40(const Object02be9b40 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_float_field_02be9e30 reads.
 *
 */
struct Object02be9e30 {
    uint8_t unknown_0x0000[0x8];
    float value_0x0008; /**< Read by auto_return_float_field_02be9e30; meaning unknown. */
};
static_assert(offsetof(Object02be9e30, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be9e30(const Object02be9e30 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_float_field_02be9e40 reads.
 *
 */
struct Object02be9e40 {
    uint8_t unknown_0x0000[0xc];
    float value_0x000c; /**< Read by auto_return_float_field_02be9e40; meaning unknown. */
};
static_assert(offsetof(Object02be9e40, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02be9e40(const Object02be9e40 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02be9e50 reads.
 *
 */
struct Object02be9e50 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_02be9e50; meaning unknown. */
};
static_assert(offsetof(Object02be9e50, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02be9e50(const Object02be9e50 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02be9e60 reads.
 *
 */
struct Object02be9e60 {
    uint8_t unknown_0x0000[0x11];
    uint8_t value_0x0011; /**< Read by auto_return_field_02be9e60; meaning unknown. */
};
static_assert(offsetof(Object02be9e60, value_0x0011) == 0x11);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02be9e60(const Object02be9e60 *self)
{
    return self->value_0x0011;
}

/**
 *
 * The part of the object that auto_return_field_02be9e70 reads.
 *
 */
struct Object02be9e70 {
    uint8_t unknown_0x0000[0x12];
    uint8_t value_0x0012; /**< Read by auto_return_field_02be9e70; meaning unknown. */
};
static_assert(offsetof(Object02be9e70, value_0x0012) == 0x12);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02be9e70(const Object02be9e70 *self)
{
    return self->value_0x0012;
}

/**
 *
 * The part of the object that auto_return_field_02be9e80 reads.
 *
 */
struct Object02be9e80 {
    uint8_t unknown_0x0000[0x13];
    uint8_t value_0x0013; /**< Read by auto_return_field_02be9e80; meaning unknown. */
};
static_assert(offsetof(Object02be9e80, value_0x0013) == 0x13);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02be9e80(const Object02be9e80 *self)
{
    return self->value_0x0013;
}

/**
 *
 * The part of the object that auto_return_field_02be9ff0 reads.
 *
 */
struct Object02be9ff0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02be9ff0; meaning unknown. */
};
static_assert(offsetof(Object02be9ff0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02be9ff0(const Object02be9ff0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_float_field_02bea3a0 reads.
 *
 */
struct Object02bea3a0 {
    uint8_t unknown_0x0000[0x8];
    float value_0x0008; /**< Read by auto_return_float_field_02bea3a0; meaning unknown. */
};
static_assert(offsetof(Object02bea3a0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02bea3a0(const Object02bea3a0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_float_field_02bea3b0 reads.
 *
 */
struct Object02bea3b0 {
    uint8_t unknown_0x0000[0xc];
    float value_0x000c; /**< Read by auto_return_float_field_02bea3b0; meaning unknown. */
};
static_assert(offsetof(Object02bea3b0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02bea3b0(const Object02bea3b0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_float_field_02bea3c0 reads.
 *
 */
struct Object02bea3c0 {
    uint8_t unknown_0x0000[0x10];
    float value_0x0010; /**< Read by auto_return_float_field_02bea3c0; meaning unknown. */
};
static_assert(offsetof(Object02bea3c0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02bea3c0(const Object02bea3c0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02bea3d0 reads.
 *
 */
struct Object02bea3d0 {
    uint8_t unknown_0x0000[0x14];
    uint8_t value_0x0014; /**< Read by auto_return_field_02bea3d0; meaning unknown. */
};
static_assert(offsetof(Object02bea3d0, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bea3d0(const Object02bea3d0 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_02bea3e0 reads.
 *
 */
struct Object02bea3e0 {
    uint8_t unknown_0x0000[0x15];
    uint8_t value_0x0015; /**< Read by auto_return_field_02bea3e0; meaning unknown. */
};
static_assert(offsetof(Object02bea3e0, value_0x0015) == 0x15);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bea3e0(const Object02bea3e0 *self)
{
    return self->value_0x0015;
}

/**
 *
 * The part of the object that auto_return_field_02bea3f0 reads.
 *
 */
struct Object02bea3f0 {
    uint8_t unknown_0x0000[0x16];
    uint8_t value_0x0016; /**< Read by auto_return_field_02bea3f0; meaning unknown. */
};
static_assert(offsetof(Object02bea3f0, value_0x0016) == 0x16);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bea3f0(const Object02bea3f0 *self)
{
    return self->value_0x0016;
}

/**
 *
 * The part of the object that auto_return_field_02bea400 reads.
 *
 */
struct Object02bea400 {
    uint8_t unknown_0x0000[0x17];
    uint8_t value_0x0017; /**< Read by auto_return_field_02bea400; meaning unknown. */
};
static_assert(offsetof(Object02bea400, value_0x0017) == 0x17);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bea400(const Object02bea400 *self)
{
    return self->value_0x0017;
}

/**
 *
 * The part of the object that auto_return_field_02bea410 reads.
 *
 */
struct Object02bea410 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_02bea410; meaning unknown. */
};
static_assert(offsetof(Object02bea410, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bea410(const Object02bea410 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02bea6a0 reads.
 *
 */
struct Object02bea6a0 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_02bea6a0; meaning unknown. */
};
static_assert(offsetof(Object02bea6a0, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bea6a0(const Object02bea6a0 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_field_02bea6b0 reads.
 *
 */
struct Object02bea6b0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02bea6b0; meaning unknown. */
};
static_assert(offsetof(Object02bea6b0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bea6b0(const Object02bea6b0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02bea6e0 reads.
 *
 */
struct Object02bea6e0 {
    uint8_t unknown_0x0000[0x24];
    uint32_t value_0x0024; /**< Read by auto_return_field_02bea6e0; meaning unknown. */
};
static_assert(offsetof(Object02bea6e0, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bea6e0(const Object02bea6e0 *self)
{
    return self->value_0x0024;
}

/**
 *
 * The part of the object that auto_return_field_02bea6f0 reads.
 *
 */
struct Object02bea6f0 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_02bea6f0; meaning unknown. */
};
static_assert(offsetof(Object02bea6f0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bea6f0(const Object02bea6f0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_02bea720 reads.
 *
 */
struct Object02bea720 {
    uint8_t unknown_0x0000[0x40];
    uint8_t member_0x0040; /**< Read by auto_return_member_address_02bea720; meaning unknown. */
};
static_assert(offsetof(Object02bea720, member_0x0040) == 0x40);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02bea720(Object02bea720 *self)
{
    return &self->member_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bea7f0()
{
}

/**
 *
 * The part of the object that auto_return_field_02bea820 reads.
 *
 */
struct Object02bea820 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02bea820; meaning unknown. */
};
static_assert(offsetof(Object02bea820, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bea820(const Object02bea820 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02bea830 reads.
 *
 */
struct Object02bea830 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02bea830; meaning unknown. */
};
static_assert(offsetof(Object02bea830, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bea830(const Object02bea830 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02beaa30()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beac30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beac40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beac50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beac60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beac70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beac80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beac90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beaca0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beacb0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beacc0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beacd0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beace0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beacf0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bead00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bead10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bead20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bead30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bead40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bead50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bead60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bead70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bead80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bead90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beada0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beadb0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beadc0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beadd0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beade0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beadf0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beae00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beae10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beae20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beae30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beae40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beae50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beae60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02beaeb0 = 0x21;

extern "C" uint32_t bb_auto_return_constant_02beaeb0()
{
    return value_02beaeb0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beafa0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beb6c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02beb700 = 0x21;

extern "C" uint32_t bb_auto_return_constant_02beb700()
{
    return value_02beb700;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02beb710()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02beb720()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02beb8b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02beb8b0()
{
    return value_02beb8b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02beb8c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02beb930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02beb9a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02beb9e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02beb9e0()
{
    return value_02beb9e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02beba70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02beba80()
{
}

/**
 *
 * The part of the object that auto_return_field_02bebb30 reads.
 *
 */
struct Object02bebb30 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02bebb30; meaning unknown. */
};
static_assert(offsetof(Object02bebb30, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bebb30(const Object02bebb30 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02bebd40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02bebd40()
{
    return value_02bebd40;
}

/**
 *
 * The part of the object that auto_return_field_02bec1c0 reads.
 *
 */
struct Object02bec1c0 {
    uint8_t unknown_0x0000[0x108];
    uint32_t value_0x0108; /**< Read by auto_return_field_02bec1c0; meaning unknown. */
};
static_assert(offsetof(Object02bec1c0, value_0x0108) == 0x108);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bec1c0(const Object02bec1c0 *self)
{
    return self->value_0x0108;
}

/**
 *
 * The part of the object that auto_return_field_02bec1d0 reads.
 *
 */
struct Object02bec1d0 {
    uint8_t unknown_0x0000[0x10c];
    uint32_t value_0x010c; /**< Read by auto_return_field_02bec1d0; meaning unknown. */
};
static_assert(offsetof(Object02bec1d0, value_0x010c) == 0x10c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bec1d0(const Object02bec1d0 *self)
{
    return self->value_0x010c;
}

/**
 *
 * The part of the object that auto_return_field_02bec1e0 reads.
 *
 */
struct Object02bec1e0 {
    uint8_t unknown_0x0000[0x110];
    uint32_t value_0x0110; /**< Read by auto_return_field_02bec1e0; meaning unknown. */
};
static_assert(offsetof(Object02bec1e0, value_0x0110) == 0x110);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bec1e0(const Object02bec1e0 *self)
{
    return self->value_0x0110;
}

/**
 *
 * The part of the object that auto_return_field_02bec1f0 reads.
 *
 */
struct Object02bec1f0 {
    uint8_t unknown_0x0000[0x114];
    uint32_t value_0x0114; /**< Read by auto_return_field_02bec1f0; meaning unknown. */
};
static_assert(offsetof(Object02bec1f0, value_0x0114) == 0x114);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bec1f0(const Object02bec1f0 *self)
{
    return self->value_0x0114;
}

/**
 *
 * The part of the object that auto_return_field_02bec200 reads.
 *
 */
struct Object02bec200 {
    uint8_t unknown_0x0000[0x11c];
    uint32_t value_0x011c; /**< Read by auto_return_field_02bec200; meaning unknown. */
};
static_assert(offsetof(Object02bec200, value_0x011c) == 0x11c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bec200(const Object02bec200 *self)
{
    return self->value_0x011c;
}

/**
 *
 * The part of the object that auto_return_float_field_02bec210 reads.
 *
 */
struct Object02bec210 {
    uint8_t unknown_0x0000[0x100];
    float value_0x0100; /**< Read by auto_return_float_field_02bec210; meaning unknown. */
};
static_assert(offsetof(Object02bec210, value_0x0100) == 0x100);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02bec210(const Object02bec210 *self)
{
    return self->value_0x0100;
}

/**
 *
 * The part of the object that auto_return_float_field_02bec220 reads.
 *
 */
struct Object02bec220 {
    uint8_t unknown_0x0000[0x104];
    float value_0x0104; /**< Read by auto_return_float_field_02bec220; meaning unknown. */
};
static_assert(offsetof(Object02bec220, value_0x0104) == 0x104);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02bec220(const Object02bec220 *self)
{
    return self->value_0x0104;
}

/**
 *
 * The part of the object that auto_return_float_field_02bec230 reads.
 *
 */
struct Object02bec230 {
    uint8_t unknown_0x0000[0x124];
    float value_0x0124; /**< Read by auto_return_float_field_02bec230; meaning unknown. */
};
static_assert(offsetof(Object02bec230, value_0x0124) == 0x124);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02bec230(const Object02bec230 *self)
{
    return self->value_0x0124;
}

/**
 *
 * The part of the object that auto_return_field_02bec240 reads.
 *
 */
struct Object02bec240 {
    uint8_t unknown_0x0000[0x118];
    uint8_t value_0x0118; /**< Read by auto_return_field_02bec240; meaning unknown. */
};
static_assert(offsetof(Object02bec240, value_0x0118) == 0x118);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02bec240(const Object02bec240 *self)
{
    return self->value_0x0118;
}

/**
 *
 * The part of the object that auto_return_field_02bec860 reads.
 *
 */
struct Object02bec860 {
    uint8_t unknown_0x0000[0x48];
    uint32_t value_0x0048; /**< Read by auto_return_field_02bec860; meaning unknown. */
};
static_assert(offsetof(Object02bec860, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02bec860(const Object02bec860 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_02becd10 reads.
 *
 */
struct Object02becd10 {
    uint8_t unknown_0x0000[0x148];
    uint64_t value_0x0148; /**< Read by auto_return_field_02becd10; meaning unknown. */
};
static_assert(offsetof(Object02becd10, value_0x0148) == 0x148);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02becd10(const Object02becd10 *self)
{
    return self->value_0x0148;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bece00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bed0f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bed100()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bed110()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bed120()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bed150()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bed160()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_float_field_02bed180 reads.
 *
 */
struct Object02bed180 {
    uint8_t unknown_0x0000[0x150];
    float value_0x0150; /**< Read by auto_return_float_field_02bed180; meaning unknown. */
};
static_assert(offsetof(Object02bed180, value_0x0150) == 0x150);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02bed180(const Object02bed180 *self)
{
    return self->value_0x0150;
}

/**
 *
 * The part of the object that auto_return_field_02bed200 reads.
 *
 */
struct Object02bed200 {
    uint8_t unknown_0x0000[0x140];
    uint64_t value_0x0140; /**< Read by auto_return_field_02bed200; meaning unknown. */
};
static_assert(offsetof(Object02bed200, value_0x0140) == 0x140);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bed200(const Object02bed200 *self)
{
    return self->value_0x0140;
}

/**
 *
 * The part of the object that auto_return_field_02bee2b0 reads.
 *
 */
struct Object02bee2b0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_02bee2b0; meaning unknown. */
};
static_assert(offsetof(Object02bee2b0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bee2b0(const Object02bee2b0 *self)
{
    return self->value_0x0028;
}
