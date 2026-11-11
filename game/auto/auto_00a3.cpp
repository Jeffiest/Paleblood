// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00a3cb20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00a3cb20()
{
    return value_00a3cb20;
}

/**
 *
 * The part of the object that auto_return_member_address_00a3f8d0 reads.
 *
 */
struct Object00a3f8d0 {
    uint8_t unknown_0x0000[0xf8];
    uint8_t member_0x00f8; /**< Read by auto_return_member_address_00a3f8d0; meaning unknown. */
};
static_assert(offsetof(Object00a3f8d0, member_0x00f8) == 0xf8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00a3f8d0(Object00a3f8d0 *self)
{
    return &self->member_0x00f8;
}

/**
 *
 * The part of the object that auto_return_member_address_00a3f8e0 reads.
 *
 */
struct Object00a3f8e0 {
    uint8_t unknown_0x0000[0xf8];
    uint8_t member_0x00f8; /**< Read by auto_return_member_address_00a3f8e0; meaning unknown. */
};
static_assert(offsetof(Object00a3f8e0, member_0x00f8) == 0xf8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00a3f8e0(Object00a3f8e0 *self)
{
    return &self->member_0x00f8;
}

/**
 *
 * The part of the object that auto_return_member_address_00a3f8f0 reads.
 *
 */
struct Object00a3f8f0 {
    uint8_t unknown_0x0000[0x108];
    uint8_t member_0x0108; /**< Read by auto_return_member_address_00a3f8f0; meaning unknown. */
};
static_assert(offsetof(Object00a3f8f0, member_0x0108) == 0x108);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00a3f8f0(Object00a3f8f0 *self)
{
    return &self->member_0x0108;
}
