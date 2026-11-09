// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba2e70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba2e70()
{
    return value_02ba2e70;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ba2e80 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02ba2e80()
{
    return value_02ba2e80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba2e90()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba2ea0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba2ea0()
{
    return value_02ba2ea0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba2eb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba2ec0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba2ed0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba2ed0()
{
    return value_02ba2ed0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba2ee0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba2ee0()
{
    return value_02ba2ee0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba2ef0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba2ef0()
{
    return value_02ba2ef0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba2f00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba2f00()
{
    return value_02ba2f00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba2f10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba2f10()
{
    return value_02ba2f10;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ba2f20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ba2f30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02ba2fa0 reads.
 *
 */
struct Object02ba2fa0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02ba2fa0; meaning unknown. */
};
static_assert(offsetof(Object02ba2fa0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ba2fa0(const Object02ba2fa0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba3060()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02ba48e0 reads.
 *
 */
struct Object02ba48e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02ba48e0; meaning unknown. */
};
static_assert(offsetof(Object02ba48e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02ba48e0(Object02ba48e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_02ba4990 reads.
 *
 */
struct Object02ba4990 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_02ba4990; meaning unknown. */
};
static_assert(offsetof(Object02ba4990, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02ba4990(Object02ba4990 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * The part of the object that auto_return_member_address_02ba4ce0 reads.
 *
 */
struct Object02ba4ce0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t member_0x0058; /**< Read by auto_return_member_address_02ba4ce0; meaning unknown. */
};
static_assert(offsetof(Object02ba4ce0, member_0x0058) == 0x58);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02ba4ce0(Object02ba4ce0 *self)
{
    return &self->member_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02ba52d0 reads.
 *
 */
struct Object02ba52d0 {
    uint8_t unknown_0x0000[0x6c];
    uint8_t value_0x006c; /**< Read by auto_return_field_02ba52d0; meaning unknown. */
};
static_assert(offsetof(Object02ba52d0, value_0x006c) == 0x6c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02ba52d0(const Object02ba52d0 *self)
{
    return self->value_0x006c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba52e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba52e0()
{
    return value_02ba52e0;
}

/**
 *
 * The part of the object that auto_return_field_02ba57e0 reads.
 *
 */
struct Object02ba57e0 {
    uint8_t unknown_0x0000[0x6e];
    uint8_t value_0x006e; /**< Read by auto_return_field_02ba57e0; meaning unknown. */
};
static_assert(offsetof(Object02ba57e0, value_0x006e) == 0x6e);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02ba57e0(const Object02ba57e0 *self)
{
    return self->value_0x006e;
}

/**
 *
 * The part of the object that auto_return_field_02ba5840 reads.
 *
 */
struct Object02ba5840 {
    uint8_t unknown_0x0000[0x68];
    uint32_t value_0x0068; /**< Read by auto_return_field_02ba5840; meaning unknown. */
};
static_assert(offsetof(Object02ba5840, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02ba5840(const Object02ba5840 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_02ba5850 reads.
 *
 */
struct Object02ba5850 {
    uint32_t value_0x0000; /**< Read by auto_return_field_02ba5850; meaning unknown. */
};
static_assert(offsetof(Object02ba5850, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02ba5850(const Object02ba5850 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ba66a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ba69e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ba6fc0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02ba6fc0()
{
    return value_02ba6fc0;
}

/**
 *
 * The part of the object that auto_return_field_02ba6fd0 reads.
 *
 */
struct Object02ba6fd0 {
    uint8_t unknown_0x0000[0x70];
    uint64_t value_0x0070; /**< Read by auto_return_field_02ba6fd0; meaning unknown. */
};
static_assert(offsetof(Object02ba6fd0, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ba6fd0(const Object02ba6fd0 *self)
{
    return self->value_0x0070;
}

/**
 *
 * The part of the object that auto_return_field_02ba7140 reads.
 *
 */
struct Object02ba7140 {
    uint8_t unknown_0x0000[0xf8];
    uint32_t value_0x00f8; /**< Read by auto_return_field_02ba7140; meaning unknown. */
};
static_assert(offsetof(Object02ba7140, value_0x00f8) == 0xf8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02ba7140(const Object02ba7140 *self)
{
    return self->value_0x00f8;
}

/**
 *
 * The part of the object that auto_return_field_02ba7ed0 reads.
 *
 */
struct Object02ba7ed0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02ba7ed0; meaning unknown. */
};
static_assert(offsetof(Object02ba7ed0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02ba7ed0(const Object02ba7ed0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba7ee0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba8340 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba8340()
{
    return value_02ba8340;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ba8350 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_02ba8350()
{
    return value_02ba8350;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba8360()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba8370 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba8370()
{
    return value_02ba8370;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba8380()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba8390()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba83a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba83a0()
{
    return value_02ba83a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba83b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba83b0()
{
    return value_02ba83b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba83c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba83c0()
{
    return value_02ba83c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba83d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba83d0()
{
    return value_02ba83d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba83e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba83e0()
{
    return value_02ba83e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba83f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba83f0()
{
    return value_02ba83f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba8400 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba8400()
{
    return value_02ba8400;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba8410 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba8410()
{
    return value_02ba8410;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ba8420 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ba8420()
{
    return value_02ba8420;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ba8430()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02ba8440()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba86a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba8d70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba8f20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba8f30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ba8f40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02ba8fc0 reads.
 *
 */
struct Object02ba8fc0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02ba8fc0; meaning unknown. */
};
static_assert(offsetof(Object02ba8fc0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02ba8fc0(Object02ba8fc0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ba93f0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02ba93f0()
{
    return value_02ba93f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ba95d0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02ba95d0()
{
    return value_02ba95d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02ba99f0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02ba99f0()
{
    return value_02ba99f0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02baa030()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02baa210 reads.
 *
 */
struct Object02baa210 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02baa210; meaning unknown. */
};
static_assert(offsetof(Object02baa210, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02baa210(const Object02baa210 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02baa220 reads.
 *
 */
struct Object02baa220 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02baa220; meaning unknown. */
};
static_assert(offsetof(Object02baa220, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02baa220(const Object02baa220 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02baa270()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02baa3c0 = 0x40;

extern "C" uint32_t bb_auto_return_constant_02baa3c0()
{
    return value_02baa3c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baa7d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baa920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baa930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baa940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baaa70()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02baaec0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02baaec0()
{
    return value_02baaec0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bab1b0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02bab1b0()
{
    return value_02bab1b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bab5d0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02bab5d0()
{
    return value_02bab5d0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bac400()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02bac550 reads.
 *
 */
struct Object02bac550 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02bac550; meaning unknown. */
};
static_assert(offsetof(Object02bac550, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bac550(const Object02bac550 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02bac560 reads.
 *
 */
struct Object02bac560 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02bac560; meaning unknown. */
};
static_assert(offsetof(Object02bac560, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bac560(const Object02bac560 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bac5b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bac700 = 0x38;

extern "C" uint32_t bb_auto_return_constant_02bac700()
{
    return value_02bac700;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bacb10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bacb20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bacb30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bacb40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bacb50()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02bacbc0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02bacbc0()
{
    return value_02bacbc0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bacbd0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bacd20 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02bacd20()
{
    return value_02bacd20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02bad140 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02bad140()
{
    return value_02bad140;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bad7e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02bad930 reads.
 *
 */
struct Object02bad930 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02bad930; meaning unknown. */
};
static_assert(offsetof(Object02bad930, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bad930(const Object02bad930 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02bad940 reads.
 *
 */
struct Object02bad940 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02bad940; meaning unknown. */
};
static_assert(offsetof(Object02bad940, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02bad940(const Object02bad940 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02bad990()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02badae0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02badae0()
{
    return value_02badae0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02badee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bae3f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bae400()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bae570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baea80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baea90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baec00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baf110()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baf120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baf290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baf7a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baf7b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02baf920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bafe30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bafe40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bafe50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bafe60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bafe70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bafe80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02bafe90()
{
}
