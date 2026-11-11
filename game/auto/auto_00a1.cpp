// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_00a14f60 reads.
 *
 */
struct Object00a14f60 {
    uint8_t unknown_0x0000[0x170];
    uint8_t member_0x0170; /**< Read by auto_return_member_address_00a14f60; meaning unknown. */
};
static_assert(offsetof(Object00a14f60, member_0x0170) == 0x170);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00a14f60(Object00a14f60 *self)
{
    return &self->member_0x0170;
}
