// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00d480f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00d480f0()
{
    return value_00d480f0;
}

/**
 *
 * The part of the object that auto_return_member_address_00d49de0 reads.
 *
 */
struct Object00d49de0 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t member_0x00e0; /**< Read by auto_return_member_address_00d49de0; meaning unknown. */
};
static_assert(offsetof(Object00d49de0, member_0x00e0) == 0xe0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00d49de0(Object00d49de0 *self)
{
    return &self->member_0x00e0;
}
