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
