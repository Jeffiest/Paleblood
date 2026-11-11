// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_0043cc30 reads.
 *
 */
struct Object0043cc30 {
    uint8_t unknown_0x0000[0xa0];
    uint8_t member_0x00a0; /**< Read by auto_return_member_address_0043cc30; meaning unknown. */
};
static_assert(offsetof(Object0043cc30, member_0x00a0) == 0xa0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0043cc30(Object0043cc30 *self)
{
    return &self->member_0x00a0;
}
