// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_02cba240 reads.
 *
 */
struct Object02cba240 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_02cba240; meaning unknown. */
};
static_assert(offsetof(Object02cba240, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02cba240(Object02cba240 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02cba7e0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02cba7e0()
{
    return value_02cba7e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02cbad30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02cbd3c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02cbd3c0()
{
    return value_02cbd3c0;
}
