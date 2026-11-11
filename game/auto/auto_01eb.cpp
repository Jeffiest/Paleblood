// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_01eb5360 reads.
 *
 */
struct Object01eb5360 {
    uint8_t unknown_0x0000[0x108];
    uint8_t member_0x0108; /**< Read by auto_return_member_address_01eb5360; meaning unknown. */
};
static_assert(offsetof(Object01eb5360, member_0x0108) == 0x108);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01eb5360(Object01eb5360 *self)
{
    return &self->member_0x0108;
}
