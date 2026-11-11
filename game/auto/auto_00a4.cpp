// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_00a42310 reads.
 *
 */
struct Object00a42310 {
    uint8_t unknown_0x0000[0xf0];
    uint8_t member_0x00f0; /**< Read by auto_return_member_address_00a42310; meaning unknown. */
};
static_assert(offsetof(Object00a42310, member_0x00f0) == 0xf0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00a42310(Object00a42310 *self)
{
    return &self->member_0x00f0;
}
