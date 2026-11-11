// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_0264dde0 reads.
 *
 */
struct Object0264dde0 {
    uint8_t unknown_0x0000[0x1d8];
    uint8_t member_0x01d8; /**< Read by auto_return_member_address_0264dde0; meaning unknown. */
};
static_assert(offsetof(Object0264dde0, member_0x01d8) == 0x1d8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_0264dde0(Object0264dde0 *self)
{
    return &self->member_0x01d8;
}
