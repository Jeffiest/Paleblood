// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_021372d0 reads.
 *
 */
struct Object021372d0 {
    uint8_t unknown_0x0000[0xa0];
    uint8_t member_0x00a0; /**< Read by auto_return_member_address_021372d0; meaning unknown. */
};
static_assert(offsetof(Object021372d0, member_0x00a0) == 0xa0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_021372d0(Object021372d0 *self)
{
    return &self->member_0x00a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02139b50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0213a440()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0213b2a0()
{
}
