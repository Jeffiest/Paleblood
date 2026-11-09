// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02aa0060()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02aa0070()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02aa00c0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02aa00c0()
{
    return value_02aa00c0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02aa00d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02aa00e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02aa0190()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02aa01a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa01b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa01b0()
{
    return value_02aa01b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa01c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa01c0()
{
    return value_02aa01c0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02aa01d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02aa0200 reads.
 *
 */
struct Object02aa0200 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02aa0200; meaning unknown. */
};
static_assert(offsetof(Object02aa0200, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aa0200(const Object02aa0200 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa0e90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa0e90()
{
    return value_02aa0e90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa0ea0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa0ea0()
{
    return value_02aa0ea0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa0eb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa0eb0()
{
    return value_02aa0eb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa0ec0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa0ec0()
{
    return value_02aa0ec0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa14f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa14f0()
{
    return value_02aa14f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa1500 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa1500()
{
    return value_02aa1500;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa1510 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa1510()
{
    return value_02aa1510;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa1520 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa1520()
{
    return value_02aa1520;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa1530 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa1530()
{
    return value_02aa1530;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa1b00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa1b00()
{
    return value_02aa1b00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa1b10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa1b10()
{
    return value_02aa1b10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa1b20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa1b20()
{
    return value_02aa1b20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa1b30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa1b30()
{
    return value_02aa1b30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa2100 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa2100()
{
    return value_02aa2100;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa2110 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa2110()
{
    return value_02aa2110;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa2120 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa2120()
{
    return value_02aa2120;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02aa2130 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02aa2130()
{
    return value_02aa2130;
}

/**
 *
 * The part of the object that auto_return_member_address_02aa2230 reads.
 *
 */
struct Object02aa2230 {
    uint8_t unknown_0x0000[0x38];
    uint8_t member_0x0038; /**< Read by auto_return_member_address_02aa2230; meaning unknown. */
};
static_assert(offsetof(Object02aa2230, member_0x0038) == 0x38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02aa2230(Object02aa2230 *self)
{
    return &self->member_0x0038;
}

/**
 *
 * The part of the object that auto_return_member_address_02aa2240 reads.
 *
 */
struct Object02aa2240 {
    uint8_t unknown_0x0000[0x38];
    uint8_t member_0x0038; /**< Read by auto_return_member_address_02aa2240; meaning unknown. */
};
static_assert(offsetof(Object02aa2240, member_0x0038) == 0x38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02aa2240(Object02aa2240 *self)
{
    return &self->member_0x0038;
}

/**
 *
 * The part of the object that auto_return_member_address_02aa2250 reads.
 *
 */
struct Object02aa2250 {
    uint8_t unknown_0x0000[0x38];
    uint8_t member_0x0038; /**< Read by auto_return_member_address_02aa2250; meaning unknown. */
};
static_assert(offsetof(Object02aa2250, member_0x0038) == 0x38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02aa2250(Object02aa2250 *self)
{
    return &self->member_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_02aa2260 reads.
 *
 */
struct Object02aa2260 {
    uint8_t unknown_0x0000[0x70];
    uint64_t value_0x0070; /**< Read by auto_return_field_02aa2260; meaning unknown. */
};
static_assert(offsetof(Object02aa2260, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aa2260(const Object02aa2260 *self)
{
    return self->value_0x0070;
}

/**
 *
 * The part of the object that auto_return_field_02aa2270 reads.
 *
 */
struct Object02aa2270 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_02aa2270; meaning unknown. */
};
static_assert(offsetof(Object02aa2270, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aa2270(const Object02aa2270 *self)
{
    return self->value_0x0068;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02aa2430()
{
}

/**
 *
 * The part of the object that auto_return_field_02aa24e0 reads.
 *
 */
struct Object02aa24e0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_02aa24e0; meaning unknown. */
};
static_assert(offsetof(Object02aa24e0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02aa24e0(const Object02aa24e0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02aa24f0 reads.
 *
 */
struct Object02aa24f0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02aa24f0; meaning unknown. */
};
static_assert(offsetof(Object02aa24f0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aa24f0(const Object02aa24f0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02aa2500 reads.
 *
 */
struct Object02aa2500 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02aa2500; meaning unknown. */
};
static_assert(offsetof(Object02aa2500, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aa2500(const Object02aa2500 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02aa2590()
{
}

/**
 *
 * The part of the object that auto_return_field_02aa3e90 reads.
 *
 */
struct Object02aa3e90 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02aa3e90; meaning unknown. */
};
static_assert(offsetof(Object02aa3e90, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02aa3e90(const Object02aa3e90 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_member_address_02aa4b70 reads.
 *
 */
struct Object02aa4b70 {
    uint8_t unknown_0x0000[0x38];
    uint8_t member_0x0038; /**< Read by auto_return_member_address_02aa4b70; meaning unknown. */
};
static_assert(offsetof(Object02aa4b70, member_0x0038) == 0x38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02aa4b70(Object02aa4b70 *self)
{
    return &self->member_0x0038;
}

/**
 *
 * The part of the object that auto_return_member_address_02aa4b80 reads.
 *
 */
struct Object02aa4b80 {
    uint8_t unknown_0x0000[0x38];
    uint8_t member_0x0038; /**< Read by auto_return_member_address_02aa4b80; meaning unknown. */
};
static_assert(offsetof(Object02aa4b80, member_0x0038) == 0x38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02aa4b80(Object02aa4b80 *self)
{
    return &self->member_0x0038;
}

/**
 *
 * The part of the object that auto_return_member_address_02aa4d80 reads.
 *
 */
struct Object02aa4d80 {
    uint8_t unknown_0x0000[0x38];
    uint8_t member_0x0038; /**< Read by auto_return_member_address_02aa4d80; meaning unknown. */
};
static_assert(offsetof(Object02aa4d80, member_0x0038) == 0x38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02aa4d80(Object02aa4d80 *self)
{
    return &self->member_0x0038;
}

/**
 *
 * The part of the object that auto_return_member_address_02aa4d90 reads.
 *
 */
struct Object02aa4d90 {
    uint8_t unknown_0x0000[0x38];
    uint8_t member_0x0038; /**< Read by auto_return_member_address_02aa4d90; meaning unknown. */
};
static_assert(offsetof(Object02aa4d90, member_0x0038) == 0x38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02aa4d90(Object02aa4d90 *self)
{
    return &self->member_0x0038;
}

/**
 *
 * The part of the object that auto_return_float_field_02aa4e70 reads.
 *
 */
struct Object02aa4e70 {
    float value_0x0000; /**< Read by auto_return_float_field_02aa4e70; meaning unknown. */
};
static_assert(offsetof(Object02aa4e70, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02aa4e70(const Object02aa4e70 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_02aa4e80 reads.
 *
 */
struct Object02aa4e80 {
    uint8_t unknown_0x0000[0x5];
    uint8_t value_0x0005; /**< Read by auto_return_field_02aa4e80; meaning unknown. */
};
static_assert(offsetof(Object02aa4e80, value_0x0005) == 0x5);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02aa4e80(const Object02aa4e80 *self)
{
    return self->value_0x0005;
}

/**
 *
 * The part of the object that auto_return_field_02aa4e90 reads.
 *
 */
struct Object02aa4e90 {
    uint8_t unknown_0x0000[0x4];
    uint8_t value_0x0004; /**< Read by auto_return_field_02aa4e90; meaning unknown. */
};
static_assert(offsetof(Object02aa4e90, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02aa4e90(const Object02aa4e90 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_02aa4ea0 reads.
 *
 */
struct Object02aa4ea0 {
    uint8_t unknown_0x0000[0x6];
    uint8_t value_0x0006; /**< Read by auto_return_field_02aa4ea0; meaning unknown. */
};
static_assert(offsetof(Object02aa4ea0, value_0x0006) == 0x6);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02aa4ea0(const Object02aa4ea0 *self)
{
    return self->value_0x0006;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02aa6650()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02aa6af0 reads.
 *
 */
struct Object02aa6af0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02aa6af0; meaning unknown. */
};
static_assert(offsetof(Object02aa6af0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aa6af0(const Object02aa6af0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02aa7100 reads.
 *
 */
struct Object02aa7100 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02aa7100; meaning unknown. */
};
static_assert(offsetof(Object02aa7100, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aa7100(const Object02aa7100 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02aa7110 reads.
 *
 */
struct Object02aa7110 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_02aa7110; meaning unknown. */
};
static_assert(offsetof(Object02aa7110, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02aa7110(const Object02aa7110 *self)
{
    return self->value_0x001c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02aa7c10()
{
}

/**
 *
 * The part of the object that auto_return_field_02aa7cf0 reads.
 *
 */
struct Object02aa7cf0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02aa7cf0; meaning unknown. */
};
static_assert(offsetof(Object02aa7cf0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aa7cf0(const Object02aa7cf0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02aa7d00 reads.
 *
 */
struct Object02aa7d00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02aa7d00; meaning unknown. */
};
static_assert(offsetof(Object02aa7d00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02aa7d00(const Object02aa7d00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02aa7d50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02aa7ea0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02aa7ea0()
{
    return value_02aa7ea0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02aa93d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02aa94b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02aa94d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02aab7e0()
{
}
