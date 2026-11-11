// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_02a50d60 reads.
 *
 */
struct Object02a50d60 {
    uint8_t unknown_0x0000[0x50];
    uint8_t member_0x0050; /**< Read by auto_return_member_address_02a50d60; meaning unknown. */
};
static_assert(offsetof(Object02a50d60, member_0x0050) == 0x50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02a50d60(Object02a50d60 *self)
{
    return &self->member_0x0050;
}
