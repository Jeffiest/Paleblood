// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b12070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b12d60()
{
}

/**
 *
 * The part of the object that auto_return_field_02b12e60 reads.
 *
 */
struct Object02b12e60 {
    uint8_t value_0x0000; /**< Read by auto_return_field_02b12e60; meaning unknown. */
};
static_assert(offsetof(Object02b12e60, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02b12e60(const Object02b12e60 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b13610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b138e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b13c20()
{
}

/**
 *
 * The part of the object that auto_return_field_02b13f30 reads.
 *
 */
struct Object02b13f30 {
    uint8_t unknown_0x0000[0x38];
    uint32_t value_0x0038; /**< Read by auto_return_field_02b13f30; meaning unknown. */
};
static_assert(offsetof(Object02b13f30, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b13f30(const Object02b13f30 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_02b13f40 reads.
 *
 */
struct Object02b13f40 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_02b13f40; meaning unknown. */
};
static_assert(offsetof(Object02b13f40, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b13f40(const Object02b13f40 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_02b13f50 reads.
 *
 */
struct Object02b13f50 {
    uint8_t unknown_0x0000[0x34];
    uint32_t value_0x0034; /**< Read by auto_return_field_02b13f50; meaning unknown. */
};
static_assert(offsetof(Object02b13f50, value_0x0034) == 0x34);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b13f50(const Object02b13f50 *self)
{
    return self->value_0x0034;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b14280()
{
}

/**
 *
 * The part of the object that auto_return_field_02b14290 reads.
 *
 */
struct Object02b14290 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_02b14290; meaning unknown. */
};
static_assert(offsetof(Object02b14290, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b14290(const Object02b14290 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_02b142e0 reads.
 *
 */
struct Object02b142e0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02b142e0; meaning unknown. */
};
static_assert(offsetof(Object02b142e0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b142e0(const Object02b142e0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02b142f0 reads.
 *
 */
struct Object02b142f0 {
    uint8_t unknown_0x0000[0x1c];
    uint32_t value_0x001c; /**< Read by auto_return_field_02b142f0; meaning unknown. */
};
static_assert(offsetof(Object02b142f0, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b142f0(const Object02b142f0 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_field_02b14300 reads.
 *
 */
struct Object02b14300 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02b14300; meaning unknown. */
};
static_assert(offsetof(Object02b14300, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02b14300(const Object02b14300 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_02b14310 reads.
 *
 */
struct Object02b14310 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_02b14310; meaning unknown. */
};
static_assert(offsetof(Object02b14310, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b14310(const Object02b14310 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_02b14320 reads.
 *
 */
struct Object02b14320 {
    uint8_t unknown_0x0000[0x2c];
    uint32_t value_0x002c; /**< Read by auto_return_field_02b14320; meaning unknown. */
};
static_assert(offsetof(Object02b14320, value_0x002c) == 0x2c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b14320(const Object02b14320 *self)
{
    return self->value_0x002c;
}

/**
 *
 * The part of the object that auto_return_field_02b144e0 reads.
 *
 */
struct Object02b144e0 {
    uint8_t unknown_0x0000[0x38];
    uint32_t value_0x0038; /**< Read by auto_return_field_02b144e0; meaning unknown. */
};
static_assert(offsetof(Object02b144e0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b144e0(const Object02b144e0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_02b144f0 reads.
 *
 */
struct Object02b144f0 {
    uint8_t unknown_0x0000[0x3c];
    uint32_t value_0x003c; /**< Read by auto_return_field_02b144f0; meaning unknown. */
};
static_assert(offsetof(Object02b144f0, value_0x003c) == 0x3c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b144f0(const Object02b144f0 *self)
{
    return self->value_0x003c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b14930 = 0x170;

extern "C" uint32_t bb_auto_return_constant_02b14930()
{
    return value_02b14930;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b14ff0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02b16900 reads.
 *
 */
struct Object02b16900 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_02b16900; meaning unknown. */
};
static_assert(offsetof(Object02b16900, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02b16900(Object02b16900 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * The part of the object that auto_return_member_address_02b16910 reads.
 *
 */
struct Object02b16910 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_02b16910; meaning unknown. */
};
static_assert(offsetof(Object02b16910, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02b16910(Object02b16910 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b18fb0 = 0x2400;

extern "C" uint32_t bb_auto_return_constant_02b18fb0()
{
    return value_02b18fb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b19570 = 0x2400;

extern "C" uint32_t bb_auto_return_constant_02b19570()
{
    return value_02b19570;
}

/**
 *
 * The part of the object that auto_return_member_address_02b1a4a0 reads.
 *
 */
struct Object02b1a4a0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_02b1a4a0; meaning unknown. */
};
static_assert(offsetof(Object02b1a4a0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02b1a4a0(Object02b1a4a0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * The part of the object that auto_return_member_address_02b1a4b0 reads.
 *
 */
struct Object02b1a4b0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t member_0x0028; /**< Read by auto_return_member_address_02b1a4b0; meaning unknown. */
};
static_assert(offsetof(Object02b1a4b0, member_0x0028) == 0x28);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02b1a4b0(Object02b1a4b0 *self)
{
    return &self->member_0x0028;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02b1aa40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b1aa50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02b1c300()
{
}

/**
 *
 * The part of the object that auto_return_field_02b1c7a0 reads.
 *
 */
struct Object02b1c7a0 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_02b1c7a0; meaning unknown. */
};
static_assert(offsetof(Object02b1c7a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b1c7a0(const Object02b1c7a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_member_address_02b1d7a0 reads.
 *
 */
struct Object02b1d7a0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_02b1d7a0; meaning unknown. */
};
static_assert(offsetof(Object02b1d7a0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02b1d7a0(Object02b1d7a0 *self)
{
    return &self->member_0x00d0;
}
