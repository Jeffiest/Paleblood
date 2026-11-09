// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a306c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_00a3cb10 reads.
 *
 */
struct Object00a3cb10 {
    uint8_t unknown_0x0000[0x40];
    uint8_t member_0x0040; /**< Read by auto_return_member_address_00a3cb10; meaning unknown. */
};
static_assert(offsetof(Object00a3cb10, member_0x0040) == 0x40);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00a3cb10(Object00a3cb10 *self)
{
    return &self->member_0x0040;
}

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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a3cb30 = 0xa;

extern "C" uint32_t bb_auto_return_constant_00a3cb30()
{
    return value_00a3cb30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a3d370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a3d3e0()
{
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
