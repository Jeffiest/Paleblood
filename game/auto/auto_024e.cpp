// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_024e1f00 reads.
 *
 */
struct Object024e1f00 {
    uint8_t unknown_0x0000[0x108];
    uint8_t member_0x0108; /**< Read by auto_return_member_address_024e1f00; meaning unknown. */
};
static_assert(offsetof(Object024e1f00, member_0x0108) == 0x108);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_024e1f00(Object024e1f00 *self)
{
    return &self->member_0x0108;
}

/**
 *
 * The part of the object that auto_return_member_address_024e22d0 reads.
 *
 */
struct Object024e22d0 {
    uint8_t unknown_0x0000[0xb8];
    uint8_t member_0x00b8; /**< Read by auto_return_member_address_024e22d0; meaning unknown. */
};
static_assert(offsetof(Object024e22d0, member_0x00b8) == 0xb8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_024e22d0(Object024e22d0 *self)
{
    return &self->member_0x00b8;
}

/**
 *
 * The part of the object that auto_return_field_024e2300 reads.
 *
 */
struct Object024e2300 {
    uint8_t unknown_0x0000[0x1e8];
    uint64_t value_0x01e8; /**< Read by auto_return_field_024e2300; meaning unknown. */
};
static_assert(offsetof(Object024e2300, value_0x01e8) == 0x1e8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024e2300(const Object024e2300 *self)
{
    return self->value_0x01e8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_024e2380 = 0x1;

extern "C" uint8_t bb_auto_return_constant_024e2380()
{
    return value_024e2380;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_024e2390 = 0x1;

extern "C" uint8_t bb_auto_return_constant_024e2390()
{
    return value_024e2390;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_024e23c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_024e23c0()
{
    return value_024e23c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024e2450 = 0x1;

extern "C" uint32_t bb_auto_return_constant_024e2450()
{
    return value_024e2450;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_024e84b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_024e84b0()
{
    return value_024e84b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_024e8820 = 0x1;

extern "C" uint8_t bb_auto_return_constant_024e8820()
{
    return value_024e8820;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024e9bc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024ed090()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_024ed250 = 0x1;

extern "C" uint8_t bb_auto_return_constant_024ed250()
{
    return value_024ed250;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024ee750 = 0x3e8;

extern "C" uint32_t bb_auto_return_constant_024ee750()
{
    return value_024ee750;
}
