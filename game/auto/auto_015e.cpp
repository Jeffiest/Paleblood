// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint64_t value_015e5d80 = 0x400002000;

extern "C" uint64_t bb_auto_return_constant_015e5d80()
{
    return value_015e5d80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015e5de0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015e61e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015e6e80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015eb2f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015ec0f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_015ec100()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_015eee20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_015efa00 reads.
 *
 */
struct Object015efa00 {
    uint8_t unknown_0x0000[0x120];
    uint8_t member_0x0120; /**< Read by auto_return_member_address_015efa00; meaning unknown. */
};
static_assert(offsetof(Object015efa00, member_0x0120) == 0x120);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_015efa00(Object015efa00 *self)
{
    return &self->member_0x0120;
}
