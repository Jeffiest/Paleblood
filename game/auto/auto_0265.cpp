// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02655490()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02655760 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02655760()
{
    return value_02655760;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02656720()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_02658c40 reads.
 *
 */
struct Object02658c40 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t member_0x00e0; /**< Read by auto_return_member_address_02658c40; meaning unknown. */
};
static_assert(offsetof(Object02658c40, member_0x00e0) == 0xe0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02658c40(Object02658c40 *self)
{
    return &self->member_0x00e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0265fd10()
{
}

/**
 *
 * The part of the object that auto_return_field_0265fd30 reads.
 *
 */
struct Object0265fd30 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_0265fd30; meaning unknown. */
};
static_assert(offsetof(Object0265fd30, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0265fd30(const Object0265fd30 *self)
{
    return self->value_0x0010;
}
