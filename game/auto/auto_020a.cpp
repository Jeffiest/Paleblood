// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020a1510()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020a3530 reads.
 *
 */
struct Object020a3530 {
    uint8_t unknown_0x0000[0x90];
    uint8_t member_0x0090; /**< Read by auto_return_member_address_020a3530; meaning unknown. */
};
static_assert(offsetof(Object020a3530, member_0x0090) == 0x90);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020a3530(Object020a3530 *self)
{
    return &self->member_0x0090;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020a46a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_020a4a00 reads.
 *
 */
struct Object020a4a00 {
    uint8_t unknown_0x0000[0x120];
    uint8_t member_0x0120; /**< Read by auto_return_member_address_020a4a00; meaning unknown. */
};
static_assert(offsetof(Object020a4a00, member_0x0120) == 0x120);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020a4a00(Object020a4a00 *self)
{
    return &self->member_0x0120;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020a9280 = 0x148;

extern "C" uint32_t bb_auto_return_constant_020a9280()
{
    return value_020a9280;
}
