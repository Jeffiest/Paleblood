// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_004e8550 reads.
 *
 */
struct Object004e8550 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_004e8550; meaning unknown. */
};
static_assert(offsetof(Object004e8550, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_004e8550(Object004e8550 *self)
{
    return &self->member_0x00d0;
}
