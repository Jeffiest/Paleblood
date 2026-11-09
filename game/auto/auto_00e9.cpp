// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e97180()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00e971a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_00e97db0 reads.
 *
 */
struct Object00e97db0 {
    uint8_t unknown_0x0000[0xa8];
    uint8_t member_0x00a8; /**< Read by auto_return_member_address_00e97db0; meaning unknown. */
};
static_assert(offsetof(Object00e97db0, member_0x00a8) == 0xa8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00e97db0(Object00e97db0 *self)
{
    return &self->member_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_00e97e70 reads.
 *
 */
struct Object00e97e70 {
    uint8_t unknown_0x0000[0xd8];
    uint64_t value_0x00d8; /**< Read by auto_return_field_00e97e70; meaning unknown. */
};
static_assert(offsetof(Object00e97e70, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00e97e70(const Object00e97e70 *self)
{
    return self->value_0x00d8;
}
