// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01fb3500()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fb3540()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fb3560 reads.
 *
 */
struct Object01fb3560 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fb3560; meaning unknown. */
};
static_assert(offsetof(Object01fb3560, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fb3560(Object01fb3560 *self)
{
    return &self->member_0x0008;
}
