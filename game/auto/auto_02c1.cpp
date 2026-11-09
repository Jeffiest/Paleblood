// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c10280 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c10280()
{
    return value_02c10280;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c10730()
{
}

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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c10810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c10e60()
{
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
extern "C" void bb_auto_empty_02c10e90()
{
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c12470 = 0x5;

extern "C" uint32_t bb_auto_return_constant_02c12470()
{
    return value_02c12470;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c124a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c12520()
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c12590()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c125a0()
{
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c13380 = 0x6;

extern "C" uint32_t bb_auto_return_constant_02c13380()
{
    return value_02c13380;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c13710()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c13790()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c13cc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c13cd0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c14930 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02c14930()
{
    return value_02c14930;
}

/**
 *
 * The part of the object that auto_return_member_address_02c14990 reads.
 *
 */
struct Object02c14990 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t member_0x001c; /**< Read by auto_return_member_address_02c14990; meaning unknown. */
};
static_assert(offsetof(Object02c14990, member_0x001c) == 0x1c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c14990(Object02c14990 *self)
{
    return &self->member_0x001c;
}

/**
 *
 * The part of the object that auto_return_member_address_02c149a0 reads.
 *
 */
struct Object02c149a0 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t member_0x001c; /**< Read by auto_return_member_address_02c149a0; meaning unknown. */
};
static_assert(offsetof(Object02c149a0, member_0x001c) == 0x1c);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c149a0(Object02c149a0 *self)
{
    return &self->member_0x001c;
}

/**
 *
 * The part of the object that auto_return_member_address_02c149b0 reads.
 *
 */
struct Object02c149b0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t member_0x0028; /**< Read by auto_return_member_address_02c149b0; meaning unknown. */
};
static_assert(offsetof(Object02c149b0, member_0x0028) == 0x28);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c149b0(Object02c149b0 *self)
{
    return &self->member_0x0028;
}

/**
 *
 * The part of the object that auto_return_member_address_02c149c0 reads.
 *
 */
struct Object02c149c0 {
    uint8_t unknown_0x0000[0x34];
    uint8_t member_0x0034; /**< Read by auto_return_member_address_02c149c0; meaning unknown. */
};
static_assert(offsetof(Object02c149c0, member_0x0034) == 0x34);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c149c0(Object02c149c0 *self)
{
    return &self->member_0x0034;
}

/**
 *
 * The part of the object that auto_return_member_address_02c149d0 reads.
 *
 */
struct Object02c149d0 {
    uint8_t unknown_0x0000[0x40];
    uint8_t member_0x0040; /**< Read by auto_return_member_address_02c149d0; meaning unknown. */
};
static_assert(offsetof(Object02c149d0, member_0x0040) == 0x40);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c149d0(Object02c149d0 *self)
{
    return &self->member_0x0040;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c149f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c14a40()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c14ba0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c14bb0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c15220 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02c15220()
{
    return value_02c15220;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c15470()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c15550()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c15cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c15d00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c16e70()
{
}

/**
 *
 * The part of the object that auto_return_field_02c16e80 reads.
 *
 */
struct Object02c16e80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c16e80; meaning unknown. */
};
static_assert(offsetof(Object02c16e80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c16e80(const Object02c16e80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_02c16e90 reads.
 *
 */
struct Object02c16e90 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_02c16e90; meaning unknown. */
};
static_assert(offsetof(Object02c16e90, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c16e90(const Object02c16e90 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_02c16ea0 reads.
 *
 */
struct Object02c16ea0 {
    uint8_t unknown_0x0000[0x58];
    uint64_t value_0x0058; /**< Read by auto_return_field_02c16ea0; meaning unknown. */
};
static_assert(offsetof(Object02c16ea0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c16ea0(const Object02c16ea0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02c172c0 reads.
 *
 */
struct Object02c172c0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02c172c0; meaning unknown. */
};
static_assert(offsetof(Object02c172c0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c172c0(const Object02c172c0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c17e30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c192c0 reads.
 *
 */
struct Object02c192c0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c192c0; meaning unknown. */
};
static_assert(offsetof(Object02c192c0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c192c0(const Object02c192c0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c19bc0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c19bd0 reads.
 *
 */
struct Object02c19bd0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c19bd0; meaning unknown. */
};
static_assert(offsetof(Object02c19bd0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c19bd0(const Object02c19bd0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02c19be0 reads.
 *
 */
struct Object02c19be0 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02c19be0; meaning unknown. */
};
static_assert(offsetof(Object02c19be0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c19be0(const Object02c19be0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1a330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1a340()
{
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
 * The part of the object that auto_return_field_02c1a4a0 reads.
 *
 */
struct Object02c1a4a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c1a4a0; meaning unknown. */
};
static_assert(offsetof(Object02c1a4a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c1a4a0(const Object02c1a4a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c1a4b0 reads.
 *
 */
struct Object02c1a4b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c1a4b0; meaning unknown. */
};
static_assert(offsetof(Object02c1a4b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c1a4b0(const Object02c1a4b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1a500()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1a650 = 0x160;

extern "C" uint32_t bb_auto_return_constant_02c1a650()
{
    return value_02c1a650;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1b780 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02c1b780()
{
    return value_02c1b780;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1bca0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c1bca0()
{
    return value_02c1bca0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1c210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1c220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1c230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1c240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1c250()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1c6f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1cd70()
{
}

/**
 *
 * The part of the object that auto_return_field_02c1ce10 reads.
 *
 */
struct Object02c1ce10 {
    uint32_t value_0x0000; /**< Read by auto_return_field_02c1ce10; meaning unknown. */
};
static_assert(offsetof(Object02c1ce10, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1ce10(const Object02c1ce10 *self)
{
    return self->value_0x0000;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1cf30()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1cf40()
{
    return 0;
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
extern "C" uint64_t bb_auto_return_zero_02c1cf60()
{
    return 0;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1d0c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1d0d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1d6c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c1d700 reads.
 *
 */
struct Object02c1d700 {
    uint8_t unknown_0x0000[0x8];
    uint16_t value_0x0008; /**< Read by auto_return_field_02c1d700; meaning unknown. */
};
static_assert(offsetof(Object02c1d700, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1d700(const Object02c1d700 *self)
{
    return self->value_0x0008;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1d8c0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02c1d8c0()
{
    return value_02c1d8c0;
}

/**
 *
 * The part of the object that auto_return_field_02c1de80 reads.
 *
 */
struct Object02c1de80 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c1de80; meaning unknown. */
};
static_assert(offsetof(Object02c1de80, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1de80(const Object02c1de80 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_02c1de90 reads.
 *
 */
struct Object02c1de90 {
    uint8_t unknown_0x0000[0xc];
    uint8_t member_0x000c; /**< Read by auto_return_member_address_02c1de90; meaning unknown. */
};
static_assert(offsetof(Object02c1de90, member_0x000c) == 0xc);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c1de90(Object02c1de90 *self)
{
    return &self->member_0x000c;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1df90()
{
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
 * The part of the object that auto_return_field_02c1e3f0 reads.
 *
 */
struct Object02c1e3f0 {
    uint8_t unknown_0x0000[0x2];
    uint16_t value_0x0002; /**< Read by auto_return_field_02c1e3f0; meaning unknown. */
};
static_assert(offsetof(Object02c1e3f0, value_0x0002) == 0x2);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e3f0(const Object02c1e3f0 *self)
{
    return self->value_0x0002;
}

/**
 *
 * The part of the object that auto_return_field_02c1e400 reads.
 *
 */
struct Object02c1e400 {
    uint8_t unknown_0x0000[0x4];
    uint8_t value_0x0004; /**< Read by auto_return_field_02c1e400; meaning unknown. */
};
static_assert(offsetof(Object02c1e400, value_0x0004) == 0x4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e400(const Object02c1e400 *self)
{
    return self->value_0x0004;
}

/**
 *
 * The part of the object that auto_return_field_02c1e410 reads.
 *
 */
struct Object02c1e410 {
    uint8_t unknown_0x0000[0x6];
    uint16_t value_0x0006; /**< Read by auto_return_field_02c1e410; meaning unknown. */
};
static_assert(offsetof(Object02c1e410, value_0x0006) == 0x6);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e410(const Object02c1e410 *self)
{
    return self->value_0x0006;
}

/**
 *
 * The part of the object that auto_return_field_02c1e420 reads.
 *
 */
struct Object02c1e420 {
    uint8_t unknown_0x0000[0x8];
    uint8_t value_0x0008; /**< Read by auto_return_field_02c1e420; meaning unknown. */
};
static_assert(offsetof(Object02c1e420, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e420(const Object02c1e420 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02c1e430 reads.
 *
 */
struct Object02c1e430 {
    uint8_t unknown_0x0000[0x9];
    uint8_t value_0x0009; /**< Read by auto_return_field_02c1e430; meaning unknown. */
};
static_assert(offsetof(Object02c1e430, value_0x0009) == 0x9);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e430(const Object02c1e430 *self)
{
    return self->value_0x0009;
}

/**
 *
 * The part of the object that auto_return_field_02c1e440 reads.
 *
 */
struct Object02c1e440 {
    uint8_t unknown_0x0000[0xa];
    uint8_t value_0x000a; /**< Read by auto_return_field_02c1e440; meaning unknown. */
};
static_assert(offsetof(Object02c1e440, value_0x000a) == 0xa);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e440(const Object02c1e440 *self)
{
    return self->value_0x000a;
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
 * The part of the object that auto_return_field_02c1e680 reads.
 *
 */
struct Object02c1e680 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c1e680; meaning unknown. */
};
static_assert(offsetof(Object02c1e680, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e680(const Object02c1e680 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02c1e690 reads.
 *
 */
struct Object02c1e690 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02c1e690; meaning unknown. */
};
static_assert(offsetof(Object02c1e690, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e690(const Object02c1e690 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02c1e6a0 reads.
 *
 */
struct Object02c1e6a0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02c1e6a0; meaning unknown. */
};
static_assert(offsetof(Object02c1e6a0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e6a0(const Object02c1e6a0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02c1e6b0 reads.
 *
 */
struct Object02c1e6b0 {
    uint8_t unknown_0x0000[0x14];
    uint8_t value_0x0014; /**< Read by auto_return_field_02c1e6b0; meaning unknown. */
};
static_assert(offsetof(Object02c1e6b0, value_0x0014) == 0x14);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e6b0(const Object02c1e6b0 *self)
{
    return self->value_0x0014;
}

/**
 *
 * The part of the object that auto_return_field_02c1e6c0 reads.
 *
 */
struct Object02c1e6c0 {
    uint8_t unknown_0x0000[0x16];
    uint16_t value_0x0016; /**< Read by auto_return_field_02c1e6c0; meaning unknown. */
};
static_assert(offsetof(Object02c1e6c0, value_0x0016) == 0x16);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e6c0(const Object02c1e6c0 *self)
{
    return self->value_0x0016;
}

/**
 *
 * The part of the object that auto_return_member_address_02c1e6d0 reads.
 *
 */
struct Object02c1e6d0 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_02c1e6d0; meaning unknown. */
};
static_assert(offsetof(Object02c1e6d0, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02c1e6d0(Object02c1e6d0 *self)
{
    return &self->member_0x0018;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1e7c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02c1e850 reads.
 *
 */
struct Object02c1e850 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_02c1e850; meaning unknown. */
};
static_assert(offsetof(Object02c1e850, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e850(const Object02c1e850 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02c1e860 reads.
 *
 */
struct Object02c1e860 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02c1e860; meaning unknown. */
};
static_assert(offsetof(Object02c1e860, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e860(const Object02c1e860 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02c1e870 reads.
 *
 */
struct Object02c1e870 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02c1e870; meaning unknown. */
};
static_assert(offsetof(Object02c1e870, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1e870(const Object02c1e870 *self)
{
    return self->value_0x0010;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1ee10 = 0x4c;

extern "C" uint32_t bb_auto_return_constant_02c1ee10()
{
    return value_02c1ee10;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1ee30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1f050()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1f470()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1f480()
{
    return 0;
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1f4e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1f5f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1f6a0 = 0x4b;

extern "C" uint32_t bb_auto_return_constant_02c1f6a0()
{
    return value_02c1f6a0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1f6b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1f6c0 = 0x31;

extern "C" uint32_t bb_auto_return_constant_02c1f6c0()
{
    return value_02c1f6c0;
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
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1fa50()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1fa60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1fa70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1fa80 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02c1fa80()
{
    return value_02c1fa80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1fa90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1faa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1fab0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c1fab0()
{
    return value_02c1fab0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1fac0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1fad0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1fae0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02c1fae0()
{
    return value_02c1fae0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c1faf0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c1fb00()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c1fb10 reads.
 *
 */
struct Object02c1fb10 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02c1fb10; meaning unknown. */
};
static_assert(offsetof(Object02c1fb10, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1fb10(const Object02c1fb10 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02c1fb20 reads.
 *
 */
struct Object02c1fb20 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02c1fb20; meaning unknown. */
};
static_assert(offsetof(Object02c1fb20, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1fb20(const Object02c1fb20 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1fb70 = 0x4;

extern "C" uint32_t bb_auto_return_constant_02c1fb70()
{
    return value_02c1fb70;
}

/**
 *
 * The part of the object that auto_return_field_02c1fb90 reads.
 *
 */
struct Object02c1fb90 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02c1fb90; meaning unknown. */
};
static_assert(offsetof(Object02c1fb90, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1fb90(const Object02c1fb90 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02c1fba0 reads.
 *
 */
struct Object02c1fba0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02c1fba0; meaning unknown. */
};
static_assert(offsetof(Object02c1fba0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1fba0(const Object02c1fba0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1fbf0 = 0x5;

extern "C" uint32_t bb_auto_return_constant_02c1fbf0()
{
    return value_02c1fbf0;
}

/**
 *
 * The part of the object that auto_return_field_02c1fc10 reads.
 *
 */
struct Object02c1fc10 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02c1fc10; meaning unknown. */
};
static_assert(offsetof(Object02c1fc10, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02c1fc10(const Object02c1fc10 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c1fc30 = 0x6;

extern "C" uint32_t bb_auto_return_constant_02c1fc30()
{
    return value_02c1fc30;
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
 * The part of the object that auto_return_field_02c1fc90 reads.
 *
 */
struct Object02c1fc90 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02c1fc90; meaning unknown. */
};
static_assert(offsetof(Object02c1fc90, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c1fc90(const Object02c1fc90 *self)
{
    return self->value_0x0008;
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
