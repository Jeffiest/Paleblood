// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004a43c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_004a7990 reads.
 *
 */
struct Object004a7990 {
    uint8_t unknown_0x0000[0x2a0];
    uint8_t member_0x02a0; /**< Read by auto_return_member_address_004a7990; meaning unknown. */
};
static_assert(offsetof(Object004a7990, member_0x02a0) == 0x2a0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_004a7990(Object004a7990 *self)
{
    return &self->member_0x02a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004ad350()
{
}
