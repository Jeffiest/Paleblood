// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_02c107b0 reads.
 *
 */
struct Object02c107b0 {
    uint8_t unknown_0x0000[0xf0];
    uint8_t member_0x00f0; /**< Read by auto_return_member_address_02c107b0; meaning unknown. */
};
static_assert(offsetof(Object02c107b0, member_0x00f0) == 0xf0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c107b0(Object02c107b0 *self)
{
    return &self->member_0x00f0;
}

/**
 *
 * The part of the object that auto_return_member_address_02c107c0 reads.
 *
 */
struct Object02c107c0 {
    uint8_t unknown_0x0000[0xf0];
    uint8_t member_0x00f0; /**< Read by auto_return_member_address_02c107c0; meaning unknown. */
};
static_assert(offsetof(Object02c107c0, member_0x00f0) == 0xf0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c107c0(Object02c107c0 *self)
{
    return &self->member_0x00f0;
}

/**
 *
 * The part of the object that auto_return_member_address_02c107d0 reads.
 *
 */
struct Object02c107d0 {
    uint8_t unknown_0x0000[0xfc];
    uint8_t member_0x00fc; /**< Read by auto_return_member_address_02c107d0; meaning unknown. */
};
static_assert(offsetof(Object02c107d0, member_0x00fc) == 0xfc);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c107d0(Object02c107d0 *self)
{
    return &self->member_0x00fc;
}

/**
 *
 * The part of the object that auto_return_member_address_02c107e0 reads.
 *
 */
struct Object02c107e0 {
    uint8_t unknown_0x0000[0x108];
    uint8_t member_0x0108; /**< Read by auto_return_member_address_02c107e0; meaning unknown. */
};
static_assert(offsetof(Object02c107e0, member_0x0108) == 0x108);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c107e0(Object02c107e0 *self)
{
    return &self->member_0x0108;
}

/**
 *
 * The part of the object that auto_return_member_address_02c107f0 reads.
 *
 */
struct Object02c107f0 {
    uint8_t unknown_0x0000[0x114];
    uint8_t member_0x0114; /**< Read by auto_return_member_address_02c107f0; meaning unknown. */
};
static_assert(offsetof(Object02c107f0, member_0x0114) == 0x114);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c107f0(Object02c107f0 *self)
{
    return &self->member_0x0114;
}

/**
 *
 * The part of the object that auto_return_float_field_02c10800 reads.
 *
 */
struct Object02c10800 {
    uint8_t unknown_0x0000[0x120];
    float value_0x0120; /**< Read by auto_return_float_field_02c10800; meaning unknown. */
};
static_assert(offsetof(Object02c10800, value_0x0120) == 0x120);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c10800(const Object02c10800 *self)
{
    return self->value_0x0120;
}

/**
 *
 * The part of the object that auto_return_field_02c10e80 reads.
 *
 */
struct Object02c10e80 {
    uint8_t unknown_0x0000[0x125];
    uint8_t value_0x0125; /**< Read by auto_return_field_02c10e80; meaning unknown. */
};
static_assert(offsetof(Object02c10e80, value_0x0125) == 0x125);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c10e80(const Object02c10e80 *self)
{
    return self->value_0x0125;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c111f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02c12530 reads.
 *
 */
struct Object02c12530 {
    uint8_t unknown_0x0000[0xf0];
    uint8_t member_0x00f0; /**< Read by auto_return_member_address_02c12530; meaning unknown. */
};
static_assert(offsetof(Object02c12530, member_0x00f0) == 0xf0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c12530(Object02c12530 *self)
{
    return &self->member_0x00f0;
}

/**
 *
 * The part of the object that auto_return_member_address_02c12540 reads.
 *
 */
struct Object02c12540 {
    uint8_t unknown_0x0000[0xf0];
    uint8_t member_0x00f0; /**< Read by auto_return_member_address_02c12540; meaning unknown. */
};
static_assert(offsetof(Object02c12540, member_0x00f0) == 0xf0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c12540(Object02c12540 *self)
{
    return &self->member_0x00f0;
}

/**
 *
 * The part of the object that auto_return_member_address_02c12550 reads.
 *
 */
struct Object02c12550 {
    uint8_t unknown_0x0000[0xfc];
    uint8_t member_0x00fc; /**< Read by auto_return_member_address_02c12550; meaning unknown. */
};
static_assert(offsetof(Object02c12550, member_0x00fc) == 0xfc);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c12550(Object02c12550 *self)
{
    return &self->member_0x00fc;
}

/**
 *
 * The part of the object that auto_return_member_address_02c12560 reads.
 *
 */
struct Object02c12560 {
    uint8_t unknown_0x0000[0x108];
    uint8_t member_0x0108; /**< Read by auto_return_member_address_02c12560; meaning unknown. */
};
static_assert(offsetof(Object02c12560, member_0x0108) == 0x108);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c12560(Object02c12560 *self)
{
    return &self->member_0x0108;
}

/**
 *
 * The part of the object that auto_return_member_address_02c12570 reads.
 *
 */
struct Object02c12570 {
    uint8_t unknown_0x0000[0x114];
    uint8_t member_0x0114; /**< Read by auto_return_member_address_02c12570; meaning unknown. */
};
static_assert(offsetof(Object02c12570, member_0x0114) == 0x114);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c12570(Object02c12570 *self)
{
    return &self->member_0x0114;
}

/**
 *
 * The part of the object that auto_return_float_field_02c12580 reads.
 *
 */
struct Object02c12580 {
    uint8_t unknown_0x0000[0x120];
    float value_0x0120; /**< Read by auto_return_float_field_02c12580; meaning unknown. */
};
static_assert(offsetof(Object02c12580, value_0x0120) == 0x120);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c12580(const Object02c12580 *self)
{
    return self->value_0x0120;
}

/**
 *
 * The part of the object that auto_return_field_02c12a10 reads.
 *
 */
struct Object02c12a10 {
    uint8_t unknown_0x0000[0x125];
    uint8_t value_0x0125; /**< Read by auto_return_field_02c12a10; meaning unknown. */
};
static_assert(offsetof(Object02c12a10, value_0x0125) == 0x125);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c12a10(const Object02c12a10 *self)
{
    return self->value_0x0125;
}

/**
 *
 * The part of the object that auto_return_member_address_02c137a0 reads.
 *
 */
struct Object02c137a0 {
    uint8_t unknown_0x0000[0x128];
    uint8_t member_0x0128; /**< Read by auto_return_member_address_02c137a0; meaning unknown. */
};
static_assert(offsetof(Object02c137a0, member_0x0128) == 0x128);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c137a0(Object02c137a0 *self)
{
    return &self->member_0x0128;
}

/**
 *
 * The part of the object that auto_return_member_address_02c137b0 reads.
 *
 */
struct Object02c137b0 {
    uint8_t unknown_0x0000[0x128];
    uint8_t member_0x0128; /**< Read by auto_return_member_address_02c137b0; meaning unknown. */
};
static_assert(offsetof(Object02c137b0, member_0x0128) == 0x128);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c137b0(Object02c137b0 *self)
{
    return &self->member_0x0128;
}

/**
 *
 * The part of the object that auto_return_member_address_02c137c0 reads.
 *
 */
struct Object02c137c0 {
    uint8_t unknown_0x0000[0x134];
    uint8_t member_0x0134; /**< Read by auto_return_member_address_02c137c0; meaning unknown. */
};
static_assert(offsetof(Object02c137c0, member_0x0134) == 0x134);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c137c0(Object02c137c0 *self)
{
    return &self->member_0x0134;
}

/**
 *
 * The part of the object that auto_return_member_address_02c137d0 reads.
 *
 */
struct Object02c137d0 {
    uint8_t unknown_0x0000[0x140];
    uint8_t member_0x0140; /**< Read by auto_return_member_address_02c137d0; meaning unknown. */
};
static_assert(offsetof(Object02c137d0, member_0x0140) == 0x140);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c137d0(Object02c137d0 *self)
{
    return &self->member_0x0140;
}

/**
 *
 * The part of the object that auto_return_member_address_02c137e0 reads.
 *
 */
struct Object02c137e0 {
    uint8_t unknown_0x0000[0x14c];
    uint8_t member_0x014c; /**< Read by auto_return_member_address_02c137e0; meaning unknown. */
};
static_assert(offsetof(Object02c137e0, member_0x014c) == 0x14c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c137e0(Object02c137e0 *self)
{
    return &self->member_0x014c;
}

/**
 *
 * The part of the object that auto_return_float_field_02c137f0 reads.
 *
 */
struct Object02c137f0 {
    uint8_t unknown_0x0000[0x158];
    float value_0x0158; /**< Read by auto_return_float_field_02c137f0; meaning unknown. */
};
static_assert(offsetof(Object02c137f0, value_0x0158) == 0x158);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c137f0(const Object02c137f0 *self)
{
    return self->value_0x0158;
}

/**
 *
 * The part of the object that auto_return_field_02c13bf0 reads.
 *
 */
struct Object02c13bf0 {
    uint8_t unknown_0x0000[0x15d];
    uint8_t value_0x015d; /**< Read by auto_return_field_02c13bf0; meaning unknown. */
};
static_assert(offsetof(Object02c13bf0, value_0x015d) == 0x15d);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c13bf0(const Object02c13bf0 *self)
{
    return self->value_0x015d;
}

/**
 *
 * The part of the object that auto_return_float_field_02c149e0 reads.
 *
 */
struct Object02c149e0 {
    uint8_t unknown_0x0000[0x4c];
    float value_0x004c; /**< Read by auto_return_float_field_02c149e0; meaning unknown. */
};
static_assert(offsetof(Object02c149e0, value_0x004c) == 0x4c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c149e0(const Object02c149e0 *self)
{
    return self->value_0x004c;
}

/**
 *
 * The part of the object that auto_return_field_02c14b10 reads.
 *
 */
struct Object02c14b10 {
    uint8_t unknown_0x0000[0x51];
    uint8_t value_0x0051; /**< Read by auto_return_field_02c14b10; meaning unknown. */
};
static_assert(offsetof(Object02c14b10, value_0x0051) == 0x51);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c14b10(const Object02c14b10 *self)
{
    return self->value_0x0051;
}

/**
 *
 * The part of the object that auto_return_member_address_02c154f0 reads.
 *
 */
struct Object02c154f0 {
    uint8_t unknown_0x0000[0xe8];
    uint8_t member_0x00e8; /**< Read by auto_return_member_address_02c154f0; meaning unknown. */
};
static_assert(offsetof(Object02c154f0, member_0x00e8) == 0xe8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c154f0(Object02c154f0 *self)
{
    return &self->member_0x00e8;
}

/**
 *
 * The part of the object that auto_return_member_address_02c15500 reads.
 *
 */
struct Object02c15500 {
    uint8_t unknown_0x0000[0xe8];
    uint8_t member_0x00e8; /**< Read by auto_return_member_address_02c15500; meaning unknown. */
};
static_assert(offsetof(Object02c15500, member_0x00e8) == 0xe8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c15500(Object02c15500 *self)
{
    return &self->member_0x00e8;
}

/**
 *
 * The part of the object that auto_return_member_address_02c15510 reads.
 *
 */
struct Object02c15510 {
    uint8_t unknown_0x0000[0xf4];
    uint8_t member_0x00f4; /**< Read by auto_return_member_address_02c15510; meaning unknown. */
};
static_assert(offsetof(Object02c15510, member_0x00f4) == 0xf4);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c15510(Object02c15510 *self)
{
    return &self->member_0x00f4;
}

/**
 *
 * The part of the object that auto_return_member_address_02c15520 reads.
 *
 */
struct Object02c15520 {
    uint8_t unknown_0x0000[0x100];
    uint8_t member_0x0100; /**< Read by auto_return_member_address_02c15520; meaning unknown. */
};
static_assert(offsetof(Object02c15520, member_0x0100) == 0x100);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c15520(Object02c15520 *self)
{
    return &self->member_0x0100;
}

/**
 *
 * The part of the object that auto_return_member_address_02c15530 reads.
 *
 */
struct Object02c15530 {
    uint8_t unknown_0x0000[0x10c];
    uint8_t member_0x010c; /**< Read by auto_return_member_address_02c15530; meaning unknown. */
};
static_assert(offsetof(Object02c15530, member_0x010c) == 0x10c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c15530(Object02c15530 *self)
{
    return &self->member_0x010c;
}

/**
 *
 * The part of the object that auto_return_float_field_02c15540 reads.
 *
 */
struct Object02c15540 {
    uint8_t unknown_0x0000[0x118];
    float value_0x0118; /**< Read by auto_return_float_field_02c15540; meaning unknown. */
};
static_assert(offsetof(Object02c15540, value_0x0118) == 0x118);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c15540(const Object02c15540 *self)
{
    return self->value_0x0118;
}

/**
 *
 * The part of the object that auto_return_field_02c15a50 reads.
 *
 */
struct Object02c15a50 {
    uint8_t unknown_0x0000[0x11d];
    uint8_t value_0x011d; /**< Read by auto_return_field_02c15a50; meaning unknown. */
};
static_assert(offsetof(Object02c15a50, value_0x011d) == 0x11d);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c15a50(const Object02c15a50 *self)
{
    return self->value_0x011d;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c1a350 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c1a350()
{
    return value_02c1a350;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1c260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1c320()
{
}

/**
 *
 * The part of the object that auto_return_float_field_02c1c420 reads.
 *
 */
struct Object02c1c420 {
    uint8_t unknown_0x0000[0x8];
    float value_0x0008; /**< Read by auto_return_float_field_02c1c420; meaning unknown. */
};
static_assert(offsetof(Object02c1c420, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c1c420(const Object02c1c420 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_02c1ce60 reads.
 *
 */
struct Object02c1ce60 {
    uint8_t unknown_0x0000[0x38];
    uint8_t member_0x0038; /**< Read by auto_return_member_address_02c1ce60; meaning unknown. */
};
static_assert(offsetof(Object02c1ce60, member_0x0038) == 0x38);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c1ce60(Object02c1ce60 *self)
{
    return &self->member_0x0038;
}

/**
 *
 * The part of the object that auto_return_float_field_02c1cf50 reads.
 *
 */
struct Object02c1cf50 {
    uint8_t unknown_0x0000[0x8];
    float value_0x0008; /**< Read by auto_return_float_field_02c1cf50; meaning unknown. */
};
static_assert(offsetof(Object02c1cf50, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c1cf50(const Object02c1cf50 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1cf70()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_float_field_02c1d760 reads.
 *
 */
struct Object02c1d760 {
    uint8_t unknown_0x0000[0xc];
    float value_0x000c; /**< Read by auto_return_float_field_02c1d760; meaning unknown. */
};
static_assert(offsetof(Object02c1d760, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c1d760(const Object02c1d760 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02c1d770 reads.
 *
 */
struct Object02c1d770 {
    uint8_t unknown_0x0000[0x10];
    uint8_t value_0x0010; /**< Read by auto_return_field_02c1d770; meaning unknown. */
};
static_assert(offsetof(Object02c1d770, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c1d770(const Object02c1d770 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_float_field_02c1dea0 reads.
 *
 */
struct Object02c1dea0 {
    uint8_t unknown_0x0000[0x10c];
    float value_0x010c; /**< Read by auto_return_float_field_02c1dea0; meaning unknown. */
};
static_assert(offsetof(Object02c1dea0, value_0x010c) == 0x10c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c1dea0(const Object02c1dea0 *self)
{
    return self->value_0x010c;
}

/**
 *
 * The part of the object that auto_return_member_address_02c1deb0 reads.
 *
 */
struct Object02c1deb0 {
    uint8_t unknown_0x0000[0x110];
    uint8_t member_0x0110; /**< Read by auto_return_member_address_02c1deb0; meaning unknown. */
};
static_assert(offsetof(Object02c1deb0, member_0x0110) == 0x110);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c1deb0(Object02c1deb0 *self)
{
    return &self->member_0x0110;
}

/**
 *
 * The part of the object that auto_return_float_field_02c1dff0 reads.
 *
 */
struct Object02c1dff0 {
    uint8_t unknown_0x0000[0x8];
    float value_0x0008; /**< Read by auto_return_float_field_02c1dff0; meaning unknown. */
};
static_assert(offsetof(Object02c1dff0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c1dff0(const Object02c1dff0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_float_field_02c1e000 reads.
 *
 */
struct Object02c1e000 {
    uint8_t unknown_0x0000[0xc];
    float value_0x000c; /**< Read by auto_return_float_field_02c1e000; meaning unknown. */
};
static_assert(offsetof(Object02c1e000, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c1e000(const Object02c1e000 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_float_field_02c1e010 reads.
 *
 */
struct Object02c1e010 {
    uint8_t unknown_0x0000[0x10];
    float value_0x0010; /**< Read by auto_return_float_field_02c1e010; meaning unknown. */
};
static_assert(offsetof(Object02c1e010, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c1e010(const Object02c1e010 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_float_field_02c1e020 reads.
 *
 */
struct Object02c1e020 {
    uint8_t unknown_0x0000[0x14];
    float value_0x0014; /**< Read by auto_return_float_field_02c1e020; meaning unknown. */
};
static_assert(offsetof(Object02c1e020, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c1e020(const Object02c1e020 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_02c1e030 reads.
 *
 */
struct Object02c1e030 {
    uint8_t unknown_0x0000[0x18];
    uint8_t value_0x0018; /**< Read by auto_return_field_02c1e030; meaning unknown. */
};
static_assert(offsetof(Object02c1e030, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c1e030(const Object02c1e030 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02c1e3e0 reads.
 *
 */
struct Object02c1e3e0 {
    uint8_t value_0x0000; /**< Read by auto_return_field_02c1e3e0; meaning unknown. */
};
static_assert(offsetof(Object02c1e3e0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e3e0(const Object02c1e3e0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_float_field_02c1e450 reads.
 *
 */
struct Object02c1e450 {
    uint8_t unknown_0x0000[0xc];
    float value_0x000c; /**< Read by auto_return_float_field_02c1e450; meaning unknown. */
};
static_assert(offsetof(Object02c1e450, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_02c1e450(const Object02c1e450 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02c1e480 reads.
 *
 */
struct Object02c1e480 {
    uint8_t unknown_0x0000[0x14];
    uint32_t value_0x0014; /**< Read by auto_return_field_02c1e480; meaning unknown. */
};
static_assert(offsetof(Object02c1e480, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e480(const Object02c1e480 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_member_address_02c1e6e0 reads.
 *
 */
struct Object02c1e6e0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t member_0x0028; /**< Read by auto_return_member_address_02c1e6e0; meaning unknown. */
};
static_assert(offsetof(Object02c1e6e0, member_0x0028) == 0x28);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c1e6e0(Object02c1e6e0 *self)
{
    return &self->member_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02c1e880 reads.
 *
 */
struct Object02c1e880 {
    uint8_t unknown_0x0000[0x14];
    uint8_t value_0x0014; /**< Read by auto_return_field_02c1e880; meaning unknown. */
};
static_assert(offsetof(Object02c1e880, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c1e880(const Object02c1e880 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_02c1e890 reads.
 *
 */
struct Object02c1e890 {
    uint8_t unknown_0x0000[0x15];
    uint8_t value_0x0015; /**< Read by auto_return_field_02c1e890; meaning unknown. */
};
static_assert(offsetof(Object02c1e890, value_0x0015) == 0x15);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c1e890(const Object02c1e890 *self)
{
    return self->value_0x0015;
}

/**
 *
 * The part of the object that auto_return_field_02c1e8a0 reads.
 *
 */
struct Object02c1e8a0 {
    uint8_t unknown_0x0000[0x16];
    uint8_t value_0x0016; /**< Read by auto_return_field_02c1e8a0; meaning unknown. */
};
static_assert(offsetof(Object02c1e8a0, value_0x0016) == 0x16);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02c1e8a0(const Object02c1e8a0 *self)
{
    return self->value_0x0016;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c1ea80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c1ea80()
{
    return value_02c1ea80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1ea90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1f490()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1f4c0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c1f720 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c1f720()
{
    return value_02c1f720;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1f9c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1fa30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1fc50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1fca0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1fd10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1fd90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1fe10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1fe80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1fef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1ff60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1ffd0()
{
}
