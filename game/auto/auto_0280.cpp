// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028002e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028002f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02800480()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02800790()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800830()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800840()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800850()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800860()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800870()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02800880 = 0x6;

extern "C" uint32_t bb_auto_return_constant_02800880()
{
    return value_02800880;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02800890 = 0x6;

extern "C" uint32_t bb_auto_return_constant_02800890()
{
    return value_02800890;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028008a0 = 0x17;

extern "C" uint32_t bb_auto_return_constant_028008a0()
{
    return value_028008a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028008c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028008c0()
{
    return value_028008c0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028008d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028008e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028008f0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_028008f0()
{
    return value_028008f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02800900 = 0x17;

extern "C" uint32_t bb_auto_return_constant_02800900()
{
    return value_02800900;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800950()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800990()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02800a10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800a20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02800a30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02800a30()
{
    return value_02800a30;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800a50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800a60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800a70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800a80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800a90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800aa0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800ab0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800b50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800b60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800b70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800b80()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02800de0 reads.
 *
 */
struct Object02800de0 {
    uint8_t unknown_0x0000[0x70];
    uint64_t value_0x0070; /**< Read by auto_return_field_02800de0; meaning unknown. */
};
static_assert(offsetof(Object02800de0, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02800de0(const Object02800de0 *self)
{
    return self->value_0x0070;
}

/**
 *
 * The part of the object that auto_return_member_address_02800eb0 reads.
 *
 */
struct Object02800eb0 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_02800eb0; meaning unknown. */
};
static_assert(offsetof(Object02800eb0, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02800eb0(Object02800eb0 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800ec0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800ed0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02800ee0 reads.
 *
 */
struct Object02800ee0 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_02800ee0; meaning unknown. */
};
static_assert(offsetof(Object02800ee0, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02800ee0(Object02800ee0 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02800f50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02800f60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02800f70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02800f70()
{
    return value_02800f70;
}

/**
 *
 * The part of the object that auto_return_member_address_02800f90 reads.
 *
 */
struct Object02800f90 {
    uint8_t unknown_0x0000[0x38];
    uint8_t member_0x0038; /**< Read by auto_return_member_address_02800f90; meaning unknown. */
};
static_assert(offsetof(Object02800f90, member_0x0038) == 0x38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02800f90(Object02800f90 *self)
{
    return &self->member_0x0038;
}

/**
 *
 * The part of the object that auto_return_member_address_02800fa0 reads.
 *
 */
struct Object02800fa0 {
    uint8_t unknown_0x0000[0x38];
    uint8_t member_0x0038; /**< Read by auto_return_member_address_02800fa0; meaning unknown. */
};
static_assert(offsetof(Object02800fa0, member_0x0038) == 0x38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02800fa0(Object02800fa0 *self)
{
    return &self->member_0x0038;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02800fe0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02800fe0()
{
    return value_02800fe0;
}

/**
 *
 * The part of the object that auto_return_field_02800ff0 reads.
 *
 */
struct Object02800ff0 {
    uint8_t unknown_0x0000[0x1d0];
    uint32_t value_0x01d0; /**< Read by auto_return_field_02800ff0; meaning unknown. */
};
static_assert(offsetof(Object02800ff0, value_0x01d0) == 0x1d0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02800ff0(const Object02800ff0 *self)
{
    return self->value_0x01d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02801000()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02801010 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02801010()
{
    return value_02801010;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801080()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801090()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02801110()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801120()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02801130 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02801130()
{
    return value_02801130;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02801150()
{
}

/**
 *
 * The part of the object that auto_return_field_02801160 reads.
 *
 */
struct Object02801160 {
    uint8_t unknown_0x0000[0x1a0];
    uint32_t value_0x01a0; /**< Read by auto_return_field_02801160; meaning unknown. */
};
static_assert(offsetof(Object02801160, value_0x01a0) == 0x1a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02801160(const Object02801160 *self)
{
    return self->value_0x01a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02801270 = 0xb;

extern "C" uint32_t bb_auto_return_constant_02801270()
{
    return value_02801270;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02801400 = 0xb;

extern "C" uint32_t bb_auto_return_constant_02801400()
{
    return value_02801400;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028018b0 = 0x1b;

extern "C" uint32_t bb_auto_return_constant_028018b0()
{
    return value_028018b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02801910 = 0x1b;

extern "C" uint32_t bb_auto_return_constant_02801910()
{
    return value_02801910;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801a30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02801a40 reads.
 *
 */
struct Object02801a40 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_02801a40; meaning unknown. */
};
static_assert(offsetof(Object02801a40, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02801a40(Object02801a40 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801a50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801a60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801a80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801a90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02801b10()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02801b40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02801b40()
{
    return value_02801b40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02801be0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801bf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02801c00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02801c00()
{
    return value_02801c00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02801c30 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02801c30()
{
    return value_02801c30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02801d60 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02801d60()
{
    return value_02801d60;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801e80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801ea0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801eb0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801ed0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02801ee0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02801f60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02801f90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02801f90()
{
    return value_02801f90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02802030()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802040()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02802050 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02802050()
{
    return value_02802050;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802240()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802250()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02802260 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02802260()
{
    return value_02802260;
}

/**
 *
 * The part of the object that auto_return_field_02802270 reads.
 *
 */
struct Object02802270 {
    uint8_t unknown_0x0000[0xa8];
    uint32_t value_0x00a8; /**< Read by auto_return_field_02802270; meaning unknown. */
};
static_assert(offsetof(Object02802270, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02802270(const Object02802270 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802420()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802430()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02802440 reads.
 *
 */
struct Object02802440 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_02802440; meaning unknown. */
};
static_assert(offsetof(Object02802440, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02802440(Object02802440 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802450()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802470()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802480()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02802490()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028024c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028024d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02802570()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802580()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02802590 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02802590()
{
    return value_02802590;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028025d0 = 0x4;

extern "C" uint32_t bb_auto_return_constant_028025d0()
{
    return value_028025d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028025e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028025e0()
{
    return value_028025e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028025f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028025f0()
{
    return value_028025f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02802760 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02802760()
{
    return value_02802760;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028028c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028028d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028028f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802910()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802920()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02802930()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802960()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802970()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02802a10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02802a20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02802a30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02802a30()
{
    return value_02802a30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02802a70()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02802a80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02802a80()
{
    return value_02802a80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02802a90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02802a90()
{
    return value_02802a90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02802af0 = 0xd;

extern "C" uint32_t bb_auto_return_constant_02802af0()
{
    return value_02802af0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02802bc0 = 0xd;

extern "C" uint32_t bb_auto_return_constant_02802bc0()
{
    return value_02802bc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02802d30 = 0x12;

extern "C" uint32_t bb_auto_return_constant_02802d30()
{
    return value_02802d30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02802d90 = 0x12;

extern "C" uint32_t bb_auto_return_constant_02802d90()
{
    return value_02802d90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02802e70 = 0x11;

extern "C" uint32_t bb_auto_return_constant_02802e70()
{
    return value_02802e70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02802ed0 = 0x11;

extern "C" uint32_t bb_auto_return_constant_02802ed0()
{
    return value_02802ed0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02802fb0 = 0x14;

extern "C" uint32_t bb_auto_return_constant_02802fb0()
{
    return value_02802fb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803010 = 0x14;

extern "C" uint32_t bb_auto_return_constant_02803010()
{
    return value_02803010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028031c0 = 0x1a;

extern "C" uint32_t bb_auto_return_constant_028031c0()
{
    return value_028031c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803290 = 0x1a;

extern "C" uint32_t bb_auto_return_constant_02803290()
{
    return value_02803290;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028032e0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_028032e0()
{
    return value_028032e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803340 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02803340()
{
    return value_02803340;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028033a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028034d0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_028034d0()
{
    return value_028034d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803590 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02803590()
{
    return value_02803590;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028036b0 = 0x9;

extern "C" uint32_t bb_auto_return_constant_028036b0()
{
    return value_028036b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803790 = 0x9;

extern "C" uint32_t bb_auto_return_constant_02803790()
{
    return value_02803790;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028037e0 = 0xa;

extern "C" uint32_t bb_auto_return_constant_028037e0()
{
    return value_028037e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803840 = 0xa;

extern "C" uint32_t bb_auto_return_constant_02803840()
{
    return value_02803840;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803890 = 0x23;

extern "C" uint32_t bb_auto_return_constant_02803890()
{
    return value_02803890;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028038f0 = 0x23;

extern "C" uint32_t bb_auto_return_constant_028038f0()
{
    return value_028038f0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02803950()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803b20 = 0x1e;

extern "C" uint32_t bb_auto_return_constant_02803b20()
{
    return value_02803b20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803be0 = 0x1e;

extern "C" uint32_t bb_auto_return_constant_02803be0()
{
    return value_02803be0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803d80 = 0x2c;

extern "C" uint32_t bb_auto_return_constant_02803d80()
{
    return value_02803d80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803eb0 = 0x2c;

extern "C" uint32_t bb_auto_return_constant_02803eb0()
{
    return value_02803eb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803f50 = 0x2b;

extern "C" uint32_t bb_auto_return_constant_02803f50()
{
    return value_02803f50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803f60 = 0x2b;

extern "C" uint32_t bb_auto_return_constant_02803f60()
{
    return value_02803f60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803f70 = 0x25;

extern "C" uint32_t bb_auto_return_constant_02803f70()
{
    return value_02803f70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803f80 = 0x25;

extern "C" uint32_t bb_auto_return_constant_02803f80()
{
    return value_02803f80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803f90 = 0x26;

extern "C" uint32_t bb_auto_return_constant_02803f90()
{
    return value_02803f90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803fa0 = 0x26;

extern "C" uint32_t bb_auto_return_constant_02803fa0()
{
    return value_02803fa0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803fb0 = 0x27;

extern "C" uint32_t bb_auto_return_constant_02803fb0()
{
    return value_02803fb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803fc0 = 0x27;

extern "C" uint32_t bb_auto_return_constant_02803fc0()
{
    return value_02803fc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803fd0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_02803fd0()
{
    return value_02803fd0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803fe0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_02803fe0()
{
    return value_02803fe0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02803ff0 = 0x29;

extern "C" uint32_t bb_auto_return_constant_02803ff0()
{
    return value_02803ff0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02804000 = 0x29;

extern "C" uint32_t bb_auto_return_constant_02804000()
{
    return value_02804000;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02804010 = 0x2a;

extern "C" uint32_t bb_auto_return_constant_02804010()
{
    return value_02804010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02804020 = 0x2a;

extern "C" uint32_t bb_auto_return_constant_02804020()
{
    return value_02804020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02804270 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02804270()
{
    return value_02804270;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028042a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028042b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028042e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028042f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804340()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804350()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804380()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804390()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028043a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_028043b0()
{
}

/**
 *
 * The part of the object that auto_return_field_028043c0 reads.
 *
 */
struct Object028043c0 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_028043c0; meaning unknown. */
};
static_assert(offsetof(Object028043c0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_028043c0(const Object028043c0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02804660()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02804670()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_028046d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02804a10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02804a20 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02804a20()
{
    return value_02804a20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02804ae0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02804c70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02805190()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02805720 reads.
 *
 */
struct Object02805720 {
    uint8_t unknown_0x0000[0x78];
    uint8_t value_0x0078; /**< Read by auto_return_field_02805720; meaning unknown. */
};
static_assert(offsetof(Object02805720, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02805720(const Object02805720 *self)
{
    return self->value_0x0078;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02805730()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02805740 reads.
 *
 */
struct Object02805740 {
    uint8_t unknown_0x0000[0x60];
    uint64_t value_0x0060; /**< Read by auto_return_field_02805740; meaning unknown. */
};
static_assert(offsetof(Object02805740, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02805740(const Object02805740 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_02805760 reads.
 *
 */
struct Object02805760 {
    uint8_t unknown_0x0000[0x68];
    uint32_t value_0x0068; /**< Read by auto_return_field_02805760; meaning unknown. */
};
static_assert(offsetof(Object02805760, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02805760(const Object02805760 *self)
{
    return self->value_0x0068;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02805770()
{
}

/**
 *
 * The part of the object that auto_return_field_02805790 reads.
 *
 */
struct Object02805790 {
    uint8_t unknown_0x0000[0x11];
    uint8_t value_0x0011; /**< Read by auto_return_field_02805790; meaning unknown. */
};
static_assert(offsetof(Object02805790, value_0x0011) == 0x11);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02805790(const Object02805790 *self)
{
    return self->value_0x0011;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028059c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028059c0()
{
    return value_028059c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02805a70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02805a70()
{
    return value_02805a70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02805b30 = 0x24;

extern "C" uint32_t bb_auto_return_constant_02805b30()
{
    return value_02805b30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02805b90 = 0x24;

extern "C" uint32_t bb_auto_return_constant_02805b90()
{
    return value_02805b90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02805da0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02805da0()
{
    return value_02805da0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02805e50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02805e50()
{
    return value_02805e50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02806130 = 0xc;

extern "C" uint32_t bb_auto_return_constant_02806130()
{
    return value_02806130;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02806230 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02806230()
{
    return value_02806230;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02806310 = 0xc;

extern "C" uint32_t bb_auto_return_constant_02806310()
{
    return value_02806310;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02806350 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02806350()
{
    return value_02806350;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028066d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028066d0()
{
    return value_028066d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028067e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028067e0()
{
    return value_028067e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02806ba0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02806ba0()
{
    return value_02806ba0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02806cf0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02806cf0()
{
    return value_02806cf0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02807070 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02807070()
{
    return value_02807070;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02807160 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02807160()
{
    return value_02807160;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028074d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028074d0()
{
    return value_028074d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028075e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028075e0()
{
    return value_028075e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02807710()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028079d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028079d0()
{
    return value_028079d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02807ac0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02807ac0()
{
    return value_02807ac0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02807e80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02807e80()
{
    return value_02807e80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02807f70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02807f70()
{
    return value_02807f70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808240 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808240()
{
    return value_02808240;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028082f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028082f0()
{
    return value_028082f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028085d0 = 0x15;

extern "C" uint32_t bb_auto_return_constant_028085d0()
{
    return value_028085d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808610 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808610()
{
    return value_02808610;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028086f0 = 0x15;

extern "C" uint32_t bb_auto_return_constant_028086f0()
{
    return value_028086f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808730 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808730()
{
    return value_02808730;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808a80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808a80()
{
    return value_02808a80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808b70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808b70()
{
    return value_02808b70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808e60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808e60()
{
    return value_02808e60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02808f10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02808f10()
{
    return value_02808f10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028091b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028091b0()
{
    return value_028091b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02809260 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02809260()
{
    return value_02809260;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02809540 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02809540()
{
    return value_02809540;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02809630 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02809630()
{
    return value_02809630;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02809740 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02809740()
{
    return value_02809740;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_028097a0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_028097a0()
{
    return value_028097a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_028099b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_028099b0()
{
    return value_028099b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02809a60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02809a60()
{
    return value_02809a60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02809ce0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02809ce0()
{
    return value_02809ce0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02809d90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02809d90()
{
    return value_02809d90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280a070 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280a070()
{
    return value_0280a070;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280a160 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280a160()
{
    return value_0280a160;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0280a400 = 0x16;

extern "C" uint32_t bb_auto_return_constant_0280a400()
{
    return value_0280a400;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280a440 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280a440()
{
    return value_0280a440;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0280a4c0 = 0x16;

extern "C" uint32_t bb_auto_return_constant_0280a4c0()
{
    return value_0280a4c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280a500 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280a500()
{
    return value_0280a500;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280a780 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280a780()
{
    return value_0280a780;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280a830 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280a830()
{
    return value_0280a830;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280ab40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280ab40()
{
    return value_0280ab40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280abf0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280abf0()
{
    return value_0280abf0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0280acb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0280ad50 = 0xf;

extern "C" uint32_t bb_auto_return_constant_0280ad50()
{
    return value_0280ad50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0280adb0 = 0xf;

extern "C" uint32_t bb_auto_return_constant_0280adb0()
{
    return value_0280adb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280afc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280afc0()
{
    return value_0280afc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280b070 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280b070()
{
    return value_0280b070;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280b380 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280b380()
{
    return value_0280b380;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280b430 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280b430()
{
    return value_0280b430;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280b720 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280b720()
{
    return value_0280b720;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280b7b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280b7b0()
{
    return value_0280b7b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280bc70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280bc70()
{
    return value_0280bc70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280bda0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280bda0()
{
    return value_0280bda0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280c1d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280c1d0()
{
    return value_0280c1d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280c280 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280c280()
{
    return value_0280c280;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280c500 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280c500()
{
    return value_0280c500;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280c5b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280c5b0()
{
    return value_0280c5b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280c8c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280c8c0()
{
    return value_0280c8c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280c970 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280c970()
{
    return value_0280c970;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280cd10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280cd10()
{
    return value_0280cd10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280ce80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280ce80()
{
    return value_0280ce80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0280d010 = 0x18;

extern "C" uint32_t bb_auto_return_constant_0280d010()
{
    return value_0280d010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0280d070 = 0x18;

extern "C" uint32_t bb_auto_return_constant_0280d070()
{
    return value_0280d070;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280d280 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280d280()
{
    return value_0280d280;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280d330 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280d330()
{
    return value_0280d330;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280d610 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280d610()
{
    return value_0280d610;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280d700 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280d700()
{
    return value_0280d700;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0280d880 = 0x1f;

extern "C" uint32_t bb_auto_return_constant_0280d880()
{
    return value_0280d880;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0280d920 = 0x1f;

extern "C" uint32_t bb_auto_return_constant_0280d920()
{
    return value_0280d920;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280db90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280db90()
{
    return value_0280db90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280dc80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280dc80()
{
    return value_0280dc80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280dfd0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280dfd0()
{
    return value_0280dfd0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280e0e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280e0e0()
{
    return value_0280e0e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280e460 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280e460()
{
    return value_0280e460;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280e510 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280e510()
{
    return value_0280e510;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280e870 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280e870()
{
    return value_0280e870;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0280e920 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0280e920()
{
    return value_0280e920;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0280e9b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0280eae0()
{
}
