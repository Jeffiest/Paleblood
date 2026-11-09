// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_00653000 reads.
 *
 */
struct Object00653000 {
    uint8_t unknown_0x0000[0x40];
    uint8_t member_0x0040; /**< Read by auto_return_member_address_00653000; meaning unknown. */
};
static_assert(offsetof(Object00653000, member_0x0040) == 0x40);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00653000(Object00653000 *self)
{
    return &self->member_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0065d5c0()
{
}
