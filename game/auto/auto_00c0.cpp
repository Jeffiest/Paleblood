// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00c02210 reads.
 *
 */
struct Object00c02210 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_00c02210; meaning unknown. */
};
static_assert(offsetof(Object00c02210, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00c02210(const Object00c02210 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_00c02230 reads.
 *
 */
struct Object00c02230 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_00c02230; meaning unknown. */
};
static_assert(offsetof(Object00c02230, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00c02230(const Object00c02230 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_00c02240 reads.
 *
 */
struct Object00c02240 {
    uint8_t unknown_0x0000[0x21];
    uint8_t value_0x0021; /**< Read by auto_return_field_00c02240; meaning unknown. */
};
static_assert(offsetof(Object00c02240, value_0x0021) == 0x21);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00c02240(const Object00c02240 *self)
{
    return self->value_0x0021;
}

/**
 *
 * The part of the object that auto_return_field_00c02250 reads.
 *
 */
struct Object00c02250 {
    uint8_t unknown_0x0000[0x21];
    uint8_t value_0x0021; /**< Read by auto_return_field_00c02250; meaning unknown. */
};
static_assert(offsetof(Object00c02250, value_0x0021) == 0x21);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00c02250(const Object00c02250 *self)
{
    return self->value_0x0021;
}

/**
 *
 * The part of the object that auto_return_field_00c02260 reads.
 *
 */
struct Object00c02260 {
    uint8_t unknown_0x0000[0x22];
    uint8_t value_0x0022; /**< Read by auto_return_field_00c02260; meaning unknown. */
};
static_assert(offsetof(Object00c02260, value_0x0022) == 0x22);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00c02260(const Object00c02260 *self)
{
    return self->value_0x0022;
}

/**
 *
 * The part of the object that auto_return_field_00c02df0 reads.
 *
 */
struct Object00c02df0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_00c02df0; meaning unknown. */
};
static_assert(offsetof(Object00c02df0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00c02df0(const Object00c02df0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00c02e50 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00c02e50()
{
    return value_00c02e50;
}

/**
 *
 * The part of the object that auto_return_member_address_00c02e60 reads.
 *
 */
struct Object00c02e60 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_00c02e60; meaning unknown. */
};
static_assert(offsetof(Object00c02e60, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00c02e60(Object00c02e60 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00c04dc0 = 0xa;

extern "C" uint32_t bb_auto_return_constant_00c04dc0()
{
    return value_00c04dc0;
}

/**
 *
 * The part of the object that auto_return_field_00c07e10 reads.
 *
 */
struct Object00c07e10 {
    uint8_t unknown_0x0000[0x78];
    uint32_t value_0x0078; /**< Read by auto_return_field_00c07e10; meaning unknown. */
};
static_assert(offsetof(Object00c07e10, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00c07e10(const Object00c07e10 *self)
{
    return self->value_0x0078;
}

/**
 *
 * The part of the object that auto_return_field_00c08010 reads.
 *
 */
struct Object00c08010 {
    uint8_t unknown_0x0000[0x88];
    uint32_t value_0x0088; /**< Read by auto_return_field_00c08010; meaning unknown. */
};
static_assert(offsetof(Object00c08010, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00c08010(const Object00c08010 *self)
{
    return self->value_0x0088;
}

/**
 *
 * The part of the object that auto_return_field_00c080a0 reads.
 *
 */
struct Object00c080a0 {
    uint8_t unknown_0x0000[0x98];
    uint32_t value_0x0098; /**< Read by auto_return_field_00c080a0; meaning unknown. */
};
static_assert(offsetof(Object00c080a0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00c080a0(const Object00c080a0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00c08590 = 0x5;

extern "C" uint32_t bb_auto_return_constant_00c08590()
{
    return value_00c08590;
}

/**
 *
 * The part of the object that auto_return_field_00c097f0 reads.
 *
 */
struct Object00c097f0 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_00c097f0; meaning unknown. */
};
static_assert(offsetof(Object00c097f0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00c097f0(const Object00c097f0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00c09c80 = 0x6;

extern "C" uint32_t bb_auto_return_constant_00c09c80()
{
    return value_00c09c80;
}

/**
 *
 * The part of the object that auto_return_field_00c0b920 reads.
 *
 */
struct Object00c0b920 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_00c0b920; meaning unknown. */
};
static_assert(offsetof(Object00c0b920, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00c0b920(const Object00c0b920 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_00c0b930 reads.
 *
 */
struct Object00c0b930 {
    uint64_t value_0x0000; /**< Read by auto_return_field_00c0b930; meaning unknown. */
};
static_assert(offsetof(Object00c0b930, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00c0b930(const Object00c0b930 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_00c0d570 reads.
 *
 */
struct Object00c0d570 {
    uint8_t unknown_0x0000[0x80];
    uint8_t value_0x0080; /**< Read by auto_return_field_00c0d570; meaning unknown. */
};
static_assert(offsetof(Object00c0d570, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00c0d570(const Object00c0d570 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_field_00c0e6b0 reads.
 *
 */
struct Object00c0e6b0 {
    uint8_t unknown_0x0000[0x98];
    uint32_t value_0x0098; /**< Read by auto_return_field_00c0e6b0; meaning unknown. */
};
static_assert(offsetof(Object00c0e6b0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00c0e6b0(const Object00c0e6b0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c0e9c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c0e9d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c0e9e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c0e9f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c0ea00()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c0ea10()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c0ea20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c0ea30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c0ea40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c0ea50()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c0ea60()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00c0ea70()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00c0ea80()
{
}
