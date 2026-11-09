// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015005c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01509720 reads.
 *
 */
struct Object01509720 {
    uint8_t unknown_0x0000[0x70];
    uint8_t member_0x0070; /**< Read by auto_return_member_address_01509720; meaning unknown. */
};
static_assert(offsetof(Object01509720, member_0x0070) == 0x70);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01509720(Object01509720 *self)
{
    return &self->member_0x0070;
}

/**
 *
 * The part of the object that auto_return_member_address_01509730 reads.
 *
 */
struct Object01509730 {
    uint8_t unknown_0x0000[0x70];
    uint8_t member_0x0070; /**< Read by auto_return_member_address_01509730; meaning unknown. */
};
static_assert(offsetof(Object01509730, member_0x0070) == 0x70);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01509730(Object01509730 *self)
{
    return &self->member_0x0070;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015097b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015097c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015097d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015097e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015097f0()
{
}
