// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d915d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d916a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d91ce0 = 0x240;

extern "C" uint32_t bb_auto_return_constant_01d91ce0()
{
    return value_01d91ce0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d92000 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d92000()
{
    return value_01d92000;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d92320 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d92320()
{
    return value_01d92320;
}

/**
 *
 * The part of the object that auto_return_member_address_01d93d30 reads.
 *
 */
struct Object01d93d30 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d93d30; meaning unknown. */
};
static_assert(offsetof(Object01d93d30, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d93d30(Object01d93d30 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d93d40 reads.
 *
 */
struct Object01d93d40 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d93d40; meaning unknown. */
};
static_assert(offsetof(Object01d93d40, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d93d40(Object01d93d40 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d96590()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d96660()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d96ca0 = 0x250;

extern "C" uint32_t bb_auto_return_constant_01d96ca0()
{
    return value_01d96ca0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d96fc0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d96fc0()
{
    return value_01d96fc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d972e0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d972e0()
{
    return value_01d972e0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d98720 reads.
 *
 */
struct Object01d98720 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d98720; meaning unknown. */
};
static_assert(offsetof(Object01d98720, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d98720(Object01d98720 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_01d98730 reads.
 *
 */
struct Object01d98730 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_01d98730; meaning unknown. */
};
static_assert(offsetof(Object01d98730, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01d98730(Object01d98730 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9ae40 = 0x230;

extern "C" uint32_t bb_auto_return_constant_01d9ae40()
{
    return value_01d9ae40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9b160 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d9b160()
{
    return value_01d9b160;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9b480 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d9b480()
{
    return value_01d9b480;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9d460 = 0xf0;

extern "C" uint32_t bb_auto_return_constant_01d9d460()
{
    return value_01d9d460;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9d780 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d9d780()
{
    return value_01d9d780;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d9daa0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01d9daa0()
{
    return value_01d9daa0;
}
