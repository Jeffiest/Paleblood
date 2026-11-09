// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d00000()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d00020()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d00030()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d00040()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d00050()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d00060()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d00070()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d00080()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d00090()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d000a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d000b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d000c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d000d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d00e60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d019e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d02660()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d043e0()
{
}

/**
 *
 * The part of the object that auto_return_field_02d05200 reads.
 *
 */
struct Object02d05200 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d05200; meaning unknown. */
};
static_assert(offsetof(Object02d05200, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d05200(const Object02d05200 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_02d05210 reads.
 *
 */
struct Object02d05210 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_02d05210; meaning unknown. */
};
static_assert(offsetof(Object02d05210, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d05210(const Object02d05210 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_02d05220 reads.
 *
 */
struct Object02d05220 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d05220; meaning unknown. */
};
static_assert(offsetof(Object02d05220, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d05220(const Object02d05220 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d05230 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02d05230()
{
    return value_02d05230;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d05380 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02d05380()
{
    return value_02d05380;
}

/**
 *
 * The part of the object that auto_return_field_02d05390 reads.
 *
 */
struct Object02d05390 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_02d05390; meaning unknown. */
};
static_assert(offsetof(Object02d05390, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02d05390(const Object02d05390 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02d053d0 reads.
 *
 */
struct Object02d053d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02d053d0; meaning unknown. */
};
static_assert(offsetof(Object02d053d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d053d0(const Object02d053d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * The part of the object that auto_return_field_02d053e0 reads.
 *
 */
struct Object02d053e0 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_02d053e0; meaning unknown. */
};
static_assert(offsetof(Object02d053e0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d053e0(const Object02d053e0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_02d053f0 reads.
 *
 */
struct Object02d053f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02d053f0; meaning unknown. */
};
static_assert(offsetof(Object02d053f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d053f0(const Object02d053f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d05400 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02d05400()
{
    return value_02d05400;
}

/**
 *
 * The part of the object that auto_return_field_02d055a0 reads.
 *
 */
struct Object02d055a0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_02d055a0; meaning unknown. */
};
static_assert(offsetof(Object02d055a0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02d055a0(const Object02d055a0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d058d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d058e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05b00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05b10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05b20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05b30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d05b40 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02d05b40()
{
    return value_02d05b40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d05b50 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02d05b50()
{
    return value_02d05b50;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05b60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05b70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05b80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05b90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05ba0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05bb0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05bc0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05bd0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05be0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05bf0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05c00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05c10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05c20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05c30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05c40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05c50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05c60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05c70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05c80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05c90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05ca0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05cb0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05cc0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05d30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05d40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05d50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05d60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05d70()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05d80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05d90()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05da0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05db0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02d05dc0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d05dd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d05de0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d05df0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02d05e00 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02d05e00()
{
    return value_02d05e00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06780()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d067b0 reads.
 *
 */
struct Object02d067b0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d067b0; meaning unknown. */
};
static_assert(offsetof(Object02d067b0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d067b0(Object02d067b0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d067c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d067f0 reads.
 *
 */
struct Object02d067f0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d067f0; meaning unknown. */
};
static_assert(offsetof(Object02d067f0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d067f0(Object02d067f0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06800()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d06830 reads.
 *
 */
struct Object02d06830 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d06830; meaning unknown. */
};
static_assert(offsetof(Object02d06830, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d06830(Object02d06830 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06840()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d06870 reads.
 *
 */
struct Object02d06870 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d06870; meaning unknown. */
};
static_assert(offsetof(Object02d06870, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d06870(Object02d06870 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06880()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d068b0 reads.
 *
 */
struct Object02d068b0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d068b0; meaning unknown. */
};
static_assert(offsetof(Object02d068b0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d068b0(Object02d068b0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d068c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d068f0 reads.
 *
 */
struct Object02d068f0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d068f0; meaning unknown. */
};
static_assert(offsetof(Object02d068f0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d068f0(Object02d068f0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06900()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d06930 reads.
 *
 */
struct Object02d06930 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d06930; meaning unknown. */
};
static_assert(offsetof(Object02d06930, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d06930(Object02d06930 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06940()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06960()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d06990 reads.
 *
 */
struct Object02d06990 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d06990; meaning unknown. */
};
static_assert(offsetof(Object02d06990, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d06990(Object02d06990 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d069a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d069c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d069f0 reads.
 *
 */
struct Object02d069f0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d069f0; meaning unknown. */
};
static_assert(offsetof(Object02d069f0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d069f0(Object02d069f0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06a00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06a20()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d06a50 reads.
 *
 */
struct Object02d06a50 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d06a50; meaning unknown. */
};
static_assert(offsetof(Object02d06a50, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d06a50(Object02d06a50 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06a60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06a80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d06ab0 reads.
 *
 */
struct Object02d06ab0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d06ab0; meaning unknown. */
};
static_assert(offsetof(Object02d06ab0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d06ab0(Object02d06ab0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06ac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06ae0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d06b10 reads.
 *
 */
struct Object02d06b10 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d06b10; meaning unknown. */
};
static_assert(offsetof(Object02d06b10, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d06b10(Object02d06b10 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06b20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06b40()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d06b70 reads.
 *
 */
struct Object02d06b70 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d06b70; meaning unknown. */
};
static_assert(offsetof(Object02d06b70, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d06b70(Object02d06b70 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06b80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06ba0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d06bd0 reads.
 *
 */
struct Object02d06bd0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d06bd0; meaning unknown. */
};
static_assert(offsetof(Object02d06bd0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d06bd0(Object02d06bd0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06be0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06c00()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d06c30 reads.
 *
 */
struct Object02d06c30 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d06c30; meaning unknown. */
};
static_assert(offsetof(Object02d06c30, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d06c30(Object02d06c30 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06c40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06c60()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d06c90 reads.
 *
 */
struct Object02d06c90 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02d06c90; meaning unknown. */
};
static_assert(offsetof(Object02d06c90, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d06c90(Object02d06c90 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d06ca0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02d095b0 reads.
 *
 */
struct Object02d095b0 {
    uint8_t unknown_0x0000[0x78];
    uint8_t member_0x0078; /**< Read by auto_return_member_address_02d095b0; meaning unknown. */
};
static_assert(offsetof(Object02d095b0, member_0x0078) == 0x78);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02d095b0(Object02d095b0 *self)
{
    return &self->member_0x0078;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d09fd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02d0aae0()
{
}

/**
 *
 * The part of the object that auto_return_field_02d0aaf0 reads.
 *
 */
struct Object02d0aaf0 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02d0aaf0; meaning unknown. */
};
static_assert(offsetof(Object02d0aaf0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d0aaf0(const Object02d0aaf0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02d0b7b0 reads.
 *
 */
struct Object02d0b7b0 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02d0b7b0; meaning unknown. */
};
static_assert(offsetof(Object02d0b7b0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d0b7b0(const Object02d0b7b0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02d0c0e0 reads.
 *
 */
struct Object02d0c0e0 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02d0c0e0; meaning unknown. */
};
static_assert(offsetof(Object02d0c0e0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d0c0e0(const Object02d0c0e0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02d0d1c0 reads.
 *
 */
struct Object02d0d1c0 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02d0d1c0; meaning unknown. */
};
static_assert(offsetof(Object02d0d1c0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d0d1c0(const Object02d0d1c0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02d0df80 reads.
 *
 */
struct Object02d0df80 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02d0df80; meaning unknown. */
};
static_assert(offsetof(Object02d0df80, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d0df80(const Object02d0df80 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02d0ea60 reads.
 *
 */
struct Object02d0ea60 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02d0ea60; meaning unknown. */
};
static_assert(offsetof(Object02d0ea60, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02d0ea60(const Object02d0ea60 *self)
{
    return self->value_0x0020;
}
