// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_01ea37e0 reads.
 *
 */
struct Object01ea37e0 {
    uint8_t unknown_0x0000[0xd8];
    uint8_t member_0x00d8; /**< Read by auto_return_member_address_01ea37e0; meaning unknown. */
};
static_assert(offsetof(Object01ea37e0, member_0x00d8) == 0xd8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ea37e0(Object01ea37e0 *self)
{
    return &self->member_0x00d8;
}

/**
 *
 * The part of the object that auto_return_member_address_01ea37f0 reads.
 *
 */
struct Object01ea37f0 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t member_0x00e0; /**< Read by auto_return_member_address_01ea37f0; meaning unknown. */
};
static_assert(offsetof(Object01ea37f0, member_0x00e0) == 0xe0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ea37f0(Object01ea37f0 *self)
{
    return &self->member_0x00e0;
}

/**
 *
 * The part of the object that auto_return_member_address_01ea3800 reads.
 *
 */
struct Object01ea3800 {
    uint8_t unknown_0x0000[0xe8];
    uint8_t member_0x00e8; /**< Read by auto_return_member_address_01ea3800; meaning unknown. */
};
static_assert(offsetof(Object01ea3800, member_0x00e8) == 0xe8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ea3800(Object01ea3800 *self)
{
    return &self->member_0x00e8;
}

/**
 *
 * The part of the object that auto_return_member_address_01ea3810 reads.
 *
 */
struct Object01ea3810 {
    uint8_t unknown_0x0000[0xf8];
    uint8_t member_0x00f8; /**< Read by auto_return_member_address_01ea3810; meaning unknown. */
};
static_assert(offsetof(Object01ea3810, member_0x00f8) == 0xf8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ea3810(Object01ea3810 *self)
{
    return &self->member_0x00f8;
}

/**
 *
 * The part of the object that auto_return_member_address_01ea3820 reads.
 *
 */
struct Object01ea3820 {
    uint8_t unknown_0x0000[0x188];
    uint8_t member_0x0188; /**< Read by auto_return_member_address_01ea3820; meaning unknown. */
};
static_assert(offsetof(Object01ea3820, member_0x0188) == 0x188);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ea3820(Object01ea3820 *self)
{
    return &self->member_0x0188;
}

/**
 *
 * The part of the object that auto_return_member_address_01ea3830 reads.
 *
 */
struct Object01ea3830 {
    uint8_t unknown_0x0000[0x248];
    uint8_t member_0x0248; /**< Read by auto_return_member_address_01ea3830; meaning unknown. */
};
static_assert(offsetof(Object01ea3830, member_0x0248) == 0x248);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ea3830(Object01ea3830 *self)
{
    return &self->member_0x0248;
}

/**
 *
 * The part of the object that auto_return_member_address_01ea3990 reads.
 *
 */
struct Object01ea3990 {
    uint8_t unknown_0x0000[0x140];
    uint8_t member_0x0140; /**< Read by auto_return_member_address_01ea3990; meaning unknown. */
};
static_assert(offsetof(Object01ea3990, member_0x0140) == 0x140);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ea3990(Object01ea3990 *self)
{
    return &self->member_0x0140;
}

/**
 *
 * The part of the object that auto_return_member_address_01ea39a0 reads.
 *
 */
struct Object01ea39a0 {
    uint8_t unknown_0x0000[0x150];
    uint8_t member_0x0150; /**< Read by auto_return_member_address_01ea39a0; meaning unknown. */
};
static_assert(offsetof(Object01ea39a0, member_0x0150) == 0x150);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01ea39a0(Object01ea39a0 *self)
{
    return &self->member_0x0150;
}

/**
 *
 * The part of the object that auto_return_field_01ea3fa0 reads.
 *
 */
struct Object01ea3fa0 {
    uint8_t unknown_0x0000[0x25c];
    uint32_t value_0x025c; /**< Read by auto_return_field_01ea3fa0; meaning unknown. */
};
static_assert(offsetof(Object01ea3fa0, value_0x025c) == 0x25c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01ea3fa0(const Object01ea3fa0 *self)
{
    return self->value_0x025c;
}

/**
 *
 * The part of the object that auto_return_field_01ea3fb0 reads.
 *
 */
struct Object01ea3fb0 {
    uint8_t unknown_0x0000[0x268];
    uint32_t value_0x0268; /**< Read by auto_return_field_01ea3fb0; meaning unknown. */
};
static_assert(offsetof(Object01ea3fb0, value_0x0268) == 0x268);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01ea3fb0(const Object01ea3fb0 *self)
{
    return self->value_0x0268;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01eaa750()
{
}

/**
 *
 * The part of the object that auto_return_field_01eac2b0 reads.
 *
 */
struct Object01eac2b0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_01eac2b0; meaning unknown. */
};
static_assert(offsetof(Object01eac2b0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01eac2b0(const Object01eac2b0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01eacfd0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ead5a0 = 0x270;

extern "C" uint32_t bb_auto_return_constant_01ead5a0()
{
    return value_01ead5a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ead8c0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01ead8c0()
{
    return value_01ead8c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01eadbe0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01eadbe0()
{
    return value_01eadbe0;
}
